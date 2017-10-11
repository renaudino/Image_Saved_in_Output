/*
 * EffConstruct_mexutil.c
 *
 * Code generation for function 'EffConstruct_mexutil'
 *
 * C source code generated on: Fri Dec 20 16:15:35 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct.h"
#include "EffConstruct_mexutil.h"
#include "EffConstruct_emxutil.h"
#include "EffConstruct_data.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void ab_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret_data[15], int32_T ret_size[1]);
static real_T b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static void bb_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret);
static void cb_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret);
static void db_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret);
static void eb_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret_data[150], int32_T ret_size[1]);
static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[3]);
static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y);
static void j_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y_data[2700], int32_T y_size[3]);
static void l_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y_data[15], int32_T y_size[1]);
static void n_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y);
static void p_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y);
static void r_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y);
static void t_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y_data[150], int32_T y_size[1]);
static real_T u_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static void w_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[3]);
static void x_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret);
static void y_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret_data[2700], int32_T ret_size[3]);

/* Function Definitions */
static void ab_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret_data[15], int32_T ret_size[1])
{
  int32_T iv11[1];
  boolean_T bv4[1];
  iv11[0] = 15;
  bv4[0] = TRUE;
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 1U,
    iv11, bv4, ret_size);
  emlrtImportArrayR2011b(src, ret_data, 8, FALSE);
  emlrtDestroyArray(&src);
}

static real_T b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  real_T y;
  y = u_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void bb_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret)
{
  int32_T iv12[4];
  boolean_T bv5[4];
  int32_T i;
  static const int8_T iv13[4] = { 15, -1, 15, 3 };

  static const boolean_T bv6[4] = { TRUE, TRUE, TRUE, FALSE };

  for (i = 0; i < 4; i++) {
    iv12[i] = iv13[i];
    bv5[i] = bv6[i];
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 4U,
    iv12, bv5, ret->size);
  i = ret->size[0] * ret->size[1] * ret->size[2] * ret->size[3];
  ret->size[0] = ret->size[0];
  ret->size[1] = ret->size[1];
  ret->size[2] = ret->size[2];
  ret->size[3] = 3;
  emxEnsureCapacity((emxArray__common *)ret, i, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, FALSE);
  emlrtDestroyArray(&src);
}

static void cb_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret)
{
  int32_T iv14[4];
  boolean_T bv7[4];
  int32_T i;
  static const int8_T iv15[4] = { 15, -1, 15, 2 };

  static const boolean_T bv8[4] = { TRUE, TRUE, TRUE, FALSE };

  for (i = 0; i < 4; i++) {
    iv14[i] = iv15[i];
    bv7[i] = bv8[i];
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 4U,
    iv14, bv7, ret->size);
  i = ret->size[0] * ret->size[1] * ret->size[2] * ret->size[3];
  ret->size[0] = ret->size[0];
  ret->size[1] = ret->size[1];
  ret->size[2] = ret->size[2];
  ret->size[3] = 2;
  emxEnsureCapacity((emxArray__common *)ret, i, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, FALSE);
  emlrtDestroyArray(&src);
}

static void db_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret)
{
  int32_T iv16[4];
  boolean_T bv9[4];
  int32_T i;
  static const uint8_T uv1[4] = { 150, 6, 4, 3 };

  static const boolean_T bv10[4] = { TRUE, FALSE, FALSE, FALSE };

  for (i = 0; i < 4; i++) {
    iv16[i] = uv1[i];
    bv9[i] = bv10[i];
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 4U,
    iv16, bv9, ret->size);
  i = ret->size[0] * ret->size[1] * ret->size[2] * ret->size[3];
  ret->size[0] = ret->size[0];
  ret->size[1] = 6;
  ret->size[2] = 4;
  ret->size[3] = 3;
  emxEnsureCapacity((emxArray__common *)ret, i, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, FALSE);
  emlrtDestroyArray(&src);
}

static void eb_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret_data[150], int32_T ret_size[1])
{
  int32_T iv17[1];
  boolean_T bv11[1];
  iv17[0] = 150;
  bv11[0] = TRUE;
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 1U,
    iv17, bv11, ret_size);
  emlrtImportArrayR2011b(src, ret_data, 8, FALSE);
  emlrtDestroyArray(&src);
}

