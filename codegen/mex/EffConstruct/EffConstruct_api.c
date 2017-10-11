/*
 * EffConstruct_api.c
 *
 * Code generation for function 'EffConstruct_api'
 *
 * C source code generated on: Fri Dec 20 16:15:35 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct.h"
#include "EffConstruct_api.h"
#include "EffConstruct_mexutil.h"
#include "EffConstruct_emxutil.h"
#include "EffConstruct_data.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRTEInfo s_emlrtRTEI = { 1, 1, "EffConstruct_api", "" };

/* Function Declarations */
static real_T (*c_emlrt_marshallIn(const mxArray *tx, const char_T *identifier))
  [3];
static real_T (*d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId))[3];
static real_T (*v_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier *
  msgId))[3];

/* Function Definitions */
static real_T (*c_emlrt_marshallIn(const mxArray *tx, const char_T *identifier))
  [3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(emlrtAlias(tx), &thisId);
  emlrtDestroyArray(&tx);
  return y;
}
  static real_T (*d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier *
  parentId))[3]
{
  real_T (*y)[3];
  y = v_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*v_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier *
  msgId))[3]
{
  real_T (*ret)[3];
  int32_T iv6[1];
  iv6[0] = 3;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 1U,
    iv6);
  ret = (real_T (*)[3])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  void EffConstruct_api(const mxArray * const prhs[3])
{
  real_T OrdRef;
  real_T (*tx)[3];
  real_T rvsds;
  const mxArray *tmp;
  emxArray_real_T *r2;
  int32_T i10;
  int32_T loop_ub;
  real_T tmp_data[2700];
  int32_T tmp_size[3];
  real_T b_tmp_data[15];
  int32_T b_tmp_size[1];
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  int32_T c_tmp_size[1];
  emxArray_real_T *r5;
  emxArray_real_T *r6;
  emxArray_real_T *r7;
  real_T c_tmp_data[150];
  int32_T d_tmp_size[1];
  int32_T e_tmp_size[1];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);

  /* Marshall function inputs */
  OrdRef = emlrt_marshallIn(emlrtAliasP(prhs[0]), "OrdRef");
  tx = c_emlrt_marshallIn(emlrtAlias(prhs[1]), "tx");
  rvsds = emlrt_marshallIn(emlrtAliasP(prhs[2]), "rvsds");

  /* Marshall in global variables */
  tmp = mexGetVariable("global", "oldReflex");
  if (tmp) {
    oldReflex = emlrt_marshallIn(tmp, "oldReflex");
    oldReflex_dirty = 0U;
  }

  tmp = mexGetVariable("global", "Reflex");
  if (tmp) {
    Reflex = emlrt_marshallIn(tmp, "Reflex");
    Reflex_dirty = 0U;
  }

  tmp = mexGetVariable("global", "Nblock");
  if (tmp) {
    Nblock = emlrt_marshallIn(tmp, "Nblock");
    Nblock_dirty = 0U;
  }

  tmp = mexGetVariable("global", "recept");
  if (tmp) {
    e_emlrt_marshallIn(tmp, "recept", recept);
    recept_dirty = 0U;
  }

  tmp = mexGetVariable("global", "Mpath");
  if (tmp) {
    g_emlrt_marshallIn(tmp, "Mpath", Mpath);
    Mpath_dirty = 0U;
  }

  tmp = mexGetVariable("global", "vnfaces");
  if (tmp) {
    i_emlrt_marshallIn(tmp, "vnfaces", vnfaces.data, vnfaces.size);
    vnfaces_dirty = 0U;
  }

  tmp = mexGetVariable("global", "NbrSlns");
  if (tmp) {
    k_emlrt_marshallIn(tmp, "NbrSlns", NbrSlns.data, NbrSlns.size);
    NbrSlns_dirty = 0U;
  }

  tmp = mexGetVariable("global", "PSLN");
  if (tmp) {
    m_emlrt_marshallIn(tmp, "PSLN", PSLN);
    PSLN_dirty = 0U;
  }

  tmp = mexGetVariable("global", "FSLN");
  if (tmp) {
    o_emlrt_marshallIn(tmp, "FSLN", FSLN);
    FSLN_dirty = 0U;
  }

  tmp = mexGetVariable("global", "NbrDSSlns");
  if (tmp) {
    k_emlrt_marshallIn(tmp, "NbrDSSlns", NbrDSSlns.data, NbrDSSlns.size);
    NbrDSSlns_dirty = 0U;
  }

  tmp = mexGetVariable("global", "RP");
  if (tmp) {
    m_emlrt_marshallIn(tmp, "RP", RP);
    RP_dirty = 0U;
  }

  tmp = mexGetVariable("global", "RF");
  if (tmp) {
    o_emlrt_marshallIn(tmp, "RF", RF);
    RF_dirty = 0U;
  }

  tmp = mexGetVariable("global", "wedges");
  if (tmp) {
    q_emlrt_marshallIn(tmp, "wedges", wedges);
    wedges_dirty = 0U;
  }

  tmp = mexGetVariable("global", "MSKFlag");
  if (tmp) {
    s_emlrt_marshallIn(tmp, "MSKFlag", MSKFlag.data, MSKFlag.size);
    MSKFlag_dirty = 0U;
  }

  tmp = mexGetVariable("global", "CEP");
  if (tmp) {
    s_emlrt_marshallIn(tmp, "CEP", CEP.data, CEP.size);
    CEP_dirty = 0U;
  }

  emxInit_real_T(&r2, 3, &s_emlrtRTEI, TRUE);

  /* Invoke the target function */
  EffConstruct(OrdRef, *tx, rvsds);

  /* Marshall out global variables */
  mexPutVariable("global", "oldReflex", emlrt_marshallOut(oldReflex));
  mexPutVariable("global", "Reflex", emlrt_marshallOut(Reflex));
  mexPutVariable("global", "Nblock", emlrt_marshallOut(Nblock));
  mexPutVariable("global", "recept", b_emlrt_marshallOut(recept));
  i10 = r2->size[0] * r2->size[1] * r2->size[2];
  r2->size[0] = Mpath->size[0];
  r2->size[1] = Mpath->size[1];
  r2->size[2] = 5;
  emxEnsureCapacity((emxArray__common *)r2, i10, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  loop_ub = Mpath->size[0] * Mpath->size[1] * Mpath->size[2];
  for (i10 = 0; i10 < loop_ub; i10++) {
    r2->data[i10] = Mpath->data[i10];
  }

  mexPutVariable("global", "Mpath", c_emlrt_marshallOut(r2));
  tmp_size[0] = vnfaces.size[0];
  tmp_size[1] = 6;
  tmp_size[2] = 3;
  loop_ub = vnfaces.size[0] * vnfaces.size[1] * vnfaces.size[2];
  emxFree_real_T(&r2);
  for (i10 = 0; i10 < loop_ub; i10++) {
    tmp_data[i10] = vnfaces.data[i10];
  }

  mexPutVariable("global", "vnfaces", d_emlrt_marshallOut(tmp_data, tmp_size));
  b_tmp_size[0] = NbrSlns.size[0];
  loop_ub = NbrSlns.size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    b_tmp_data[i10] = NbrSlns.data[i10];
  }

  b_emxInit_real_T(&r3, 4, &s_emlrtRTEI, TRUE);
  mexPutVariable("global", "NbrSlns", e_emlrt_marshallOut(b_tmp_data, b_tmp_size));
  i10 = r3->size[0] * r3->size[1] * r3->size[2] * r3->size[3];
  r3->size[0] = PSLN->size[0];
  r3->size[1] = PSLN->size[1];
  r3->size[2] = PSLN->size[2];
  r3->size[3] = 3;
  emxEnsureCapacity((emxArray__common *)r3, i10, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  loop_ub = PSLN->size[0] * PSLN->size[1] * PSLN->size[2] * PSLN->size[3];
  for (i10 = 0; i10 < loop_ub; i10++) {
    r3->data[i10] = PSLN->data[i10];
  }

  b_emxInit_real_T(&r4, 4, &s_emlrtRTEI, TRUE);
  mexPutVariable("global", "PSLN", f_emlrt_marshallOut(r3));
  i10 = r4->size[0] * r4->size[1] * r4->size[2] * r4->size[3];
  r4->size[0] = FSLN->size[0];
  r4->size[1] = FSLN->size[1];
  r4->size[2] = FSLN->size[2];
  r4->size[3] = 2;
  emxEnsureCapacity((emxArray__common *)r4, i10, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  loop_ub = FSLN->size[0] * FSLN->size[1] * FSLN->size[2] * FSLN->size[3];
  emxFree_real_T(&r3);
  for (i10 = 0; i10 < loop_ub; i10++) {
    r4->data[i10] = FSLN->data[i10];
  }

  mexPutVariable("global", "FSLN", g_emlrt_marshallOut(r4));
  c_tmp_size[0] = NbrDSSlns.size[0];
  loop_ub = NbrDSSlns.size[0];
  emxFree_real_T(&r4);
  for (i10 = 0; i10 < loop_ub; i10++) {
    b_tmp_data[i10] = NbrDSSlns.data[i10];
  }

  b_emxInit_real_T(&r5, 4, &s_emlrtRTEI, TRUE);
  mexPutVariable("global", "NbrDSSlns", e_emlrt_marshallOut(b_tmp_data,
    c_tmp_size));
  i10 = r5->size[0] * r5->size[1] * r5->size[2] * r5->size[3];
  r5->size[0] = RP->size[0];
  r5->size[1] = RP->size[1];
  r5->size[2] = RP->size[2];
  r5->size[3] = 3;
  emxEnsureCapacity((emxArray__common *)r5, i10, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  loop_ub = RP->size[0] * RP->size[1] * RP->size[2] * RP->size[3];
  for (i10 = 0; i10 < loop_ub; i10++) {
    r5->data[i10] = RP->data[i10];
  }

  b_emxInit_real_T(&r6, 4, &s_emlrtRTEI, TRUE);
  mexPutVariable("global", "RP", f_emlrt_marshallOut(r5));
  i10 = r6->size[0] * r6->size[1] * r6->size[2] * r6->size[3];
  r6->size[0] = RF->size[0];
  r6->size[1] = RF->size[1];
  r6->size[2] = RF->size[2];
  r6->size[3] = 2;
  emxEnsureCapacity((emxArray__common *)r6, i10, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  loop_ub = RF->size[0] * RF->size[1] * RF->size[2] * RF->size[3];
  emxFree_real_T(&r5);
  for (i10 = 0; i10 < loop_ub; i10++) {
    r6->data[i10] = RF->data[i10];
  }

  b_emxInit_real_T(&r7, 4, &s_emlrtRTEI, TRUE);
  mexPutVariable("global", "RF", g_emlrt_marshallOut(r6));
  i10 = r7->size[0] * r7->size[1] * r7->size[2] * r7->size[3];
  r7->size[0] = wedges->size[0];
  r7->size[1] = 6;
  r7->size[2] = 4;
  r7->size[3] = 3;
  emxEnsureCapacity((emxArray__common *)r7, i10, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  loop_ub = wedges->size[0] * wedges->size[1] * wedges->size[2] * wedges->size[3];
  emxFree_real_T(&r6);
  for (i10 = 0; i10 < loop_ub; i10++) {
    r7->data[i10] = wedges->data[i10];
  }

  mexPutVariable("global", "wedges", h_emlrt_marshallOut(r7));
  d_tmp_size[0] = MSKFlag.size[0];
  loop_ub = MSKFlag.size[0];
  emxFree_real_T(&r7);
  for (i10 = 0; i10 < loop_ub; i10++) {
    c_tmp_data[i10] = MSKFlag.data[i10];
  }

  mexPutVariable("global", "MSKFlag", i_emlrt_marshallOut(c_tmp_data, d_tmp_size));
  e_tmp_size[0] = CEP.size[0];
  loop_ub = CEP.size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    c_tmp_data[i10] = CEP.data[i10];
  }

  mexPutVariable("global", "CEP", i_emlrt_marshallOut(c_tmp_data, e_tmp_size));
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (EffConstruct_api.c) */
