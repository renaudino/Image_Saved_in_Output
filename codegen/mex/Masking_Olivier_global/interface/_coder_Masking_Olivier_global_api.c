/*
 * _coder_Masking_Olivier_global_api.c
 *
 * Code generation for function '_coder_Masking_Olivier_global_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Masking_Olivier_global.h"
#include "_coder_Masking_Olivier_global_api.h"
#include "Masking_Olivier_global_mexutil.h"
#include "Masking_Olivier_global_data.h"

/* Function Declarations */
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *P1_re,
  const char_T *identifier))[3];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const struct0_T *
  u);
static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];

/* Function Definitions */
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *P1_re,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(P1_re), &thisId);
  emlrtDestroyArray(&P1_re);
  return y;
}
  static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const struct0_T *
  u)
{
  const mxArray *y;
  int32_T u_size[2];
  int32_T loop_ub;
  int32_T i12;
  const mxArray *b_y;
  creal_T u_data[3000];
  const mxArray *m6;
  int32_T b_u_size[2];
  creal_T b_u_data[3000];
  int32_T c_u_size[1];
  real_T *pData;
  int32_T d_u_size[2];
  int32_T i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  u_size[0] = u->shi.size[0];
  u_size[1] = 3;
  loop_ub = u->shi.size[0] * u->shi.size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    u_data[i12] = u->shi.data[i12];
  }

  b_y = NULL;
  m6 = emlrtCreateNumericArray(2, u_size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m6, (void *)&u_data[0], 8);
  emlrtAssign(&b_y, m6);
  emlrtAddField(y, b_y, "shi", 0);
  u_size[0] = u->sti.size[0];
  u_size[1] = 3;
  loop_ub = u->sti.size[0] * u->sti.size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    u_data[i12] = u->sti.data[i12];
  }

  b_y = NULL;
  m6 = emlrtCreateNumericArray(2, u_size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m6, (void *)&u_data[0], 8);
  emlrtAssign(&b_y, m6);
  emlrtAddField(y, b_y, "sti", 0);
  u_size[0] = u->stt.size[0];
  u_size[1] = 3;
  loop_ub = u->stt.size[0] * u->stt.size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    u_data[i12] = u->stt.data[i12];
  }

  b_y = NULL;
  m6 = emlrtCreateNumericArray(2, u_size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m6, (void *)&u_data[0], 8);
  emlrtAssign(&b_y, m6);
  emlrtAddField(y, b_y, "stt", 0);
  u_size[0] = u->sht.size[0];
  u_size[1] = 3;
  loop_ub = u->sht.size[0] * u->sht.size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    u_data[i12] = u->sht.data[i12];
  }

  b_y = NULL;
  m6 = emlrtCreateNumericArray(2, u_size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m6, (void *)&u_data[0], 8);
  emlrtAssign(&b_y, m6);
  emlrtAddField(y, b_y, "sht", 0);
  u_size[0] = u->sho.size[0];
  u_size[1] = 3;
  loop_ub = u->sho.size[0] * u->sho.size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    u_data[i12] = u->sho.data[i12];
  }

  b_y = NULL;
  m6 = emlrtCreateNumericArray(2, u_size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m6, (void *)&u_data[0], 8);
  emlrtAssign(&b_y, m6);
  emlrtAddField(y, b_y, "sho", 0);
  u_size[0] = u->sto.size[0];
  u_size[1] = 3;
  loop_ub = u->sto.size[0] * u->sto.size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    u_data[i12] = u->sto.data[i12];
  }

  b_y = NULL;
  m6 = emlrtCreateNumericArray(2, u_size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m6, (void *)&u_data[0], 8);
  emlrtAssign(&b_y, m6);
  emlrtAddField(y, b_y, "sto", 0);
  u_size[0] = u->str.size[0];
  u_size[1] = 3;
  loop_ub = u->str.size[0] * u->str.size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    u_data[i12] = u->str.data[i12];
  }

  b_y = NULL;
  m6 = emlrtCreateNumericArray(2, u_size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m6, (void *)&u_data[0], 8);
  emlrtAssign(&b_y, m6);
  emlrtAddField(y, b_y, "str", 0);
  u_size[0] = u->shr.size[0];
  u_size[1] = 3;
  loop_ub = u->shr.size[0] * u->shr.size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    u_data[i12] = u->shr.data[i12];
  }

  b_y = NULL;
  m6 = emlrtCreateNumericArray(2, u_size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m6, (void *)&u_data[0], 8);
  emlrtAssign(&b_y, m6);
  emlrtAddField(y, b_y, "shr", 0);
  b_u_size[0] = u->Tti.size[0];
  b_u_size[1] = u->Tti.size[1];
  loop_ub = u->Tti.size[0] * u->Tti.size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    b_u_data[i12] = u->Tti.data[i12];
  }

  b_y = NULL;
  m6 = emlrtCreateNumericArray(2, b_u_size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m6, (void *)&b_u_data[0], 8);
  emlrtAssign(&b_y, m6);
  emlrtAddField(y, b_y, "Tti", 0);
  b_u_size[0] = u->Thi.size[0];
  b_u_size[1] = u->Thi.size[1];
  loop_ub = u->Thi.size[0] * u->Thi.size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    b_u_data[i12] = u->Thi.data[i12];
  }

  b_y = NULL;
  m6 = emlrtCreateNumericArray(2, b_u_size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m6, (void *)&b_u_data[0], 8);
  emlrtAssign(&b_y, m6);
  emlrtAddField(y, b_y, "Thi", 0);
  b_u_size[0] = u->Ttt.size[0];
  b_u_size[1] = u->Ttt.size[1];
  loop_ub = u->Ttt.size[0] * u->Ttt.size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    b_u_data[i12] = u->Ttt.data[i12];
  }

  b_y = NULL;
  m6 = emlrtCreateNumericArray(2, b_u_size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m6, (void *)&b_u_data[0], 8);
  emlrtAssign(&b_y, m6);
  emlrtAddField(y, b_y, "Ttt", 0);
  b_u_size[0] = u->Tht.size[0];
  b_u_size[1] = u->Tht.size[1];
  loop_ub = u->Tht.size[0] * u->Tht.size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    b_u_data[i12] = u->Tht.data[i12];
  }

  b_y = NULL;
  m6 = emlrtCreateNumericArray(2, b_u_size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m6, (void *)&b_u_data[0], 8);
  emlrtAssign(&b_y, m6);
  emlrtAddField(y, b_y, "Tht", 0);
  b_u_size[0] = u->ploss.size[0];
  b_u_size[1] = u->ploss.size[1];
  loop_ub = u->ploss.size[0] * u->ploss.size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    b_u_data[i12] = u->ploss.data[i12];
  }

  b_y = NULL;
  m6 = emlrtCreateNumericArray(2, b_u_size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m6, (void *)&b_u_data[0], 8);
  emlrtAssign(&b_y, m6);
  emlrtAddField(y, b_y, "ploss", 0);
  c_u_size[0] = u->pd.size[0];
  b_y = NULL;
  m6 = emlrtCreateNumericArray(1, c_u_size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m6);
  i12 = 0;
  for (loop_ub = 0; loop_ub < u->pd.size[0]; loop_ub++) {
    pData[i12] = u->pd.data[loop_ub];
    i12++;
  }

  emlrtAssign(&b_y, m6);
  emlrtAddField(y, b_y, "pd", 0);
  c_u_size[0] = u->epd.size[0];
  b_y = NULL;
  m6 = emlrtCreateNumericArray(1, c_u_size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m6);
  i12 = 0;
  for (loop_ub = 0; loop_ub < u->epd.size[0]; loop_ub++) {
    pData[i12] = u->epd.data[loop_ub];
    i12++;
  }

  emlrtAssign(&b_y, m6);
  emlrtAddField(y, b_y, "epd", 0);
  c_u_size[0] = u->nbpen.size[0];
  b_y = NULL;
  m6 = emlrtCreateNumericArray(1, c_u_size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m6);
  i12 = 0;
  for (loop_ub = 0; loop_ub < u->nbpen.size[0]; loop_ub++) {
    pData[i12] = u->nbpen.data[loop_ub];
    i12++;
  }

  emlrtAssign(&b_y, m6);
  emlrtAddField(y, b_y, "nbpen", 0);
  d_u_size[0] = u->pflag.size[0];
  d_u_size[1] = u->pflag.size[1];
  b_y = NULL;
  m6 = emlrtCreateNumericArray(2, d_u_size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m6);
  i12 = 0;
  for (loop_ub = 0; loop_ub < u->pflag.size[1]; loop_ub++) {
    for (i = 0; i < u->pflag.size[0]; i++) {
      pData[i12] = u->pflag.data[i + u->pflag.size[0] * loop_ub];
      i12++;
    }
  }

  emlrtAssign(&b_y, m6);
  emlrtAddField(y, b_y, "pflag", 0);
  emlrtAddField(y, emlrt_marshallOut(u->mask), "mask", 0);
  emlrtAddField(y, emlrt_marshallOut(u->npb), "npb", 0);
  return y;
}

