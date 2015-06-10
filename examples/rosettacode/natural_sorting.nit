class NaturalSorter 
super DefaultComparator
	fun cleanup(str: Comparable):String
	do
		print "entering for {str}"
		if str isa String then
			print "cleaningup {str}"		
			var result: String
			result = str
			var tmp = "(^\s*)|(\s*$)".to_re
			tmp.compile
			#result = result.replace(tmp,"")
			result = result.replace("_\{2,\}".to_re," ")
			result= result.replace("\s".to_re," ")
			result= result.to_lower
			return result
		end
		return ""
	end 
	
	redef fun compare(a,b)
	do
		return cleanup(a)<=>cleanup(b)
	end
end

#var sorter = new NaturalSorter
var sorter = new NaturalSorter
sorter.sort(["allo","bonjour"])
