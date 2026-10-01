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
  numBytes += sRPole_init(&sRPole_Kdd3DDhg);
  numBytes += sDel1_init(&sDel1_XjmkhX9i);
  numBytes += sLine_init(&sLine_ejH2bD6t);
  numBytes += sLine_init(&sLine_JPVzuI5Q);
  numBytes += sLine_init(&sLine_VmB6hsJT);
  numBytes += sLine_init(&sLine_Fu2sVHq9);
  numBytes += sBiquad_init(&sBiquad_s_n7UdxUlK);
  numBytes += sLine_init(&sLine_4mS0j1G8);
  numBytes += sLine_init(&sLine_FZgXksBh);
  numBytes += sLine_init(&sLine_yQysywQn);
  numBytes += sLine_init(&sLine_Ov3p3Isd);
  numBytes += sLine_init(&sLine_CtXLtY8F);
  numBytes += sBiquad_init(&sBiquad_s_66zrI1S9);
  numBytes += sLine_init(&sLine_IUdAKvMj);
  numBytes += sLine_init(&sLine_ZgnLLTvh);
  numBytes += sLine_init(&sLine_kczgmUZN);
  numBytes += sLine_init(&sLine_2SjY66QY);
  numBytes += sLine_init(&sLine_pzabNTGe);
  numBytes += sBiquad_init(&sBiquad_s_jgjvRuiR);
  numBytes += cBinop_init(&cBinop_0gs0arMJ, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_MgRQ2ACv, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_LrZYYuEo, 0.0f);
  numBytes += cVar_init_f(&cVar_fG7Soiex, 1500.0f);
  numBytes += cVar_init_f(&cVar_8s6DX3g3, 1.0f);
  numBytes += cBinop_init(&cBinop_47ZbPvx5, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_JGs3l7Zq, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_eAUi692P, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_tJ8veD64, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_5WqBImKu, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_P0Gmrbha, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_bgM6sZl2, 3.0f);
  numBytes += cBinop_init(&cBinop_UK4DYfku, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_BOsPhUmL, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_zgSRj8yU, 0.0f);
  numBytes += cBinop_init(&cBinop_BbB4NzTC, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_qa8MKNBA, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_BW1BbCde, 0.0f);
  numBytes += cVar_init_f(&cVar_zniHikua, 6000.0f);
  numBytes += cVar_init_f(&cVar_HvtmZG1d, 0.52f);
  numBytes += cBinop_init(&cBinop_MLOezWqf, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_pqEiByb6, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Mvk58s3Z, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_G9qDP3p8, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_uj2VDRAO, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_GO3qqPFx, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_hwQQpCis, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_dhl6qz95, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_7Xj64nIt, 0.0f);
  numBytes += cVar_init_f(&cVar_mMDHkx3t, 6000.0f);
  numBytes += cVar_init_f(&cVar_WKIZMxIU, 0.52f);
  numBytes += cBinop_init(&cBinop_TBCXDyIl, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_8B5Rfnpl, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_iDMb2IiQ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_KzAo4N5J, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_xX0tf3VW, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_89Ds0cSN, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_BHp5FHSG, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_V7wT86b2, 0.0f);
  numBytes += cDelay_init(this, &cDelay_TeA2ejZL, 0.0f);
  numBytes += cVar_init_f(&cVar_G7wqXs3r, 20.0f);
  numBytes += cBinop_init(&cBinop_rKTP4HMq, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_VFF6dCyH, 0.0f);
  numBytes += cSlice_init(&cSlice_vq0Zgjyl, 1, -1);
  numBytes += cSlice_init(&cSlice_XhlYwXRI, 1, -1);
  numBytes += cVar_init_f(&cVar_yrXMWzON, 0.0f);
  numBytes += cVar_init_f(&cVar_Mhowtc6M, 4.0f);
  numBytes += cVar_init_f(&cVar_ArJlsXZD, 20.0f);
  numBytes += cVar_init_f(&cVar_nN6hg82i, 0.0f);
  numBytes += cVar_init_f(&cVar_lCLBCtyg, 20.0f);
  numBytes += cSlice_init(&cSlice_szdzmsVC, 1, 1);
  numBytes += cSlice_init(&cSlice_VXaiSSNG, 0, 1);
  numBytes += cBinop_init(&cBinop_r6qDNXUo, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_7EF0rBfo, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_JwnrtcGs, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_j8IVMQLX, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_pjkRi71i, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_kJMqA6bb, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_xyQo1fgJ, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_kaV66lzu, 0.0f); // __sub
  numBytes += cDelay_init(this, &cDelay_PVLS2vjT, 0.0f);
  numBytes += cVar_init_f(&cVar_TEKsBTHx, 20.0f);
  numBytes += cBinop_init(&cBinop_2XDh955M, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_SOP2n1z3, 0.0f);
  numBytes += cSlice_init(&cSlice_SDLuEgXa, 1, -1);
  numBytes += cSlice_init(&cSlice_ruLiYivG, 1, -1);
  numBytes += cVar_init_f(&cVar_ZGudY0Bg, 0.0f);
  numBytes += cVar_init_f(&cVar_ziGlH8Nu, 4.0f);
  numBytes += cVar_init_f(&cVar_AiVA4lKC, 20.0f);
  numBytes += cVar_init_f(&cVar_2FcbXSEN, 0.0f);
  numBytes += cVar_init_f(&cVar_mMNFIr2a, 20.0f);
  numBytes += cSlice_init(&cSlice_iMfyCa6t, 1, 1);
  numBytes += cSlice_init(&cSlice_9O4YTl9y, 0, 1);
  numBytes += cBinop_init(&cBinop_VoUcTQJg, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Yhw4PD9k, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_aBCFrkHh, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_w0s9SxDD, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_zwECKGCL, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_mkpyUmVe, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_qQHwlEcX, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_4snqFKhG, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_PCDwwcsf, 0.0f);
  numBytes += cVar_init_f(&cVar_K0zmsYHx, 0.0f);
  numBytes += cVar_init_f(&cVar_cqZaOmS7, 0.0f);
  numBytes += cVar_init_f(&cVar_o4lllOJo, 0.0f);
  numBytes += cIf_init(&cIf_rxhji8Xx, false);
  numBytes += sVarf_init(&sVarf_wuhRsXdo, 1.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_R3QOL0j2, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_8kznxmlE, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_oo68xb9Z, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_XuUGeTvV, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_s5K3Xahf, 0.0f); // __add
  
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
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Q5XnxoF2_sendMessage);
      break;
    }
    case 0x1A260E77: { // Offset
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_FpAnLO0Y_sendMessage);
      break;
    }
    case 0x4980B0E2: { // Pedal
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_DIc4aqYg_sendMessage);
      break;
    }
    case 0xAAB7EE7E: { // 1030-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_uu8fujgb_sendMessage);
      break;
    }
    case 0xC38F8894: { // 1030-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HNZMYuAb_sendMessage);
      break;
    }
    case 0x8AE4B94E: { // 1030-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ub2Nbkre_sendMessage);
      break;
    }
    case 0x3EFBCAA0: { // 1082-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_WlTgaHOs_sendMessage);
      break;
    }
    case 0x57D8CB52: { // 1082-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_qb07FtAT_sendMessage);
      break;
    }
    case 0xA7AAB40B: { // 1082-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_AMJ5s72Q_sendMessage);
      break;
    }
    case 0x7994E281: { // 1123-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_nsXsCx5R_sendMessage);
      break;
    }
    case 0xB2716CDF: { // 1123-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_IQ3NVDht_sendMessage);
      break;
    }
    case 0x1FB9340E: { // 1123-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_px7YBtnF_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_CA6cLOvd_sendMessage);
      break;
    }
    case 0x540490BE: { // footpedal
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_fTPTzu9a_sendMessage);
      break;
    }
    case 0xF53AEC49: { // toneoffset
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZOsrMDgh_sendMessage);
      break;
    }
    case 0xCCF73448: { // voloffset
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Zf5KQYbZ_sendMessage);
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
        info->name = "Offset";
        info->hash = 0x1A260E77;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 2: {
        info->name = "Pedal";
        info->hash = 0x4980B0E2;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 1.0f;
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
  return 3;
}



