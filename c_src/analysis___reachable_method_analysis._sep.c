/* This C file is generated by NIT to compile module analysis___reachable_method_analysis. */
#include "analysis___reachable_method_analysis._sep.h"
val_t analysis___reachable_method_analysis___Program___rma(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_method_analysis;
  fra.me.line = 24;
  fra.me.meth = LOCATE_analysis___reachable_method_analysis___Program___rma;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ./analysis//reachable_method_analysis.nit:24 */
  fra.me.REG[0] = ATTR_analysis___reachable_method_analysis___Program____rma(fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
void analysis___reachable_method_analysis___Program___rma__eq(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_method_analysis;
  fra.me.line = 24;
  fra.me.meth = LOCATE_analysis___reachable_method_analysis___Program___rma__eq;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* ./analysis//reachable_method_analysis.nit:24 */
  ATTR_analysis___reachable_method_analysis___Program____rma(fra.me.REG[0]) = fra.me.REG[1];
  stack_frame_head = fra.me.prev;
  return;
}
void analysis___reachable_method_analysis___Program___dump_reachable_methods(val_t p0, val_t p1, val_t p2){
  struct {struct stack_frame_t me; val_t MORE_REG[4];} fra;
  val_t REGB0;
  val_t tmp;
  static val_t once_value_1; /* Once value */
  static val_t once_value_2; /* Once value */
  static val_t once_value_3; /* Once value */
  static val_t once_value_4; /* Once value */
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_method_analysis;
  fra.me.line = 27;
  fra.me.meth = LOCATE_analysis___reachable_method_analysis___Program___dump_reachable_methods;
  fra.me.has_broke = 0;
  fra.me.REG_size = 5;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[4] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  fra.me.REG[2] = p2;
  /* ./analysis//reachable_method_analysis.nit:29 */
  REGB0 = TAG_Int(7);
  fra.me.REG[3] = NEW_Array_standard___collection___array___Array___with_capacity(REGB0);
  if (!once_value_1) {
    fra.me.REG[4] = BOX_NativeString("");
    REGB0 = TAG_Int(0);
    fra.me.REG[4] = NEW_String_standard___string___String___with_native(fra.me.REG[4], REGB0);
    once_value_1 = fra.me.REG[4];
    register_static_object(&once_value_1);
  } else fra.me.REG[4] = once_value_1;
  fra.me.REG[4] = fra.me.REG[4];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[4]);
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[1]);
  if (!once_value_2) {
    fra.me.REG[1] = BOX_NativeString("/");
    REGB0 = TAG_Int(1);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB0);
    once_value_2 = fra.me.REG[1];
    register_static_object(&once_value_2);
  } else fra.me.REG[1] = once_value_2;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[1]);
  fra.me.REG[1] = CALL_program___Program___main_module(fra.me.REG[0])(fra.me.REG[0]);
  fra.me.REG[1] = CALL_metamodel___abstractmetamodel___MMModule___name(fra.me.REG[1])(fra.me.REG[1]);
  fra.me.REG[1] = CALL_standard___string___Object___to_s(fra.me.REG[1])(fra.me.REG[1]);
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[1]);
  if (!once_value_3) {
    fra.me.REG[1] = BOX_NativeString(".reachable_methods.");
    REGB0 = TAG_Int(19);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB0);
    once_value_3 = fra.me.REG[1];
    register_static_object(&once_value_3);
  } else fra.me.REG[1] = once_value_3;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[1]);
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[2]);
  if (!once_value_4) {
    fra.me.REG[2] = BOX_NativeString(".log");
    REGB0 = TAG_Int(4);
    fra.me.REG[2] = NEW_String_standard___string___String___with_native(fra.me.REG[2], REGB0);
    once_value_4 = fra.me.REG[2];
    register_static_object(&once_value_4);
  } else fra.me.REG[2] = once_value_4;
  fra.me.REG[2] = fra.me.REG[2];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[2]);
  fra.me.REG[3] = CALL_standard___string___Object___to_s(fra.me.REG[3])(fra.me.REG[3]);
  fra.me.REG[3] = NEW_OFStream_standard___file___OFStream___open(fra.me.REG[3]);
  CALL_program___Program___with_each_methods(fra.me.REG[0])(fra.me.REG[0], (&(fra.me)), ((fun_t)OC_analysis___reachable_method_analysis___Program___dump_reachable_methods_5));
  /* ./analysis//reachable_method_analysis.nit:35 */
  CALL_standard___stream___IOS___close(fra.me.REG[3])(fra.me.REG[3]);
  stack_frame_head = fra.me.prev;
  return;
}
  void OC_analysis___reachable_method_analysis___Program___dump_reachable_methods_5(struct stack_frame_t *closctx, val_t p0){
    struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
    val_t REGB0;
    val_t tmp;
      static val_t once_value_6; /* Once value */
      static val_t once_value_7; /* Once value */
    /* ./analysis//reachable_method_analysis.nit:30 */
    fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
    fra.me.file = LOCATE_analysis___reachable_method_analysis;
    fra.me.line = 30;
    fra.me.meth = LOCATE_analysis___reachable_method_analysis___Program___dump_reachable_methods;
    fra.me.has_broke = 0;
    fra.me.REG_size = 3;
    fra.me.REG[0] = NIT_NULL;
    fra.me.REG[1] = NIT_NULL;
    fra.me.REG[2] = NIT_NULL;
    fra.me.REG[0] = p0;
    /* ./analysis//reachable_method_analysis.nit:31 */
    fra.me.REG[1] = CALL_analysis___reachable_method_analysis___Program___rma(closctx->REG[0])(closctx->REG[0]);
    REGB0 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
      nit_abort("Reciever is null", NULL, LOCATE_analysis___reachable_method_analysis, 31);
    }
    REGB0 = CALL_analysis___reachable_method_analysis___ReachableMethodAnalysis___is_method_reachable(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
    if (UNTAG_Bool(REGB0)) {
      /* ./analysis//reachable_method_analysis.nit:32 */
      REGB0 = TAG_Int(3);
      fra.me.REG[1] = NEW_Array_standard___collection___array___Array___with_capacity(REGB0);
      if (!once_value_6) {
        fra.me.REG[2] = BOX_NativeString("");
        REGB0 = TAG_Int(0);
        fra.me.REG[2] = NEW_String_standard___string___String___with_native(fra.me.REG[2], REGB0);
        once_value_6 = fra.me.REG[2];
        register_static_object(&once_value_6);
      } else fra.me.REG[2] = once_value_6;
      fra.me.REG[2] = fra.me.REG[2];
      CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[2]);
      fra.me.REG[0] = CALL_metamodel___abstractmetamodel___MMLocalProperty___full_name(fra.me.REG[0])(fra.me.REG[0]);
      CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
      if (!once_value_7) {
        fra.me.REG[0] = BOX_NativeString("\n");
        REGB0 = TAG_Int(1);
        fra.me.REG[0] = NEW_String_standard___string___String___with_native(fra.me.REG[0], REGB0);
        once_value_7 = fra.me.REG[0];
        register_static_object(&once_value_7);
      } else fra.me.REG[0] = once_value_7;
      fra.me.REG[0] = fra.me.REG[0];
      CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
      fra.me.REG[1] = CALL_standard___string___Object___to_s(fra.me.REG[1])(fra.me.REG[1]);
      CALL_standard___stream___OStream___write(closctx->REG[3])(closctx->REG[3], fra.me.REG[1]);
    }
    stack_frame_head = fra.me.prev;
    return;
  }
