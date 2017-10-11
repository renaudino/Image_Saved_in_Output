/*
 * Masking_mexutil.c
 *
 * Code generation for function 'Masking_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Masking.h"
#include "Masking_mexutil.h"
#include "Masking_emxutil.h"
#include "Masking_data.h"

/* Function Declarations */
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_creal_T *y);
static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret);

/* Function Definitions */
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  m_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_creal_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[3] = { -1, 6, 3 };

  const boolean_T bv0[3] = { true, false, false };

  int32_T iv23[3];
  int32_T i8;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv0[0],
    iv23);
  i8 = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv23[0];
  ret->size[1] = iv23[1];
  ret->size[2] = iv23[2];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i8, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[4] = { -1, 6, 4, 3 };

  const boolean_T bv1[4] = { true, false, false, false };

  int32_T iv24[4];
  int32_T i9;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 4U, dims, &bv1[0],
    iv24);
  i9 = ret->size[0] * ret->size[1] * ret->size[2] * ret->size[3];
  ret->size[0] = iv24[0];
  ret->size[1] = iv24[1];
  ret->size[2] = iv24[2];
  ret->size[3] = iv24[3];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i9, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv2[1] = { true };

  int32_T iv25[1];
  int32_T i10;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", true, 1U, dims, &bv2[0],
    iv25);
  i10 = ret->size[0];
  ret->size[0] = iv25[0];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i10, sizeof(creal_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, true);
  emlrtDestroyArray(&src);
}

const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m2;
  real_T *pData;
  int32_T i6;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  y = NULL;
  m2 = emlrtCreateNumericArray(3, *(int32_T (*)[3])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m2);
  i6 = 0;
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 6; b_i++) {
      for (c_i = 0; c_i < u->size[0]; c_i++) {
        pData[i6] = u->data[(c_i + u->size[0] * b_i) + u->size[0] * u->size[1] *
          i];
        i6++;
      }
    }
  }

  emlrtAssign(&y, m2);
  return y;
}

real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_Nblock, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(c_Nblock), &thisId);
  emlrtDestroyArray(&c_Nblock);
  return y;
}

const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m3;
  real_T *pData;
  int32_T i7;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  int32_T d_i;
  y = NULL;
  m3 = emlrtCreateNumericArray(4, *(int32_T (*)[3])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m3);
  i7 = 0;
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 4; b_i++) {
      for (c_i = 0; c_i < 6; c_i++) {
        for (d_i = 0; d_i < u->size[0]; d_i++) {
          pData[i7] = u->data[((d_i + u->size[0] * c_i) + u->size[0] * u->size[1]
                               * b_i) + u->size[0] * u->size[1] * u->size[2] * i];
          i7++;
        }
      }
    }
  }

  emlrtAssign(&y, m3);
  return y;
}

const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const emxArray_creal_T *
  u)
{
  const mxArray *y;
  const mxArray *m4;
  y = NULL;
  m4 = emlrtCreateNumericArray(1, *(int32_T (*)[3])u->size, mxDOUBLE_CLASS,
    mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m4, (void *)&u->data[0], 8);
  emlrtAssign(&y, m4);
  return y;
}

void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_vnfaces, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(b_vnfaces), &thisId, y);
  emlrtDestroyArray(&b_vnfaces);
}

void emlrt_checkEscapedGlobals(void)
{
  Nblock_dirty |= Nblock_dirty >> 1U;
  vnfaces_dirty |= vnfaces_dirty >> 1U;
  wedges_dirty |= wedges_dirty >> 1U;
  eta_dirty |= eta_dirty >> 1U;
  K_dirty |= K_dirty >> 1U;
}

const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m1;
  y = NULL;
  m1 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m1);
  return y;
}

void emlrt_synchGlobalsFromML(const emlrtStack *sp)
{
  Nblock = c_emlrt_marshallIn(sp, emlrtGetGlobalVariable("Nblock"), "Nblock");
  e_emlrt_marshallIn(sp, emlrtGetGlobalVariable("vnfaces"), "vnfaces", vnfaces);
  g_emlrt_marshallIn(sp, emlrtGetGlobalVariable("wedges"), "wedges", wedges);
  i_emlrt_marshallIn(sp, emlrtGetGlobalVariable("eta"), "eta", eta);
  K = c_emlrt_marshallIn(sp, emlrtGetGlobalVariable("K"), "K");
}

void emlrt_synchGlobalsToML(const emlrtStack *sp)
{
  if (Nblock_dirty & 1U) {
    emlrtPutGlobalVariable("Nblock", emlrt_marshallOut(Nblock));
    Nblock_dirty &= 2U;
  }

  if (vnfaces_dirty & 1U) {
    emlrtPutGlobalVariable("vnfaces", b_emlrt_marshallOut(vnfaces));
    vnfaces_dirty &= 2U;
  }

  if (wedges_dirty & 1U) {
    emlrtPutGlobalVariable("wedges", c_emlrt_marshallOut(wedges));
    wedges_dirty &= 2U;
  }

  if (eta_dirty & 1U) {
    emlrtPutGlobalVariable("eta", d_emlrt_marshallOut(sp, eta));
    eta_dirty &= 2U;
  }

  if (K_dirty & 1U) {
    emlrtPutGlobalVariable("K", emlrt_marshallOut(K));
    K_dirty &= 2U;
  }
}

void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_wedges, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(b_wedges), &thisId, y);
  emlrtDestroyArray(&b_wedges);
}

void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_eta, const char_T
  *identifier, emxArray_creal_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(b_eta), &thisId, y);
  emlrtDestroyArray(&b_eta);
}

/* End of code generation (Masking_mexutil.c) */