/*
 * Send Function Implementations
 */


void Heavy_DeArmondo610::cMsg_W8NjTHKk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ejH2bD6t, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_iC9kJrkL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_JPVzuI5Q, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_1AMUCUat_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_VmB6hsJT, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_lFWwRqa3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Fu2sVHq9, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_8uCCHYmo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_fl5VKBJT_sendMessage);
}

void Heavy_DeArmondo610::cSystem_fl5VKBJT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0gs0arMJ, HV_BINOP_DIVIDE, 1, m, &cBinop_0gs0arMJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rCbnXIUj_sendMessage);
}

void Heavy_DeArmondo610::cUnop_BbcWGZUX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_8Vv93S17_sendMessage);
}

void Heavy_DeArmondo610::cMsg_0uvCj7Os_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_BbcWGZUX_sendMessage);
}

void Heavy_DeArmondo610::cBinop_8Vv93S17_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0gs0arMJ, HV_BINOP_DIVIDE, 0, m, &cBinop_0gs0arMJ_sendMessage);
}

void Heavy_DeArmondo610::cCast_rCbnXIUj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0uvCj7Os_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_0gs0arMJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MgRQ2ACv, HV_BINOP_MULTIPLY, 1, m, &cBinop_MgRQ2ACv_sendMessage);
}

void Heavy_DeArmondo610::cBinop_MgRQ2ACv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6XkCqo6d_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_RiGXMOpz_sendMessage);
}

void Heavy_DeArmondo610::cUnop_a7idr72d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_hgtO4f5q_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cUnop_6LCBqyLE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_0aMoCy0W_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_xMSqkyVN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_XMU1Tazm_sendMessage);
}

void Heavy_DeArmondo610::cBinop_XMU1Tazm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MgRQ2ACv, HV_BINOP_MULTIPLY, 0, m, &cBinop_MgRQ2ACv_sendMessage);
}

void Heavy_DeArmondo610::cBinop_nxgAiqc6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_r2APxwhJ_sendMessage);
}

void Heavy_DeArmondo610::cBinop_r2APxwhJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cvCZdbdm_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_1AxX65Et_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JGs3l7Zq, HV_BINOP_MULTIPLY, 1, m, &cBinop_JGs3l7Zq_sendMessage);
}

void Heavy_DeArmondo610::cBinop_iPppAwO6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eAUi692P, HV_BINOP_MULTIPLY, 1, m, &cBinop_eAUi692P_sendMessage);
}

void Heavy_DeArmondo610::cBinop_ToeTxfqO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_LrZYYuEo, 1, m, &cVar_LrZYYuEo_sendMessage);
}

void Heavy_DeArmondo610::cBinop_Ajn4g2hx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tJ8veD64, HV_BINOP_MULTIPLY, 1, m, &cBinop_tJ8veD64_sendMessage);
}

void Heavy_DeArmondo610::cMsg_4H0P7OhD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_eA3owBff_sendMessage);
}

void Heavy_DeArmondo610::cBinop_eA3owBff_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5WqBImKu, HV_BINOP_MULTIPLY, 1, m, &cBinop_5WqBImKu_sendMessage);
}

void Heavy_DeArmondo610::cVar_LrZYYuEo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YYmpYp2h_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cVar_fG7Soiex_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OvAUiu7B_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_xMSqkyVN_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_57Q7NQr1_sendMessage);
}

void Heavy_DeArmondo610::cVar_8s6DX3g3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_nxgAiqc6_sendMessage);
}

void Heavy_DeArmondo610::cCast_6XkCqo6d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_a7idr72d_sendMessage);
}

void Heavy_DeArmondo610::cCast_RiGXMOpz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_6LCBqyLE_sendMessage);
}

void Heavy_DeArmondo610::cSend_hgtO4f5q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ub2Nbkre_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cSend_0aMoCy0W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_HNZMYuAb_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cSend_HlWcHx4F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_uu8fujgb_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cMsg_cvCZdbdm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Kp32kwPE_sendMessage);
}

void Heavy_DeArmondo610::cBinop_Kp32kwPE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_47ZbPvx5, HV_BINOP_MULTIPLY, 1, m, &cBinop_47ZbPvx5_sendMessage);
}

void Heavy_DeArmondo610::cBinop_47ZbPvx5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_CEKzEfgQ_sendMessage);
}

void Heavy_DeArmondo610::cBinop_CEKzEfgQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_HlWcHx4F_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cMsg_YYmpYp2h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_cC98FeJi_sendMessage);
}

void Heavy_DeArmondo610::cBinop_cC98FeJi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_miskKPzL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_nrTl4Ds1_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8ixc5MXh_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fCPC5XIW_sendMessage);
}

void Heavy_DeArmondo610::cBinop_JGs3l7Zq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_W8NjTHKk_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_eAUi692P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iC9kJrkL_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_tJ8veD64_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1AMUCUat_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_5WqBImKu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lFWwRqa3_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_FfowI9Ep_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fG7Soiex, 0, m, &cVar_fG7Soiex_sendMessage);
}

void Heavy_DeArmondo610::cCast_gTfFpqz3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8s6DX3g3, 1, m, &cVar_8s6DX3g3_sendMessage);
}

void Heavy_DeArmondo610::cCast_57Q7NQr1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_LrZYYuEo, 0, m, &cVar_LrZYYuEo_sendMessage);
}

void Heavy_DeArmondo610::cCast_OvAUiu7B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8s6DX3g3, 0, m, &cVar_8s6DX3g3_sendMessage);
}

void Heavy_DeArmondo610::cCast_8ixc5MXh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eAUi692P, HV_BINOP_MULTIPLY, 0, m, &cBinop_eAUi692P_sendMessage);
}

void Heavy_DeArmondo610::cCast_miskKPzL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5WqBImKu, HV_BINOP_MULTIPLY, 0, m, &cBinop_5WqBImKu_sendMessage);
}

void Heavy_DeArmondo610::cCast_fCPC5XIW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JGs3l7Zq, HV_BINOP_MULTIPLY, 0, m, &cBinop_JGs3l7Zq_sendMessage);
}

void Heavy_DeArmondo610::cCast_nrTl4Ds1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tJ8veD64, HV_BINOP_MULTIPLY, 0, m, &cBinop_tJ8veD64_sendMessage);
}

void Heavy_DeArmondo610::cBinop_JRqpzz41_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_k0KmBsDI_sendMessage);
}

void Heavy_DeArmondo610::cBinop_k0KmBsDI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_lnJMJnzS_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_WlCV4f6w_sendMessage);
}

void Heavy_DeArmondo610::cVar_bgM6sZl2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_lxM3vQLJ_sendMessage);
}

void Heavy_DeArmondo610::cMsg_jig9jByQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_leT89LkL_sendMessage);
}

void Heavy_DeArmondo610::cSystem_leT89LkL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UK4DYfku, HV_BINOP_DIVIDE, 1, m, &cBinop_UK4DYfku_sendMessage);
}

void Heavy_DeArmondo610::cBinop_lnJMJnzS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_pPeMaBtc_sendMessage);
}

void Heavy_DeArmondo610::cBinop_pPeMaBtc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_BOsPhUmL, m);
}

void Heavy_DeArmondo610::cMsg_dm1cyrHg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_yyfJyhJh_sendMessage);
}

