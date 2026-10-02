/** Mondomatic */

#include "Heavy_DeArmondo610.hpp"

#include <new>

#define Context(_c) static_cast<Heavy_DeArmondo610 *>(_c)


/*
 * C Functions
 */

extern "C" {
  HV_EXPORT HeavyContextInterface *hv_DeArmondo610_new(double sampleRate) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_DeArmondo610));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_DeArmondo610(sampleRate);
    return Context(ptr);
  }

  HV_EXPORT HeavyContextInterface *hv_DeArmondo610_new_with_options(double sampleRate,
      int poolKb, int inQueueKb, int outQueueKb) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_DeArmondo610));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_DeArmondo610(sampleRate, poolKb, inQueueKb, outQueueKb);
    return Context(ptr);
  }

  HV_EXPORT void hv_DeArmondo610_free(HeavyContextInterface *instance) {
    // call destructor
    Context(instance)->~Heavy_DeArmondo610();
    // free memory
    hv_free(instance);
  }
} // extern "C"







/*
 * Class Functions
 */

Heavy_DeArmondo610::Heavy_DeArmondo610(double sampleRate, int poolKb, int inQueueKb, int outQueueKb)
    : HeavyContext(sampleRate, poolKb, inQueueKb, outQueueKb) {
  numBytes += sRPole_init(&sRPole_YesGgUOP);
  numBytes += sDel1_init(&sDel1_YdAGvNEr);
  numBytes += sLine_init(&sLine_RG7iNc1h);
  numBytes += sLine_init(&sLine_JU0q3cFQ);
  numBytes += sLine_init(&sLine_0jZdO376);
  numBytes += sLine_init(&sLine_r7LEgU0Y);
  numBytes += sBiquad_init(&sBiquad_s_ZW3s5Bm1);
  numBytes += sLine_init(&sLine_wP0NBA9m);
  numBytes += sLine_init(&sLine_fhsCyCCZ);
  numBytes += sLine_init(&sLine_IvdoPNmi);
  numBytes += sLine_init(&sLine_ESio21H0);
  numBytes += sLine_init(&sLine_LGUfYgPN);
  numBytes += sBiquad_init(&sBiquad_s_K2WTNYNZ);
  numBytes += sLine_init(&sLine_pe12TLXC);
  numBytes += sLine_init(&sLine_eSPpmIGJ);
  numBytes += sLine_init(&sLine_Z3SNB2ul);
  numBytes += sLine_init(&sLine_vWXddGR2);
  numBytes += sLine_init(&sLine_3zFX6gWY);
  numBytes += sBiquad_init(&sBiquad_s_pmXdn4xr);
  numBytes += cBinop_init(&cBinop_QkaX8nvi, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_dk45xhZN, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_iolKsZWN, 0.0f);
  numBytes += cVar_init_f(&cVar_gGfFz0dm, 1500.0f);
  numBytes += cVar_init_f(&cVar_WrTuu5px, 1.0f);
  numBytes += cBinop_init(&cBinop_wvx05EMO, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_e7hDkuvj, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_J3JjZzMZ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_UbZjH1rz, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_9pXPIRrj, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_6rRXIaYv, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_4eZJP2PB, 3.0f);
  numBytes += cBinop_init(&cBinop_aEvayMrL, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_cacJeWDH, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_RBk64CK5, 0.0f);
  numBytes += cBinop_init(&cBinop_xzPj9ewH, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_62cZukjg, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_domtT09M, 0.0f);
  numBytes += cVar_init_f(&cVar_9y8OmpFL, 6000.0f);
  numBytes += cVar_init_f(&cVar_eAbR69ux, 0.52f);
  numBytes += cBinop_init(&cBinop_FKJBiyfl, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_SKSSL040, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_X2mvDOaz, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_25OA0F3b, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_wQJ45YTJ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_k82a7NRb, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_MArswka4, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_57F2HP6D, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_bXlN32Bn, 0.0f);
  numBytes += cVar_init_f(&cVar_YfxcQMmj, 6000.0f);
  numBytes += cVar_init_f(&cVar_eqgbAqUF, 0.52f);
  numBytes += cBinop_init(&cBinop_Zy6Fo9qS, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_x1NprS8k, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ajO39xET, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_GjuMlJwF, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_juzSwQ1U, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_IknXE25s, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_sE1Hx9pA, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_CYOqdQn2, 0.0f);
  numBytes += cVar_init_f(&cVar_EE1EgnzF, 20.0f);
  numBytes += cBinop_init(&cBinop_jkBc2ZAY, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_jyVPemfq, 0.0f);
  numBytes += cSlice_init(&cSlice_UVcf7idu, 1, -1);
  numBytes += cSlice_init(&cSlice_qB4wTzTa, 1, -1);
  numBytes += cVar_init_f(&cVar_M1X1btE2, 0.0f);
  numBytes += cVar_init_f(&cVar_5KuxpKRv, 4.0f);
  numBytes += cVar_init_f(&cVar_JO1ZmvWT, 20.0f);
  numBytes += cVar_init_f(&cVar_4A1IIwH6, 0.0f);
  numBytes += cVar_init_f(&cVar_Tcf60p6V, 20.0f);
  numBytes += cSlice_init(&cSlice_bJP3Ky4I, 1, 1);
  numBytes += cSlice_init(&cSlice_BkgUSWdx, 0, 1);
  numBytes += cBinop_init(&cBinop_xw9Rv0lO, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_TUdblxuX, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_KXFPbnkN, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_4gIq0LyG, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_xshzef0s, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_Mr0LQUnj, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_vjmftykI, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_AF27zXCC, 0.0f); // __sub
  numBytes += cDelay_init(this, &cDelay_jkECiwzJ, 0.0f);
  numBytes += cVar_init_f(&cVar_baMdQ0Wc, 20.0f);
  numBytes += cBinop_init(&cBinop_Y9QD7s7r, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_B77hUP9z, 0.0f);
  numBytes += cSlice_init(&cSlice_6zoQHZ0I, 1, -1);
  numBytes += cSlice_init(&cSlice_GJp2IGWb, 1, -1);
  numBytes += cVar_init_f(&cVar_QB5URDyc, 0.0f);
  numBytes += cVar_init_f(&cVar_gE4L627F, 4.0f);
  numBytes += cVar_init_f(&cVar_3KLVPd3b, 20.0f);
  numBytes += cVar_init_f(&cVar_a73Gbt08, 0.0f);
  numBytes += cVar_init_f(&cVar_9hDxfFUq, 20.0f);
  numBytes += cSlice_init(&cSlice_iOq1DlDM, 1, 1);
  numBytes += cSlice_init(&cSlice_C44HTvgg, 0, 1);
  numBytes += cBinop_init(&cBinop_Rlogjs4P, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ilFk30UF, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_zDsYzfux, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_jJDY2AlA, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_8GPWrX3M, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_2w2BCMNq, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_ZkEKrw5C, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_mmMLozEp, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_yrLTC5YK, 0.0f);
  numBytes += cVar_init_f(&cVar_ElByyEk4, 0.0f);
  numBytes += cVar_init_f(&cVar_tJpVUJK0, 0.0f);
  numBytes += sVarf_init(&sVarf_cN18nVYk, 1.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_EIswnuhw, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_M1Xb3YFr, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_xrZ0XYAH, 0.0f); // __add
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_DeArmondo610::~Heavy_DeArmondo610() {
  // nothing to free
}

HvTable *Heavy_DeArmondo610::getTableForHash(hv_uint32_t tableHash) {
  return nullptr;
}

void Heavy_DeArmondo610::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x5C18FB0F: { // Emphasis
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_q9tK5JGo_sendMessage);
      break;
    }
    case 0x4980B0E2: { // Pedal
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_0qASSksN_sendMessage);
      break;
    }
    case 0x22A27CE7: { // ToneSweep
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_7VLNZRf9_sendMessage);
      break;
    }
    case 0x927FE933: { // VolumeMin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_bbWehlk8_sendMessage);
      break;
    }
    case 0xAAB7EE7E: { // 1030-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_GczMPxbd_sendMessage);
      break;
    }
    case 0xC38F8894: { // 1030-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_uZs4FwvW_sendMessage);
      break;
    }
    case 0x8AE4B94E: { // 1030-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HV9O5ipP_sendMessage);
      break;
    }
    case 0x3EFBCAA0: { // 1082-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_xTeBXKdv_sendMessage);
      break;
    }
    case 0x57D8CB52: { // 1082-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_TRLTp0Vw_sendMessage);
      break;
    }
    case 0xA7AAB40B: { // 1082-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_VRcYDHaJ_sendMessage);
      break;
    }
    case 0x7994E281: { // 1123-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_wMgYECKc_sendMessage);
      break;
    }
    case 0xB2716CDF: { // 1123-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_fIp0FVAO_sendMessage);
      break;
    }
    case 0x1FB9340E: { // 1123-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_FYIp5EIA_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dQMpRuqS_sendMessage);
      break;
    }
    case 0x540490BE: { // footpedal
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_NXRTxdw9_sendMessage);
      break;
    }
    case 0xF53AEC49: { // toneoffset
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_2soygJv4_sendMessage);
      break;
    }
    case 0xCCF73448: { // voloffset
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jwxflMvx_sendMessage);
      break;
    }
    default: return;
  }
}

