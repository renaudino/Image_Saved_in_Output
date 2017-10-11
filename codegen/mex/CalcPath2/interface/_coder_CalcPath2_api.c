/*
 * _coder_CalcPath2_api.c
 *
 * Code generation for function '_coder_CalcPath2_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CalcPath2.h"
#include "_coder_CalcPath2_api.h"
#include "CalcPath2_emxutil.h"
#include "CalcPath2_mexutil.h"
#include "CalcPath2_data.h"

/* Variable Definitions */
static emlrtRTEInfo e_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_CalcPath2_api",              /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *FSLN, const
  char_T *identifier, emxArray_real_T *y);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *tx, const
  char_T *identifier))[3];
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void f_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *PSLN, const
  char_T *identifier, emxArray_real_T *y);
static void g_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void h_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *NbrDSSlns,
  const char_T *identifier, emxArray_real_T *y);
static void i_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *NbrSlns,
  const char_T *identifier, emxArray_real_T *y);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T (*u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, 1 };

  const boolean_T bv3[2] = { true, true };

  int32_T iv5[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv3[0],
    iv5);
  ret->size[0] = iv5[0];
  ret->size[1] = iv5[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = u_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *FSLN,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(FSLN), &thisId, y);
  emlrtDestroyArray(&FSLN);
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *tx, const
  char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(tx), &thisId);
  emlrtDestroyArray(&tx);
  return y;
}
  static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void f_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y)
{
  mxSetData((mxArray *)y, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)y, u->size, 4);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *PSLN, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(PSLN), &thisId, y);
  emlrtDestroyArray(&PSLN);
}

static void g_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y)
{
  mxSetData((mxArray *)y, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)y, u->size, 4);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y)
{
  mxSetData((mxArray *)y, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)y, u->size, 1);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *NbrDSSlns,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(NbrDSSlns), &thisId, y);
  emlrtDestroyArray(&NbrDSSlns);
}

