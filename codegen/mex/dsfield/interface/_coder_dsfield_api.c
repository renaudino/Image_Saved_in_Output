/*
 * _coder_dsfield_api.c
 *
 * Code generation for function '_coder_dsfield_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dsfield.h"
#include "_coder_dsfield_api.h"
#include "dsfield_mexutil.h"
#include "dsfield_data.h"

/* Function Declarations */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Einc, const
  char_T *identifier, creal_T y[3]);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[3]);
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *start_re,
  const char_T *identifier))[3];
static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const creal_T u
  [3]);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *sf,
  const char_T *identifier))[2];
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2];
static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *sp_re,
  const char_T *identifier))[3];
static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[3]);
static real_T (*s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];
static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2];
static real_T (*u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];

/* Function Definitions */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Einc, const
  char_T *identifier, creal_T y[3])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(Einc), &thisId, y);
  emlrtDestroyArray(&Einc);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[3])
{
  r_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *start_re,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(start_re), &thisId);
  emlrtDestroyArray(&start_re);
  return y;
}
  static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const creal_T
  u[3])
{
  const mxArray *y;
  const mxArray *m6;
  static const int32_T iv7[2] = { 1, 3 };

  y = NULL;
  m6 = emlrtCreateNumericArray(2, iv7, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m6, (void *)&u[0], 8);
  emlrtAssign(&y, m6);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = s_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *sf,
  const char_T *identifier))[2]
{
  real_T (*y)[2];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(sf), &thisId);
  emlrtDestroyArray(&sf);
  return y;
}

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2]
{
  real_T (*y)[2];
  y = t_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *sp_re,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(sp_re), &thisId);
  emlrtDestroyArray(&sp_re);
  return y;
}

static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = u_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[3])
{
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", true, 1U, dims);
  emlrtImportArrayR2015b(sp, src, ret, 8, true);
  emlrtDestroyArray(&src);
}

static real_T (*s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[3])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2]
{
  real_T (*ret)[2];
  static const int32_T dims[2] = { 1, 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[2])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[2] = { 1, 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[3])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  void dsfield_api(const mxArray * const prhs[6], const mxArray *plhs[2])
{
  creal_T Einc[3];
  real_T (*start_re)[3];
  real_T (*fin_re)[3];
  real_T (*sf)[2];
  real_T (*sp_re)[3];
  real_T surf;
  const mxArray *tmp;
  creal_T Eds[3];
  real_T ri;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "Einc", Einc);
  start_re = e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "start_re");
  fin_re = e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "fin_re");
  sf = g_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "sf");
  sp_re = i_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "sp_re");
  surf = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "surf");

  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("vnfaces");
  if (tmp != NULL) {
    k_emlrt_marshallIn(&st, tmp, "vnfaces", vnfaces);
    vnfaces_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Model");
  if (tmp != NULL) {
    m_emlrt_marshallIn(&st, tmp, "Model", Model);
    Model_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Ar");
  if (tmp != NULL) {
    m_emlrt_marshallIn(&st, tmp, "Ar", Ar);
    Ar_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Lam");
  if (tmp != NULL) {
    m_emlrt_marshallIn(&st, tmp, "Lam", Lam);
    Lam_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Aii");
  if (tmp != NULL) {
    m_emlrt_marshallIn(&st, tmp, "Aii", Aii);
    Aii_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Scoeff");
  if (tmp != NULL) {
    m_emlrt_marshallIn(&st, tmp, "Scoeff", Scoeff);
    Scoeff_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("kxpol");
  if (tmp != NULL) {
    kxpol = emlrt_marshallIn(&st, tmp, "kxpol");
    kxpol_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("CEP");
  if (tmp != NULL) {
    m_emlrt_marshallIn(&st, tmp, "CEP", CEP);
    CEP_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("eta");
  if (tmp != NULL) {
    o_emlrt_marshallIn(&st, tmp, "eta", eta);
    eta_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("K");
  if (tmp != NULL) {
    K = emlrt_marshallIn(&st, tmp, "K");
    K_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Rcoeff");
  if (tmp != NULL) {
    m_emlrt_marshallIn(&st, tmp, "Rcoeff", Rcoeff);
    Rcoeff_dirty = 0U;
  }

  /* Invoke the target function */
  dsfield(&st, Einc, *start_re, *fin_re, *sf, *sp_re, surf, Eds, &ri);

  /* Marshall out global variables */
  emlrtPutGlobalVariable("vnfaces", b_emlrt_marshallOut(vnfaces));
  emlrtPutGlobalVariable("Model", c_emlrt_marshallOut(Model));
  emlrtPutGlobalVariable("Ar", c_emlrt_marshallOut(Ar));
  emlrtPutGlobalVariable("Lam", c_emlrt_marshallOut(Lam));
  emlrtPutGlobalVariable("Aii", c_emlrt_marshallOut(Aii));
  emlrtPutGlobalVariable("Scoeff", c_emlrt_marshallOut(Scoeff));
  emlrtPutGlobalVariable("kxpol", emlrt_marshallOut(kxpol));
  emlrtPutGlobalVariable("CEP", c_emlrt_marshallOut(CEP));
  emlrtPutGlobalVariable("eta", d_emlrt_marshallOut(&st, eta));
  emlrtPutGlobalVariable("K", emlrt_marshallOut(K));
  emlrtPutGlobalVariable("Rcoeff", c_emlrt_marshallOut(Rcoeff));

  /* Marshall function outputs */
  plhs[0] = e_emlrt_marshallOut(&st, Eds);
  plhs[1] = emlrt_marshallOut(ri);
}

/* End of code generation (_coder_dsfield_api.c) */