int Heavy_DeArmondo610::getParameterInfo(int index, HvParameterInfo *info) {
  if (info != nullptr) {
    switch (index) {
      case 0: {
        info->name = "Emphasis";
        info->hash = 0x5C18FB0F;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 1: {
        info->name = "Pedal";
        info->hash = 0x4980B0E2;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 2: {
        info->name = "ToneSweep";
        info->hash = 0x22A27CE7;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 3: {
        info->name = "VolumeMin";
        info->hash = 0x927FE933;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.0f;
        break;
      }
      default: {
        info->name = "invalid parameter index";
        info->hash = 0;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 0.0f;
        info->defaultVal = 0.0f;
        break;
      }
    }
  }
  return 4;
}



/*
 * Send Function Implementations
 */


void Heavy_DeArmondo610::cMsg_ibAc8sI4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_RG7iNc1h, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_2NaXKI2g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_JU0q3cFQ, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_tpS6VyvF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_0jZdO376, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_vgdjzrMq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_r7LEgU0Y, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_nGaLaCvp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_6XCSelAf_sendMessage);
}

void Heavy_DeArmondo610::cSystem_6XCSelAf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QkaX8nvi, HV_BINOP_DIVIDE, 1, m, &cBinop_QkaX8nvi_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BTLd5E5y_sendMessage);
}

void Heavy_DeArmondo610::cUnop_T49zkRsX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_F7KoASf0_sendMessage);
}

void Heavy_DeArmondo610::cMsg_TyC30dgY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_T49zkRsX_sendMessage);
}

void Heavy_DeArmondo610::cBinop_F7KoASf0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QkaX8nvi, HV_BINOP_DIVIDE, 0, m, &cBinop_QkaX8nvi_sendMessage);
}

void Heavy_DeArmondo610::cCast_BTLd5E5y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TyC30dgY_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_QkaX8nvi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dk45xhZN, HV_BINOP_MULTIPLY, 1, m, &cBinop_dk45xhZN_sendMessage);
}

void Heavy_DeArmondo610::cBinop_dk45xhZN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_194zqgUv_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0GrKpQrj_sendMessage);
}

void Heavy_DeArmondo610::cUnop_geeN8rbV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_F2ixJJtv_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cUnop_0i7vKp02_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_B8zLAd5H_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_w6Wo1rdt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_bWyvdF7a_sendMessage);
}

void Heavy_DeArmondo610::cBinop_bWyvdF7a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dk45xhZN, HV_BINOP_MULTIPLY, 0, m, &cBinop_dk45xhZN_sendMessage);
}

void Heavy_DeArmondo610::cBinop_YbvRIVae_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_5c6JS06k_sendMessage);
}

void Heavy_DeArmondo610::cBinop_5c6JS06k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OdD88Ij3_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_lIqQyAob_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_e7hDkuvj, HV_BINOP_MULTIPLY, 1, m, &cBinop_e7hDkuvj_sendMessage);
}

void Heavy_DeArmondo610::cBinop_soG53KQW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J3JjZzMZ, HV_BINOP_MULTIPLY, 1, m, &cBinop_J3JjZzMZ_sendMessage);
}

void Heavy_DeArmondo610::cBinop_zjDmfbTe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_iolKsZWN, 1, m, &cVar_iolKsZWN_sendMessage);
}

void Heavy_DeArmondo610::cBinop_6NTrhA7w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UbZjH1rz, HV_BINOP_MULTIPLY, 1, m, &cBinop_UbZjH1rz_sendMessage);
}

void Heavy_DeArmondo610::cMsg_T3iReJAq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_EIEr1h0l_sendMessage);
}

void Heavy_DeArmondo610::cBinop_EIEr1h0l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9pXPIRrj, HV_BINOP_MULTIPLY, 1, m, &cBinop_9pXPIRrj_sendMessage);
}

void Heavy_DeArmondo610::cVar_iolKsZWN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PlAHsac6_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cVar_gGfFz0dm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pu6eikCK_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_w6Wo1rdt_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NlSrmQgp_sendMessage);
}

void Heavy_DeArmondo610::cVar_WrTuu5px_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_YbvRIVae_sendMessage);
}

void Heavy_DeArmondo610::cCast_194zqgUv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_geeN8rbV_sendMessage);
}

void Heavy_DeArmondo610::cCast_0GrKpQrj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_0i7vKp02_sendMessage);
}

void Heavy_DeArmondo610::cSend_F2ixJJtv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_HV9O5ipP_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cSend_B8zLAd5H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_uZs4FwvW_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cSend_yRAMgNEV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_GczMPxbd_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cMsg_OdD88Ij3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_a0F7GXKK_sendMessage);
}

void Heavy_DeArmondo610::cBinop_a0F7GXKK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wvx05EMO, HV_BINOP_MULTIPLY, 1, m, &cBinop_wvx05EMO_sendMessage);
}

void Heavy_DeArmondo610::cBinop_wvx05EMO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_nkDJpOnn_sendMessage);
}

void Heavy_DeArmondo610::cBinop_nkDJpOnn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_yRAMgNEV_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cMsg_PlAHsac6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_op6xj9DK_sendMessage);
}

void Heavy_DeArmondo610::cBinop_op6xj9DK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dspJZwD6_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_e08vW7kZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TB4C0sGQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qYd9iFrw_sendMessage);
}

void Heavy_DeArmondo610::cBinop_e7hDkuvj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ibAc8sI4_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_J3JjZzMZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2NaXKI2g_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_UbZjH1rz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tpS6VyvF_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_9pXPIRrj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vgdjzrMq_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_LyNfoDwj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_gGfFz0dm, 0, m, &cVar_gGfFz0dm_sendMessage);
}

void Heavy_DeArmondo610::cCast_eFrx2lrI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WrTuu5px, 1, m, &cVar_WrTuu5px_sendMessage);
}

void Heavy_DeArmondo610::cCast_NlSrmQgp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_iolKsZWN, 0, m, &cVar_iolKsZWN_sendMessage);
}

void Heavy_DeArmondo610::cCast_pu6eikCK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WrTuu5px, 0, m, &cVar_WrTuu5px_sendMessage);
}

void Heavy_DeArmondo610::cCast_qYd9iFrw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_e7hDkuvj, HV_BINOP_MULTIPLY, 0, m, &cBinop_e7hDkuvj_sendMessage);
}

void Heavy_DeArmondo610::cCast_TB4C0sGQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J3JjZzMZ, HV_BINOP_MULTIPLY, 0, m, &cBinop_J3JjZzMZ_sendMessage);
}

void Heavy_DeArmondo610::cCast_e08vW7kZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UbZjH1rz, HV_BINOP_MULTIPLY, 0, m, &cBinop_UbZjH1rz_sendMessage);
}

void Heavy_DeArmondo610::cCast_dspJZwD6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9pXPIRrj, HV_BINOP_MULTIPLY, 0, m, &cBinop_9pXPIRrj_sendMessage);
}