static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[3])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  void Masking_Olivier_global_api(Masking_Olivier_globalStackData *SD, const
  mxArray * const prhs[2], const mxArray *plhs[1])
{
  real_T (*P1_re)[3];
  real_T (*P2_re)[3];
  const mxArray *tmp;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  P1_re = c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "P1_re");
  P2_re = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "P2_re");

  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("Nblock");
  if (tmp != NULL) {
    Nblock = emlrt_marshallIn(&st, tmp, "Nblock");
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
    K = emlrt_marshallIn(&st, tmp, "K");
    K_dirty = 0U;
  }

  /* Invoke the target function */
  Masking_Olivier_global(SD, &st, *P1_re, *P2_re, &SD->f1.m);

  /* Marshall out global variables */
  emlrtPutGlobalVariable("Nblock", emlrt_marshallOut(Nblock));
  emlrtPutGlobalVariable("vnfaces", b_emlrt_marshallOut(vnfaces));
  emlrtPutGlobalVariable("wedges", c_emlrt_marshallOut(wedges));
  emlrtPutGlobalVariable("eta", d_emlrt_marshallOut(&st, eta));
  emlrtPutGlobalVariable("K", emlrt_marshallOut(K));

  /* Marshall function outputs */
  plhs[0] = e_emlrt_marshallOut(&st, &SD->f1.m);
}

/* End of code generation (_coder_Masking_Olivier_global_api.c) */
