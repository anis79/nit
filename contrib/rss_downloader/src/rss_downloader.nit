# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Downloads files from RSS feeds
module rss_downloader

import curl

redef class Sys
	# Lazy man's verbose option
	var verbose: Bool = args.has("-v") or args.has("--verbose") is lazy
end

# Program configuration
class Config

	# Folders used to infer regex (may be empty)
	var regex_source_folders: Array[Path]

	# Custom patterns (may be empty)
	var custom_patterns: Array[Pattern]

	# Download destination
	var download_destination_folder: Path

	# RSS feeds (needs at least one)
	var rss_source_urls: Array[Text]

	# Path to the log file
	var log_path: Path

	# Unique path of files names to prevent double download (may be empty)
	var unique_pattern: Array[Pattern]

	# Exception where we ignore uniqueness and can be downloaded again (may be empty)
	var unique_exceptions: Array[Pattern]
end

# An element from an RSS feed
class Element
	# Tile
	var title: String

	# Link to the file to download
	var link: String

	redef fun to_s do return "{title} @ {link}"

	# Download this element to `path`
	fun download_to(path: Text)
	do
		var request = new CurlHTTPRequest(link)
		var response = request.download_to_file(path.to_s)

		if response isa CurlResponseFailed then
			sys.stderr.write "Failed downloading URL '{link}' with: {response.error_msg} ({response.error_code})\n"
		end
	end

	# Get an unique identifier for this element, uses `Config::unique_pattern`
	fun unique_id(config: Config): String
	do
		for re in config.unique_pattern do
			var match = title.search(re)
			if match != null then
				return title.substring(0, match.after).to_lower
			end
		end

		return title
	end

	# Is this element except from uniqueness?
	fun is_unique_exception(config: Config): Bool
	do
		for re in config.unique_exceptions do
			if title.has(re) then
				return true
			end
		end
		return false
	end
end

# Main program structure
class Downloader
	# Configuration
	var config: Config

	# Local history (read from, them written to file)
	var history = new HashSet[Text]

	# Execute tool
	fun run
	do
		# Read old log from file
		if config.log_path.exists then
			var stream = config.log_path.open_ro
			history.add_all stream.read_all.split("\n")
			stream.close
		end

		# Get the pattern to search for
		var patterns = self.patterns

		# Get all the elements from the RSS feeds
		var elements = new HashSet[Element]
		for rss_url in config.rss_source_urls do
			var rss = rss_url.fetch_rss_content
			elements.add_all rss.to_rss_elements
		end

		# Select the elements matching our pattern
		var matches = new HashSet[Element]
		for pattern in patterns do for element in elements do
			if element.title.has(pattern) then
				matches.add element
			end
		end

		if sys.verbose then
			print "\n# {matches.length} matching elements:"
			print matches.join("\n")
			print "\n# Downloading..."
		end

		for element in matches do
			var local_path = config.download_destination_folder.to_s / element.title
			var unique_id = element.unique_id(config)

			if local_path.to_path.exists then
				# Do not redownload a file (we assume that the file name is unique by itself)
				if sys.verbose then print "File exists, skipping {element}"
				continue
			else if history.has(unique_id) then
				# Do not download a file that is not unique according to `unique_id`
				if not element.is_unique_exception(config) then
					# We make some exceptions
					if sys.verbose then print "File in log, skipping {element}"
					continue
				end
			end

			# Download element
			if sys.verbose then print "Fetching {element} as {local_path}"
			element.download_to(local_path)

			# Add `unique_id` to log
			history.add unique_id
		end

		# Save new log to file
		var stream = config.log_path.open_wo
		for line in history do
			stream.write line
			stream.write "\n"
		end
		stream.close
	end

	# Gather all patterns from `Config::custom_patterns` and `Config::source_folder_path`
	fun patterns: Array[Pattern]
	do
		var patterns = new Array[Pattern]

		# Begin with custom pattern
		for pattern_source in config.custom_patterns do
			patterns.add pattern_source
		end

		# Get regex source from folder names
		var folder_names = new HashSet[Text]
		for source_folder_path in config.regex_source_folders do
			var source_folder = source_folder_path

			if not source_folder.exists then
				sys.stderr.write "Regex source folder '{source_folder_path}' does not exists.\n"
				continue
			end

			for dir in source_folder.files do if dir.stat.is_dir then
				folder_names.add dir.to_s
			end
		end

		# Compile our infered patterns
		for folder_name in folder_names do
			# Transform from "Some folder name" to "^Some.folder.name"
			var regex_source = folder_name.
				replace(' ', ".").replace('[', "\\[").replace('(', "\\(").
				replace('+', "\\+").replace('*', "\\*")
			regex_source = "^" + regex_source

			var regex = regex_source.to_re
			regex.ignore_case = true

			patterns.add regex
		end

		if patterns.is_empty then
			sys.stderr.write "Do not have any pattern to work with.\n"
			exit 1
		end

		if sys.verbose then
			print "# Generated {patterns.length} patterns"
			print patterns.join("\n")
		end

		return patterns
	end
end

redef class Text
	# Get the content of the RSS feed at `self`
	fun fetch_rss_content: Text
	do
		if sys.verbose then print "\n# Downloading RSS file from '{self}'"

		var request = new CurlHTTPRequest(to_s)
		var response = request.execute

		if response isa CurlResponseSuccess then
			var body = response.body_str
			if sys.verbose then print "Download successful"
			return body
		else if response isa CurlResponseFailed then
			sys.stderr.write "Failed downloading URL '{self}' with: {response.error_msg} ({response.error_code})\n"
			exit 1
		end

		abort
	end

	# Get this RSS feed content as an `Array[Element]`
	fun to_rss_elements: Array[Element]
	do
		var title_re = "<title><![^/]*</title>".to_re
		var link_re = "<link>[^<]*download[^<]*</link>".to_re

		var title_prefix_len = "<title><![CDATA[".length
		var title_suffix_len = "]]</title>".length+1

		var titles = search_all(title_re)
		var links = search_all(link_re)

		if sys.verbose then print "\n# Found {titles.length} titles and {links.length} links"
		assert titles.length == links.length

		var elements = new Array[Element]
		for i in titles.length.times do
			var title = titles[i].to_s.substring(title_prefix_len, titles[i].length - title_prefix_len - title_suffix_len)
			var link = links[i].to_s.substring(6, links[i].length - 6 - 7)
			elements.add new Element(title, link)
		end

		if sys.verbose then
			print "# Found elements:"
			print elements.join("\n")
		end

		return elements
	end
end

# Implement this method in your module to configure this tool
fun tool_config: nullable Config do return null

var c = tool_config
if c == null then
	print "This tool is not configured, take a look at the example `sample_config.nit`"
	exit 1
	abort # For the flow only
end

var tool = new Downloader(c)
tool.run