void Heavy_DeArmondo610::cBinop_0y1OKiwQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_kEbTkRZx_sendMessage);
}

void Heavy_DeArmondo610::cBinop_kEbTkRZx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Ip6gY18c_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_KnjyEWuF_sendMessage);
}

void Heavy_DeArmondo610::cVar_4eZJP2PB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_nA4GED2p_sendMessage);
}

void Heavy_DeArmondo610::cMsg_bvF00zqi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BNqeNdGO_sendMessage);
}

void Heavy_DeArmondo610::cSystem_BNqeNdGO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aEvayMrL, HV_BINOP_DIVIDE, 1, m, &cBinop_aEvayMrL_sendMessage);
}

void Heavy_DeArmondo610::cBinop_Ip6gY18c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_JcwPRLUH_sendMessage);
}

void Heavy_DeArmondo610::cBinop_JcwPRLUH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_cacJeWDH, m);
}

void Heavy_DeArmondo610::cMsg_71IcMDyL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_OPGuCbaW_sendMessage);
}

void Heavy_DeArmondo610::cBinop_OPGuCbaW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_0y1OKiwQ_sendMessage);
}

void Heavy_DeArmondo610::cBinop_KnjyEWuF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_6rRXIaYv, m);
}

void Heavy_DeArmondo610::cBinop_nA4GED2p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_SG367RHT_sendMessage);
}

void Heavy_DeArmondo610::cBinop_SG367RHT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aEvayMrL, HV_BINOP_DIVIDE, 0, m, &cBinop_aEvayMrL_sendMessage);
}

void Heavy_DeArmondo610::cBinop_aEvayMrL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_71IcMDyL_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cVar_RBk64CK5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_DeArmondo610::cMsg_SvjF01Ry_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_wP0NBA9m, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_UtOmNvrf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_fhsCyCCZ, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_DVR8ZTOi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_IvdoPNmi, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_Q5LGjP9s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ESio21H0, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_iiPcK6iI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_LGUfYgPN, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_RLkBNTU3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_YHoVC904_sendMessage);
}

void Heavy_DeArmondo610::cSystem_YHoVC904_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xzPj9ewH, HV_BINOP_DIVIDE, 1, m, &cBinop_xzPj9ewH_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_m12lKK3r_sendMessage);
}

void Heavy_DeArmondo610::cUnop_2jWpitlR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_th0UKfUk_sendMessage);
}

void Heavy_DeArmondo610::cMsg_2c9WEzyw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_2jWpitlR_sendMessage);
}

void Heavy_DeArmondo610::cBinop_th0UKfUk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xzPj9ewH, HV_BINOP_DIVIDE, 0, m, &cBinop_xzPj9ewH_sendMessage);
}

void Heavy_DeArmondo610::cCast_m12lKK3r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2c9WEzyw_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_xzPj9ewH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_62cZukjg, HV_BINOP_MULTIPLY, 1, m, &cBinop_62cZukjg_sendMessage);
}

void Heavy_DeArmondo610::cBinop_62cZukjg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YWSd7ce4_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_DJL5NUeh_sendMessage);
}

void Heavy_DeArmondo610::cUnop_X6EQs84p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_oHq0ZN3I_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cUnop_JmRLOAfP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_znNTnENy_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_AsFLhwUE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_h8XW9AVS_sendMessage);
}

void Heavy_DeArmondo610::cBinop_h8XW9AVS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_62cZukjg, HV_BINOP_MULTIPLY, 0, m, &cBinop_62cZukjg_sendMessage);
}

void Heavy_DeArmondo610::cBinop_0npyXMt1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_miVN89gx_sendMessage);
}

void Heavy_DeArmondo610::cBinop_miVN89gx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vfegZkXu_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_7pxirQIx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SKSSL040, HV_BINOP_MULTIPLY, 1, m, &cBinop_SKSSL040_sendMessage);
}

void Heavy_DeArmondo610::cMsg_SxdxgfFE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_x7vLP1rb_sendMessage);
}

void Heavy_DeArmondo610::cBinop_x7vLP1rb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_7pxirQIx_sendMessage);
}

void Heavy_DeArmondo610::cMsg_EyVYiFqH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_83wmxcoK_sendMessage);
}

void Heavy_DeArmondo610::cBinop_83wmxcoK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_X2mvDOaz, HV_BINOP_MULTIPLY, 1, m, &cBinop_X2mvDOaz_sendMessage);
}

void Heavy_DeArmondo610::cBinop_4UDqhOjY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_25OA0F3b, HV_BINOP_MULTIPLY, 1, m, &cBinop_25OA0F3b_sendMessage);
}

void Heavy_DeArmondo610::cMsg_FSOXXmUz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_aWLk8hbc_sendMessage);
}

void Heavy_DeArmondo610::cBinop_aWLk8hbc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_4UDqhOjY_sendMessage);
}

void Heavy_DeArmondo610::cBinop_Kl8gIZSl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_domtT09M, 1, m, &cVar_domtT09M_sendMessage);
}

void Heavy_DeArmondo610::cBinop_5MMx6wEm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wQJ45YTJ, HV_BINOP_MULTIPLY, 1, m, &cBinop_wQJ45YTJ_sendMessage);
}

void Heavy_DeArmondo610::cMsg_wfVr0Sx0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_6OA9GWUK_sendMessage);
}

void Heavy_DeArmondo610::cBinop_6OA9GWUK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k82a7NRb, HV_BINOP_MULTIPLY, 1, m, &cBinop_k82a7NRb_sendMessage);
}

void Heavy_DeArmondo610::cVar_domtT09M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_H9rUn0Dr_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cVar_9y8OmpFL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qx2C9IVU_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_AsFLhwUE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7r2Zd8HV_sendMessage);
}

void Heavy_DeArmondo610::cVar_eAbR69ux_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_0npyXMt1_sendMessage);
}

void Heavy_DeArmondo610::cCast_DJL5NUeh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_JmRLOAfP_sendMessage);
}

void Heavy_DeArmondo610::cCast_YWSd7ce4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_X6EQs84p_sendMessage);
}

void Heavy_DeArmondo610::cSend_oHq0ZN3I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_VRcYDHaJ_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cSend_znNTnENy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_TRLTp0Vw_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cSend_MrxAshFX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_xTeBXKdv_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cMsg_vfegZkXu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_uN2wfzZd_sendMessage);
}

void Heavy_DeArmondo610::cBinop_uN2wfzZd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FKJBiyfl, HV_BINOP_MULTIPLY, 1, m, &cBinop_FKJBiyfl_sendMessage);
}

void Heavy_DeArmondo610::cBinop_FKJBiyfl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_QAt4N8Js_sendMessage);
}

void Heavy_DeArmondo610::cBinop_QAt4N8Js_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_MrxAshFX_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cMsg_H9rUn0Dr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_SZFpXE7V_sendMessage);
}

void Heavy_DeArmondo610::cBinop_SZFpXE7V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1v1apkHX_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Z5WcZ84i_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7aE6hxjg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kO70kUxS_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gWLvns7F_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tnt3Hpco_sendMessage);
}

void Heavy_DeArmondo610::cBinop_SKSSL040_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SvjF01Ry_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_X2mvDOaz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UtOmNvrf_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_25OA0F3b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DVR8ZTOi_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_wQJ45YTJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Q5LGjP9s_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_k82a7NRb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iiPcK6iI_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_xr6Wlslb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9y8OmpFL, 0, m, &cVar_9y8OmpFL_sendMessage);
}

void Heavy_DeArmondo610::cCast_uamuzMoV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_eAbR69ux, 1, m, &cVar_eAbR69ux_sendMessage);
}

void Heavy_DeArmondo610::cCast_kO70kUxS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_25OA0F3b, HV_BINOP_MULTIPLY, 0, m, &cBinop_25OA0F3b_sendMessage);
}

void Heavy_DeArmondo610::cCast_tnt3Hpco_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SKSSL040, HV_BINOP_MULTIPLY, 0, m, &cBinop_SKSSL040_sendMessage);
}