static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[3])
{
  w_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y)
{
  x_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void j_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y_data[2700], int32_T y_size[3])
{
  y_emlrt_marshallIn(emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void l_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y_data[15], int32_T y_size[1])
{
  ab_emlrt_marshallIn(emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void n_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y)
{
  bb_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void p_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y)
{
  cb_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void r_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y)
{
  db_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void t_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y_data[150], int32_T y_size[1])
{
  eb_emlrt_marshallIn(emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static real_T u_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void w_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[3])
{
  int32_T iv7[1];
  int32_T i19;
  iv7[0] = 3;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 1U,
    iv7);
  for (i19 = 0; i19 < 3; i19++) {
    ret[i19] = (*(real_T (*)[3])mxGetData(src))[i19];
  }

  emlrtDestroyArray(&src);
}

static void x_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret)
{
  int32_T iv8[3];
  boolean_T bv0[3];
  int32_T i;
  static const int16_T iv9[3] = { 15, 900, 5 };

  static const boolean_T bv1[3] = { TRUE, TRUE, FALSE };

  for (i = 0; i < 3; i++) {
    iv8[i] = iv9[i];
    bv0[i] = bv1[i];
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 3U,
    iv8, bv0, ret->size);
  i = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = ret->size[0];
  ret->size[1] = ret->size[1];
  ret->size[2] = 5;
  emxEnsureCapacity((emxArray__common *)ret, i, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, FALSE);
  emlrtDestroyArray(&src);
}

static void y_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret_data[2700], int32_T ret_size[3])
{
  int32_T iv10[3];
  boolean_T bv2[3];
  int32_T i;
  static const uint8_T uv0[3] = { 150, 6, 3 };

  static const boolean_T bv3[3] = { TRUE, FALSE, FALSE };

  for (i = 0; i < 3; i++) {
    iv10[i] = uv0[i];
    bv2[i] = bv3[i];
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 3U,
    iv10, bv2, ret_size);
  ret_size[1] = 6;
  ret_size[2] = 3;
  emlrtImportArrayR2011b(src, ret_data, 8, FALSE);
  emlrtDestroyArray(&src);
}

const mxArray *b_emlrt_marshallOut(const real_T u[3])
{
  const mxArray *y;
  static const int32_T iv5[1] = { 3 };

  const mxArray *m2;
  real_T (*pData)[];
  int32_T i;
  y = NULL;
  m2 = mxCreateNumericArray(1, (int32_T *)&iv5, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m2);
  for (i = 0; i < 3; i++) {
    (*pData)[i] = u[i];
  }

  emlrtAssign(&y, m2);
  return y;
}

const mxArray *c_emlrt_marshallOut(emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m3;
  real_T (*pData)[];
  int32_T i11;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  y = NULL;
  m3 = mxCreateNumericArray(3, (int32_T *)u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m3);
  i11 = 0;
  for (i = 0; i < 5; i++) {
    for (b_i = 0; b_i < u->size[1]; b_i++) {
      for (c_i = 0; c_i < u->size[0]; c_i++) {
        (*pData)[i11] = u->data[(c_i + u->size[0] * b_i) + u->size[0] * u->size
          [1] * i];
        i11++;
      }
    }
  }

  emlrtAssign(&y, m3);
  return y;
}

const mxArray *d_emlrt_marshallOut(real_T u_data[2700], int32_T u_size[3])
{
  const mxArray *y;
  const mxArray *m4;
  real_T (*pData)[];
  int32_T i12;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  y = NULL;
  m4 = mxCreateNumericArray(3, (int32_T *)u_size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m4);
  i12 = 0;
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 6; b_i++) {
      for (c_i = 0; c_i < u_size[0]; c_i++) {
        (*pData)[i12] = u_data[(c_i + u_size[0] * b_i) + u_size[0] * u_size[1] *
          i];
        i12++;
      }
    }
  }

  emlrtAssign(&y, m4);
  return y;
}

void e_emlrt_marshallIn(const mxArray *c_recept, const char_T *identifier,
  real_T y[3])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  f_emlrt_marshallIn(emlrtAlias(c_recept), &thisId, y);
  emlrtDestroyArray(&c_recept);
}

