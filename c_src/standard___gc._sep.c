/* This C file is generated by NIT to compile module standard___gc. */
#include "standard___gc._sep.h"
void standard___gc___Sys___force_garbage_collection(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_standard___gc;
  fra.me.line = 4;
  fra.me.meth = LOCATE_standard___gc___Sys___force_garbage_collection;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ./../lib/standard//gc.nit:4 */
  Nit_gc_force_garbage_collection();
  stack_frame_head = fra.me.prev;
  return;
}