void Heavy_DeArmondo610::cCast_gWLvns7F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_X2mvDOaz, HV_BINOP_MULTIPLY, 0, m, &cBinop_X2mvDOaz_sendMessage);
}

void Heavy_DeArmondo610::cCast_Z5WcZ84i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k82a7NRb, HV_BINOP_MULTIPLY, 0, m, &cBinop_k82a7NRb_sendMessage);
}

void Heavy_DeArmondo610::cCast_7aE6hxjg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wQJ45YTJ, HV_BINOP_MULTIPLY, 0, m, &cBinop_wQJ45YTJ_sendMessage);
}

void Heavy_DeArmondo610::cCast_1v1apkHX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_DeArmondo610::cCast_qx2C9IVU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_eAbR69ux, 0, m, &cVar_eAbR69ux_sendMessage);
}

void Heavy_DeArmondo610::cCast_7r2Zd8HV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_domtT09M, 0, m, &cVar_domtT09M_sendMessage);
}

void Heavy_DeArmondo610::cMsg_fDk545QO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_pe12TLXC, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_WCxX1Yq2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_eSPpmIGJ, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_G8rqCBul_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Z3SNB2ul, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_5jhITf4O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_vWXddGR2, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_XmvO31fH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_3zFX6gWY, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_tD3pauSZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_rPt8fxzY_sendMessage);
}

void Heavy_DeArmondo610::cSystem_rPt8fxzY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MArswka4, HV_BINOP_DIVIDE, 1, m, &cBinop_MArswka4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vpsJByp3_sendMessage);
}

void Heavy_DeArmondo610::cUnop_7p64I2mW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_0HYvsPww_sendMessage);
}

void Heavy_DeArmondo610::cMsg_47Z3ykh1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_7p64I2mW_sendMessage);
}

void Heavy_DeArmondo610::cBinop_0HYvsPww_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MArswka4, HV_BINOP_DIVIDE, 0, m, &cBinop_MArswka4_sendMessage);
}

void Heavy_DeArmondo610::cCast_vpsJByp3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_47Z3ykh1_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_MArswka4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_57F2HP6D, HV_BINOP_MULTIPLY, 1, m, &cBinop_57F2HP6D_sendMessage);
}

void Heavy_DeArmondo610::cBinop_57F2HP6D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tD99ueDq_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2JGBzhNO_sendMessage);
}

void Heavy_DeArmondo610::cUnop_AYj6GVw7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_MJKTv0rP_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cUnop_qW4KKbwR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_YMywvVQl_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_alBHzhXn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_QYcNP4L0_sendMessage);
}

void Heavy_DeArmondo610::cBinop_QYcNP4L0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_57F2HP6D, HV_BINOP_MULTIPLY, 0, m, &cBinop_57F2HP6D_sendMessage);
}

void Heavy_DeArmondo610::cBinop_gC1bOJjN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_NM97Tk4A_sendMessage);
}

void Heavy_DeArmondo610::cBinop_NM97Tk4A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WhPj2tyL_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_74SiTy2N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_x1NprS8k, HV_BINOP_MULTIPLY, 1, m, &cBinop_x1NprS8k_sendMessage);
}

void Heavy_DeArmondo610::cMsg_LkbRaMT4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_S873RPP3_sendMessage);
}

void Heavy_DeArmondo610::cBinop_S873RPP3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_74SiTy2N_sendMessage);
}

void Heavy_DeArmondo610::cMsg_MpXArC5k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_81HXfgny_sendMessage);
}

void Heavy_DeArmondo610::cBinop_81HXfgny_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ajO39xET, HV_BINOP_MULTIPLY, 1, m, &cBinop_ajO39xET_sendMessage);
}

void Heavy_DeArmondo610::cBinop_okuVQsIK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GjuMlJwF, HV_BINOP_MULTIPLY, 1, m, &cBinop_GjuMlJwF_sendMessage);
}

void Heavy_DeArmondo610::cMsg_JkpthQ1w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_kvyxwhtj_sendMessage);
}

void Heavy_DeArmondo610::cBinop_kvyxwhtj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_okuVQsIK_sendMessage);
}

void Heavy_DeArmondo610::cBinop_TA58Paz7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bXlN32Bn, 1, m, &cVar_bXlN32Bn_sendMessage);
}

void Heavy_DeArmondo610::cBinop_vohOND6k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_juzSwQ1U, HV_BINOP_MULTIPLY, 1, m, &cBinop_juzSwQ1U_sendMessage);
}

void Heavy_DeArmondo610::cMsg_OlS4wU7p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_SCtMdJ0i_sendMessage);
}

void Heavy_DeArmondo610::cBinop_SCtMdJ0i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IknXE25s, HV_BINOP_MULTIPLY, 1, m, &cBinop_IknXE25s_sendMessage);
}

void Heavy_DeArmondo610::cVar_bXlN32Bn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sMVMQyay_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cVar_YfxcQMmj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_b6Tzf6g8_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_alBHzhXn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pQALY3Ch_sendMessage);
}

void Heavy_DeArmondo610::cVar_eqgbAqUF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_gC1bOJjN_sendMessage);
}

void Heavy_DeArmondo610::cCast_tD99ueDq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_AYj6GVw7_sendMessage);
}

void Heavy_DeArmondo610::cCast_2JGBzhNO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_qW4KKbwR_sendMessage);
}

void Heavy_DeArmondo610::cSend_MJKTv0rP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_FYIp5EIA_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cSend_YMywvVQl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_fIp0FVAO_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cSend_Gxouw1Td_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_wMgYECKc_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cMsg_WhPj2tyL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_pnfx0uFA_sendMessage);
}

void Heavy_DeArmondo610::cBinop_pnfx0uFA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Zy6Fo9qS, HV_BINOP_MULTIPLY, 1, m, &cBinop_Zy6Fo9qS_sendMessage);
}

void Heavy_DeArmondo610::cBinop_Zy6Fo9qS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_bNeqsg8e_sendMessage);
}

void Heavy_DeArmondo610::cBinop_bNeqsg8e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_Gxouw1Td_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cMsg_sMVMQyay_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_88UpINYT_sendMessage);
}

void Heavy_DeArmondo610::cBinop_88UpINYT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_44yqlhm1_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_UvoOgL4H_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_glndyNXh_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mzdG8QPX_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6piFiTns_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_w5xI5ZRE_sendMessage);
}

void Heavy_DeArmondo610::cBinop_x1NprS8k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fDk545QO_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_ajO39xET_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WCxX1Yq2_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_GjuMlJwF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_G8rqCBul_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_juzSwQ1U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5jhITf4O_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_IknXE25s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XmvO31fH_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_BDFZR6ZK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_eqgbAqUF, 1, m, &cVar_eqgbAqUF_sendMessage);
}

void Heavy_DeArmondo610::cCast_S2mE3b0D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YfxcQMmj, 0, m, &cVar_YfxcQMmj_sendMessage);
}

void Heavy_DeArmondo610::cCast_w5xI5ZRE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_x1NprS8k, HV_BINOP_MULTIPLY, 0, m, &cBinop_x1NprS8k_sendMessage);
}

void Heavy_DeArmondo610::cCast_UvoOgL4H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IknXE25s, HV_BINOP_MULTIPLY, 0, m, &cBinop_IknXE25s_sendMessage);
}

void Heavy_DeArmondo610::cCast_6piFiTns_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ajO39xET, HV_BINOP_MULTIPLY, 0, m, &cBinop_ajO39xET_sendMessage);
}

void Heavy_DeArmondo610::cCast_44yqlhm1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_DeArmondo610::cCast_glndyNXh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_juzSwQ1U, HV_BINOP_MULTIPLY, 0, m, &cBinop_juzSwQ1U_sendMessage);
}

void Heavy_DeArmondo610::cCast_mzdG8QPX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GjuMlJwF, HV_BINOP_MULTIPLY, 0, m, &cBinop_GjuMlJwF_sendMessage);
}

void Heavy_DeArmondo610::cCast_pQALY3Ch_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bXlN32Bn, 0, m, &cVar_bXlN32Bn_sendMessage);
}