static void i_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y)
{
  mxSetData((mxArray *)y, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)y, u->size, 2);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  y_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *NbrSlns,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(NbrSlns), &thisId, y);
  emlrtDestroyArray(&NbrSlns);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[3])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[4] = { -1, -1, -1, 2 };

  const boolean_T bv0[4] = { true, true, true, false };

  int32_T iv2[4];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 4U, dims, &bv0[0],
    iv2);
  ret->size[0] = iv2[0];
  ret->size[1] = iv2[1];
  ret->size[2] = iv2[2];
  ret->size[3] = iv2[3];
  ret->allocatedSize = ret->size[0] * ret->size[1] * ret->size[2] * ret->size[3];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[4] = { -1, -1, -1, 3 };

  const boolean_T bv1[4] = { true, true, true, false };

  int32_T iv3[4];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 4U, dims, &bv1[0],
    iv3);
  ret->size[0] = iv3[0];
  ret->size[1] = iv3[1];
  ret->size[2] = iv3[2];
  ret->size[3] = iv3[3];
  ret->allocatedSize = ret->size[0] * ret->size[1] * ret->size[2] * ret->size[3];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv2[1] = { true };

  int32_T iv4[1];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv2[0],
    iv4);
  ret->size[0] = iv4[0];
  ret->allocatedSize = ret->size[0];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void CalcPath2_api(const mxArray *prhs[10], const mxArray *plhs[7])
{
  emxArray_real_T *FSLN;
  emxArray_real_T *PSLN;
  emxArray_real_T *RF;
  emxArray_real_T *RP;
  emxArray_real_T *NbrDSSlns;
  emxArray_real_T *NbrSlns;
  real_T (*tx)[3];
  real_T (*rx)[3];
  real_T ordmax;
  real_T rvsds;
  const mxArray *tmp;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T2(&st, &FSLN, 4, &e_emlrtRTEI, true);
  emxInit_real_T2(&st, &PSLN, 4, &e_emlrtRTEI, true);
  emxInit_real_T2(&st, &RF, 4, &e_emlrtRTEI, true);
  emxInit_real_T2(&st, &RP, 4, &e_emlrtRTEI, true);
  emxInit_real_T3(&st, &NbrDSSlns, 1, &e_emlrtRTEI, true);
  emxInit_real_T(&st, &NbrSlns, 2, &e_emlrtRTEI, true);
  prhs[4] = emlrtProtectR2012b(prhs[4], 4, true, -1);
  prhs[5] = emlrtProtectR2012b(prhs[5], 5, true, -1);
  prhs[6] = emlrtProtectR2012b(prhs[6], 6, true, -1);
  prhs[7] = emlrtProtectR2012b(prhs[7], 7, true, -1);
  prhs[8] = emlrtProtectR2012b(prhs[8], 8, true, -1);
  prhs[9] = emlrtProtectR2012b(prhs[9], 9, true, -1);

  /* Marshall function inputs */
  tx = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "tx");
  rx = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "rx");
  ordmax = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "ordmax");
  rvsds = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "rvsds");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "FSLN", FSLN);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "PSLN", PSLN);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "RF", RF);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "RP", RP);
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "NbrDSSlns", NbrDSSlns);
  k_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "NbrSlns", NbrSlns);

  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("trun2");
  if (tmp != NULL) {
    m_emlrt_marshallIn(&st, tmp, "trun2", trun2);
    trun2_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("vnfaces");
  if (tmp != NULL) {
    o_emlrt_marshallIn(&st, tmp, "vnfaces", vnfaces);
    vnfaces_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("wedges");
  if (tmp != NULL) {
    q_emlrt_marshallIn(&st, tmp, "wedges", wedges);
    wedges_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Nblock");
  if (tmp != NULL) {
    Nblock = c_emlrt_marshallIn(&st, tmp, "Nblock");
    Nblock_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("MSKFlag");
  if (tmp != NULL) {
    s_emlrt_marshallIn(&st, tmp, "MSKFlag", MSKFlag);
    MSKFlag_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("CEP");
  if (tmp != NULL) {
    s_emlrt_marshallIn(&st, tmp, "CEP", CEP);
    CEP_dirty = 0U;
  }

  /* Invoke the target function */
  ordmax = CalcPath2(&st, *tx, *rx, ordmax, rvsds, FSLN, PSLN, RF, RP, NbrDSSlns,
                     NbrSlns);

  /* Marshall out global variables */
  emlrtPutGlobalVariable("trun2", emlrt_marshallOut(trun2));
  emlrtPutGlobalVariable("vnfaces", b_emlrt_marshallOut(vnfaces));
  emlrtPutGlobalVariable("wedges", c_emlrt_marshallOut(wedges));
  emlrtPutGlobalVariable("Nblock", d_emlrt_marshallOut(Nblock));
  emlrtPutGlobalVariable("MSKFlag", e_emlrt_marshallOut(MSKFlag));
  emlrtPutGlobalVariable("CEP", e_emlrt_marshallOut(CEP));

  /* Marshall function outputs */
  f_emlrt_marshallOut(FSLN, prhs[4]);
  plhs[0] = prhs[4];
  g_emlrt_marshallOut(PSLN, prhs[5]);
  plhs[1] = prhs[5];
  plhs[2] = d_emlrt_marshallOut(ordmax);
  f_emlrt_marshallOut(RF, prhs[6]);
  plhs[3] = prhs[6];
  g_emlrt_marshallOut(RP, prhs[7]);
  plhs[4] = prhs[7];
  h_emlrt_marshallOut(NbrDSSlns, prhs[8]);
  plhs[5] = prhs[8];
  i_emlrt_marshallOut(NbrSlns, prhs[9]);
  plhs[6] = prhs[9];
  NbrSlns->canFreeData = false;
  emxFree_real_T(&NbrSlns);
  NbrDSSlns->canFreeData = false;
  emxFree_real_T(&NbrDSSlns);
  RP->canFreeData = false;
  emxFree_real_T(&RP);
  RF->canFreeData = false;
  emxFree_real_T(&RF);
  PSLN->canFreeData = false;
  emxFree_real_T(&PSLN);
  FSLN->canFreeData = false;
  emxFree_real_T(&FSLN);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_CalcPath2_api.c) */