const mxArray *e_emlrt_marshallOut(real_T u_data[15], int32_T u_size[1])
{
  const mxArray *y;
  const mxArray *m5;
  real_T (*pData)[];
  int32_T i13;
  int32_T i;
  y = NULL;
  m5 = mxCreateNumericArray(1, (int32_T *)u_size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m5);
  i13 = 0;
  for (i = 0; i < u_size[0]; i++) {
    (*pData)[i13] = u_data[i];
    i13++;
  }

  emlrtAssign(&y, m5);
  return y;
}

void emlrt_checkEscapedGlobals(void)
{
  oldReflex_dirty |= oldReflex_dirty >> 1U;
  Reflex_dirty |= Reflex_dirty >> 1U;
  Nblock_dirty |= Nblock_dirty >> 1U;
  recept_dirty |= recept_dirty >> 1U;
  Mpath_dirty |= Mpath_dirty >> 1U;
  vnfaces_dirty |= vnfaces_dirty >> 1U;
  NbrSlns_dirty |= NbrSlns_dirty >> 1U;
  PSLN_dirty |= PSLN_dirty >> 1U;
  FSLN_dirty |= FSLN_dirty >> 1U;
  NbrDSSlns_dirty |= NbrDSSlns_dirty >> 1U;
  RP_dirty |= RP_dirty >> 1U;
  RF_dirty |= RF_dirty >> 1U;
  wedges_dirty |= wedges_dirty >> 1U;
  MSKFlag_dirty |= MSKFlag_dirty >> 1U;
  CEP_dirty |= CEP_dirty >> 1U;
}

real_T emlrt_marshallIn(const mxArray *OrdRef, const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(emlrtAlias(OrdRef), &thisId);
  emlrtDestroyArray(&OrdRef);
  return y;
}

const mxArray *emlrt_marshallOut(real_T u)
{
  const mxArray *y;
  const mxArray *m1;
  y = NULL;
  m1 = mxCreateDoubleScalar(u);
  emlrtAssign(&y, m1);
  return y;
}

void emlrt_synchGlobalsFromML(void)
{
  oldReflex = emlrt_marshallIn(mexGetVariable("global", "oldReflex"),
    "oldReflex");
  Reflex = emlrt_marshallIn(mexGetVariable("global", "Reflex"), "Reflex");
  Nblock = emlrt_marshallIn(mexGetVariable("global", "Nblock"), "Nblock");
  e_emlrt_marshallIn(mexGetVariable("global", "recept"), "recept", recept);
  g_emlrt_marshallIn(mexGetVariable("global", "Mpath"), "Mpath", Mpath);
  i_emlrt_marshallIn(mexGetVariable("global", "vnfaces"), "vnfaces",
                     vnfaces.data, vnfaces.size);
  k_emlrt_marshallIn(mexGetVariable("global", "NbrSlns"), "NbrSlns",
                     NbrSlns.data, NbrSlns.size);
  m_emlrt_marshallIn(mexGetVariable("global", "PSLN"), "PSLN", PSLN);
  o_emlrt_marshallIn(mexGetVariable("global", "FSLN"), "FSLN", FSLN);
  k_emlrt_marshallIn(mexGetVariable("global", "NbrDSSlns"), "NbrDSSlns",
                     NbrDSSlns.data, NbrDSSlns.size);
  m_emlrt_marshallIn(mexGetVariable("global", "RP"), "RP", RP);
  o_emlrt_marshallIn(mexGetVariable("global", "RF"), "RF", RF);
  q_emlrt_marshallIn(mexGetVariable("global", "wedges"), "wedges", wedges);
  s_emlrt_marshallIn(mexGetVariable("global", "MSKFlag"), "MSKFlag",
                     MSKFlag.data, MSKFlag.size);
  s_emlrt_marshallIn(mexGetVariable("global", "CEP"), "CEP", CEP.data, CEP.size);
}