void Heavy_DeArmondo610::cCast_b6Tzf6g8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_eqgbAqUF, 0, m, &cVar_eqgbAqUF_sendMessage);
}

void Heavy_DeArmondo610::cMsg_aJO95iAo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Mn4A0Ipa_sendMessage);
}

void Heavy_DeArmondo610::cSystem_Mn4A0Ipa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TUdblxuX, HV_BINOP_MULTIPLY, 1, m, &cBinop_TUdblxuX_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_xw9Rv0lO, HV_BINOP_MULTIPLY, 1, m, &cBinop_xw9Rv0lO_sendMessage);
}

void Heavy_DeArmondo610::cSwitchcase_GgoCB1BF_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_PloATMYU_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_PloATMYU_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9UsR2dbA_sendMessage);
      break;
    }
  }
}

void Heavy_DeArmondo610::cDelay_CYOqdQn2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_CYOqdQn2, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_CYOqdQn2, 0, m, &cDelay_CYOqdQn2_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_jyVPemfq, 0, m, &cVar_jyVPemfq_sendMessage);
}

void Heavy_DeArmondo610::cCast_9UsR2dbA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PloATMYU_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_CYOqdQn2, 0, m, &cDelay_CYOqdQn2_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_jyVPemfq, 0, m, &cVar_jyVPemfq_sendMessage);
}

void Heavy_DeArmondo610::cMsg_JZ0dH7Nu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_m9KZmITC_sendMessage);
}

void Heavy_DeArmondo610::cSystem_m9KZmITC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_JSrK2UBW_sendMessage);
}

void Heavy_DeArmondo610::cVar_EE1EgnzF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jkBc2ZAY, HV_BINOP_MULTIPLY, 0, m, &cBinop_jkBc2ZAY_sendMessage);
}

void Heavy_DeArmondo610::cMsg_PloATMYU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_CYOqdQn2, 0, m, &cDelay_CYOqdQn2_sendMessage);
}

void Heavy_DeArmondo610::cBinop_f3lYAkkl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_CYOqdQn2, 2, m, &cDelay_CYOqdQn2_sendMessage);
}

void Heavy_DeArmondo610::cBinop_JSrK2UBW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jkBc2ZAY, HV_BINOP_MULTIPLY, 1, m, &cBinop_jkBc2ZAY_sendMessage);
}

void Heavy_DeArmondo610::cBinop_jkBc2ZAY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_f3lYAkkl_sendMessage);
}

void Heavy_DeArmondo610::cVar_jyVPemfq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KXFPbnkN, HV_BINOP_SUBTRACT, 0, m, &cBinop_KXFPbnkN_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_0l9JX8Lu_sendMessage);
}

void Heavy_DeArmondo610::cSwitchcase_jm60M47o_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8kC92MA3_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZA98e4Ps_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_DeArmondo610::cCast_8kC92MA3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Tcf60p6V, 0, m, &cVar_Tcf60p6V_sendMessage);
}

void Heavy_DeArmondo610::cCast_ZA98e4Ps_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_co3XDqdt_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9MpYqnPY_sendMessage);
}

void Heavy_DeArmondo610::cSwitchcase_IThBhHsN_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_UVcf7idu, 0, m, &cSlice_UVcf7idu_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_qB4wTzTa, 0, m, &cSlice_qB4wTzTa_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xbVik2iy_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_bJP3Ky4I, 0, m, &cSlice_bJP3Ky4I_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_BkgUSWdx, 0, m, &cSlice_BkgUSWdx_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oJGseYd0_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NEPyqdvw_sendMessage);
      break;
    }
  }
}

void Heavy_DeArmondo610::cSlice_UVcf7idu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_w1JHAPti_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_w1JHAPti_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_DeArmondo610::cSlice_qB4wTzTa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_d6QKfOLy_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OBHpqGt3_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_d6QKfOLy_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OBHpqGt3_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_DeArmondo610::cVar_M1X1btE2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_alr5k3jx_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4nnJqXig_sendMessage);
}

void Heavy_DeArmondo610::cVar_5KuxpKRv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_214Ay9F2_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DeArmondo610::cSwitchcase_214Ay9F2_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iKantOVi_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_TUdblxuX, HV_BINOP_MULTIPLY, 0, m, &cBinop_TUdblxuX_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_xshzef0s, HV_BINOP_DIVIDE, 1, m, &cBinop_xshzef0s_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_EE1EgnzF, 0, m, &cVar_EE1EgnzF_sendMessage);
      break;
    }
  }
}

void Heavy_DeArmondo610::cCast_iKantOVi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9EGF00gU_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cVar_JO1ZmvWT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AF27zXCC, HV_BINOP_SUBTRACT, 1, m, &cBinop_AF27zXCC_sendMessage);
}

void Heavy_DeArmondo610::cVar_4A1IIwH6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Tcf60p6V, 0, m, &cVar_Tcf60p6V_sendMessage);
}

void Heavy_DeArmondo610::cVar_Tcf60p6V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4gIq0LyG, HV_BINOP_ADD, 0, m, &cBinop_4gIq0LyG_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_vjmftykI, HV_BINOP_ADD, 0, m, &cBinop_vjmftykI_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_M1Xb3YFr, HV_BINOP_ADD, 0, m, &cBinop_M1Xb3YFr_sendMessage);
}

void Heavy_DeArmondo610::cSlice_bJP3Ky4I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_alr5k3jx_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4nnJqXig_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_DeArmondo610::cSlice_BkgUSWdx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kVzBDlWT_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_eFbHMIp6_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_DeArmondo610::cBinop_eHRShi44_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jyVPemfq, 1, m, &cVar_jyVPemfq_sendMessage);
}

void Heavy_DeArmondo610::cBinop_xw9Rv0lO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_eHRShi44_sendMessage);
}

void Heavy_DeArmondo610::cBinop_TUdblxuX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Sfc8KcKK_sendMessage);
}

void Heavy_DeArmondo610::cBinop_Sfc8KcKK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KXFPbnkN, HV_BINOP_SUBTRACT, 1, m, &cBinop_KXFPbnkN_sendMessage);
}

void Heavy_DeArmondo610::cBinop_KXFPbnkN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jyVPemfq, 1, m, &cVar_jyVPemfq_sendMessage);
}

void Heavy_DeArmondo610::cMsg_ue99Y3kY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_GgoCB1BF_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_TvLjI6kz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_GgoCB1BF_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_vjmftykI, HV_BINOP_ADD, 1, m, &cBinop_vjmftykI_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_4gIq0LyG, HV_BINOP_ADD, 1, m, &cBinop_4gIq0LyG_sendMessage);
}

void Heavy_DeArmondo610::cBinop_0l9JX8Lu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_jm60M47o_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DeArmondo610::cBinop_4gIq0LyG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Tcf60p6V, 1, m, &cVar_Tcf60p6V_sendMessage);
}

void Heavy_DeArmondo610::cBinop_xshzef0s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Mr0LQUnj, HV_BINOP_DIVIDE, 1, m, &cBinop_Mr0LQUnj_sendMessage);
}

void Heavy_DeArmondo610::cBinop_Mr0LQUnj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vjmftykI, HV_BINOP_ADD, 1, m, &cBinop_vjmftykI_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_4gIq0LyG, HV_BINOP_ADD, 1, m, &cBinop_4gIq0LyG_sendMessage);
}

void Heavy_DeArmondo610::cCast_4nnJqXig_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xshzef0s, HV_BINOP_DIVIDE, 0, m, &cBinop_xshzef0s_sendMessage);
}

void Heavy_DeArmondo610::cCast_alr5k3jx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xw9Rv0lO, HV_BINOP_MULTIPLY, 0, m, &cBinop_xw9Rv0lO_sendMessage);
}

void Heavy_DeArmondo610::cCast_eFbHMIp6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AF27zXCC, HV_BINOP_SUBTRACT, 0, m, &cBinop_AF27zXCC_sendMessage);
}

void Heavy_DeArmondo610::cCast_kVzBDlWT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4A1IIwH6, 1, m, &cVar_4A1IIwH6_sendMessage);
}

void Heavy_DeArmondo610::cCast_9MpYqnPY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4A1IIwH6, 0, m, &cVar_4A1IIwH6_sendMessage);
}