void Heavy_DeArmondo610::cBinop_yyfJyhJh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_JRqpzz41_sendMessage);
}

void Heavy_DeArmondo610::cBinop_WlCV4f6w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_P0Gmrbha, m);
}

void Heavy_DeArmondo610::cBinop_lxM3vQLJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_3BPjDzDt_sendMessage);
}

void Heavy_DeArmondo610::cBinop_3BPjDzDt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UK4DYfku, HV_BINOP_DIVIDE, 0, m, &cBinop_UK4DYfku_sendMessage);
}

void Heavy_DeArmondo610::cBinop_UK4DYfku_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dm1cyrHg_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cVar_zgSRj8yU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_DeArmondo610::cMsg_yzpkUQqd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_4mS0j1G8, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_zR1tioAj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_FZgXksBh, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_dXaMBNlc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_yQysywQn, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_7FhY3dHT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Ov3p3Isd, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_THzgESsh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_CtXLtY8F, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_FWFO2Qnc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_JJOMNG5X_sendMessage);
}

void Heavy_DeArmondo610::cSystem_JJOMNG5X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BbB4NzTC, HV_BINOP_DIVIDE, 1, m, &cBinop_BbB4NzTC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SPjoH6ww_sendMessage);
}

void Heavy_DeArmondo610::cUnop_Rhd1RXOk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_yUm7EJeI_sendMessage);
}

void Heavy_DeArmondo610::cMsg_se93JTfu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_Rhd1RXOk_sendMessage);
}

void Heavy_DeArmondo610::cBinop_yUm7EJeI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BbB4NzTC, HV_BINOP_DIVIDE, 0, m, &cBinop_BbB4NzTC_sendMessage);
}

void Heavy_DeArmondo610::cCast_SPjoH6ww_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_se93JTfu_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_BbB4NzTC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qa8MKNBA, HV_BINOP_MULTIPLY, 1, m, &cBinop_qa8MKNBA_sendMessage);
}

void Heavy_DeArmondo610::cBinop_qa8MKNBA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zyaR2tsU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XQhHtrFZ_sendMessage);
}

void Heavy_DeArmondo610::cUnop_0LUn36IL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_qv05Fxur_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cUnop_93d9NEow_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_DdtbnK6h_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_wPDRIwen_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_l2pmjFGD_sendMessage);
}

void Heavy_DeArmondo610::cBinop_l2pmjFGD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qa8MKNBA, HV_BINOP_MULTIPLY, 0, m, &cBinop_qa8MKNBA_sendMessage);
}

void Heavy_DeArmondo610::cBinop_P0qao6mq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_6GygdYWT_sendMessage);
}

void Heavy_DeArmondo610::cBinop_6GygdYWT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6sjQPCWD_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_mnQMFzue_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pqEiByb6, HV_BINOP_MULTIPLY, 1, m, &cBinop_pqEiByb6_sendMessage);
}

void Heavy_DeArmondo610::cMsg_J0Aw1NN7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_ZdI0Ivck_sendMessage);
}

void Heavy_DeArmondo610::cBinop_ZdI0Ivck_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_mnQMFzue_sendMessage);
}

void Heavy_DeArmondo610::cMsg_lrDiI9zv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_D5KuYNY5_sendMessage);
}

void Heavy_DeArmondo610::cBinop_D5KuYNY5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Mvk58s3Z, HV_BINOP_MULTIPLY, 1, m, &cBinop_Mvk58s3Z_sendMessage);
}

void Heavy_DeArmondo610::cBinop_eRjT80E2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_G9qDP3p8, HV_BINOP_MULTIPLY, 1, m, &cBinop_G9qDP3p8_sendMessage);
}

void Heavy_DeArmondo610::cMsg_dDEbJ8Vt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Db12SPoT_sendMessage);
}

void Heavy_DeArmondo610::cBinop_Db12SPoT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_eRjT80E2_sendMessage);
}

void Heavy_DeArmondo610::cBinop_U5hTIekm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BW1BbCde, 1, m, &cVar_BW1BbCde_sendMessage);
}

void Heavy_DeArmondo610::cBinop_OJHZbPO3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uj2VDRAO, HV_BINOP_MULTIPLY, 1, m, &cBinop_uj2VDRAO_sendMessage);
}

void Heavy_DeArmondo610::cMsg_LGc16IzS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_aif6iURF_sendMessage);
}

void Heavy_DeArmondo610::cBinop_aif6iURF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GO3qqPFx, HV_BINOP_MULTIPLY, 1, m, &cBinop_GO3qqPFx_sendMessage);
}

void Heavy_DeArmondo610::cVar_BW1BbCde_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_k7STvSrx_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cVar_zniHikua_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ge8TLs3h_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_wPDRIwen_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cZT0XEYG_sendMessage);
}

void Heavy_DeArmondo610::cVar_HvtmZG1d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_P0qao6mq_sendMessage);
}

void Heavy_DeArmondo610::cCast_zyaR2tsU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_0LUn36IL_sendMessage);
}

void Heavy_DeArmondo610::cCast_XQhHtrFZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_93d9NEow_sendMessage);
}

void Heavy_DeArmondo610::cSend_qv05Fxur_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_AMJ5s72Q_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cSend_DdtbnK6h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_qb07FtAT_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cSend_pWk2LdXc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_WlTgaHOs_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cMsg_6sjQPCWD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Ye6gzzpU_sendMessage);
}

void Heavy_DeArmondo610::cBinop_Ye6gzzpU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MLOezWqf, HV_BINOP_MULTIPLY, 1, m, &cBinop_MLOezWqf_sendMessage);
}

void Heavy_DeArmondo610::cBinop_MLOezWqf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_mMg6G4Xh_sendMessage);
}

void Heavy_DeArmondo610::cBinop_mMg6G4Xh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_pWk2LdXc_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cMsg_k7STvSrx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Opoi1Ir3_sendMessage);
}

void Heavy_DeArmondo610::cBinop_Opoi1Ir3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kuSJurYu_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_z8B6oh4H_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8yJ8Czsj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_QPOBrmkW_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Eo2YqJ4w_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yM9wgqN1_sendMessage);
}

void Heavy_DeArmondo610::cBinop_pqEiByb6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yzpkUQqd_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_Mvk58s3Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zR1tioAj_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_G9qDP3p8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dXaMBNlc_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_uj2VDRAO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7FhY3dHT_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_GO3qqPFx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_THzgESsh_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_xTesE7EG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HvtmZG1d, 1, m, &cVar_HvtmZG1d_sendMessage);
}

void Heavy_DeArmondo610::cCast_sYM9Ezgd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zniHikua, 0, m, &cVar_zniHikua_sendMessage);
}

void Heavy_DeArmondo610::cCast_QPOBrmkW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_G9qDP3p8, HV_BINOP_MULTIPLY, 0, m, &cBinop_G9qDP3p8_sendMessage);
}

void Heavy_DeArmondo610::cCast_yM9wgqN1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pqEiByb6, HV_BINOP_MULTIPLY, 0, m, &cBinop_pqEiByb6_sendMessage);
}

void Heavy_DeArmondo610::cCast_z8B6oh4H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GO3qqPFx, HV_BINOP_MULTIPLY, 0, m, &cBinop_GO3qqPFx_sendMessage);
}

void Heavy_DeArmondo610::cCast_Eo2YqJ4w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Mvk58s3Z, HV_BINOP_MULTIPLY, 0, m, &cBinop_Mvk58s3Z_sendMessage);
}

void Heavy_DeArmondo610::cCast_8yJ8Czsj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uj2VDRAO, HV_BINOP_MULTIPLY, 0, m, &cBinop_uj2VDRAO_sendMessage);
}

