/* This C file is generated by NIT to compile module analysis___inline_methods. */
#include "analysis___inline_methods._sep.h"
void analysis___inline_methods___InlineMethodVisitor___visit_icode(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[9];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___inline_methods;
  fra.me.line = 27;
  fra.me.meth = LOCATE_analysis___inline_methods___InlineMethodVisitor___visit_icode;
  fra.me.has_broke = 0;
  fra.me.REG_size = 10;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[4] = NIT_NULL;
  fra.me.REG[5] = NIT_NULL;
  fra.me.REG[6] = NIT_NULL;
  fra.me.REG[7] = NIT_NULL;
  fra.me.REG[8] = NIT_NULL;
  fra.me.REG[9] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* ./analysis//inline_methods.nit:27 */
  fra.me.REG[2] = fra.me.REG[0];
  fra.me.REG[3] = fra.me.REG[1];
  /* ./analysis//inline_methods.nit:29 */
  REGB0 = TAG_Bool((fra.me.REG[3]!=NIT_NULL) && VAL_ISA(fra.me.REG[3], COLOR_icode___icode_base___ICall, ID_icode___icode_base___ICall)) /*cast ICall*/;
  if (UNTAG_Bool(REGB0)) {
    REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
      nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_methods, 29);
    }
    REGB0 = CALL_icode___icode_base___IAbsCall___is_explicit_from_extern(fra.me.REG[3])(fra.me.REG[3]);
    REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
  } else {
    REGB1 = TAG_Bool(false);
    REGB0 = REGB1;
  }
  if (UNTAG_Bool(REGB0)) {
    /* ./analysis//inline_methods.nit:30 */
    REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
      nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_methods, 30);
    }
    fra.me.REG[4] = CALL_icode___icode_base___IAbsCall___property(fra.me.REG[3])(fra.me.REG[3]);
    /* ./analysis//inline_methods.nit:31 */
    fra.me.REG[4] = CALL_icode___icode_base___MMMethod___iroutine(fra.me.REG[4])(fra.me.REG[4]);
    /* ./analysis//inline_methods.nit:32 */
    REGB0 = TAG_Bool(fra.me.REG[4]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
    } else {
      REGB1 = TAG_Bool(fra.me.REG[4]==NIT_NULL);
      if (UNTAG_Bool(REGB1)) {
        REGB1 = TAG_Bool(false);
        REGB0 = REGB1;
      } else {
        REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[4])(fra.me.REG[4], NIT_NULL);
        REGB0 = REGB1;
      }
    }
    REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
    if (UNTAG_Bool(REGB0)) {
      REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
        nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_methods, 32);
      }
      REGB0 = CALL_analysis___inline_methods___ICall___is_inlinable(fra.me.REG[3])(fra.me.REG[3]);
    } else {
      REGB1 = TAG_Bool(false);
      REGB0 = REGB1;
    }
    if (UNTAG_Bool(REGB0)) {
      /* ./analysis//inline_methods.nit:33 */
      REGB0 = TAG_Bool(ATTR_analysis___inline_methods___InlineMethodVisitor____icb(fra.me.REG[2])!=NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
      } else {
        nit_abort("Uninitialized attribute %s", "_icb", LOCATE_analysis___inline_methods, 33);
      }
      fra.me.REG[5] = ATTR_analysis___inline_methods___InlineMethodVisitor____icb(fra.me.REG[2]);
      /* ./analysis//inline_methods.nit:34 */
      fra.me.REG[6] = CALL_icode___icode_builder___ICodeBuilder___iroutine(fra.me.REG[5])(fra.me.REG[5]);
      REGB0 = TAG_Bool(IS_EQUAL_ON(fra.me.REG[6],fra.me.REG[4]));
      if (UNTAG_Bool(REGB0)) {
      } else {
        REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[6])(fra.me.REG[6], fra.me.REG[4]);
        REGB0 = REGB1;
      }
      if (UNTAG_Bool(REGB0)) {
        /* ./analysis//inline_methods.nit:37 */
        fra.me.REG[6] = CALL_icode___icode_tools___ICodeVisitor___current_icode(fra.me.REG[2])(fra.me.REG[2]);
        REGB0 = TAG_Bool(fra.me.REG[6]==NIT_NULL);
        if (UNTAG_Bool(REGB0)) {
          nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_methods, 37);
        }
        CALL_standard___collection___list___ListIterator___delete(fra.me.REG[6])(fra.me.REG[6]);
        /* ./analysis//inline_methods.nit:38 */
        REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
        if (UNTAG_Bool(REGB0)) {
          nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_methods, 38);
        }
        fra.me.REG[6] = CALL_icode___icode_base___IAbsCall___property(fra.me.REG[3])(fra.me.REG[3]);
        REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
        if (UNTAG_Bool(REGB0)) {
          nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_methods, 38);
        }
        fra.me.REG[7] = CALL_icode___icode_base___ICodeN___exprs(fra.me.REG[3])(fra.me.REG[3]);
        fra.me.REG[7] = NEW_IStaticCall_icode___icode_base___IStaticCall___init(fra.me.REG[6], fra.me.REG[7]);
        /* ./analysis//inline_methods.nit:39 */
        REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
        if (UNTAG_Bool(REGB0)) {
          nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_methods, 39);
        }
        fra.me.REG[6] = CALL_icode___icode_base___ICodeN___closure_defs(fra.me.REG[3])(fra.me.REG[3]);
        CALL_icode___icode_base___ICodeN___closure_defs__eq(fra.me.REG[7])(fra.me.REG[7], fra.me.REG[6]);
        /* ./analysis//inline_methods.nit:40 */
        REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
        if (UNTAG_Bool(REGB0)) {
          nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_methods, 40);
        }
        fra.me.REG[6] = CALL_icode___icode_base___ICode___result(fra.me.REG[3])(fra.me.REG[3]);
        CALL_icode___icode_base___ICode___result__eq(fra.me.REG[7])(fra.me.REG[7], fra.me.REG[6]);
        /* ./analysis//inline_methods.nit:41 */
        fra.me.REG[6] = CALL_icode___icode_tools___ICodeVisitor___current_icode(fra.me.REG[2])(fra.me.REG[2]);
        REGB0 = TAG_Bool(fra.me.REG[6]==NIT_NULL);
        if (UNTAG_Bool(REGB0)) {
          nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_methods, 41);
        }
        CALL_standard___collection___list___ListIterator___insert_before(fra.me.REG[6])(fra.me.REG[6], fra.me.REG[7]);
        /* ./analysis//inline_methods.nit:42 */
        fra.me.REG[7] = CALL_icode___icode_tools___ICodeVisitor___current_icode(fra.me.REG[2])(fra.me.REG[2]);
        REGB0 = TAG_Bool(fra.me.REG[7]==NIT_NULL);
        if (UNTAG_Bool(REGB0)) {
          nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_methods, 42);
        }
        CALL_standard___collection___list___ListIterator___delete(fra.me.REG[7])(fra.me.REG[7]);
      } else {
        /* ./analysis//inline_methods.nit:44 */
        fra.me.REG[7] = NEW_ISeq_icode___icode_base___ISeq___init();
        /* ./analysis//inline_methods.nit:45 */
        fra.me.REG[6] = CALL_icode___icode_builder___ICodeBuilder___seq(fra.me.REG[5])(fra.me.REG[5]);
        /* ./analysis//inline_methods.nit:46 */
        CALL_icode___icode_builder___ICodeBuilder___seq__eq(fra.me.REG[5])(fra.me.REG[5], fra.me.REG[7]);
        /* ./analysis//inline_methods.nit:47 */
        fra.me.REG[8] = CALL_icode___icode_tools___ICodeVisitor___current_icode(fra.me.REG[2])(fra.me.REG[2]);
        REGB0 = TAG_Bool(fra.me.REG[8]==NIT_NULL);
        if (UNTAG_Bool(REGB0)) {
          nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_methods, 47);
        }
        CALL_standard___collection___list___ListIterator___insert_before(fra.me.REG[8])(fra.me.REG[8], fra.me.REG[7]);
        /* ./analysis//inline_methods.nit:48 */
        REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
        if (UNTAG_Bool(REGB0)) {
          nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_methods, 48);
        }
        fra.me.REG[8] = CALL_icode___icode_base___ICodeN___exprs(fra.me.REG[3])(fra.me.REG[3]);
        REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
        if (UNTAG_Bool(REGB0)) {
          nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_methods, 48);
        }
        fra.me.REG[9] = CALL_icode___icode_base___ICodeN___closure_defs(fra.me.REG[3])(fra.me.REG[3]);
        fra.me.REG[9] = CALL_icode___icode_tools___ICodeBuilder___inline_routine(fra.me.REG[5])(fra.me.REG[5], fra.me.REG[4], fra.me.REG[8], fra.me.REG[9]);
        /* ./analysis//inline_methods.nit:49 */
        REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
        if (UNTAG_Bool(REGB0)) {
          nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_methods, 49);
        }
        fra.me.REG[3] = CALL_icode___icode_base___ICode___result(fra.me.REG[3])(fra.me.REG[3]);
        /* ./analysis//inline_methods.nit:50 */
        REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
        if (UNTAG_Bool(REGB0)) {
        } else {
          REGB1 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
          if (UNTAG_Bool(REGB1)) {
            REGB1 = TAG_Bool(false);
            REGB0 = REGB1;
          } else {
            REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[3])(fra.me.REG[3], NIT_NULL);
            REGB0 = REGB1;
          }
        }
        REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
        if (UNTAG_Bool(REGB0)) {
          /* ./analysis//inline_methods.nit:51 */
          REGB0 = TAG_Bool(fra.me.REG[9]==NIT_NULL);
          if (UNTAG_Bool(REGB0)) {
          } else {
            REGB1 = TAG_Bool(fra.me.REG[9]==NIT_NULL);
            if (UNTAG_Bool(REGB1)) {
              REGB1 = TAG_Bool(false);
              REGB0 = REGB1;
            } else {
              REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[9])(fra.me.REG[9], NIT_NULL);
              REGB0 = REGB1;
            }
          }
          REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
          if (UNTAG_Bool(REGB0)) {
          } else {
            nit_abort("Assert failed", NULL, LOCATE_analysis___inline_methods, 51);
          }
          /* ./analysis//inline_methods.nit:52 */
          fra.me.REG[8] = CALL_icode___icode_tools___ICodeVisitor___current_icode(fra.me.REG[2])(fra.me.REG[2]);
          fra.me.REG[9] = NEW_IMove_icode___icode_base___IMove___init(fra.me.REG[3], fra.me.REG[9]);
          REGB0 = TAG_Bool(fra.me.REG[8]==NIT_NULL);
          if (UNTAG_Bool(REGB0)) {
            nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_methods, 52);
          }
          CALL_standard___collection___list___ListIterator___insert_before(fra.me.REG[8])(fra.me.REG[8], fra.me.REG[9]);
        }
        /* ./analysis//inline_methods.nit:54 */
        fra.me.REG[9] = CALL_icode___icode_tools___ICodeVisitor___current_icode(fra.me.REG[2])(fra.me.REG[2]);
        REGB0 = TAG_Bool(fra.me.REG[9]==NIT_NULL);
        if (UNTAG_Bool(REGB0)) {
          nit_abort("Reciever is null", NULL, LOCATE_analysis___inline_methods, 54);
        }
        CALL_standard___collection___list___ListIterator___delete(fra.me.REG[9])(fra.me.REG[9]);
        /* ./analysis//inline_methods.nit:55 */
        CALL_icode___icode_builder___ICodeBuilder___seq__eq(fra.me.REG[5])(fra.me.REG[5], fra.me.REG[6]);
        /* ./analysis//inline_methods.nit:56 */
        CALL_icode___icode_tools___ICodeVisitor___visit_icode(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[7]);
      }
    }
  }
  /* ./analysis//inline_methods.nit:60 */
  CALL_SUPER_analysis___inline_methods___InlineMethodVisitor___visit_icode(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[1]);
  stack_frame_head = fra.me.prev;
  return;
}
void analysis___inline_methods___InlineMethodVisitor___init(val_t p0, val_t p1, val_t p2, int* init_table){
  int itpos0 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_analysis___inline_methods___InlineMethodVisitor].i;
  struct {struct stack_frame_t me; val_t MORE_REG[3];} fra;
  val_t tmp;
  if (init_table[itpos0]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___inline_methods;
  fra.me.line = 63;
  fra.me.meth = LOCATE_analysis___inline_methods___InlineMethodVisitor___init;
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
  /* ./analysis//inline_methods.nit:63 */
  fra.me.REG[3] = fra.me.REG[0];
  CALL_icode___icode_tools___ICodeVisitor___init(fra.me.REG[0])(fra.me.REG[0], init_table);
  /* ./analysis//inline_methods.nit:65 */
  fra.me.REG[2] = NEW_ICodeBuilder_icode___icode_builder___ICodeBuilder___init(fra.me.REG[1], fra.me.REG[2]);
  ATTR_analysis___inline_methods___InlineMethodVisitor____icb(fra.me.REG[3]) = fra.me.REG[2];
  stack_frame_head = fra.me.prev;
  init_table[itpos0] = 1;
  return;
}
val_t analysis___inline_methods___ICall___is_inlinable(val_t p0){
  struct {struct stack_frame_t me; val_t MORE_REG[3];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t REGB2;
  val_t REGB3;
  val_t tmp;
    static val_t once_value_1; /* Once value */
      static val_t once_value_2; /* Once value */
    static val_t once_value_3; /* Once value */
      static val_t once_value_4; /* Once value */
      static val_t once_value_5; /* Once value */
        static val_t once_value_6; /* Once value */
        static val_t once_value_7; /* Once value */
          static val_t once_value_8; /* Once value */
    static val_t once_value_9; /* Once value */
      static val_t once_value_10; /* Once value */
      static val_t once_value_11; /* Once value */
        static val_t once_value_12; /* Once value */
        static val_t once_value_13; /* Once value */
          static val_t once_value_14; /* Once value */
        static val_t once_value_15; /* Once value */
          static val_t once_value_16; /* Once value */
    static val_t once_value_17; /* Once value */
      static val_t once_value_18; /* Once value */
      static val_t once_value_19; /* Once value */
        static val_t once_value_20; /* Once value */
        static val_t once_value_21; /* Once value */
          static val_t once_value_22; /* Once value */
    static val_t once_value_23; /* Once value */
      static val_t once_value_24; /* Once value */
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___inline_methods;
  fra.me.line = 70;
  fra.me.meth = LOCATE_analysis___inline_methods___ICall___is_inlinable;
  fra.me.has_broke = 0;
  fra.me.REG_size = 4;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ./analysis//inline_methods.nit:72 */
  fra.me.REG[0] = CALL_icode___icode_base___IAbsCall___property(fra.me.REG[0])(fra.me.REG[0]);
  /* ./analysis//inline_methods.nit:73 */
  fra.me.REG[1] = CALL_metamodel___abstractmetamodel___MMLocalProperty___name(fra.me.REG[0])(fra.me.REG[0]);
  /* ./analysis//inline_methods.nit:74 */
  fra.me.REG[2] = CALL_metamodel___abstractmetamodel___MMLocalProperty___local_class(fra.me.REG[0])(fra.me.REG[0]);
  fra.me.REG[2] = CALL_metamodel___abstractmetamodel___MMLocalClass___name(fra.me.REG[2])(fra.me.REG[2]);
  /* ./analysis//inline_methods.nit:75 */
  REGB0 = CALL_metamodel___abstractmetamodel___MMMethod___is_intern(fra.me.REG[0])(fra.me.REG[0]);
  if (UNTAG_Bool(REGB0)) {
    if (!once_value_1) {
      if (!once_value_2) {
        fra.me.REG[3] = BOX_NativeString("Object");
        REGB0 = TAG_Int(6);
        fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB0);
        once_value_2 = fra.me.REG[3];
        register_static_object(&once_value_2);
      } else fra.me.REG[3] = once_value_2;
      fra.me.REG[3] = fra.me.REG[3];
      fra.me.REG[3] = CALL_standard___symbol___String___to_symbol(fra.me.REG[3])(fra.me.REG[3]);
      once_value_1 = fra.me.REG[3];
      register_static_object(&once_value_1);
    } else fra.me.REG[3] = once_value_1;
    fra.me.REG[3] = fra.me.REG[3];
    REGB0 = TAG_Bool(IS_EQUAL_OO(fra.me.REG[2],fra.me.REG[3]));
    if (UNTAG_Bool(REGB0)) {
    } else {
      REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[3]);
      REGB0 = REGB1;
    }
    REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
  } else {
    REGB1 = TAG_Bool(false);
    REGB0 = REGB1;
  }
  if (UNTAG_Bool(REGB0)) {
    REGB0 = TAG_Bool(true);
  } else {
    /* ./analysis//inline_methods.nit:76 */
    if (!once_value_3) {
      if (!once_value_4) {
        fra.me.REG[3] = BOX_NativeString("Int");
        REGB1 = TAG_Int(3);
        fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB1);
        once_value_4 = fra.me.REG[3];
        register_static_object(&once_value_4);
      } else fra.me.REG[3] = once_value_4;
      fra.me.REG[3] = fra.me.REG[3];
      fra.me.REG[3] = CALL_standard___symbol___String___to_symbol(fra.me.REG[3])(fra.me.REG[3]);
      once_value_3 = fra.me.REG[3];
      register_static_object(&once_value_3);
    } else fra.me.REG[3] = once_value_3;
    fra.me.REG[3] = fra.me.REG[3];
    REGB1 = TAG_Bool(IS_EQUAL_OO(fra.me.REG[2],fra.me.REG[3]));
    if (UNTAG_Bool(REGB1)) {
    } else {
      REGB2 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[3]);
      REGB1 = REGB2;
    }
    if (UNTAG_Bool(REGB1)) {
      if (!once_value_5) {
        if (!once_value_6) {
          fra.me.REG[3] = BOX_NativeString("enumerate_to");
          REGB1 = TAG_Int(12);
          fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB1);
          once_value_6 = fra.me.REG[3];
          register_static_object(&once_value_6);
        } else fra.me.REG[3] = once_value_6;
        fra.me.REG[3] = fra.me.REG[3];
        fra.me.REG[3] = CALL_standard___symbol___String___to_symbol(fra.me.REG[3])(fra.me.REG[3]);
        once_value_5 = fra.me.REG[3];
        register_static_object(&once_value_5);
      } else fra.me.REG[3] = once_value_5;
      fra.me.REG[3] = fra.me.REG[3];
      REGB1 = TAG_Bool(IS_EQUAL_OO(fra.me.REG[1],fra.me.REG[3]));
      if (UNTAG_Bool(REGB1)) {
      } else {
        REGB2 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[3]);
        REGB1 = REGB2;
      }
      if (UNTAG_Bool(REGB1)) {
        REGB1 = TAG_Bool(true);
      } else {
        if (!once_value_7) {
          if (!once_value_8) {
            fra.me.REG[3] = BOX_NativeString("enumerate_before");
            REGB2 = TAG_Int(16);
            fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB2);
            once_value_8 = fra.me.REG[3];
            register_static_object(&once_value_8);
          } else fra.me.REG[3] = once_value_8;
          fra.me.REG[3] = fra.me.REG[3];
          fra.me.REG[3] = CALL_standard___symbol___String___to_symbol(fra.me.REG[3])(fra.me.REG[3]);
          once_value_7 = fra.me.REG[3];
          register_static_object(&once_value_7);
        } else fra.me.REG[3] = once_value_7;
        fra.me.REG[3] = fra.me.REG[3];
        REGB2 = TAG_Bool(IS_EQUAL_OO(fra.me.REG[1],fra.me.REG[3]));
        if (UNTAG_Bool(REGB2)) {
        } else {
          REGB3 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[3]);
          REGB2 = REGB3;
        }
        REGB1 = REGB2;
      }
    } else {
      REGB2 = TAG_Bool(false);
      REGB1 = REGB2;
    }
    /* ./analysis//inline_methods.nit:75 */
    REGB0 = REGB1;
  }
  if (UNTAG_Bool(REGB0)) {
    REGB0 = TAG_Bool(true);
  } else {
    /* ./analysis//inline_methods.nit:77 */
    if (!once_value_9) {
      if (!once_value_10) {
        fra.me.REG[3] = BOX_NativeString("Array");
        REGB1 = TAG_Int(5);
        fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB1);
        once_value_10 = fra.me.REG[3];
        register_static_object(&once_value_10);
      } else fra.me.REG[3] = once_value_10;
      fra.me.REG[3] = fra.me.REG[3];
      fra.me.REG[3] = CALL_standard___symbol___String___to_symbol(fra.me.REG[3])(fra.me.REG[3]);
      once_value_9 = fra.me.REG[3];
      register_static_object(&once_value_9);
    } else fra.me.REG[3] = once_value_9;
    fra.me.REG[3] = fra.me.REG[3];
    REGB1 = TAG_Bool(IS_EQUAL_OO(fra.me.REG[2],fra.me.REG[3]));
    if (UNTAG_Bool(REGB1)) {
    } else {
      REGB2 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[3]);
      REGB1 = REGB2;
    }
    if (UNTAG_Bool(REGB1)) {
      if (!once_value_11) {
        if (!once_value_12) {
          fra.me.REG[3] = BOX_NativeString("length");
          REGB1 = TAG_Int(6);
          fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB1);
          once_value_12 = fra.me.REG[3];
          register_static_object(&once_value_12);
        } else fra.me.REG[3] = once_value_12;
        fra.me.REG[3] = fra.me.REG[3];
        fra.me.REG[3] = CALL_standard___symbol___String___to_symbol(fra.me.REG[3])(fra.me.REG[3]);
        once_value_11 = fra.me.REG[3];
        register_static_object(&once_value_11);
      } else fra.me.REG[3] = once_value_11;
      fra.me.REG[3] = fra.me.REG[3];
      REGB1 = TAG_Bool(IS_EQUAL_OO(fra.me.REG[1],fra.me.REG[3]));
      if (UNTAG_Bool(REGB1)) {
      } else {
        REGB2 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[3]);
        REGB1 = REGB2;
      }
      if (UNTAG_Bool(REGB1)) {
        REGB1 = TAG_Bool(true);
      } else {
        if (!once_value_13) {
          if (!once_value_14) {
            fra.me.REG[3] = BOX_NativeString("[]");
            REGB2 = TAG_Int(2);
            fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB2);
            once_value_14 = fra.me.REG[3];
            register_static_object(&once_value_14);
          } else fra.me.REG[3] = once_value_14;
          fra.me.REG[3] = fra.me.REG[3];
          fra.me.REG[3] = CALL_standard___symbol___String___to_symbol(fra.me.REG[3])(fra.me.REG[3]);
          once_value_13 = fra.me.REG[3];
          register_static_object(&once_value_13);
        } else fra.me.REG[3] = once_value_13;
        fra.me.REG[3] = fra.me.REG[3];
        REGB2 = TAG_Bool(IS_EQUAL_OO(fra.me.REG[1],fra.me.REG[3]));
        if (UNTAG_Bool(REGB2)) {
        } else {
          REGB3 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[3]);
          REGB2 = REGB3;
        }
        REGB1 = REGB2;
      }
      if (UNTAG_Bool(REGB1)) {
        REGB1 = TAG_Bool(true);
      } else {
        if (!once_value_15) {
          if (!once_value_16) {
            fra.me.REG[3] = BOX_NativeString("iterate");
            REGB2 = TAG_Int(7);
            fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB2);
            once_value_16 = fra.me.REG[3];
            register_static_object(&once_value_16);
          } else fra.me.REG[3] = once_value_16;
          fra.me.REG[3] = fra.me.REG[3];
          fra.me.REG[3] = CALL_standard___symbol___String___to_symbol(fra.me.REG[3])(fra.me.REG[3]);
          once_value_15 = fra.me.REG[3];
          register_static_object(&once_value_15);
        } else fra.me.REG[3] = once_value_15;
        fra.me.REG[3] = fra.me.REG[3];
        REGB2 = TAG_Bool(IS_EQUAL_OO(fra.me.REG[1],fra.me.REG[3]));
        if (UNTAG_Bool(REGB2)) {
        } else {
          REGB3 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[3]);
          REGB2 = REGB3;
        }
        REGB1 = REGB2;
      }
    } else {
      REGB2 = TAG_Bool(false);
      REGB1 = REGB2;
    }
    /* ./analysis//inline_methods.nit:75 */
    REGB0 = REGB1;
  }
  if (UNTAG_Bool(REGB0)) {
    REGB0 = TAG_Bool(true);
  } else {
    /* ./analysis//inline_methods.nit:78 */
    if (!once_value_17) {
      if (!once_value_18) {
        fra.me.REG[3] = BOX_NativeString("AbstractArrayRead");
        REGB1 = TAG_Int(17);
        fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB1);
        once_value_18 = fra.me.REG[3];
        register_static_object(&once_value_18);
      } else fra.me.REG[3] = once_value_18;
      fra.me.REG[3] = fra.me.REG[3];
      fra.me.REG[3] = CALL_standard___symbol___String___to_symbol(fra.me.REG[3])(fra.me.REG[3]);
      once_value_17 = fra.me.REG[3];
      register_static_object(&once_value_17);
    } else fra.me.REG[3] = once_value_17;
    fra.me.REG[3] = fra.me.REG[3];
    REGB1 = TAG_Bool(IS_EQUAL_OO(fra.me.REG[2],fra.me.REG[3]));
    if (UNTAG_Bool(REGB1)) {
    } else {
      REGB2 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[3]);
      REGB1 = REGB2;
    }
    if (UNTAG_Bool(REGB1)) {
      if (!once_value_19) {
        if (!once_value_20) {
          fra.me.REG[3] = BOX_NativeString("length");
          REGB1 = TAG_Int(6);
          fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB1);
          once_value_20 = fra.me.REG[3];
          register_static_object(&once_value_20);
        } else fra.me.REG[3] = once_value_20;
        fra.me.REG[3] = fra.me.REG[3];
        fra.me.REG[3] = CALL_standard___symbol___String___to_symbol(fra.me.REG[3])(fra.me.REG[3]);
        once_value_19 = fra.me.REG[3];
        register_static_object(&once_value_19);
      } else fra.me.REG[3] = once_value_19;
      fra.me.REG[3] = fra.me.REG[3];
      REGB1 = TAG_Bool(IS_EQUAL_OO(fra.me.REG[1],fra.me.REG[3]));
      if (UNTAG_Bool(REGB1)) {
      } else {
        REGB2 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[3]);
        REGB1 = REGB2;
      }
      if (UNTAG_Bool(REGB1)) {
        REGB1 = TAG_Bool(true);
      } else {
        if (!once_value_21) {
          if (!once_value_22) {
            fra.me.REG[3] = BOX_NativeString("[]");
            REGB2 = TAG_Int(2);
            fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB2);
            once_value_22 = fra.me.REG[3];
            register_static_object(&once_value_22);
          } else fra.me.REG[3] = once_value_22;
          fra.me.REG[3] = fra.me.REG[3];
          fra.me.REG[3] = CALL_standard___symbol___String___to_symbol(fra.me.REG[3])(fra.me.REG[3]);
          once_value_21 = fra.me.REG[3];
          register_static_object(&once_value_21);
        } else fra.me.REG[3] = once_value_21;
        fra.me.REG[3] = fra.me.REG[3];
        REGB2 = TAG_Bool(IS_EQUAL_OO(fra.me.REG[1],fra.me.REG[3]));
        if (UNTAG_Bool(REGB2)) {
        } else {
          REGB3 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[3]);
          REGB2 = REGB3;
        }
        REGB1 = REGB2;
      }
    } else {
      REGB2 = TAG_Bool(false);
      REGB1 = REGB2;
    }
    /* ./analysis//inline_methods.nit:75 */
    REGB0 = REGB1;
  }
  if (UNTAG_Bool(REGB0)) {
    REGB0 = TAG_Bool(true);
  } else {
    /* ./analysis//inline_methods.nit:79 */
    fra.me.REG[0] = CALL_metamodel___abstractmetamodel___MMLocalProperty___global(fra.me.REG[0])(fra.me.REG[0]);
    fra.me.REG[0] = CALL_metamodel___abstractmetamodel___MMGlobalProperty___intro(fra.me.REG[0])(fra.me.REG[0]);
    fra.me.REG[0] = CALL_metamodel___abstractmetamodel___MMLocalProperty___local_class(fra.me.REG[0])(fra.me.REG[0]);
    fra.me.REG[0] = CALL_metamodel___abstractmetamodel___MMLocalClass___name(fra.me.REG[0])(fra.me.REG[0]);
    if (!once_value_23) {
      if (!once_value_24) {
        fra.me.REG[3] = BOX_NativeString("Inline__");
        REGB1 = TAG_Int(8);
        fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB1);
        once_value_24 = fra.me.REG[3];
        register_static_object(&once_value_24);
      } else fra.me.REG[3] = once_value_24;
      fra.me.REG[3] = fra.me.REG[3];
      fra.me.REG[3] = CALL_standard___symbol___String___to_symbol(fra.me.REG[3])(fra.me.REG[3]);
      once_value_23 = fra.me.REG[3];
      register_static_object(&once_value_23);
    } else fra.me.REG[3] = once_value_23;
    fra.me.REG[3] = fra.me.REG[3];
    REGB1 = TAG_Bool(IS_EQUAL_OO(fra.me.REG[0],fra.me.REG[3]));
    if (UNTAG_Bool(REGB1)) {
    } else {
      REGB2 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[3]);
      REGB1 = REGB2;
    }
    /* ./analysis//inline_methods.nit:75 */
    REGB0 = REGB1;
  }
  goto label25;
  label25: while(0);
  stack_frame_head = fra.me.prev;
  return REGB0;
}
void analysis___inline_methods___IRoutine___inline_methods(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis___inline_methods;
  fra.me.line = 84;
  fra.me.meth = LOCATE_analysis___inline_methods___IRoutine___inline_methods;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* ./analysis//inline_methods.nit:86 */
  fra.me.REG[1] = NEW_InlineMethodVisitor_analysis___inline_methods___InlineMethodVisitor___init(fra.me.REG[1], fra.me.REG[0]);
  /* ./analysis//inline_methods.nit:87 */
  CALL_icode___icode_tools___ICodeVisitor___visit_iroutine(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return;
}