void Heavy_DeArmondo610::cCast_co3XDqdt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TvLjI6kz_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_vjmftykI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JO1ZmvWT, 0, m, &cVar_JO1ZmvWT_sendMessage);
}

void Heavy_DeArmondo610::cMsg_w1JHAPti_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_GgoCB1BF_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_l0sSAHGG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_M1X1btE2, 1, m, &cVar_M1X1btE2_sendMessage);
}

void Heavy_DeArmondo610::cMsg_9EGF00gU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_TUdblxuX, HV_BINOP_MULTIPLY, 0, m, &cBinop_TUdblxuX_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_xshzef0s, HV_BINOP_DIVIDE, 1, m, &cBinop_xshzef0s_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_EE1EgnzF, 0, m, &cVar_EE1EgnzF_sendMessage);
}

void Heavy_DeArmondo610::cCast_d6QKfOLy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_w1JHAPti_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_OBHpqGt3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_M3RKxis0_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_vjmftykI, HV_BINOP_ADD, 0, m, &cBinop_vjmftykI_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Tcf60p6V, 1, m, &cVar_Tcf60p6V_sendMessage);
}

void Heavy_DeArmondo610::cBinop_AF27zXCC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Mr0LQUnj, HV_BINOP_DIVIDE, 0, m, &cBinop_Mr0LQUnj_sendMessage);
}

void Heavy_DeArmondo610::cCast_M3RKxis0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TvLjI6kz_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_NEPyqdvw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_l0sSAHGG_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_oJGseYd0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ue99Y3kY_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_xbVik2iy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_M1X1btE2, 0, m, &cVar_M1X1btE2_sendMessage);
}

void Heavy_DeArmondo610::cMsg_az688FC8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_hvWCerxa_sendMessage);
}

void Heavy_DeArmondo610::cSystem_hvWCerxa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ilFk30UF, HV_BINOP_MULTIPLY, 1, m, &cBinop_ilFk30UF_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Rlogjs4P, HV_BINOP_MULTIPLY, 1, m, &cBinop_Rlogjs4P_sendMessage);
}

void Heavy_DeArmondo610::cSwitchcase_GiDFJQx6_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_EmhbNNf2_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_EmhbNNf2_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uCDsn2Px_sendMessage);
      break;
    }
  }
}

void Heavy_DeArmondo610::cDelay_jkECiwzJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_jkECiwzJ, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_jkECiwzJ, 0, m, &cDelay_jkECiwzJ_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_B77hUP9z, 0, m, &cVar_B77hUP9z_sendMessage);
}

void Heavy_DeArmondo610::cCast_uCDsn2Px_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EmhbNNf2_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_jkECiwzJ, 0, m, &cDelay_jkECiwzJ_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_B77hUP9z, 0, m, &cVar_B77hUP9z_sendMessage);
}

void Heavy_DeArmondo610::cMsg_Q8Mns5ww_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_12OGtY9i_sendMessage);
}

void Heavy_DeArmondo610::cSystem_12OGtY9i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_XgmgeQbk_sendMessage);
}

void Heavy_DeArmondo610::cVar_baMdQ0Wc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Y9QD7s7r, HV_BINOP_MULTIPLY, 0, m, &cBinop_Y9QD7s7r_sendMessage);
}

void Heavy_DeArmondo610::cMsg_EmhbNNf2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_jkECiwzJ, 0, m, &cDelay_jkECiwzJ_sendMessage);
}

void Heavy_DeArmondo610::cBinop_V6CD8tME_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_jkECiwzJ, 2, m, &cDelay_jkECiwzJ_sendMessage);
}

void Heavy_DeArmondo610::cBinop_XgmgeQbk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Y9QD7s7r, HV_BINOP_MULTIPLY, 1, m, &cBinop_Y9QD7s7r_sendMessage);
}

void Heavy_DeArmondo610::cBinop_Y9QD7s7r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_V6CD8tME_sendMessage);
}

void Heavy_DeArmondo610::cVar_B77hUP9z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zDsYzfux, HV_BINOP_SUBTRACT, 0, m, &cBinop_zDsYzfux_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_J1SY10zY_sendMessage);
}

void Heavy_DeArmondo610::cSwitchcase_LciiDc9k_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_INokwpZW_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qf0b5war_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_DeArmondo610::cCast_INokwpZW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9hDxfFUq, 0, m, &cVar_9hDxfFUq_sendMessage);
}

void Heavy_DeArmondo610::cCast_qf0b5war_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qNujzWIg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k1EIknf9_sendMessage);
}

void Heavy_DeArmondo610::cSwitchcase_X7mr3Eoi_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_6zoQHZ0I, 0, m, &cSlice_6zoQHZ0I_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_GJp2IGWb, 0, m, &cSlice_GJp2IGWb_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9FsWP10L_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_iOq1DlDM, 0, m, &cSlice_iOq1DlDM_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_C44HTvgg, 0, m, &cSlice_C44HTvgg_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aMF7PZBG_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_M5aujGBv_sendMessage);
      break;
    }
  }
}

void Heavy_DeArmondo610::cSlice_6zoQHZ0I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_C7ap9d2f_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_C7ap9d2f_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_DeArmondo610::cSlice_GJp2IGWb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_64saYHmD_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_n9GzENNS_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_64saYHmD_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_n9GzENNS_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_DeArmondo610::cVar_QB5URDyc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3f7TBWZD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_w95DPuWQ_sendMessage);
}

void Heavy_DeArmondo610::cVar_gE4L627F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_9wh66raz_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DeArmondo610::cSwitchcase_9wh66raz_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oA0hJOFz_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_ilFk30UF, HV_BINOP_MULTIPLY, 0, m, &cBinop_ilFk30UF_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_8GPWrX3M, HV_BINOP_DIVIDE, 1, m, &cBinop_8GPWrX3M_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_baMdQ0Wc, 0, m, &cVar_baMdQ0Wc_sendMessage);
      break;
    }
  }
}

void Heavy_DeArmondo610::cCast_oA0hJOFz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9Sssgwhf_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cVar_3KLVPd3b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mmMLozEp, HV_BINOP_SUBTRACT, 1, m, &cBinop_mmMLozEp_sendMessage);
}

void Heavy_DeArmondo610::cVar_a73Gbt08_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9hDxfFUq, 0, m, &cVar_9hDxfFUq_sendMessage);
}

void Heavy_DeArmondo610::cVar_9hDxfFUq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jJDY2AlA, HV_BINOP_ADD, 0, m, &cBinop_jJDY2AlA_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZkEKrw5C, HV_BINOP_ADD, 0, m, &cBinop_ZkEKrw5C_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_xrZ0XYAH, HV_BINOP_ADD, 0, m, &cBinop_xrZ0XYAH_sendMessage);
}

void Heavy_DeArmondo610::cSlice_iOq1DlDM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3f7TBWZD_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_w95DPuWQ_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_DeArmondo610::cSlice_C44HTvgg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lwLwhbp5_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MWI35sgk_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_DeArmondo610::cBinop_3YVdHAMY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_B77hUP9z, 1, m, &cVar_B77hUP9z_sendMessage);
}

void Heavy_DeArmondo610::cBinop_Rlogjs4P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_3YVdHAMY_sendMessage);
}

void Heavy_DeArmondo610::cBinop_ilFk30UF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_f7BfkyBr_sendMessage);
}

void Heavy_DeArmondo610::cBinop_f7BfkyBr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zDsYzfux, HV_BINOP_SUBTRACT, 1, m, &cBinop_zDsYzfux_sendMessage);
}

void Heavy_DeArmondo610::cBinop_zDsYzfux_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_B77hUP9z, 1, m, &cVar_B77hUP9z_sendMessage);
}

void Heavy_DeArmondo610::cMsg_gA89Dp2N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_GiDFJQx6_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_pVQjCkid_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_GiDFJQx6_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZkEKrw5C, HV_BINOP_ADD, 1, m, &cBinop_ZkEKrw5C_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_jJDY2AlA, HV_BINOP_ADD, 1, m, &cBinop_jJDY2AlA_sendMessage);
}

