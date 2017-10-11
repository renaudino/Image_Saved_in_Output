/*
 * _coder_CalcPath_api.c
 *
 * Code generation for function '_coder_CalcPath_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CalcPath.h"
#include "_coder_CalcPath_api.h"
#include "CalcPath_mexutil.h"
#include "CalcPath_data.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rx,
  const char_T *identifier))[3];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *tx, const
  char_T *identifier))[3];
static real_T (*s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];
static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = s_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rx,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(rx), &thisId);
  emlrtDestroyArray(&rx);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = t_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *tx,
  const char_T *identifier))[3]
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

static real_T (*s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[2] = { 1, 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[3])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[3])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void CalcPath_api(const mxArray * const prhs[4])
{
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

  /* Marshall function inputs */
  tx = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "tx");
  rx = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "rx");
  ordmax = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "ordmax");
  rvsds = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "rvsds");

  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("Nbrimg");
  if (tmp != NULL) {
    g_emlrt_marshallIn(&st, tmp, "Nbrimg", Nbrimg);
    Nbrimg_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Mtrun");
  if (tmp != NULL) {
    i_emlrt_marshallIn(&st, tmp, "Mtrun", Mtrun);
    Mtrun_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("oldReflex");
  if (tmp != NULL) {
    oldReflex = e_emlrt_marshallIn(&st, tmp, "oldReflex");
    oldReflex_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Reflex");
  if (tmp != NULL) {
    Reflex = e_emlrt_marshallIn(&st, tmp, "Reflex");
    Reflex_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("vnfaces");
  if (tmp != NULL) {
    k_emlrt_marshallIn(&st, tmp, "vnfaces", vnfaces);
    vnfaces_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("wedges");
  if (tmp != NULL) {
    m_emlrt_marshallIn(&st, tmp, "wedges", wedges);
    wedges_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("NbrSlns");
  if (tmp != NULL) {
    g_emlrt_marshallIn(&st, tmp, "NbrSlns", NbrSlns);
    NbrSlns_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("PSLN");
  if (tmp != NULL) {
    o_emlrt_marshallIn(&st, tmp, "PSLN", PSLN);
    PSLN_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("FSLN");
  if (tmp != NULL) {
    q_emlrt_marshallIn(&st, tmp, "FSLN", FSLN);
    FSLN_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("NbrDSSlns");
  if (tmp != NULL) {
    g_emlrt_marshallIn(&st, tmp, "NbrDSSlns", NbrDSSlns);
    NbrDSSlns_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("RP");
  if (tmp != NULL) {
    o_emlrt_marshallIn(&st, tmp, "RP", RP);
    RP_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("RF");
  if (tmp != NULL) {
    q_emlrt_marshallIn(&st, tmp, "RF", RF);
    RF_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Nblock");
  if (tmp != NULL) {
    Nblock = e_emlrt_marshallIn(&st, tmp, "Nblock");
    Nblock_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("MSKFlag");
  if (tmp != NULL) {
    g_emlrt_marshallIn(&st, tmp, "MSKFlag", MSKFlag);
    MSKFlag_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("CEP");
  if (tmp != NULL) {
    g_emlrt_marshallIn(&st, tmp, "CEP", CEP);
    CEP_dirty = 0U;
  }

  /* Invoke the target function */
  CalcPath(&st, *tx, *rx, ordmax, rvsds);

  /* Marshall out global variables */
  emlrtPutGlobalVariable("Nbrimg", emlrt_marshallOut(Nbrimg));
  emlrtPutGlobalVariable("Mtrun", b_emlrt_marshallOut(Mtrun));
  emlrtPutGlobalVariable("oldReflex", c_emlrt_marshallOut(oldReflex));
  emlrtPutGlobalVariable("Reflex", c_emlrt_marshallOut(Reflex));
  emlrtPutGlobalVariable("vnfaces", d_emlrt_marshallOut(vnfaces));
  emlrtPutGlobalVariable("wedges", e_emlrt_marshallOut(wedges));
  emlrtPutGlobalVariable("NbrSlns", emlrt_marshallOut(NbrSlns));
  emlrtPutGlobalVariable("PSLN", f_emlrt_marshallOut(PSLN));
  emlrtPutGlobalVariable("FSLN", g_emlrt_marshallOut(FSLN));
  emlrtPutGlobalVariable("NbrDSSlns", emlrt_marshallOut(NbrDSSlns));
  emlrtPutGlobalVariable("RP", f_emlrt_marshallOut(RP));
  emlrtPutGlobalVariable("RF", g_emlrt_marshallOut(RF));
  emlrtPutGlobalVariable("Nblock", c_emlrt_marshallOut(Nblock));
  emlrtPutGlobalVariable("MSKFlag", emlrt_marshallOut(MSKFlag));
  emlrtPutGlobalVariable("CEP", emlrt_marshallOut(CEP));
}

/* End of code generation (_coder_CalcPath_api.c) */