void Heavy_DeArmondo610::cCast_kuSJurYu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_DeArmondo610::cCast_ge8TLs3h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HvtmZG1d, 0, m, &cVar_HvtmZG1d_sendMessage);
}

void Heavy_DeArmondo610::cCast_cZT0XEYG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BW1BbCde, 0, m, &cVar_BW1BbCde_sendMessage);
}

void Heavy_DeArmondo610::cMsg_Oy18r7UY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_IUdAKvMj, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_IxY8TrHQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ZgnLLTvh, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_W0JnHncm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_kczgmUZN, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_xI57EEoz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_2SjY66QY, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_wFhgSTbw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_pzabNTGe, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_sRGELI7C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_JfFW7SM3_sendMessage);
}

void Heavy_DeArmondo610::cSystem_JfFW7SM3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hwQQpCis, HV_BINOP_DIVIDE, 1, m, &cBinop_hwQQpCis_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xr7SN6vX_sendMessage);
}

void Heavy_DeArmondo610::cUnop_9GAURA5M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_5JTTF0Q9_sendMessage);
}

void Heavy_DeArmondo610::cMsg_zK2dZEXY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_9GAURA5M_sendMessage);
}

void Heavy_DeArmondo610::cBinop_5JTTF0Q9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hwQQpCis, HV_BINOP_DIVIDE, 0, m, &cBinop_hwQQpCis_sendMessage);
}

void Heavy_DeArmondo610::cCast_xr7SN6vX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zK2dZEXY_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_hwQQpCis_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dhl6qz95, HV_BINOP_MULTIPLY, 1, m, &cBinop_dhl6qz95_sendMessage);
}

void Heavy_DeArmondo610::cBinop_dhl6qz95_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wd4aaHWl_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Atjjr5Pw_sendMessage);
}

void Heavy_DeArmondo610::cUnop_0H3br9Tt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_4aiPamO1_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cUnop_dtpMupdU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_DnFKYA32_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_lJ1XeiOs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_9gL8dPUq_sendMessage);
}

void Heavy_DeArmondo610::cBinop_9gL8dPUq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dhl6qz95, HV_BINOP_MULTIPLY, 0, m, &cBinop_dhl6qz95_sendMessage);
}

void Heavy_DeArmondo610::cBinop_8xhnz6i0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_7QnOkQKp_sendMessage);
}

void Heavy_DeArmondo610::cBinop_7QnOkQKp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iHkgUWFT_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_QjOyIFBg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8B5Rfnpl, HV_BINOP_MULTIPLY, 1, m, &cBinop_8B5Rfnpl_sendMessage);
}

void Heavy_DeArmondo610::cMsg_5wCx8raP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_u7sDWGzb_sendMessage);
}

void Heavy_DeArmondo610::cBinop_u7sDWGzb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_QjOyIFBg_sendMessage);
}

void Heavy_DeArmondo610::cMsg_yhIl8S69_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_6ujRVcCz_sendMessage);
}

void Heavy_DeArmondo610::cBinop_6ujRVcCz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iDMb2IiQ, HV_BINOP_MULTIPLY, 1, m, &cBinop_iDMb2IiQ_sendMessage);
}

void Heavy_DeArmondo610::cBinop_ZkCOQnwC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KzAo4N5J, HV_BINOP_MULTIPLY, 1, m, &cBinop_KzAo4N5J_sendMessage);
}

void Heavy_DeArmondo610::cMsg_FLEcdpzl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_REm7A2v1_sendMessage);
}

void Heavy_DeArmondo610::cBinop_REm7A2v1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_ZkCOQnwC_sendMessage);
}

void Heavy_DeArmondo610::cBinop_XzsfzmtU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7Xj64nIt, 1, m, &cVar_7Xj64nIt_sendMessage);
}

void Heavy_DeArmondo610::cBinop_CigExaln_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xX0tf3VW, HV_BINOP_MULTIPLY, 1, m, &cBinop_xX0tf3VW_sendMessage);
}

void Heavy_DeArmondo610::cMsg_4PiGtaXY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_DQh66kwM_sendMessage);
}

void Heavy_DeArmondo610::cBinop_DQh66kwM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_89Ds0cSN, HV_BINOP_MULTIPLY, 1, m, &cBinop_89Ds0cSN_sendMessage);
}

void Heavy_DeArmondo610::cVar_7Xj64nIt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ZZ2NPjNq_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cVar_mMDHkx3t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_viD97Gd0_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_lJ1XeiOs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WmGo27US_sendMessage);
}

void Heavy_DeArmondo610::cVar_WKIZMxIU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_8xhnz6i0_sendMessage);
}

void Heavy_DeArmondo610::cCast_wd4aaHWl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_0H3br9Tt_sendMessage);
}

void Heavy_DeArmondo610::cCast_Atjjr5Pw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_dtpMupdU_sendMessage);
}

void Heavy_DeArmondo610::cSend_4aiPamO1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_px7YBtnF_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cSend_DnFKYA32_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IQ3NVDht_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cSend_AVynXGoa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_nsXsCx5R_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cMsg_iHkgUWFT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_CgpvMWv4_sendMessage);
}

void Heavy_DeArmondo610::cBinop_CgpvMWv4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TBCXDyIl, HV_BINOP_MULTIPLY, 1, m, &cBinop_TBCXDyIl_sendMessage);
}

void Heavy_DeArmondo610::cBinop_TBCXDyIl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_Dnwi3z9q_sendMessage);
}

void Heavy_DeArmondo610::cBinop_Dnwi3z9q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_AVynXGoa_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cMsg_ZZ2NPjNq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_BxJRiJcg_sendMessage);
}

void Heavy_DeArmondo610::cBinop_BxJRiJcg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aBFsBXi2_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HfDhW6cJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_28504LQ5_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Qqc0Kj8V_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lf6hkg4J_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OwtalwxD_sendMessage);
}

void Heavy_DeArmondo610::cBinop_8B5Rfnpl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Oy18r7UY_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_iDMb2IiQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IxY8TrHQ_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_KzAo4N5J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_W0JnHncm_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_xX0tf3VW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xI57EEoz_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_89Ds0cSN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wFhgSTbw_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_blrlwT6X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WKIZMxIU, 1, m, &cVar_WKIZMxIU_sendMessage);
}

void Heavy_DeArmondo610::cCast_ShF2MeVj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mMDHkx3t, 0, m, &cVar_mMDHkx3t_sendMessage);
}

void Heavy_DeArmondo610::cCast_lf6hkg4J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iDMb2IiQ, HV_BINOP_MULTIPLY, 0, m, &cBinop_iDMb2IiQ_sendMessage);
}

void Heavy_DeArmondo610::cCast_28504LQ5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xX0tf3VW, HV_BINOP_MULTIPLY, 0, m, &cBinop_xX0tf3VW_sendMessage);
}

void Heavy_DeArmondo610::cCast_Qqc0Kj8V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KzAo4N5J, HV_BINOP_MULTIPLY, 0, m, &cBinop_KzAo4N5J_sendMessage);
}

void Heavy_DeArmondo610::cCast_OwtalwxD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8B5Rfnpl, HV_BINOP_MULTIPLY, 0, m, &cBinop_8B5Rfnpl_sendMessage);
}

void Heavy_DeArmondo610::cCast_HfDhW6cJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_89Ds0cSN, HV_BINOP_MULTIPLY, 0, m, &cBinop_89Ds0cSN_sendMessage);
}

void Heavy_DeArmondo610::cCast_aBFsBXi2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_DeArmondo610::cCast_WmGo27US_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7Xj64nIt, 0, m, &cVar_7Xj64nIt_sendMessage);
}

void Heavy_DeArmondo610::cCast_viD97Gd0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WKIZMxIU, 0, m, &cVar_WKIZMxIU_sendMessage);
}