void Heavy_DeArmondo610::cBinop_J1SY10zY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_LciiDc9k_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DeArmondo610::cBinop_jJDY2AlA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9hDxfFUq, 1, m, &cVar_9hDxfFUq_sendMessage);
}

void Heavy_DeArmondo610::cBinop_8GPWrX3M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2w2BCMNq, HV_BINOP_DIVIDE, 1, m, &cBinop_2w2BCMNq_sendMessage);
}

void Heavy_DeArmondo610::cBinop_2w2BCMNq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZkEKrw5C, HV_BINOP_ADD, 1, m, &cBinop_ZkEKrw5C_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_jJDY2AlA, HV_BINOP_ADD, 1, m, &cBinop_jJDY2AlA_sendMessage);
}

void Heavy_DeArmondo610::cCast_w95DPuWQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8GPWrX3M, HV_BINOP_DIVIDE, 0, m, &cBinop_8GPWrX3M_sendMessage);
}

void Heavy_DeArmondo610::cCast_3f7TBWZD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Rlogjs4P, HV_BINOP_MULTIPLY, 0, m, &cBinop_Rlogjs4P_sendMessage);
}

void Heavy_DeArmondo610::cCast_lwLwhbp5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_a73Gbt08, 1, m, &cVar_a73Gbt08_sendMessage);
}

void Heavy_DeArmondo610::cCast_MWI35sgk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mmMLozEp, HV_BINOP_SUBTRACT, 0, m, &cBinop_mmMLozEp_sendMessage);
}

void Heavy_DeArmondo610::cCast_k1EIknf9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_a73Gbt08, 0, m, &cVar_a73Gbt08_sendMessage);
}

void Heavy_DeArmondo610::cCast_qNujzWIg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pVQjCkid_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_ZkEKrw5C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3KLVPd3b, 0, m, &cVar_3KLVPd3b_sendMessage);
}

void Heavy_DeArmondo610::cMsg_C7ap9d2f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_GiDFJQx6_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_sgo9a43j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_QB5URDyc, 1, m, &cVar_QB5URDyc_sendMessage);
}

void Heavy_DeArmondo610::cMsg_9Sssgwhf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ilFk30UF, HV_BINOP_MULTIPLY, 0, m, &cBinop_ilFk30UF_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_8GPWrX3M, HV_BINOP_DIVIDE, 1, m, &cBinop_8GPWrX3M_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_baMdQ0Wc, 0, m, &cVar_baMdQ0Wc_sendMessage);
}

void Heavy_DeArmondo610::cCast_n9GzENNS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fpEDEadH_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZkEKrw5C, HV_BINOP_ADD, 0, m, &cBinop_ZkEKrw5C_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_9hDxfFUq, 1, m, &cVar_9hDxfFUq_sendMessage);
}

void Heavy_DeArmondo610::cCast_64saYHmD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_C7ap9d2f_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_mmMLozEp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2w2BCMNq, HV_BINOP_DIVIDE, 0, m, &cBinop_2w2BCMNq_sendMessage);
}

void Heavy_DeArmondo610::cCast_fpEDEadH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pVQjCkid_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_M5aujGBv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sgo9a43j_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_9FsWP10L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_QB5URDyc, 0, m, &cVar_QB5URDyc_sendMessage);
}

void Heavy_DeArmondo610::cCast_aMF7PZBG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gA89Dp2N_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_CY1Wkaj5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_AERBaP9z_sendMessage);
}

void Heavy_DeArmondo610::cBinop_AERBaP9z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PO3pIZH5_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_t8RvmQCe_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PWx9uxnM_sendMessage);
}

void Heavy_DeArmondo610::cVar_yrLTC5YK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_DeArmondo610::cVar_ElByyEk4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_DeArmondo610::cBinop_oYPGbnFu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_rb3YYE79_sendMessage);
}

void Heavy_DeArmondo610::cBinop_rb3YYE79_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ElByyEk4, 0, m, &cVar_ElByyEk4_sendMessage);
}

void Heavy_DeArmondo610::cBinop_NlQqtqTj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_wzzV5yjn_sendMessage);
}

void Heavy_DeArmondo610::cBinop_wzzV5yjn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_cN18nVYk, m);
}

void Heavy_DeArmondo610::cSwitchcase_asS5PPmF_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OaR2IZS3_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D58GPniR_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_DeArmondo610::cCast_OaR2IZS3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_27AtVIgv_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_D58GPniR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qwLwfjDC_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cVar_tJpVUJK0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_IThBhHsN_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DeArmondo610::cSend_23hxPkrt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_NXRTxdw9_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_z6x1x8gn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9y8OmpFL, 0, m, &cVar_9y8OmpFL_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_RBk64CK5, 0, m, &cVar_RBk64CK5_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_YfxcQMmj, 0, m, &cVar_YfxcQMmj_sendMessage);
}

void Heavy_DeArmondo610::cBinop_zaHUw3i6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 480.0f, 0, m, &cBinop_z6x1x8gn_sendMessage);
}

void Heavy_DeArmondo610::cBinop_EIswnuhw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 7520.0f, 0, m, &cBinop_zaHUw3i6_sendMessage);
}

void Heavy_DeArmondo610::cCast_PO3pIZH5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EIswnuhw, HV_BINOP_MULTIPLY, 1, m, &cBinop_EIswnuhw_sendMessage);
}

void Heavy_DeArmondo610::cCast_t8RvmQCe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EIswnuhw, HV_BINOP_MULTIPLY, 0, m, &cBinop_EIswnuhw_sendMessage);
}

void Heavy_DeArmondo610::cCast_PWx9uxnM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EIswnuhw, HV_BINOP_MULTIPLY, 0, m, &cBinop_EIswnuhw_sendMessage);
}

void Heavy_DeArmondo610::cBinop_M1Xb3YFr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_NlQqtqTj_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_oYPGbnFu_sendMessage);
}

void Heavy_DeArmondo610::cBinop_xrZ0XYAH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_CY1Wkaj5_sendMessage);
}

void Heavy_DeArmondo610::cSend_BcDsdKtt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jwxflMvx_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cSend_d1OL8GIX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_2soygJv4_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cMsg_qwLwfjDC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_yrLTC5YK, 0, m, &cVar_yrLTC5YK_sendMessage);
  cSend_d1OL8GIX_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cMsg_27AtVIgv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_yrLTC5YK, 0, m, &cVar_yrLTC5YK_sendMessage);
  cSend_d1OL8GIX_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_gac6qAMI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xrZ0XYAH, HV_BINOP_ADD, 1, m, &cBinop_xrZ0XYAH_sendMessage);
}

void Heavy_DeArmondo610::cCast_UQfzBJAS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xrZ0XYAH, HV_BINOP_ADD, 0, m, &cBinop_xrZ0XYAH_sendMessage);
}

void Heavy_DeArmondo610::cCast_FjtCaWxH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_M1Xb3YFr, HV_BINOP_ADD, 1, m, &cBinop_M1Xb3YFr_sendMessage);
}

void Heavy_DeArmondo610::cCast_n0tLGvv0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_M1Xb3YFr, HV_BINOP_ADD, 0, m, &cBinop_M1Xb3YFr_sendMessage);
}

void Heavy_DeArmondo610::cCast_cdkR8Sxe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tJpVUJK0, 0, m, &cVar_tJpVUJK0_sendMessage);
}

void Heavy_DeArmondo610::cReceive_0qASSksN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_23hxPkrt_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cReceive_dQMpRuqS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nGaLaCvp_sendMessage(_c, 0, m);
  cMsg_RLkBNTU3_sendMessage(_c, 0, m);
  cMsg_tD3pauSZ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_gGfFz0dm, 0, m, &cVar_gGfFz0dm_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_9y8OmpFL, 0, m, &cVar_9y8OmpFL_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_YfxcQMmj, 0, m, &cVar_YfxcQMmj_sendMessage);
  cMsg_JZ0dH7Nu_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_EE1EgnzF, 0, m, &cVar_EE1EgnzF_sendMessage);
  cMsg_Q8Mns5ww_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_baMdQ0Wc, 0, m, &cVar_baMdQ0Wc_sendMessage);
  cMsg_bvF00zqi_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_4eZJP2PB, 0, m, &cVar_4eZJP2PB_sendMessage);
  cMsg_aJO95iAo_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_JO1ZmvWT, 0, m, &cVar_JO1ZmvWT_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_5KuxpKRv, 0, m, &cVar_5KuxpKRv_sendMessage);
  cMsg_az688FC8_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_3KLVPd3b, 0, m, &cVar_3KLVPd3b_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_gE4L627F, 0, m, &cVar_gE4L627F_sendMessage);
}

