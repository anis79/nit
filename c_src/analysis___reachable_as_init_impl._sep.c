/* This C file is generated by NIT to compile module analysis___reachable_as_init_impl. */
#include "analysis___reachable_as_init_impl._sep.h"
val_t analysis___reachable_as_init_impl___ReachableAsInitBuilder___context(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_as_init_impl;
  fra.me.line = 24;
  fra.me.meth = LOCATE_analysis___reachable_as_init_impl___ReachableAsInitBuilder___context;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ./analysis//reachable_as_init_impl.nit:24 */
  REGB0 = TAG_Bool(ATTR_analysis___reachable_as_init_impl___ReachableAsInitBuilder____context(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_context", LOCATE_analysis___reachable_as_init_impl, 24);
  }
  fra.me.REG[0] = ATTR_analysis___reachable_as_init_impl___ReachableAsInitBuilder____context(fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
val_t analysis___reachable_as_init_impl___ReachableAsInitBuilder___program(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_as_init_impl;
  fra.me.line = 25;
  fra.me.meth = LOCATE_analysis___reachable_as_init_impl___ReachableAsInitBuilder___program;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ./analysis//reachable_as_init_impl.nit:25 */
  REGB0 = TAG_Bool(ATTR_analysis___reachable_as_init_impl___ReachableAsInitBuilder____program(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_program", LOCATE_analysis___reachable_as_init_impl, 25);
  }
  fra.me.REG[0] = ATTR_analysis___reachable_as_init_impl___ReachableAsInitBuilder____program(fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
void analysis___reachable_as_init_impl___ReachableAsInitBuilder___work(val_t p0){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_as_init_impl;
  fra.me.line = 27;
  fra.me.meth = LOCATE_analysis___reachable_as_init_impl___ReachableAsInitBuilder___work;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ./analysis//reachable_as_init_impl.nit:28 */
  fra.me.REG[1] = CALL_analysis___reachable_as_init_impl___ReachableAsInitBuilder___program(fra.me.REG[0])(fra.me.REG[0]);
  CALL_program___Program___with_each_iroutines(fra.me.REG[1])(fra.me.REG[1], (&(fra.me)), ((fun_t)OC_analysis___reachable_as_init_impl___ReachableAsInitBuilder___work_1));
  stack_frame_head = fra.me.prev;
  return;
}
  void OC_analysis___reachable_as_init_impl___ReachableAsInitBuilder___work_1(struct stack_frame_t *closctx, val_t p0, val_t p1){
    struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
    val_t REGB0;
    val_t tmp;
    fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
    fra.me.file = LOCATE_analysis___reachable_as_init_impl;
    fra.me.line = 28;
    fra.me.meth = LOCATE_analysis___reachable_as_init_impl___ReachableAsInitBuilder___work;
    fra.me.has_broke = 0;
    fra.me.REG_size = 2;
    fra.me.nitni_local_ref_head = NULL;
    fra.me.REG[0] = NIT_NULL;
    fra.me.REG[1] = NIT_NULL;
    fra.me.REG[0] = p0;
    fra.me.REG[1] = p1;
    /* ./analysis//reachable_as_init_impl.nit:29 */
    fra.me.REG[1] = CALL_analysis___reachable_as_init_impl___ReachableAsInitBuilder___program(closctx->REG[0])(closctx->REG[0]);
    fra.me.REG[1] = CALL_analysis___reachable_method_analysis___Program___rma(fra.me.REG[1])(fra.me.REG[1]);
    REGB0 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
      nit_abort("Reciever is null", NULL, LOCATE_analysis___reachable_as_init_impl, 29);
    }
    REGB0 = CALL_analysis___reachable_method_analysis___ReachableMethodAnalysis___is_iroutine_reachable(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
    if (UNTAG_Bool(REGB0)) {
      /* ./analysis//reachable_as_init_impl.nit:30 */
      fra.me.REG[1] = NEW_RAIVisitor_analysis___reachable_as_init_impl___RAIVisitor___init(closctx->REG[0]);
      /* ./analysis//reachable_as_init_impl.nit:31 */
      CALL_icode___icode_tools___ICodeVisitor___visit_iroutine(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
    }
    stack_frame_head = fra.me.prev;
    return;
  }
void analysis___reachable_as_init_impl___ReachableAsInitBuilder___init(val_t p0, val_t p1, int* init_table){
  int itpos0 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_analysis___reachable_as_init_impl___ReachableAsInitBuilder].i;
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t tmp;
  if (init_table[itpos0]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_as_init_impl;
  fra.me.line = 36;
  fra.me.meth = LOCATE_analysis___reachable_as_init_impl___ReachableAsInitBuilder___init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* ./analysis//reachable_as_init_impl.nit:37 */
  ATTR_analysis___reachable_as_init_impl___ReachableAsInitBuilder____program(fra.me.REG[0]) = fra.me.REG[1];
  stack_frame_head = fra.me.prev;
  init_table[itpos0] = 1;
  return;
}
val_t analysis___reachable_as_init_impl___ReachableAsInitAnalysisImpl___is_method_reachable_as_init(val_t p0, val_t p1, val_t p2){
  struct {struct stack_frame_t me; val_t MORE_REG[3];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_as_init_impl;
  fra.me.line = 47;
  fra.me.meth = LOCATE_analysis___reachable_as_init_impl___ReachableAsInitAnalysisImpl___is_method_reachable_as_init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 4;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  fra.me.REG[2] = p2;
  /* ./analysis//reachable_as_init_impl.nit:48 */
  REGB0 = TAG_Bool(ATTR_analysis___reachable_as_init_impl___ReachableAsInitAnalysisImpl____methods(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_methods", LOCATE_analysis___reachable_as_init_impl, 48);
  }
  fra.me.REG[3] = ATTR_analysis___reachable_as_init_impl___ReachableAsInitAnalysisImpl____methods(fra.me.REG[0]);
  REGB0 = CALL_standard___collection___abstract_collection___MapRead___has_key(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[2]);
  if (UNTAG_Bool(REGB0)) {
    REGB0 = TAG_Bool(ATTR_analysis___reachable_as_init_impl___ReachableAsInitAnalysisImpl____methods(fra.me.REG[0])!=NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
    } else {
      nit_abort("Uninitialized attribute %s", "_methods", LOCATE_analysis___reachable_as_init_impl, 48);
    }
    fra.me.REG[0] = ATTR_analysis___reachable_as_init_impl___ReachableAsInitAnalysisImpl____methods(fra.me.REG[0]);
    fra.me.REG[2] = CALL_standard___collection___abstract_collection___MapRead_____bra(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[2]);
    REGB0 = TAG_Bool(fra.me.REG[2]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
      nit_abort("Reciever is null", NULL, LOCATE_analysis___reachable_as_init_impl, 48);
    }
    REGB0 = CALL_standard___collection___abstract_collection___Collection___has(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
    goto label1;
  }
  /* ./analysis//reachable_as_init_impl.nit:49 */
  REGB1 = TAG_Bool(false);
  REGB0 = REGB1;
  goto label1;
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return REGB0;
}
void analysis___reachable_as_init_impl___ReachableAsInitAnalysisImpl___init(val_t p0, int* init_table){
  int itpos1 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_analysis___reachable_as_init_impl___ReachableAsInitAnalysisImpl].i;
  struct {struct stack_frame_t me;} fra;
  val_t tmp;
  if (init_table[itpos1]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_as_init_impl;
  fra.me.line = 52;
  fra.me.meth = LOCATE_analysis___reachable_as_init_impl___ReachableAsInitAnalysisImpl___init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ./analysis//reachable_as_init_impl.nit:52 */
  CALL_analysis___reachable_as_init___ReachableAsInitAnalysis___init(fra.me.REG[0])(fra.me.REG[0], init_table);
  stack_frame_head = fra.me.prev;
  init_table[itpos1] = 1;
  return;
}
val_t analysis___reachable_as_init_impl___RAIVisitor___builder(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_as_init_impl;
  fra.me.line = 57;
  fra.me.meth = LOCATE_analysis___reachable_as_init_impl___RAIVisitor___builder;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ./analysis//reachable_as_init_impl.nit:57 */
  REGB0 = TAG_Bool(ATTR_analysis___reachable_as_init_impl___RAIVisitor____builder(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_builder", LOCATE_analysis___reachable_as_init_impl, 57);
  }
  fra.me.REG[0] = ATTR_analysis___reachable_as_init_impl___RAIVisitor____builder(fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
void analysis___reachable_as_init_impl___RAIVisitor___visit_icode(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[6];} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_as_init_impl;
  fra.me.line = 59;
  fra.me.meth = LOCATE_analysis___reachable_as_init_impl___RAIVisitor___visit_icode;
  fra.me.has_broke = 0;
  fra.me.REG_size = 7;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[4] = NIT_NULL;
  fra.me.REG[5] = NIT_NULL;
  fra.me.REG[6] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* ./analysis//reachable_as_init_impl.nit:59 */
  fra.me.REG[2] = fra.me.REG[0];
  fra.me.REG[3] = fra.me.REG[1];
  /* ./analysis//reachable_as_init_impl.nit:61 */
  REGB0 = TAG_Bool((fra.me.REG[3]!=NIT_NULL) && VAL_ISA(fra.me.REG[3], COLOR_icode___icode_base___INew, ID_icode___icode_base___INew)) /*cast INew*/;
  if (UNTAG_Bool(REGB0)) {
    /* ./analysis//reachable_as_init_impl.nit:63 */
    REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
      nit_abort("Reciever is null", NULL, LOCATE_analysis___reachable_as_init_impl, 63);
    }
    fra.me.REG[4] = CALL_icode___icode_base___INew___stype(fra.me.REG[3])(fra.me.REG[3]);
    /* ./analysis//reachable_as_init_impl.nit:64 */
    fra.me.REG[5] = CALL_analysis___reachable_as_init_impl___RAIVisitor___builder(fra.me.REG[2])(fra.me.REG[2]);
    fra.me.REG[5] = CALL_analysis___reachable_as_init_impl___ReachableAsInitBuilder___program(fra.me.REG[5])(fra.me.REG[5]);
    fra.me.REG[5] = CALL_program___Program___main_module(fra.me.REG[5])(fra.me.REG[5]);
    fra.me.REG[5] = CALL_metamodel___static_type___MMType___for_module(fra.me.REG[4])(fra.me.REG[4], fra.me.REG[5]);
    fra.me.REG[5] = CALL_metamodel___static_type___MMType___local_class(fra.me.REG[5])(fra.me.REG[5]);
    /* ./analysis//reachable_as_init_impl.nit:65 */
    REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
      nit_abort("Reciever is null", NULL, LOCATE_analysis___reachable_as_init_impl, 65);
    }
    fra.me.REG[3] = CALL_icode___icode_base___IAbsCall___property(fra.me.REG[3])(fra.me.REG[3]);
    fra.me.REG[3] = CALL_metamodel___abstractmetamodel___MMLocalProperty___global(fra.me.REG[3])(fra.me.REG[3]);
    fra.me.REG[3] = CALL_metamodel___abstractmetamodel___MMLocalClass_____bra(fra.me.REG[5])(fra.me.REG[5], fra.me.REG[3]);
    REGB0 = TAG_Bool(VAL_ISA(fra.me.REG[3], COLOR_metamodel___abstractmetamodel___MMMethod, ID_metamodel___abstractmetamodel___MMMethod)) /*cast MMMethod*/;
    if (UNTAG_Bool(REGB0)) {
    } else {
      nit_abort("Cast failed", NULL, LOCATE_analysis___reachable_as_init_impl, 65);
    }
    /* ./analysis//reachable_as_init_impl.nit:66 */
    fra.me.REG[4] = CALL_metamodel___abstractmetamodel___MMLocalProperty___global(fra.me.REG[3])(fra.me.REG[3]);
    REGB0 = CALL_metamodel___abstractmetamodel___MMGlobalProperty___is_init(fra.me.REG[4])(fra.me.REG[4]);
    if (UNTAG_Bool(REGB0)) {
    } else {
      nit_abort("Assert failed", NULL, LOCATE_analysis___reachable_as_init_impl, 66);
    }
    /* ./analysis//reachable_as_init_impl.nit:67 */
    fra.me.REG[4] = CALL_analysis___reachable_as_init_impl___RAIVisitor___builder(fra.me.REG[2])(fra.me.REG[2]);
    fra.me.REG[4] = CALL_analysis___reachable_as_init_impl___ReachableAsInitBuilder___context(fra.me.REG[4])(fra.me.REG[4]);
    REGB0 = TAG_Bool(ATTR_analysis___reachable_as_init_impl___ReachableAsInitAnalysisImpl____methods(fra.me.REG[4])!=NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
    } else {
      nit_abort("Uninitialized attribute %s", "_methods", LOCATE_analysis___reachable_as_init_impl, 67);
    }
    fra.me.REG[4] = ATTR_analysis___reachable_as_init_impl___ReachableAsInitAnalysisImpl____methods(fra.me.REG[4]);
    REGB0 = CALL_standard___collection___abstract_collection___MapRead___has_key(fra.me.REG[4])(fra.me.REG[4], fra.me.REG[5]);
    REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
    if (UNTAG_Bool(REGB0)) {
      fra.me.REG[4] = CALL_analysis___reachable_as_init_impl___RAIVisitor___builder(fra.me.REG[2])(fra.me.REG[2]);
      fra.me.REG[4] = CALL_analysis___reachable_as_init_impl___ReachableAsInitBuilder___context(fra.me.REG[4])(fra.me.REG[4]);
      REGB0 = TAG_Bool(ATTR_analysis___reachable_as_init_impl___ReachableAsInitAnalysisImpl____methods(fra.me.REG[4])!=NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
      } else {
        nit_abort("Uninitialized attribute %s", "_methods", LOCATE_analysis___reachable_as_init_impl, 67);
      }
      fra.me.REG[4] = ATTR_analysis___reachable_as_init_impl___ReachableAsInitAnalysisImpl____methods(fra.me.REG[4]);
      fra.me.REG[6] = NEW_List_standard___collection___list___List___init();
      CALL_standard___collection___abstract_collection___Map_____braeq(fra.me.REG[4])(fra.me.REG[4], fra.me.REG[5], fra.me.REG[6]);
    }
    /* ./analysis//reachable_as_init_impl.nit:68 */
    fra.me.REG[6] = CALL_analysis___reachable_as_init_impl___RAIVisitor___builder(fra.me.REG[2])(fra.me.REG[2]);
    fra.me.REG[6] = CALL_analysis___reachable_as_init_impl___ReachableAsInitBuilder___context(fra.me.REG[6])(fra.me.REG[6]);
    REGB0 = TAG_Bool(ATTR_analysis___reachable_as_init_impl___ReachableAsInitAnalysisImpl____methods(fra.me.REG[6])!=NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
    } else {
      nit_abort("Uninitialized attribute %s", "_methods", LOCATE_analysis___reachable_as_init_impl, 68);
    }
    fra.me.REG[6] = ATTR_analysis___reachable_as_init_impl___ReachableAsInitAnalysisImpl____methods(fra.me.REG[6]);
    fra.me.REG[6] = CALL_standard___collection___abstract_collection___MapRead_____bra(fra.me.REG[6])(fra.me.REG[6], fra.me.REG[5]);
    REGB0 = TAG_Bool(fra.me.REG[6]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
      nit_abort("Reciever is null", NULL, LOCATE_analysis___reachable_as_init_impl, 68);
    }
    REGB0 = CALL_standard___collection___abstract_collection___Collection___has(fra.me.REG[6])(fra.me.REG[6], fra.me.REG[3]);
    REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
    if (UNTAG_Bool(REGB0)) {
      fra.me.REG[2] = CALL_analysis___reachable_as_init_impl___RAIVisitor___builder(fra.me.REG[2])(fra.me.REG[2]);
      fra.me.REG[2] = CALL_analysis___reachable_as_init_impl___ReachableAsInitBuilder___context(fra.me.REG[2])(fra.me.REG[2]);
      REGB0 = TAG_Bool(ATTR_analysis___reachable_as_init_impl___ReachableAsInitAnalysisImpl____methods(fra.me.REG[2])!=NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
      } else {
        nit_abort("Uninitialized attribute %s", "_methods", LOCATE_analysis___reachable_as_init_impl, 68);
      }
      fra.me.REG[2] = ATTR_analysis___reachable_as_init_impl___ReachableAsInitAnalysisImpl____methods(fra.me.REG[2]);
      fra.me.REG[5] = CALL_standard___collection___abstract_collection___MapRead_____bra(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[5]);
      REGB0 = TAG_Bool(fra.me.REG[5]==NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
        nit_abort("Reciever is null", NULL, LOCATE_analysis___reachable_as_init_impl, 68);
      }
      CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[5])(fra.me.REG[5], fra.me.REG[3]);
    }
  }
  /* ./analysis//reachable_as_init_impl.nit:70 */
  CALL_SUPER_analysis___reachable_as_init_impl___RAIVisitor___visit_icode(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[1]);
  stack_frame_head = fra.me.prev;
  return;
}
void analysis___reachable_as_init_impl___RAIVisitor___init(val_t p0, val_t p1, int* init_table){
  int itpos2 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_analysis___reachable_as_init_impl___RAIVisitor].i;
  struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
  val_t tmp;
  if (init_table[itpos2]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___reachable_as_init_impl;
  fra.me.line = 73;
  fra.me.meth = LOCATE_analysis___reachable_as_init_impl___RAIVisitor___init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 3;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* ./analysis//reachable_as_init_impl.nit:73 */
  fra.me.REG[2] = fra.me.REG[0];
  CALL_icode___icode_tools___ICodeVisitor___init(fra.me.REG[0])(fra.me.REG[0], init_table);
  /* ./analysis//reachable_as_init_impl.nit:75 */
  ATTR_analysis___reachable_as_init_impl___RAIVisitor____builder(fra.me.REG[2]) = fra.me.REG[1];
  stack_frame_head = fra.me.prev;
  init_table[itpos2] = 1;
  return;
}