void analysis___reachable_method_analysis___Program___dump_unreachable_methods(val_t p0, val_t p1, val_t p2){
  struct {struct stack_frame_t me; val_t MORE_REG[4];} fra;
  val_t REGB0;
  val_t tmp;
  static val_t once_value_1; /* Once value */
  static val_t once_value_2; /* Once value */
  static val_t once_value_3; /* Once value */
  static val_t once_value_4; /* Once value */
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_method_analysis;
  fra.me.line = 38;
  fra.me.meth = LOCATE_analysis___reachable_method_analysis___Program___dump_unreachable_methods;
  fra.me.has_broke = 0;
  fra.me.REG_size = 5;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[4] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  fra.me.REG[2] = p2;
  /* ./analysis//reachable_method_analysis.nit:40 */
  REGB0 = TAG_Int(7);
  fra.me.REG[3] = NEW_Array_standard___collection___array___Array___with_capacity(REGB0);
  if (!once_value_1) {
    fra.me.REG[4] = BOX_NativeString("");
    REGB0 = TAG_Int(0);
    fra.me.REG[4] = NEW_String_standard___string___String___with_native(fra.me.REG[4], REGB0);
    once_value_1 = fra.me.REG[4];
    register_static_object(&once_value_1);
  } else fra.me.REG[4] = once_value_1;
  fra.me.REG[4] = fra.me.REG[4];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[4]);
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[1]);
  if (!once_value_2) {
    fra.me.REG[1] = BOX_NativeString("/");
    REGB0 = TAG_Int(1);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB0);
    once_value_2 = fra.me.REG[1];
    register_static_object(&once_value_2);
  } else fra.me.REG[1] = once_value_2;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[1]);
  fra.me.REG[1] = CALL_program___Program___main_module(fra.me.REG[0])(fra.me.REG[0]);
  fra.me.REG[1] = CALL_metamodel___abstractmetamodel___MMModule___name(fra.me.REG[1])(fra.me.REG[1]);
  fra.me.REG[1] = CALL_standard___string___Object___to_s(fra.me.REG[1])(fra.me.REG[1]);
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[1]);
  if (!once_value_3) {
    fra.me.REG[1] = BOX_NativeString(".unreachable_methods.");
    REGB0 = TAG_Int(21);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB0);
    once_value_3 = fra.me.REG[1];
    register_static_object(&once_value_3);
  } else fra.me.REG[1] = once_value_3;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[1]);
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[2]);
  if (!once_value_4) {
    fra.me.REG[2] = BOX_NativeString(".log");
    REGB0 = TAG_Int(4);
    fra.me.REG[2] = NEW_String_standard___string___String___with_native(fra.me.REG[2], REGB0);
    once_value_4 = fra.me.REG[2];
    register_static_object(&once_value_4);
  } else fra.me.REG[2] = once_value_4;
  fra.me.REG[2] = fra.me.REG[2];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[2]);
  fra.me.REG[3] = CALL_standard___string___Object___to_s(fra.me.REG[3])(fra.me.REG[3]);
  fra.me.REG[3] = NEW_OFStream_standard___file___OFStream___open(fra.me.REG[3]);
  CALL_program___Program___with_each_methods(fra.me.REG[0])(fra.me.REG[0], (&(fra.me)), ((fun_t)OC_analysis___reachable_method_analysis___Program___dump_unreachable_methods_5));
  /* ./analysis//reachable_method_analysis.nit:46 */
  CALL_standard___stream___IOS___close(fra.me.REG[3])(fra.me.REG[3]);
  stack_frame_head = fra.me.prev;
  return;
}
  void OC_analysis___reachable_method_analysis___Program___dump_unreachable_methods_5(struct stack_frame_t *closctx, val_t p0){
    struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
    val_t REGB0;
    val_t tmp;
      static val_t once_value_6; /* Once value */
      static val_t once_value_7; /* Once value */
    /* ./analysis//reachable_method_analysis.nit:41 */
    fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
    fra.me.file = LOCATE_analysis___reachable_method_analysis;
    fra.me.line = 41;
    fra.me.meth = LOCATE_analysis___reachable_method_analysis___Program___dump_unreachable_methods;
    fra.me.has_broke = 0;
    fra.me.REG_size = 3;
    fra.me.REG[0] = NIT_NULL;
    fra.me.REG[1] = NIT_NULL;
    fra.me.REG[2] = NIT_NULL;
    fra.me.REG[0] = p0;
    /* ./analysis//reachable_method_analysis.nit:42 */
    fra.me.REG[1] = CALL_analysis___reachable_method_analysis___Program___rma(closctx->REG[0])(closctx->REG[0]);
    REGB0 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
      nit_abort("Reciever is null", NULL, LOCATE_analysis___reachable_method_analysis, 42);
    }
    REGB0 = CALL_analysis___reachable_method_analysis___ReachableMethodAnalysis___is_method_reachable(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
    REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
    if (UNTAG_Bool(REGB0)) {
      /* ./analysis//reachable_method_analysis.nit:43 */
      REGB0 = TAG_Int(3);
      fra.me.REG[1] = NEW_Array_standard___collection___array___Array___with_capacity(REGB0);
      if (!once_value_6) {
        fra.me.REG[2] = BOX_NativeString("");
        REGB0 = TAG_Int(0);
        fra.me.REG[2] = NEW_String_standard___string___String___with_native(fra.me.REG[2], REGB0);
        once_value_6 = fra.me.REG[2];
        register_static_object(&once_value_6);
      } else fra.me.REG[2] = once_value_6;
      fra.me.REG[2] = fra.me.REG[2];
      CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[2]);
      fra.me.REG[0] = CALL_metamodel___abstractmetamodel___MMLocalProperty___full_name(fra.me.REG[0])(fra.me.REG[0]);
      CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
      if (!once_value_7) {
        fra.me.REG[0] = BOX_NativeString("\n");
        REGB0 = TAG_Int(1);
        fra.me.REG[0] = NEW_String_standard___string___String___with_native(fra.me.REG[0], REGB0);
        once_value_7 = fra.me.REG[0];
        register_static_object(&once_value_7);
      } else fra.me.REG[0] = once_value_7;
      fra.me.REG[0] = fra.me.REG[0];
      CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
      fra.me.REG[1] = CALL_standard___string___Object___to_s(fra.me.REG[1])(fra.me.REG[1]);
      CALL_standard___stream___OStream___write(closctx->REG[3])(closctx->REG[3], fra.me.REG[1]);
    }
    stack_frame_head = fra.me.prev;
    return;
  }