void Heavy_DeArmondo610::cReceive_HV9O5ipP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_lIqQyAob_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -0.5f, 0, m, &cBinop_soG53KQW_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_wvx05EMO, HV_BINOP_MULTIPLY, 0, m, &cBinop_wvx05EMO_sendMessage);
}

void Heavy_DeArmondo610::cReceive_uZs4FwvW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_6NTrhA7w_sendMessage);
}

void Heavy_DeArmondo610::cReceive_GczMPxbd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_zjDmfbTe_sendMessage);
  cMsg_T3iReJAq_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cReceive_NXRTxdw9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_X7mr3Eoi_onMessage(_c, NULL, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_tJpVUJK0, 0, m, &cVar_tJpVUJK0_sendMessage);
}

void Heavy_DeArmondo610::cReceive_VRcYDHaJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FKJBiyfl, HV_BINOP_MULTIPLY, 0, m, &cBinop_FKJBiyfl_sendMessage);
}

void Heavy_DeArmondo610::cReceive_TRLTp0Vw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SxdxgfFE_sendMessage(_c, 0, m);
  cMsg_EyVYiFqH_sendMessage(_c, 0, m);
  cMsg_FSOXXmUz_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_5MMx6wEm_sendMessage);
}

void Heavy_DeArmondo610::cReceive_xTeBXKdv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Kl8gIZSl_sendMessage);
  cMsg_wfVr0Sx0_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cReceive_FYIp5EIA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Zy6Fo9qS, HV_BINOP_MULTIPLY, 0, m, &cBinop_Zy6Fo9qS_sendMessage);
}

void Heavy_DeArmondo610::cReceive_fIp0FVAO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LkbRaMT4_sendMessage(_c, 0, m);
  cMsg_MpXArC5k_sendMessage(_c, 0, m);
  cMsg_JkpthQ1w_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_vohOND6k_sendMessage);
}

void Heavy_DeArmondo610::cReceive_wMgYECKc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_TA58Paz7_sendMessage);
  cMsg_OlS4wU7p_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cReceive_q9tK5JGo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_sE1Hx9pA, m);
}

void Heavy_DeArmondo610::cReceive_jwxflMvx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FjtCaWxH_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_n0tLGvv0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cdkR8Sxe_sendMessage);
}

void Heavy_DeArmondo610::cReceive_2soygJv4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gac6qAMI_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UQfzBJAS_sendMessage);
}

void Heavy_DeArmondo610::cReceive_bbWehlk8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_BcDsdKtt_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cReceive_7VLNZRf9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_asS5PPmF_onMessage(_c, NULL, 0, m, NULL);
}



/*
 * Code for expr~ implementation
 * Write out the generic implementation code
 */

 // per class code

 // per object code


/*
 * Context Process Implementation
 */

int Heavy_DeArmondo610::process(float **inputBuffers, float **outputBuffers, int n) {
  while (hLp_hasData(&inQueue)) {
    hv_uint32_t numBytes = 0;
    ReceiverMessagePair *p = reinterpret_cast<ReceiverMessagePair *>(hLp_getReadBuffer(&inQueue, &numBytes));
    hv_assert(numBytes >= sizeof(ReceiverMessagePair));
    scheduleMessageForReceiver(p->receiverHash, &p->msg);
    hLp_consume(&inQueue);
  }

  sendBangToReceiver(0xDD21C0EB); // send to __hv_bang~ on next cycle
  const int n4 = n & ~HV_N_SIMD_MASK; // ensure that the block size is a multiple of HV_N_SIMD

  // temporary signal vars
  hv_bufferf_t Bf0, Bf1, Bf2, Bf3, Bf4, Bf5;

  // input and output vars
  hv_bufferf_t O0;
  hv_bufferf_t I0;

  // declare and init the zero buffer
  hv_bufferf_t ZERO; __hv_zero_f(VOf(ZERO));

  hv_uint32_t nextBlock = blockStartTimestamp;
  for (int n = 0; n < n4; n += HV_N_SIMD) {

    // process all of the messages for this block
    nextBlock += HV_N_SIMD;
    while (mq_hasMessageBefore(&mq, nextBlock)) {
      MessageNode *const node = mq_peek(&mq);
      node->sendMessage(this, node->let, node->m);
      mq_pop(&mq);
    }

    // load input buffers
    __hv_load_f(inputBuffers[0]+n, VOf(I0));

    // zero output buffers
    __hv_zero_f(VOf(O0));

    // process all signal functions
    __hv_varread_f(&sVarf_6rRXIaYv, VOf(Bf0));
    __hv_rpole_f(&sRPole_YesGgUOP, VIf(I0), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_YdAGvNEr, VIf(Bf0), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_cacJeWDH, VOf(Bf0));
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_RG7iNc1h, VOf(Bf1));
    __hv_zero_f(VOf(Bf2));
    __hv_line_f(&sLine_JU0q3cFQ, VOf(Bf3));
    __hv_line_f(&sLine_0jZdO376, VOf(Bf4));
    __hv_line_f(&sLine_r7LEgU0Y, VOf(Bf5));
    __hv_biquad_f(&sBiquad_s_ZW3s5Bm1, VIf(Bf0), VIf(Bf1), VIf(Bf2), VIf(Bf3), VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 0.77f, 0.77f, 0.77f, 0.77f, 0.77f, 0.77f, 0.77f, 0.77f);
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_sE1Hx9pA, VOf(Bf5));
    __hv_fma_f(VIf(Bf4), VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_cN18nVYk, VOf(Bf5));
    __hv_mul_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_wP0NBA9m, VOf(Bf0));
    __hv_line_f(&sLine_fhsCyCCZ, VOf(Bf4));
    __hv_line_f(&sLine_IvdoPNmi, VOf(Bf3));
    __hv_line_f(&sLine_ESio21H0, VOf(Bf2));
    __hv_line_f(&sLine_LGUfYgPN, VOf(Bf1));
    __hv_biquad_f(&sBiquad_s_K2WTNYNZ, VIf(Bf5), VIf(Bf0), VIf(Bf4), VIf(Bf3), VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_pe12TLXC, VOf(Bf2));
    __hv_line_f(&sLine_eSPpmIGJ, VOf(Bf3));
    __hv_line_f(&sLine_Z3SNB2ul, VOf(Bf4));
    __hv_line_f(&sLine_vWXddGR2, VOf(Bf0));
    __hv_line_f(&sLine_3zFX6gWY, VOf(Bf5));
    __hv_biquad_f(&sBiquad_s_pmXdn4xr, VIf(Bf1), VIf(Bf2), VIf(Bf3), VIf(Bf4), VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf5), VIf(O0), VOf(O0));

    // save output vars to output buffer
    __hv_store_f(outputBuffers[0]+n, VIf(O0));
  }

  blockStartTimestamp = nextBlock;

  return n4; // return the number of frames processed

}

int Heavy_DeArmondo610::processInline(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(!(n4 & HV_N_SIMD_MASK)); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 1 channel(s)
  float **const bIn = &inputBuffers;

  // define the heavy output buffer for 1 channel(s)
  float **const bOut = &outputBuffers;

  int n = process(bIn, bOut, n4);
  return n;
}

int Heavy_DeArmondo610::processInlineInterleaved(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(n4 & ~HV_N_SIMD_MASK); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 1 channel(s), uninterleave
  float *const bIn = inputBuffers;

  // define the heavy output buffer for 1 channel(s)
  float *const bOut = outputBuffers;

  int n = processInline(bIn, bOut, n4);

  

  return n;
}
