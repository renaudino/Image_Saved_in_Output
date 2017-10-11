/*
 * _coder_Blocking_api.c
 *
 * Code generation for function '_coder_Blocking_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Blocking.h"
#include "_coder_Blocking_api.h"
#include "Blocking_mexutil.h"
#include "Blocking_data.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
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
  void Blocking_api(const mxArray * const prhs[2], const mxArray *plhs[1])
{
  real_T (*P1_re)[3];
  real_T (*P2_re)[3];
  const mxArray *tmp;
  real_T blk;
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

  tmp = emlrtGetGlobalVariable("MSKFlag");
  if (tmp != NULL) {
    i_emlrt_marshallIn(&st, tmp, "MSKFlag", MSKFlag);
    MSKFlag_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("CEP");
  if (tmp != NULL) {
    i_emlrt_marshallIn(&st, tmp, "CEP", CEP);
    CEP_dirty = 0U;
  }

  /* Invoke the target function */
  blk = Blocking(&st, *P1_re, *P2_re);

  /* Marshall out global variables */
  emlrtPutGlobalVariable("Nblock", emlrt_marshallOut(Nblock));
  emlrtPutGlobalVariable("vnfaces", b_emlrt_marshallOut(vnfaces));
  emlrtPutGlobalVariable("wedges", c_emlrt_marshallOut(wedges));
  emlrtPutGlobalVariable("MSKFlag", d_emlrt_marshallOut(MSKFlag));
  emlrtPutGlobalVariable("CEP", d_emlrt_marshallOut(CEP));

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(blk);
}

/* End of code generation (_coder_Blocking_api.c) */