val_t analysis___reachable_method_analysis___ReachableMethodAnalysis___is_iroutine_reachable(val_t p0, val_t p1){
  struct {struct stack_frame_t me;} fra;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_method_analysis;
  fra.me.line = 54;
  fra.me.meth = LOCATE_analysis___reachable_method_analysis___ReachableMethodAnalysis___is_iroutine_reachable;
  fra.me.has_broke = 0;
  fra.me.REG_size = 0;
  /* ./analysis//reachable_method_analysis.nit:54 */
  nit_abort("Deferred method called", NULL, LOCATE_analysis___reachable_method_analysis, 54);
  stack_frame_head = fra.me.prev;
  return NIT_NULL;
}
val_t analysis___reachable_method_analysis___ReachableMethodAnalysis___is_method_reachable(val_t p0, val_t p1){
  struct {struct stack_frame_t me;} fra;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_method_analysis;
  fra.me.line = 55;
  fra.me.meth = LOCATE_analysis___reachable_method_analysis___ReachableMethodAnalysis___is_method_reachable;
  fra.me.has_broke = 0;
  fra.me.REG_size = 0;
  /* ./analysis//reachable_method_analysis.nit:55 */
  nit_abort("Deferred method called", NULL, LOCATE_analysis___reachable_method_analysis, 55);
  stack_frame_head = fra.me.prev;
  return NIT_NULL;
}
void analysis___reachable_method_analysis___ReachableMethodAnalysis___init(val_t p0, int* init_table){
  int itpos0 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_analysis___reachable_method_analysis___ReachableMethodAnalysis].i;
  struct {struct stack_frame_t me;} fra;
  val_t tmp;
  if (init_table[itpos0]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_method_analysis;
  fra.me.line = 0;
  fra.me.meth = LOCATE_analysis___reachable_method_analysis___ReachableMethodAnalysis___init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 0;
  stack_frame_head = fra.me.prev;
  init_table[itpos0] = 1;
  return;
}
val_t analysis___reachable_method_analysis___DefaultReachableMethodAnalysis___is_iroutine_reachable(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_method_analysis;
  fra.me.line = 61;
  fra.me.meth = LOCATE_analysis___reachable_method_analysis___DefaultReachableMethodAnalysis___is_iroutine_reachable;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* ./analysis//reachable_method_analysis.nit:61 */
  REGB0 = TAG_Bool(true);
  goto label1;
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return REGB0;
}
val_t analysis___reachable_method_analysis___DefaultReachableMethodAnalysis___is_method_reachable(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_method_analysis;
  fra.me.line = 62;
  fra.me.meth = LOCATE_analysis___reachable_method_analysis___DefaultReachableMethodAnalysis___is_method_reachable;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* ./analysis//reachable_method_analysis.nit:62 */
  REGB0 = TAG_Bool(true);
  goto label1;
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return REGB0;
}
void analysis___reachable_method_analysis___DefaultReachableMethodAnalysis___init(val_t p0, int* init_table){
  int itpos1 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_analysis___reachable_method_analysis___DefaultReachableMethodAnalysis].i;
  struct {struct stack_frame_t me;} fra;
  val_t tmp;
  if (init_table[itpos1]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_method_analysis;
  fra.me.line = 64;
  fra.me.meth = LOCATE_analysis___reachable_method_analysis___DefaultReachableMethodAnalysis___init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ./analysis//reachable_method_analysis.nit:64 */
  CALL_analysis___reachable_method_analysis___ReachableMethodAnalysis___init(fra.me.REG[0])(fra.me.REG[0], init_table);
  stack_frame_head = fra.me.prev;
  init_table[itpos1] = 1;
  return;
}
