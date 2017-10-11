/*
 * _coder_RefField_api.c
 *
 * Code generation for function '_coder_RefField_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RefField.h"
#include "_coder_RefField_api.h"
#include "RefField_emxutil.h"
#include "RefField_data.h"

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_creal_T *u);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *E_re,
  const char_T *identifier))[3];
static const mxArray *c_emlrt_marshallOut(const real_T u);
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const creal_T u
  [3]);
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *qr_re,
  const char_T *identifier))[3];
static const mxArray *e_emlrt_marshallOut(const creal_T u);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *pblo, const
  char_T *identifier);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Ein, const
  char_T *identifier, creal_T y[3]);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[3]);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_CEP, const
  char_T *identifier, emxArray_real_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_eta, const
  char_T *identifier, emxArray_creal_T *y);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_creal_T *y);
static real_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];
static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[3]);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_creal_T *u)
{
  const mxArray *y;
  const mxArray *m1;
  y = NULL;
  m1 = emlrtCreateNumericArray(1, *(int32_T (*)[1])u->size, mxDOUBLE_CLASS,
    mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m1, (void *)&u->data[0], 8);
  emlrtAssign(&y, m1);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *E_re,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(E_re), &thisId);
  emlrtDestroyArray(&E_re);
  return y;
}
  static const mxArray *c_emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m2;
  y = NULL;
  m2 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m2);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const creal_T
  u[3])
{
  const mxArray *y;
  const mxArray *m3;
  static const int32_T iv1[1] = { 3 };

  y = NULL;
  m3 = emlrtCreateNumericArray(1, iv1, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m3, (void *)&u[0], 8);
  emlrtAssign(&y, m3);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *qr_re,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(qr_re), &thisId);
  emlrtDestroyArray(&qr_re);
  return y;
}
  static const mxArray *e_emlrt_marshallOut(const creal_T u)
{
  const mxArray *y;
  const mxArray *m4;
  y = NULL;
  m4 = emlrtCreateNumericMatrix(1, 1, mxDOUBLE_CLASS, mxCOMPLEX);
  *mxGetPr(m4) = u.re;
  *mxGetPi(m4) = u.im;
  emlrtFreeImagIfZero(m4);
  emlrtAssign(&y, m4);
  return y;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *pblo, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(pblo), &thisId);
  emlrtDestroyArray(&pblo);
  return y;
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m0;
  real_T *pData;
  int32_T i2;
  int32_T i;
  y = NULL;
  m0 = emlrtCreateNumericArray(1, *(int32_T (*)[1])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m0);
  i2 = 0;
  for (i = 0; i < u->size[0]; i++) {
    pData[i2] = u->data[i];
    i2++;
  }

  emlrtAssign(&y, m0);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Ein, const
  char_T *identifier, creal_T y[3])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(Ein), &thisId, y);
  emlrtDestroyArray(&Ein);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[3])
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_CEP, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(b_CEP), &thisId, y);
  emlrtDestroyArray(&b_CEP);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_eta, const
  char_T *identifier, emxArray_creal_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(b_eta), &thisId, y);
  emlrtDestroyArray(&b_eta);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_creal_T *y)
{
  r_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[3])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[4] = { 1, 1, 1, 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 4U, dims);
  ret = (real_T (*)[3])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[3])
{
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", true, 1U, dims);
  emlrtImportArrayR2015b(sp, src, ret, 8, true);
  emlrtDestroyArray(&src);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv0[1] = { true };

  int32_T iv2[1];
  int32_T i3;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv0[0],
    iv2);
  i3 = ret->size[0];
  ret->size[0] = iv2[0];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i3, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv1[1] = { true };

  int32_T iv3[1];
  int32_T i4;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", true, 1U, dims, &bv1[0],
    iv3);
  i4 = ret->size[0];
  ret->size[0] = iv3[0];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i4, sizeof(creal_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, true);
  emlrtDestroyArray(&src);
}

void RefField_api(const mxArray * const prhs[7], const mxArray *plhs[3])
{
  real_T pblo;
  real_T blo;
  real_T (*E_re)[3];
  real_T (*R_re)[3];
  real_T (*qr_re)[3];
  real_T (*n_re)[3];
  creal_T Ein[3];
  const mxArray *tmp;
  creal_T Eout[3];
  creal_T Rt;
  creal_T Rh;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  pblo = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "pblo");
  blo = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "blo");
  E_re = c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "E_re");
  R_re = c_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "R_re");
  qr_re = e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "qr_re");
  n_re = c_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "n_re");
  g_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "Ein", Ein);

  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("CEP");
  if (tmp != NULL) {
    i_emlrt_marshallIn(&st, tmp, "CEP", CEP);
    CEP_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("eta");
  if (tmp != NULL) {
    k_emlrt_marshallIn(&st, tmp, "eta", eta);
    eta_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("K");
  if (tmp != NULL) {
    K = emlrt_marshallIn(&st, tmp, "K");
    K_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Rcoeff");
  if (tmp != NULL) {
    i_emlrt_marshallIn(&st, tmp, "Rcoeff", Rcoeff);
    Rcoeff_dirty = 0U;
  }

  /* Invoke the target function */
  RefField(&st, pblo, blo, *E_re, *R_re, *qr_re, *n_re, Ein, Eout, &Rt, &Rh);

  /* Marshall out global variables */
  emlrtPutGlobalVariable("CEP", emlrt_marshallOut(CEP));
  emlrtPutGlobalVariable("eta", b_emlrt_marshallOut(&st, eta));
  emlrtPutGlobalVariable("K", c_emlrt_marshallOut(K));
  emlrtPutGlobalVariable("Rcoeff", emlrt_marshallOut(Rcoeff));

  /* Marshall function outputs */
  plhs[0] = d_emlrt_marshallOut(&st, Eout);
  plhs[1] = e_emlrt_marshallOut(Rt);
  plhs[2] = e_emlrt_marshallOut(Rh);
}

/* End of code generation (_coder_RefField_api.c) */