void Heavy_DeArmondo610::cVar_V7wT86b2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_nQ7I07Cy_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cMsg_jAvTbeaR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_pCPLsV7Y_sendMessage);
}

void Heavy_DeArmondo610::cSystem_pCPLsV7Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7EF0rBfo, HV_BINOP_MULTIPLY, 1, m, &cBinop_7EF0rBfo_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_r6qDNXUo, HV_BINOP_MULTIPLY, 1, m, &cBinop_r6qDNXUo_sendMessage);
}

void Heavy_DeArmondo610::cSwitchcase_lHWGl6PQ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_6BMNVY0i_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_6BMNVY0i_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FO9ToBzC_sendMessage);
      break;
    }
  }
}

void Heavy_DeArmondo610::cDelay_TeA2ejZL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_TeA2ejZL, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_TeA2ejZL, 0, m, &cDelay_TeA2ejZL_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_VFF6dCyH, 0, m, &cVar_VFF6dCyH_sendMessage);
}

void Heavy_DeArmondo610::cCast_FO9ToBzC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6BMNVY0i_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_TeA2ejZL, 0, m, &cDelay_TeA2ejZL_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_VFF6dCyH, 0, m, &cVar_VFF6dCyH_sendMessage);
}

void Heavy_DeArmondo610::cMsg_yRJDkaDO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_0Jzy3Uam_sendMessage);
}

void Heavy_DeArmondo610::cSystem_0Jzy3Uam_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_9kqme3Ix_sendMessage);
}

void Heavy_DeArmondo610::cVar_G7wqXs3r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rKTP4HMq, HV_BINOP_MULTIPLY, 0, m, &cBinop_rKTP4HMq_sendMessage);
}

void Heavy_DeArmondo610::cMsg_6BMNVY0i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_TeA2ejZL, 0, m, &cDelay_TeA2ejZL_sendMessage);
}

void Heavy_DeArmondo610::cBinop_uBK5zuPU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_TeA2ejZL, 2, m, &cDelay_TeA2ejZL_sendMessage);
}

void Heavy_DeArmondo610::cBinop_9kqme3Ix_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rKTP4HMq, HV_BINOP_MULTIPLY, 1, m, &cBinop_rKTP4HMq_sendMessage);
}

void Heavy_DeArmondo610::cBinop_rKTP4HMq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_uBK5zuPU_sendMessage);
}

void Heavy_DeArmondo610::cVar_VFF6dCyH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JwnrtcGs, HV_BINOP_SUBTRACT, 0, m, &cBinop_JwnrtcGs_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_Mf16Tb4z_sendMessage);
}

void Heavy_DeArmondo610::cSwitchcase_yq7aWi0u_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_F3RPtqiO_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6bNUIxcx_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_DeArmondo610::cCast_F3RPtqiO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lCLBCtyg, 0, m, &cVar_lCLBCtyg_sendMessage);
}

void Heavy_DeArmondo610::cCast_6bNUIxcx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GXy0h3GD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rpUeWRA7_sendMessage);
}

void Heavy_DeArmondo610::cSwitchcase_dyijQEdM_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_vq0Zgjyl, 0, m, &cSlice_vq0Zgjyl_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_XhlYwXRI, 0, m, &cSlice_XhlYwXRI_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rPwAF6NA_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_szdzmsVC, 0, m, &cSlice_szdzmsVC_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_VXaiSSNG, 0, m, &cSlice_VXaiSSNG_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iuqbwaFp_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WdT7DsIo_sendMessage);
      break;
    }
  }
}

void Heavy_DeArmondo610::cSlice_vq0Zgjyl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_HcMQQf6v_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_HcMQQf6v_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_DeArmondo610::cSlice_XhlYwXRI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uWr8UtCM_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Y7zqPsFo_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uWr8UtCM_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Y7zqPsFo_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_DeArmondo610::cVar_yrXMWzON_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ag7BpPvG_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5TLDdbtU_sendMessage);
}

void Heavy_DeArmondo610::cVar_Mhowtc6M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_bPt3OQ5y_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DeArmondo610::cSwitchcase_bPt3OQ5y_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Jsos3vsr_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_7EF0rBfo, HV_BINOP_MULTIPLY, 0, m, &cBinop_7EF0rBfo_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_pjkRi71i, HV_BINOP_DIVIDE, 1, m, &cBinop_pjkRi71i_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_G7wqXs3r, 0, m, &cVar_G7wqXs3r_sendMessage);
      break;
    }
  }
}

void Heavy_DeArmondo610::cCast_Jsos3vsr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VlpJ69LV_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cVar_ArJlsXZD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kaV66lzu, HV_BINOP_SUBTRACT, 1, m, &cBinop_kaV66lzu_sendMessage);
}

void Heavy_DeArmondo610::cVar_nN6hg82i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lCLBCtyg, 0, m, &cVar_lCLBCtyg_sendMessage);
}

void Heavy_DeArmondo610::cVar_lCLBCtyg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_j8IVMQLX, HV_BINOP_ADD, 0, m, &cBinop_j8IVMQLX_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_xyQo1fgJ, HV_BINOP_ADD, 0, m, &cBinop_xyQo1fgJ_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_8kznxmlE, HV_BINOP_ADD, 0, m, &cBinop_8kznxmlE_sendMessage);
}

void Heavy_DeArmondo610::cSlice_szdzmsVC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ag7BpPvG_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5TLDdbtU_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_DeArmondo610::cSlice_VXaiSSNG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_J7E6OqFp_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_djl7irNI_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_DeArmondo610::cBinop_i64SnV1z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VFF6dCyH, 1, m, &cVar_VFF6dCyH_sendMessage);
}

void Heavy_DeArmondo610::cBinop_r6qDNXUo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_i64SnV1z_sendMessage);
}

void Heavy_DeArmondo610::cBinop_7EF0rBfo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_qG5vbApg_sendMessage);
}

void Heavy_DeArmondo610::cBinop_qG5vbApg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JwnrtcGs, HV_BINOP_SUBTRACT, 1, m, &cBinop_JwnrtcGs_sendMessage);
}

void Heavy_DeArmondo610::cBinop_JwnrtcGs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VFF6dCyH, 1, m, &cVar_VFF6dCyH_sendMessage);
}

void Heavy_DeArmondo610::cMsg_gKL5CuXv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_lHWGl6PQ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_B4ZCEDKS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_lHWGl6PQ_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_xyQo1fgJ, HV_BINOP_ADD, 1, m, &cBinop_xyQo1fgJ_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_j8IVMQLX, HV_BINOP_ADD, 1, m, &cBinop_j8IVMQLX_sendMessage);
}

void Heavy_DeArmondo610::cBinop_Mf16Tb4z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_yq7aWi0u_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DeArmondo610::cBinop_j8IVMQLX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lCLBCtyg, 1, m, &cVar_lCLBCtyg_sendMessage);
}

void Heavy_DeArmondo610::cBinop_pjkRi71i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kJMqA6bb, HV_BINOP_DIVIDE, 1, m, &cBinop_kJMqA6bb_sendMessage);
}

void Heavy_DeArmondo610::cBinop_kJMqA6bb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xyQo1fgJ, HV_BINOP_ADD, 1, m, &cBinop_xyQo1fgJ_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_j8IVMQLX, HV_BINOP_ADD, 1, m, &cBinop_j8IVMQLX_sendMessage);
}

void Heavy_DeArmondo610::cCast_5TLDdbtU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pjkRi71i, HV_BINOP_DIVIDE, 0, m, &cBinop_pjkRi71i_sendMessage);
}

void Heavy_DeArmondo610::cCast_ag7BpPvG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_r6qDNXUo, HV_BINOP_MULTIPLY, 0, m, &cBinop_r6qDNXUo_sendMessage);
}

