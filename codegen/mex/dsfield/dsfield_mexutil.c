/*
 * dsfield_mexutil.c
 *
 * Code generation for function 'dsfield_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dsfield.h"
#include "dsfield_mexutil.h"
#include "dsfield_emxutil.h"
#include "dsfield_data.h"

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_creal_T *y);
static real_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  v_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_creal_T *y)
{
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[3] = { -1, 6, 3 };

  const boolean_T bv0[3] = { true, false, false };

  int32_T iv8[3];
  int32_T i6;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv0[0],
    iv8);
  i6 = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv8[0];
  ret->size[1] = iv8[1];
  ret->size[2] = iv8[2];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i6, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv1[1] = { true };

  int32_T iv9[1];
  int32_T i7;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv1[0],
    iv9);
  i7 = ret->size[0];
  ret->size[0] = iv9[0];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i7, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv2[1] = { true };

  int32_T iv10[1];
  int32_T i8;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", true, 1U, dims, &bv2[0],
    iv10);
  i8 = ret->size[0];
  ret->size[0] = iv10[0];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i8, sizeof(creal_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, true);
  emlrtDestroyArray(&src);
}

const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m3;
  real_T *pData;
  int32_T i4;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  y = NULL;
  m3 = emlrtCreateNumericArray(3, *(int32_T (*)[3])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m3);
  i4 = 0;
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 6; b_i++) {
      for (c_i = 0; c_i < u->size[0]; c_i++) {
        pData[i4] = u->data[(c_i + u->size[0] * b_i) + u->size[0] * u->size[1] *
          i];
        i4++;
      }
    }
  }

  emlrtAssign(&y, m3);
  return y;
}

const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m4;
  real_T *pData;
  int32_T i5;
  int32_T i;
  y = NULL;
  m4 = emlrtCreateNumericArray(1, *(int32_T (*)[3])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m4);
  i5 = 0;
  for (i = 0; i < u->size[0]; i++) {
    pData[i5] = u->data[i];
    i5++;
  }

  emlrtAssign(&y, m4);
  return y;
}

const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const emxArray_creal_T *
  u)
{
  const mxArray *y;
  const mxArray *m5;
  y = NULL;
  m5 = emlrtCreateNumericArray(1, *(int32_T (*)[3])u->size, mxDOUBLE_CLASS,
    mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m5, (void *)&u->data[0], 8);
  emlrtAssign(&y, m5);
  return y;
}

void emlrt_checkEscapedGlobals(void)
{
  vnfaces_dirty |= vnfaces_dirty >> 1U;
  Model_dirty |= Model_dirty >> 1U;
  Ar_dirty |= Ar_dirty >> 1U;
  Lam_dirty |= Lam_dirty >> 1U;
  Aii_dirty |= Aii_dirty >> 1U;
  Scoeff_dirty |= Scoeff_dirty >> 1U;
  kxpol_dirty |= kxpol_dirty >> 1U;
  CEP_dirty |= CEP_dirty >> 1U;
  eta_dirty |= eta_dirty >> 1U;
  K_dirty |= K_dirty >> 1U;
  Rcoeff_dirty |= Rcoeff_dirty >> 1U;
}

real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *d_feval, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(d_feval), &thisId);
  emlrtDestroyArray(&d_feval);
  return y;
}

const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m2;
  y = NULL;
  m2 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m2);
  return y;
}

void emlrt_synchGlobalsFromML(const emlrtStack *sp)
{
  k_emlrt_marshallIn(sp, emlrtGetGlobalVariable("vnfaces"), "vnfaces", vnfaces);
  m_emlrt_marshallIn(sp, emlrtGetGlobalVariable("Model"), "Model", Model);
  m_emlrt_marshallIn(sp, emlrtGetGlobalVariable("Ar"), "Ar", Ar);
  m_emlrt_marshallIn(sp, emlrtGetGlobalVariable("Lam"), "Lam", Lam);
  m_emlrt_marshallIn(sp, emlrtGetGlobalVariable("Aii"), "Aii", Aii);
  m_emlrt_marshallIn(sp, emlrtGetGlobalVariable("Scoeff"), "Scoeff", Scoeff);
  kxpol = emlrt_marshallIn(sp, emlrtGetGlobalVariable("kxpol"), "kxpol");
  m_emlrt_marshallIn(sp, emlrtGetGlobalVariable("CEP"), "CEP", CEP);
  o_emlrt_marshallIn(sp, emlrtGetGlobalVariable("eta"), "eta", eta);
  K = emlrt_marshallIn(sp, emlrtGetGlobalVariable("K"), "K");
  m_emlrt_marshallIn(sp, emlrtGetGlobalVariable("Rcoeff"), "Rcoeff", Rcoeff);
}

void emlrt_synchGlobalsToML(const emlrtStack *sp)
{
  if (vnfaces_dirty & 1U) {
    emlrtPutGlobalVariable("vnfaces", b_emlrt_marshallOut(vnfaces));
    vnfaces_dirty &= 2U;
  }

  if (Model_dirty & 1U) {
    emlrtPutGlobalVariable("Model", c_emlrt_marshallOut(Model));
    Model_dirty &= 2U;
  }

  if (Ar_dirty & 1U) {
    emlrtPutGlobalVariable("Ar", c_emlrt_marshallOut(Ar));
    Ar_dirty &= 2U;
  }

  if (Lam_dirty & 1U) {
    emlrtPutGlobalVariable("Lam", c_emlrt_marshallOut(Lam));
    Lam_dirty &= 2U;
  }

  if (Aii_dirty & 1U) {
    emlrtPutGlobalVariable("Aii", c_emlrt_marshallOut(Aii));
    Aii_dirty &= 2U;
  }

  if (Scoeff_dirty & 1U) {
    emlrtPutGlobalVariable("Scoeff", c_emlrt_marshallOut(Scoeff));
    Scoeff_dirty &= 2U;
  }

  if (kxpol_dirty & 1U) {
    emlrtPutGlobalVariable("kxpol", emlrt_marshallOut(kxpol));
    kxpol_dirty &= 2U;
  }

  if (CEP_dirty & 1U) {
    emlrtPutGlobalVariable("CEP", c_emlrt_marshallOut(CEP));
    CEP_dirty &= 2U;
  }

  if (eta_dirty & 1U) {
    emlrtPutGlobalVariable("eta", d_emlrt_marshallOut(sp, eta));
    eta_dirty &= 2U;
  }

  if (K_dirty & 1U) {
    emlrtPutGlobalVariable("K", emlrt_marshallOut(K));
    K_dirty &= 2U;
  }

  if (Rcoeff_dirty & 1U) {
    emlrtPutGlobalVariable("Rcoeff", c_emlrt_marshallOut(Rcoeff));
    Rcoeff_dirty &= 2U;
  }
}

void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_vnfaces, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(b_vnfaces), &thisId, y);
  emlrtDestroyArray(&b_vnfaces);
}

void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_Model, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  n_emlrt_marshallIn(sp, emlrtAlias(b_Model), &thisId, y);
  emlrtDestroyArray(&b_Model);
}

void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_eta, const char_T
  *identifier, emxArray_creal_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  p_emlrt_marshallIn(sp, emlrtAlias(b_eta), &thisId, y);
  emlrtDestroyArray(&b_eta);
}

/* End of code generation (dsfield_mexutil.c) */
