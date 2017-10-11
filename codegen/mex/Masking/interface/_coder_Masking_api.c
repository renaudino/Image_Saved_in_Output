/*
 * _coder_Masking_api.c
 *
 * Code generation for function '_coder_Masking_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Masking.h"
#include "_coder_Masking_api.h"
#include "Masking_mexutil.h"
#include "Masking_data.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const struct0_T *
  u);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *P1_re,
  const char_T *identifier))[3];
static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const
  struct0_T *u)
{
  const mxArray *y;
  const mxArray *b_y;
  const mxArray *m5;
  static const int32_T iv6[2] = { 10000, 3 };

  real_T *pData;
  int32_T i;
  static const int32_T iv7[2] = { 10000, 3 };

  static const int32_T iv8[2] = { 10000, 3 };

  static const int32_T iv9[2] = { 10000, 3 };

  static const int32_T iv10[2] = { 10000, 3 };

  static const int32_T iv11[2] = { 10000, 3 };

  static const int32_T iv12[2] = { 10000, 3 };

  static const int32_T iv13[2] = { 10000, 3 };

  creal_T b_u[10000];
  static const int32_T iv14[1] = { 10000 };

  static const int32_T iv15[1] = { 10000 };

  static const int32_T iv16[1] = { 10000 };

  static const int32_T iv17[1] = { 10000 };

  static const int32_T iv18[1] = { 10000 };

  static const int32_T iv19[1] = { 10000 };

  static const int32_T iv20[1] = { 10000 };

  static const int32_T iv21[1] = { 10000 };

  static const int32_T iv22[2] = { 10000, 2 };

  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  b_y = NULL;
  m5 = emlrtCreateNumericArray(2, iv6, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m5);
  for (i = 0; i < 30000; i++) {
    pData[i] = u->shi[i];
  }

  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "shi", 0);
  b_y = NULL;
  m5 = emlrtCreateNumericArray(2, iv7, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m5);
  for (i = 0; i < 30000; i++) {
    pData[i] = u->sti[i];
  }

  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "sti", 0);
  b_y = NULL;
  m5 = emlrtCreateNumericArray(2, iv8, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m5);
  for (i = 0; i < 30000; i++) {
    pData[i] = u->stt[i];
  }

  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "stt", 0);
  b_y = NULL;
  m5 = emlrtCreateNumericArray(2, iv9, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m5);
  for (i = 0; i < 30000; i++) {
    pData[i] = u->sht[i];
  }

  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "sht", 0);
  b_y = NULL;
  m5 = emlrtCreateNumericArray(2, iv10, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m5);
  for (i = 0; i < 30000; i++) {
    pData[i] = u->sho[i];
  }

  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "sho", 0);
  b_y = NULL;
  m5 = emlrtCreateNumericArray(2, iv11, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m5);
  for (i = 0; i < 30000; i++) {
    pData[i] = u->sto[i];
  }

  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "sto", 0);
  b_y = NULL;
  m5 = emlrtCreateNumericArray(2, iv12, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m5);
  for (i = 0; i < 30000; i++) {
    pData[i] = u->str[i];
  }

  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "str", 0);
  b_y = NULL;
  m5 = emlrtCreateNumericArray(2, iv13, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m5);
  for (i = 0; i < 30000; i++) {
    pData[i] = u->shr[i];
  }

  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "shr", 0);
  memcpy(&b_u[0], &u->Tti[0], 10000U * sizeof(creal_T));
  b_y = NULL;
  m5 = emlrtCreateNumericArray(1, iv14, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m5, (void *)&b_u[0], 8);
  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "Tti", 0);
  memcpy(&b_u[0], &u->Thi[0], 10000U * sizeof(creal_T));
  b_y = NULL;
  m5 = emlrtCreateNumericArray(1, iv15, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m5, (void *)&b_u[0], 8);
  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "Thi", 0);
  memcpy(&b_u[0], &u->Ttt[0], 10000U * sizeof(creal_T));
  b_y = NULL;
  m5 = emlrtCreateNumericArray(1, iv16, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m5, (void *)&b_u[0], 8);
  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "Ttt", 0);
  memcpy(&b_u[0], &u->Tht[0], 10000U * sizeof(creal_T));
  b_y = NULL;
  m5 = emlrtCreateNumericArray(1, iv17, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m5, (void *)&b_u[0], 8);
  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "Tht", 0);
  memcpy(&b_u[0], &u->ploss[0], 10000U * sizeof(creal_T));
  b_y = NULL;
  m5 = emlrtCreateNumericArray(1, iv18, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m5, (void *)&b_u[0], 8);
  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "ploss", 0);
  b_y = NULL;
  m5 = emlrtCreateNumericArray(1, iv19, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m5);
  for (i = 0; i < 10000; i++) {
    pData[i] = u->pd[i];
  }

  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "pd", 0);
  b_y = NULL;
  m5 = emlrtCreateNumericArray(1, iv20, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m5);
  for (i = 0; i < 10000; i++) {
    pData[i] = u->epd[i];
  }

  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "epd", 0);
  b_y = NULL;
  m5 = emlrtCreateNumericArray(1, iv21, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m5);
  for (i = 0; i < 10000; i++) {
    pData[i] = u->nbpen[i];
  }

  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "nbpen", 0);
  b_y = NULL;
  m5 = emlrtCreateNumericArray(2, iv22, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m5);
  for (i = 0; i < 20000; i++) {
    pData[i] = u->pflag[i];
  }

  emlrtAssign(&b_y, m5);
  emlrtAddField(y, b_y, "pflag", 0);
  emlrtAddField(y, emlrt_marshallOut(u->mask), "mask", 0);
  emlrtAddField(y, emlrt_marshallOut(u->npb), "npb", 0);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *P1_re,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(P1_re), &thisId);
  emlrtDestroyArray(&P1_re);
  return y;
}
  static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[3])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void Masking_api(MaskingStackData *SD, const mxArray * const prhs[2], const
                 mxArray *plhs[2])
{
  real_T (*P1_re)[3];
  real_T (*P2_re)[3];
  const mxArray *tmp;
  real_T mmask;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  P1_re = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "P1_re");
  P2_re = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "P2_re");

  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("Nblock");
  if (tmp != NULL) {
    Nblock = c_emlrt_marshallIn(&st, tmp, "Nblock");
    Nblock_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("vnfaces");
  if (tmp != NULL) {
    e_emlrt_marshallIn(&st, tmp, "vnfaces", vnfaces);
    vnfaces_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("wedges");
  if (tmp != NULL) {
    g_emlrt_marshallIn(&st, tmp, "wedges", wedges);
    wedges_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("eta");
  if (tmp != NULL) {
    i_emlrt_marshallIn(&st, tmp, "eta", eta);
    eta_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("K");
  if (tmp != NULL) {
    K = c_emlrt_marshallIn(&st, tmp, "K");
    K_dirty = 0U;
  }

  /* Invoke the target function */
  Masking(SD, &st, *P1_re, *P2_re, &mmask, &SD->f1.m);

  /* Marshall out global variables */
  emlrtPutGlobalVariable("Nblock", emlrt_marshallOut(Nblock));
  emlrtPutGlobalVariable("vnfaces", b_emlrt_marshallOut(vnfaces));
  emlrtPutGlobalVariable("wedges", c_emlrt_marshallOut(wedges));
  emlrtPutGlobalVariable("eta", d_emlrt_marshallOut(&st, eta));
  emlrtPutGlobalVariable("K", emlrt_marshallOut(K));

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(mmask);
  plhs[1] = e_emlrt_marshallOut(&st, &SD->f1.m);
}

/* End of code generation (_coder_Masking_api.c) */