void Heavy_DeArmondo610::cCast_J7E6OqFp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nN6hg82i, 1, m, &cVar_nN6hg82i_sendMessage);
}

void Heavy_DeArmondo610::cCast_djl7irNI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kaV66lzu, HV_BINOP_SUBTRACT, 0, m, &cBinop_kaV66lzu_sendMessage);
}

void Heavy_DeArmondo610::cCast_GXy0h3GD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_B4ZCEDKS_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_rpUeWRA7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nN6hg82i, 0, m, &cVar_nN6hg82i_sendMessage);
}

void Heavy_DeArmondo610::cBinop_xyQo1fgJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ArJlsXZD, 0, m, &cVar_ArJlsXZD_sendMessage);
}

void Heavy_DeArmondo610::cMsg_HcMQQf6v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_lHWGl6PQ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_TftJoLoM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_yrXMWzON, 1, m, &cVar_yrXMWzON_sendMessage);
}

void Heavy_DeArmondo610::cMsg_VlpJ69LV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_7EF0rBfo, HV_BINOP_MULTIPLY, 0, m, &cBinop_7EF0rBfo_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_pjkRi71i, HV_BINOP_DIVIDE, 1, m, &cBinop_pjkRi71i_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_G7wqXs3r, 0, m, &cVar_G7wqXs3r_sendMessage);
}

void Heavy_DeArmondo610::cCast_Y7zqPsFo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9KI1KgQx_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_xyQo1fgJ, HV_BINOP_ADD, 0, m, &cBinop_xyQo1fgJ_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_lCLBCtyg, 1, m, &cVar_lCLBCtyg_sendMessage);
}

void Heavy_DeArmondo610::cCast_uWr8UtCM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HcMQQf6v_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_kaV66lzu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kJMqA6bb, HV_BINOP_DIVIDE, 0, m, &cBinop_kJMqA6bb_sendMessage);
}

void Heavy_DeArmondo610::cCast_9KI1KgQx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_B4ZCEDKS_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_WdT7DsIo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TftJoLoM_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_rPwAF6NA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yrXMWzON, 0, m, &cVar_yrXMWzON_sendMessage);
}

void Heavy_DeArmondo610::cCast_iuqbwaFp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gKL5CuXv_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cMsg_u439rKtI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_IBugrX4P_sendMessage);
}

void Heavy_DeArmondo610::cSystem_IBugrX4P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Yhw4PD9k, HV_BINOP_MULTIPLY, 1, m, &cBinop_Yhw4PD9k_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_VoUcTQJg, HV_BINOP_MULTIPLY, 1, m, &cBinop_VoUcTQJg_sendMessage);
}

void Heavy_DeArmondo610::cSwitchcase_7nQkN76J_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_qmjGxDjN_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_qmjGxDjN_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Yl9ftnWm_sendMessage);
      break;
    }
  }
}

void Heavy_DeArmondo610::cDelay_PVLS2vjT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_PVLS2vjT, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_PVLS2vjT, 0, m, &cDelay_PVLS2vjT_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_SOP2n1z3, 0, m, &cVar_SOP2n1z3_sendMessage);
}

void Heavy_DeArmondo610::cCast_Yl9ftnWm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qmjGxDjN_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_PVLS2vjT, 0, m, &cDelay_PVLS2vjT_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_SOP2n1z3, 0, m, &cVar_SOP2n1z3_sendMessage);
}

void Heavy_DeArmondo610::cMsg_8PqOxj96_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_3eFA57L6_sendMessage);
}

void Heavy_DeArmondo610::cSystem_3eFA57L6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_VeTEEhZR_sendMessage);
}

void Heavy_DeArmondo610::cVar_TEKsBTHx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2XDh955M, HV_BINOP_MULTIPLY, 0, m, &cBinop_2XDh955M_sendMessage);
}

void Heavy_DeArmondo610::cMsg_qmjGxDjN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_PVLS2vjT, 0, m, &cDelay_PVLS2vjT_sendMessage);
}

void Heavy_DeArmondo610::cBinop_5JTB1CnY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_PVLS2vjT, 2, m, &cDelay_PVLS2vjT_sendMessage);
}

void Heavy_DeArmondo610::cBinop_VeTEEhZR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2XDh955M, HV_BINOP_MULTIPLY, 1, m, &cBinop_2XDh955M_sendMessage);
}

void Heavy_DeArmondo610::cBinop_2XDh955M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_5JTB1CnY_sendMessage);
}

void Heavy_DeArmondo610::cVar_SOP2n1z3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aBCFrkHh, HV_BINOP_SUBTRACT, 0, m, &cBinop_aBCFrkHh_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_cZNe6Gui_sendMessage);
}

void Heavy_DeArmondo610::cSwitchcase_74snXouF_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MmmSjL6P_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uFwymiVv_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_DeArmondo610::cCast_MmmSjL6P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mMNFIr2a, 0, m, &cVar_mMNFIr2a_sendMessage);
}

void Heavy_DeArmondo610::cCast_uFwymiVv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SR1YdxbP_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UMJYRUF0_sendMessage);
}

void Heavy_DeArmondo610::cSwitchcase_p2P6Ejwk_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_SDLuEgXa, 0, m, &cSlice_SDLuEgXa_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ruLiYivG, 0, m, &cSlice_ruLiYivG_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qH2Pw2Pj_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_iMfyCa6t, 0, m, &cSlice_iMfyCa6t_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_9O4YTl9y, 0, m, &cSlice_9O4YTl9y_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hs3Efvil_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5qFMJ2dI_sendMessage);
      break;
    }
  }
}

void Heavy_DeArmondo610::cSlice_SDLuEgXa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_fiQ3HJkM_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_fiQ3HJkM_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_DeArmondo610::cSlice_ruLiYivG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_T17LonnW_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_noXScCHH_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_T17LonnW_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_noXScCHH_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_DeArmondo610::cVar_ZGudY0Bg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KkpMx3M2_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Q9LUHsou_sendMessage);
}

void Heavy_DeArmondo610::cVar_ziGlH8Nu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ruxDxbpW_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DeArmondo610::cSwitchcase_ruxDxbpW_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SnPcjEKj_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_Yhw4PD9k, HV_BINOP_MULTIPLY, 0, m, &cBinop_Yhw4PD9k_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_zwECKGCL, HV_BINOP_DIVIDE, 1, m, &cBinop_zwECKGCL_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_TEKsBTHx, 0, m, &cVar_TEKsBTHx_sendMessage);
      break;
    }
  }
}

void Heavy_DeArmondo610::cCast_SnPcjEKj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_w92atjpf_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cVar_AiVA4lKC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4snqFKhG, HV_BINOP_SUBTRACT, 1, m, &cBinop_4snqFKhG_sendMessage);
}

void Heavy_DeArmondo610::cVar_2FcbXSEN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mMNFIr2a, 0, m, &cVar_mMNFIr2a_sendMessage);
}

void Heavy_DeArmondo610::cVar_mMNFIr2a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_w0s9SxDD, HV_BINOP_ADD, 0, m, &cBinop_w0s9SxDD_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_qQHwlEcX, HV_BINOP_ADD, 0, m, &cBinop_qQHwlEcX_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_oo68xb9Z, HV_BINOP_ADD, 0, m, &cBinop_oo68xb9Z_sendMessage);
}

void Heavy_DeArmondo610::cSlice_iMfyCa6t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KkpMx3M2_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Q9LUHsou_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_DeArmondo610::cSlice_9O4YTl9y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ffJS4mBl_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KkTqhQoR_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_DeArmondo610::cBinop_BtCRypG0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SOP2n1z3, 1, m, &cVar_SOP2n1z3_sendMessage);
}

void Heavy_DeArmondo610::cBinop_VoUcTQJg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_BtCRypG0_sendMessage);
}