void emlrt_synchGlobalsToML(void)
{
  emxArray_real_T *r8;
  int32_T i18;
  int32_T loop_ub;
  real_T tmp_data[2700];
  int32_T tmp_size[3];
  real_T b_tmp_data[15];
  int32_T b_tmp_size[1];
  emxArray_real_T *r9;
  emxArray_real_T *r10;
  int32_T c_tmp_size[1];
  emxArray_real_T *r11;
  emxArray_real_T *r12;
  emxArray_real_T *r13;
  real_T c_tmp_data[150];
  int32_T d_tmp_size[1];
  int32_T e_tmp_size[1];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  if (oldReflex_dirty & 1U) {
    mexPutVariable("global", "oldReflex", emlrt_marshallOut(oldReflex));
    oldReflex_dirty &= 2U;
  }

  if (Reflex_dirty & 1U) {
    mexPutVariable("global", "Reflex", emlrt_marshallOut(Reflex));
    Reflex_dirty &= 2U;
  }

  if (Nblock_dirty & 1U) {
    mexPutVariable("global", "Nblock", emlrt_marshallOut(Nblock));
    Nblock_dirty &= 2U;
  }

  if (recept_dirty & 1U) {
    mexPutVariable("global", "recept", b_emlrt_marshallOut(recept));
    recept_dirty &= 2U;
  }

  if (Mpath_dirty & 1U) {
    emxInit_real_T(&r8, 3, (emlrtRTEInfo *)NULL, TRUE);
    i18 = r8->size[0] * r8->size[1] * r8->size[2];
    r8->size[0] = Mpath->size[0];
    r8->size[1] = Mpath->size[1];
    r8->size[2] = 5;
    emxEnsureCapacity((emxArray__common *)r8, i18, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = Mpath->size[0] * Mpath->size[1] * Mpath->size[2];
    for (i18 = 0; i18 < loop_ub; i18++) {
      r8->data[i18] = Mpath->data[i18];
    }

    mexPutVariable("global", "Mpath", c_emlrt_marshallOut(r8));
    Mpath_dirty &= 2U;
    emxFree_real_T(&r8);
  }

  if (vnfaces_dirty & 1U) {
    tmp_size[0] = vnfaces.size[0];
    tmp_size[1] = 6;
    tmp_size[2] = 3;
    loop_ub = vnfaces.size[0] * vnfaces.size[1] * vnfaces.size[2];
    for (i18 = 0; i18 < loop_ub; i18++) {
      tmp_data[i18] = vnfaces.data[i18];
    }

    mexPutVariable("global", "vnfaces", d_emlrt_marshallOut(tmp_data, tmp_size));
    vnfaces_dirty &= 2U;
  }

  if (NbrSlns_dirty & 1U) {
    b_tmp_size[0] = NbrSlns.size[0];
    loop_ub = NbrSlns.size[0];
    for (i18 = 0; i18 < loop_ub; i18++) {
      b_tmp_data[i18] = NbrSlns.data[i18];
    }

    mexPutVariable("global", "NbrSlns", e_emlrt_marshallOut(b_tmp_data,
      b_tmp_size));
    NbrSlns_dirty &= 2U;
  }

  if (PSLN_dirty & 1U) {
    b_emxInit_real_T(&r9, 4, (emlrtRTEInfo *)NULL, TRUE);
    i18 = r9->size[0] * r9->size[1] * r9->size[2] * r9->size[3];
    r9->size[0] = PSLN->size[0];
    r9->size[1] = PSLN->size[1];
    r9->size[2] = PSLN->size[2];
    r9->size[3] = 3;
    emxEnsureCapacity((emxArray__common *)r9, i18, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = PSLN->size[0] * PSLN->size[1] * PSLN->size[2] * PSLN->size[3];
    for (i18 = 0; i18 < loop_ub; i18++) {
      r9->data[i18] = PSLN->data[i18];
    }

    mexPutVariable("global", "PSLN", f_emlrt_marshallOut(r9));
    PSLN_dirty &= 2U;
    emxFree_real_T(&r9);
  }

  if (FSLN_dirty & 1U) {
    b_emxInit_real_T(&r10, 4, (emlrtRTEInfo *)NULL, TRUE);
    i18 = r10->size[0] * r10->size[1] * r10->size[2] * r10->size[3];
    r10->size[0] = FSLN->size[0];
    r10->size[1] = FSLN->size[1];
    r10->size[2] = FSLN->size[2];
    r10->size[3] = 2;
    emxEnsureCapacity((emxArray__common *)r10, i18, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = FSLN->size[0] * FSLN->size[1] * FSLN->size[2] * FSLN->size[3];
    for (i18 = 0; i18 < loop_ub; i18++) {
      r10->data[i18] = FSLN->data[i18];
    }

    mexPutVariable("global", "FSLN", g_emlrt_marshallOut(r10));
    FSLN_dirty &= 2U;
    emxFree_real_T(&r10);
  }

  if (NbrDSSlns_dirty & 1U) {
    c_tmp_size[0] = NbrDSSlns.size[0];
    loop_ub = NbrDSSlns.size[0];
    for (i18 = 0; i18 < loop_ub; i18++) {
      b_tmp_data[i18] = NbrDSSlns.data[i18];
    }

    mexPutVariable("global", "NbrDSSlns", e_emlrt_marshallOut(b_tmp_data,
      c_tmp_size));
    NbrDSSlns_dirty &= 2U;
  }

  if (RP_dirty & 1U) {
    b_emxInit_real_T(&r11, 4, (emlrtRTEInfo *)NULL, TRUE);
    i18 = r11->size[0] * r11->size[1] * r11->size[2] * r11->size[3];
    r11->size[0] = RP->size[0];
    r11->size[1] = RP->size[1];
    r11->size[2] = RP->size[2];
    r11->size[3] = 3;
    emxEnsureCapacity((emxArray__common *)r11, i18, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = RP->size[0] * RP->size[1] * RP->size[2] * RP->size[3];
    for (i18 = 0; i18 < loop_ub; i18++) {
      r11->data[i18] = RP->data[i18];
    }

    mexPutVariable("global", "RP", f_emlrt_marshallOut(r11));
    RP_dirty &= 2U;
    emxFree_real_T(&r11);
  }

  if (RF_dirty & 1U) {
    b_emxInit_real_T(&r12, 4, (emlrtRTEInfo *)NULL, TRUE);
    i18 = r12->size[0] * r12->size[1] * r12->size[2] * r12->size[3];
    r12->size[0] = RF->size[0];
    r12->size[1] = RF->size[1];
    r12->size[2] = RF->size[2];
    r12->size[3] = 2;
    emxEnsureCapacity((emxArray__common *)r12, i18, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = RF->size[0] * RF->size[1] * RF->size[2] * RF->size[3];
    for (i18 = 0; i18 < loop_ub; i18++) {
      r12->data[i18] = RF->data[i18];
    }

    mexPutVariable("global", "RF", g_emlrt_marshallOut(r12));
    RF_dirty &= 2U;
    emxFree_real_T(&r12);
  }

  if (wedges_dirty & 1U) {
    b_emxInit_real_T(&r13, 4, (emlrtRTEInfo *)NULL, TRUE);
    i18 = r13->size[0] * r13->size[1] * r13->size[2] * r13->size[3];
    r13->size[0] = wedges->size[0];
    r13->size[1] = 6;
    r13->size[2] = 4;
    r13->size[3] = 3;
    emxEnsureCapacity((emxArray__common *)r13, i18, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = wedges->size[0] * wedges->size[1] * wedges->size[2] * wedges->
      size[3];
    for (i18 = 0; i18 < loop_ub; i18++) {
      r13->data[i18] = wedges->data[i18];
    }

    mexPutVariable("global", "wedges", h_emlrt_marshallOut(r13));
    wedges_dirty &= 2U;
    emxFree_real_T(&r13);
  }

  if (MSKFlag_dirty & 1U) {
    d_tmp_size[0] = MSKFlag.size[0];
    loop_ub = MSKFlag.size[0];
    for (i18 = 0; i18 < loop_ub; i18++) {
      c_tmp_data[i18] = MSKFlag.data[i18];
    }

    mexPutVariable("global", "MSKFlag", i_emlrt_marshallOut(c_tmp_data,
      d_tmp_size));
    MSKFlag_dirty &= 2U;
  }

  if (CEP_dirty & 1U) {
    e_tmp_size[0] = CEP.size[0];
    loop_ub = CEP.size[0];
    for (i18 = 0; i18 < loop_ub; i18++) {
      c_tmp_data[i18] = CEP.data[i18];
    }

    mexPutVariable("global", "CEP", i_emlrt_marshallOut(c_tmp_data, e_tmp_size));
    CEP_dirty &= 2U;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

const mxArray *f_emlrt_marshallOut(emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m6;
  real_T (*pData)[];
  int32_T i14;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  int32_T d_i;
  y = NULL;
  m6 = mxCreateNumericArray(4, (int32_T *)u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m6);
  i14 = 0;
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < u->size[2]; b_i++) {
      for (c_i = 0; c_i < u->size[1]; c_i++) {
        for (d_i = 0; d_i < u->size[0]; d_i++) {
          (*pData)[i14] = u->data[((d_i + u->size[0] * c_i) + u->size[0] *
            u->size[1] * b_i) + u->size[0] * u->size[1] * u->size[2] * i];
          i14++;
        }
      }
    }
  }

  emlrtAssign(&y, m6);
  return y;
}

void g_emlrt_marshallIn(const mxArray *c_Mpath, const char_T *identifier,
  emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  h_emlrt_marshallIn(emlrtAlias(c_Mpath), &thisId, y);
  emlrtDestroyArray(&c_Mpath);
}

const mxArray *g_emlrt_marshallOut(emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m7;
  real_T (*pData)[];
  int32_T i15;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  int32_T d_i;
  y = NULL;
  m7 = mxCreateNumericArray(4, (int32_T *)u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m7);
  i15 = 0;
  for (i = 0; i < 2; i++) {
    for (b_i = 0; b_i < u->size[2]; b_i++) {
      for (c_i = 0; c_i < u->size[1]; c_i++) {
        for (d_i = 0; d_i < u->size[0]; d_i++) {
          (*pData)[i15] = u->data[((d_i + u->size[0] * c_i) + u->size[0] *
            u->size[1] * b_i) + u->size[0] * u->size[1] * u->size[2] * i];
          i15++;
        }
      }
    }
  }

  emlrtAssign(&y, m7);
  return y;
}

const mxArray *h_emlrt_marshallOut(emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m8;
  real_T (*pData)[];
  int32_T i16;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  int32_T d_i;
  y = NULL;
  m8 = mxCreateNumericArray(4, (int32_T *)u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m8);
  i16 = 0;
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 4; b_i++) {
      for (c_i = 0; c_i < 6; c_i++) {
        for (d_i = 0; d_i < u->size[0]; d_i++) {
          (*pData)[i16] = u->data[((d_i + u->size[0] * c_i) + u->size[0] *
            u->size[1] * b_i) + u->size[0] * u->size[1] * u->size[2] * i];
          i16++;
        }
      }
    }
  }

  emlrtAssign(&y, m8);
  return y;
}

void i_emlrt_marshallIn(const mxArray *c_vnfaces, const char_T *identifier,
  real_T y_data[2700], int32_T y_size[3])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  j_emlrt_marshallIn(emlrtAlias(c_vnfaces), &thisId, y_data, y_size);
  emlrtDestroyArray(&c_vnfaces);
}

const mxArray *i_emlrt_marshallOut(real_T u_data[150], int32_T u_size[1])
{
  const mxArray *y;
  const mxArray *m9;
  real_T (*pData)[];
  int32_T i17;
  int32_T i;
  y = NULL;
  m9 = mxCreateNumericArray(1, (int32_T *)u_size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m9);
  i17 = 0;
  for (i = 0; i < u_size[0]; i++) {
    (*pData)[i17] = u_data[i];
    i17++;
  }

  emlrtAssign(&y, m9);
  return y;
}

void k_emlrt_marshallIn(const mxArray *c_NbrSlns, const char_T *identifier,
  real_T y_data[15], int32_T y_size[1])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  l_emlrt_marshallIn(emlrtAlias(c_NbrSlns), &thisId, y_data, y_size);
  emlrtDestroyArray(&c_NbrSlns);
}

void m_emlrt_marshallIn(const mxArray *c_PSLN, const char_T *identifier,
  emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  n_emlrt_marshallIn(emlrtAlias(c_PSLN), &thisId, y);
  emlrtDestroyArray(&c_PSLN);
}

void o_emlrt_marshallIn(const mxArray *c_FSLN, const char_T *identifier,
  emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  p_emlrt_marshallIn(emlrtAlias(c_FSLN), &thisId, y);
  emlrtDestroyArray(&c_FSLN);
}

void q_emlrt_marshallIn(const mxArray *c_wedges, const char_T *identifier,
  emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  r_emlrt_marshallIn(emlrtAlias(c_wedges), &thisId, y);
  emlrtDestroyArray(&c_wedges);
}

void s_emlrt_marshallIn(const mxArray *c_MSKFlag, const char_T *identifier,
  real_T y_data[150], int32_T y_size[1])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  t_emlrt_marshallIn(emlrtAlias(c_MSKFlag), &thisId, y_data, y_size);
  emlrtDestroyArray(&c_MSKFlag);
}

/* End of code generation (EffConstruct_mexutil.c) */
