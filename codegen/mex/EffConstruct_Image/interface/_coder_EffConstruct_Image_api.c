/*
 * _coder_EffConstruct_Image_api.c
 *
 * Code generation for function '_coder_EffConstruct_Image_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct_Image.h"
#include "_coder_EffConstruct_Image_api.h"
#include "EffConstruct_Image_mexutil.h"
#include "EffConstruct_Image_data.h"

/* Function Declarations */
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *tx,
  const char_T *identifier))[3];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];

/* Function Definitions */
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *tx,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(tx), &thisId);
  emlrtDestroyArray(&tx);
  return y;
}
  static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = t_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
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
  void EffConstruct_Image_api(const mxArray * const prhs[3])
{
  real_T OrdRef;
  real_T (*tx)[3];
  real_T rvsds;
  const mxArray *tmp;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  OrdRef = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "OrdRef");
  tx = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "tx");
  rvsds = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "rvsds");

  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("oldReflex");
  if (tmp != NULL) {
    oldReflex = emlrt_marshallIn(&st, tmp, "oldReflex");
    oldReflex_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Reflex");
  if (tmp != NULL) {
    Reflex = emlrt_marshallIn(&st, tmp, "Reflex");
    Reflex_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Nblock");
  if (tmp != NULL) {
    Nblock = emlrt_marshallIn(&st, tmp, "Nblock");
    Nblock_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("recept");
  if (tmp != NULL) {
    e_emlrt_marshallIn(&st, tmp, "recept", recept);
    recept_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Mpath");
  if (tmp != NULL) {
    g_emlrt_marshallIn(&st, tmp, "Mpath", Mpath);
    Mpath_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("vnfaces");
  if (tmp != NULL) {
    i_emlrt_marshallIn(&st, tmp, "vnfaces", vnfaces);
    vnfaces_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("wedges");
  if (tmp != NULL) {
    k_emlrt_marshallIn(&st, tmp, "wedges", wedges);
    wedges_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("NbrSlns");
  if (tmp != NULL) {
    m_emlrt_marshallIn(&st, tmp, "NbrSlns", NbrSlns);
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

  tmp = emlrtGetGlobalVariable("ISLN");
  if (tmp != NULL) {
    o_emlrt_marshallIn(&st, tmp, "ISLN", ISLN);
    ISLN_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("NbrDSSlns");
  if (tmp != NULL) {
    m_emlrt_marshallIn(&st, tmp, "NbrDSSlns", NbrDSSlns);
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

  tmp = emlrtGetGlobalVariable("MSKFlag");
  if (tmp != NULL) {
    m_emlrt_marshallIn(&st, tmp, "MSKFlag", MSKFlag);
    MSKFlag_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("CEP");
  if (tmp != NULL) {
    m_emlrt_marshallIn(&st, tmp, "CEP", CEP);
    CEP_dirty = 0U;
  }

  /* Invoke the target function */
  EffConstruct_Image(&st, OrdRef, *tx, rvsds);

  /* Marshall out global variables */
  emlrtPutGlobalVariable("oldReflex", emlrt_marshallOut(oldReflex));
  emlrtPutGlobalVariable("Reflex", emlrt_marshallOut(Reflex));
  emlrtPutGlobalVariable("Nblock", emlrt_marshallOut(Nblock));
  emlrtPutGlobalVariable("recept", b_emlrt_marshallOut(recept));
  emlrtPutGlobalVariable("Mpath", c_emlrt_marshallOut(Mpath));
  emlrtPutGlobalVariable("vnfaces", d_emlrt_marshallOut(vnfaces));
  emlrtPutGlobalVariable("wedges", e_emlrt_marshallOut(wedges));
  emlrtPutGlobalVariable("NbrSlns", f_emlrt_marshallOut(NbrSlns));
  emlrtPutGlobalVariable("PSLN", g_emlrt_marshallOut(PSLN));
  emlrtPutGlobalVariable("FSLN", h_emlrt_marshallOut(FSLN));
  emlrtPutGlobalVariable("ISLN", g_emlrt_marshallOut(ISLN));
  emlrtPutGlobalVariable("NbrDSSlns", f_emlrt_marshallOut(NbrDSSlns));
  emlrtPutGlobalVariable("RP", g_emlrt_marshallOut(RP));
  emlrtPutGlobalVariable("RF", h_emlrt_marshallOut(RF));
  emlrtPutGlobalVariable("MSKFlag", f_emlrt_marshallOut(MSKFlag));
  emlrtPutGlobalVariable("CEP", f_emlrt_marshallOut(CEP));
}

/* End of code generation (_coder_EffConstruct_Image_api.c) */