void Heavy_DeArmondo610::cBinop_Yhw4PD9k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_P8bMWNEy_sendMessage);
}

void Heavy_DeArmondo610::cBinop_P8bMWNEy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aBCFrkHh, HV_BINOP_SUBTRACT, 1, m, &cBinop_aBCFrkHh_sendMessage);
}

void Heavy_DeArmondo610::cBinop_aBCFrkHh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SOP2n1z3, 1, m, &cVar_SOP2n1z3_sendMessage);
}

void Heavy_DeArmondo610::cMsg_dN8cur6F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_7nQkN76J_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_hK2d4FX1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_7nQkN76J_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_qQHwlEcX, HV_BINOP_ADD, 1, m, &cBinop_qQHwlEcX_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_w0s9SxDD, HV_BINOP_ADD, 1, m, &cBinop_w0s9SxDD_sendMessage);
}

void Heavy_DeArmondo610::cBinop_cZNe6Gui_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_74snXouF_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DeArmondo610::cBinop_w0s9SxDD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mMNFIr2a, 1, m, &cVar_mMNFIr2a_sendMessage);
}

void Heavy_DeArmondo610::cBinop_zwECKGCL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mkpyUmVe, HV_BINOP_DIVIDE, 1, m, &cBinop_mkpyUmVe_sendMessage);
}

void Heavy_DeArmondo610::cBinop_mkpyUmVe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qQHwlEcX, HV_BINOP_ADD, 1, m, &cBinop_qQHwlEcX_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_w0s9SxDD, HV_BINOP_ADD, 1, m, &cBinop_w0s9SxDD_sendMessage);
}

void Heavy_DeArmondo610::cCast_KkpMx3M2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VoUcTQJg, HV_BINOP_MULTIPLY, 0, m, &cBinop_VoUcTQJg_sendMessage);
}

void Heavy_DeArmondo610::cCast_Q9LUHsou_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zwECKGCL, HV_BINOP_DIVIDE, 0, m, &cBinop_zwECKGCL_sendMessage);
}

void Heavy_DeArmondo610::cCast_KkTqhQoR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4snqFKhG, HV_BINOP_SUBTRACT, 0, m, &cBinop_4snqFKhG_sendMessage);
}

void Heavy_DeArmondo610::cCast_ffJS4mBl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_2FcbXSEN, 1, m, &cVar_2FcbXSEN_sendMessage);
}

void Heavy_DeArmondo610::cCast_SR1YdxbP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hK2d4FX1_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_UMJYRUF0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_2FcbXSEN, 0, m, &cVar_2FcbXSEN_sendMessage);
}

void Heavy_DeArmondo610::cBinop_qQHwlEcX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_AiVA4lKC, 0, m, &cVar_AiVA4lKC_sendMessage);
}

void Heavy_DeArmondo610::cMsg_fiQ3HJkM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_7nQkN76J_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DeArmondo610::cMsg_zzMxrtWX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_ZGudY0Bg, 1, m, &cVar_ZGudY0Bg_sendMessage);
}

void Heavy_DeArmondo610::cMsg_w92atjpf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Yhw4PD9k, HV_BINOP_MULTIPLY, 0, m, &cBinop_Yhw4PD9k_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_zwECKGCL, HV_BINOP_DIVIDE, 1, m, &cBinop_zwECKGCL_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_TEKsBTHx, 0, m, &cVar_TEKsBTHx_sendMessage);
}

void Heavy_DeArmondo610::cCast_noXScCHH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PbjuvSYB_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_qQHwlEcX, HV_BINOP_ADD, 0, m, &cBinop_qQHwlEcX_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_mMNFIr2a, 1, m, &cVar_mMNFIr2a_sendMessage);
}

void Heavy_DeArmondo610::cCast_T17LonnW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fiQ3HJkM_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_4snqFKhG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mkpyUmVe, HV_BINOP_DIVIDE, 0, m, &cBinop_mkpyUmVe_sendMessage);
}

void Heavy_DeArmondo610::cCast_PbjuvSYB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hK2d4FX1_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_hs3Efvil_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dN8cur6F_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_qH2Pw2Pj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZGudY0Bg, 0, m, &cVar_ZGudY0Bg_sendMessage);
}

void Heavy_DeArmondo610::cCast_5qFMJ2dI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zzMxrtWX_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_ecp0MdC2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_MEKO9DWr_sendMessage);
}

void Heavy_DeArmondo610::cBinop_MEKO9DWr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_W7Koe8Rl_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wES91LZF_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_v7AqcMZB_sendMessage);
}

void Heavy_DeArmondo610::cVar_PCDwwcsf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_n4Fjodh3_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1pdLFHww_sendMessage);
  cSend_rCcyOyh9_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cVar_K0zmsYHx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_DeArmondo610::cVar_cqZaOmS7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_DeArmondo610::cBinop_1GbUTxs2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_65n3AyHO_sendMessage);
}

void Heavy_DeArmondo610::cBinop_65n3AyHO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cqZaOmS7, 0, m, &cVar_cqZaOmS7_sendMessage);
}

void Heavy_DeArmondo610::cVar_o4lllOJo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_DeArmondo610::cIf_rxhji8Xx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_hIL9FuTS_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_ig1NIhU1_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_DeArmondo610::cBinop_wOf0zK7i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_rxhji8Xx, 1, m, &cIf_rxhji8Xx_sendMessage);
}

void Heavy_DeArmondo610::cBinop_vrxsASfu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_AOEN5TxE_sendMessage);
}

void Heavy_DeArmondo610::cBinop_AOEN5TxE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_wuhRsXdo, m);
}

void Heavy_DeArmondo610::cSend_nQ7I07Cy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_fTPTzu9a_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_Lspe06YS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zniHikua, 0, m, &cVar_zniHikua_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_zgSRj8yU, 0, m, &cVar_zgSRj8yU_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_mMDHkx3t, 0, m, &cVar_mMDHkx3t_sendMessage);
}

void Heavy_DeArmondo610::cBinop_PVurT9i1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 480.0f, 0, m, &cBinop_Lspe06YS_sendMessage);
}

void Heavy_DeArmondo610::cBinop_R3QOL0j2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 7520.0f, 0, m, &cBinop_PVurT9i1_sendMessage);
}

void Heavy_DeArmondo610::cCast_wES91LZF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_R3QOL0j2, HV_BINOP_MULTIPLY, 0, m, &cBinop_R3QOL0j2_sendMessage);
}

void Heavy_DeArmondo610::cCast_v7AqcMZB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_R3QOL0j2, HV_BINOP_MULTIPLY, 0, m, &cBinop_R3QOL0j2_sendMessage);
}

void Heavy_DeArmondo610::cCast_W7Koe8Rl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_R3QOL0j2, HV_BINOP_MULTIPLY, 1, m, &cBinop_R3QOL0j2_sendMessage);
}

void Heavy_DeArmondo610::cBinop_8kznxmlE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_vrxsASfu_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_1GbUTxs2_sendMessage);
}

void Heavy_DeArmondo610::cBinop_oo68xb9Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_ecp0MdC2_sendMessage);
}

void Heavy_DeArmondo610::cCast_rjcNlosD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oo68xb9Z, HV_BINOP_ADD, 1, m, &cBinop_oo68xb9Z_sendMessage);
}

void Heavy_DeArmondo610::cCast_898994sJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oo68xb9Z, HV_BINOP_ADD, 0, m, &cBinop_oo68xb9Z_sendMessage);
}

void Heavy_DeArmondo610::cSend_rCcyOyh9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Zf5KQYbZ_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cSend_hv6v8jKE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ZOsrMDgh_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cCast_L9XpKhCM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8kznxmlE, HV_BINOP_ADD, 0, m, &cBinop_8kznxmlE_sendMessage);
}

void Heavy_DeArmondo610::cCast_EdMDY2vk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8kznxmlE, HV_BINOP_ADD, 1, m, &cBinop_8kznxmlE_sendMessage);
}

void Heavy_DeArmondo610::cCast_n4Fjodh3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XuUGeTvV, HV_BINOP_MULTIPLY, 1, m, &cBinop_XuUGeTvV_sendMessage);
}

void Heavy_DeArmondo610::cCast_1pdLFHww_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5LALTKC7_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_XuUGeTvV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dliM6CJL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BO3QOqGc_sendMessage);
}

void Heavy_DeArmondo610::cMsg_5LALTKC7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_XuUGeTvV, HV_BINOP_MULTIPLY, 0, m, &cBinop_XuUGeTvV_sendMessage);
}

void Heavy_DeArmondo610::cCast_dliM6CJL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_s5K3Xahf, HV_BINOP_ADD, 1, m, &cBinop_s5K3Xahf_sendMessage);
}

void Heavy_DeArmondo610::cCast_BO3QOqGc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vkZu8yhq_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cBinop_s5K3Xahf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_o4lllOJo, 0, m, &cVar_o4lllOJo_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 0.64f, 0, m, &cBinop_wOf0zK7i_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_rxhji8Xx, 0, m, &cIf_rxhji8Xx_sendMessage);
}

void Heavy_DeArmondo610::cMsg_vkZu8yhq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_s5K3Xahf, HV_BINOP_ADD, 0, m, &cBinop_s5K3Xahf_sendMessage);
}

void Heavy_DeArmondo610::cMsg_hIL9FuTS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_K0zmsYHx, 0, m, &cVar_K0zmsYHx_sendMessage);
  cSend_hv6v8jKE_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cMsg_ig1NIhU1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_K0zmsYHx, 0, m, &cVar_K0zmsYHx_sendMessage);
  cSend_hv6v8jKE_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cReceive_DIc4aqYg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_nQ7I07Cy_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cReceive_CA6cLOvd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8uCCHYmo_sendMessage(_c, 0, m);
  cMsg_FWFO2Qnc_sendMessage(_c, 0, m);
  cMsg_sRGELI7C_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_fG7Soiex, 0, m, &cVar_fG7Soiex_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_zniHikua, 0, m, &cVar_zniHikua_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_mMDHkx3t, 0, m, &cVar_mMDHkx3t_sendMessage);
  cMsg_yRJDkaDO_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_G7wqXs3r, 0, m, &cVar_G7wqXs3r_sendMessage);
  cMsg_8PqOxj96_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_TEKsBTHx, 0, m, &cVar_TEKsBTHx_sendMessage);
  cMsg_jig9jByQ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_bgM6sZl2, 0, m, &cVar_bgM6sZl2_sendMessage);
  cMsg_jAvTbeaR_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ArJlsXZD, 0, m, &cVar_ArJlsXZD_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Mhowtc6M, 0, m, &cVar_Mhowtc6M_sendMessage);
  cMsg_u439rKtI_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_AiVA4lKC, 0, m, &cVar_AiVA4lKC_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ziGlH8Nu, 0, m, &cVar_ziGlH8Nu_sendMessage);
}

void Heavy_DeArmondo610::cReceive_ub2Nbkre_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_1AxX65Et_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -0.5f, 0, m, &cBinop_iPppAwO6_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_47ZbPvx5, HV_BINOP_MULTIPLY, 0, m, &cBinop_47ZbPvx5_sendMessage);
}

void Heavy_DeArmondo610::cReceive_HNZMYuAb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_Ajn4g2hx_sendMessage);
}

void Heavy_DeArmondo610::cReceive_uu8fujgb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ToeTxfqO_sendMessage);
  cMsg_4H0P7OhD_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cReceive_fTPTzu9a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_p2P6Ejwk_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_dyijQEdM_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DeArmondo610::cReceive_AMJ5s72Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MLOezWqf, HV_BINOP_MULTIPLY, 0, m, &cBinop_MLOezWqf_sendMessage);
}

void Heavy_DeArmondo610::cReceive_qb07FtAT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_J0Aw1NN7_sendMessage(_c, 0, m);
  cMsg_lrDiI9zv_sendMessage(_c, 0, m);
  cMsg_dDEbJ8Vt_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_OJHZbPO3_sendMessage);
}

void Heavy_DeArmondo610::cReceive_WlTgaHOs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_U5hTIekm_sendMessage);
  cMsg_LGc16IzS_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cReceive_px7YBtnF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TBCXDyIl, HV_BINOP_MULTIPLY, 0, m, &cBinop_TBCXDyIl_sendMessage);
}

void Heavy_DeArmondo610::cReceive_IQ3NVDht_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5wCx8raP_sendMessage(_c, 0, m);
  cMsg_yhIl8S69_sendMessage(_c, 0, m);
  cMsg_FLEcdpzl_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_CigExaln_sendMessage);
}

void Heavy_DeArmondo610::cReceive_nsXsCx5R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_XzsfzmtU_sendMessage);
  cMsg_4PiGtaXY_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cReceive_Q5XnxoF2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_BHp5FHSG, m);
}

void Heavy_DeArmondo610::cReceive_FpAnLO0Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_rCcyOyh9_sendMessage(_c, 0, m);
}

void Heavy_DeArmondo610::cReceive_Zf5KQYbZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_EdMDY2vk_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_L9XpKhCM_sendMessage);
}

void Heavy_DeArmondo610::cReceive_ZOsrMDgh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rjcNlosD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_898994sJ_sendMessage);
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
    __hv_varread_f(&sVarf_P0Gmrbha, VOf(Bf0));
    __hv_rpole_f(&sRPole_Kdd3DDhg, VIf(I0), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_XjmkhX9i, VIf(Bf0), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_BOsPhUmL, VOf(Bf0));
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_ejH2bD6t, VOf(Bf1));
    __hv_zero_f(VOf(Bf2));
    __hv_line_f(&sLine_JPVzuI5Q, VOf(Bf3));
    __hv_line_f(&sLine_VmB6hsJT, VOf(Bf4));
    __hv_line_f(&sLine_Fu2sVHq9, VOf(Bf5));
    __hv_biquad_f(&sBiquad_s_n7UdxUlK, VIf(Bf0), VIf(Bf1), VIf(Bf2), VIf(Bf3), VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 0.77f, 0.77f, 0.77f, 0.77f, 0.77f, 0.77f, 0.77f, 0.77f);
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_BHp5FHSG, VOf(Bf5));
    __hv_fma_f(VIf(Bf4), VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_wuhRsXdo, VOf(Bf5));
    __hv_mul_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_4mS0j1G8, VOf(Bf0));
    __hv_line_f(&sLine_FZgXksBh, VOf(Bf4));
    __hv_line_f(&sLine_yQysywQn, VOf(Bf3));
    __hv_line_f(&sLine_Ov3p3Isd, VOf(Bf2));
    __hv_line_f(&sLine_CtXLtY8F, VOf(Bf1));
    __hv_biquad_f(&sBiquad_s_66zrI1S9, VIf(Bf5), VIf(Bf0), VIf(Bf4), VIf(Bf3), VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_IUdAKvMj, VOf(Bf2));
    __hv_line_f(&sLine_ZgnLLTvh, VOf(Bf3));
    __hv_line_f(&sLine_kczgmUZN, VOf(Bf4));
    __hv_line_f(&sLine_2SjY66QY, VOf(Bf0));
    __hv_line_f(&sLine_pzabNTGe, VOf(Bf5));
    __hv_biquad_f(&sBiquad_s_jgjvRuiR, VIf(Bf1), VIf(Bf2), VIf(Bf3), VIf(Bf4), VIf(Bf0), VIf(Bf5), VOf(Bf5));
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
