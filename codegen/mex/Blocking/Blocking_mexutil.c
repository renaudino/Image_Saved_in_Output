/*
 * Blocking_mexutil.c
 *
 * Code generation for function 'Blocking_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Blocking.h"
#include "Blocking_mexutil.h"
#include "Blocking_emxutil.h"
#include "Blocking_data.h"

/* Function Declarations */
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

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
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
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

  int32_T iv1[3];
  int32_T i5;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv0[0],
    iv1);
  i5 = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv1[0];
  ret->size[1] = iv1[1];
  ret->size[2] = iv1[2];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i5, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[4] = { -1, 6, 4, 3 };

  const boolean_T bv1[4] = { true, false, false, false };

  int32_T iv2[4];
  int32_T i6;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 4U, dims, &bv1[0],
    iv2);
  i6 = ret->size[0] * ret->size[1] * ret->size[2] * ret->size[3];
  ret->size[0] = iv2[0];
  ret->size[1] = iv2[1];
  ret->size[2] = iv2[2];
  ret->size[3] = iv2[3];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i6, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv2[1] = { true };

  int32_T iv3[1];
  int32_T i7;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv2[0],
    iv3);
  i7 = ret->size[0];
  ret->size[0] = iv3[0];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i7, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m2;
  real_T *pData;
  int32_T i2;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  y = NULL;
  m2 = emlrtCreateNumericArray(3, *(int32_T (*)[3])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m2);
  i2 = 0;
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 6; b_i++) {
      for (c_i = 0; c_i < u->size[0]; c_i++) {
        pData[i2] = u->data[(c_i + u->size[0] * b_i) + u->size[0] * u->size[1] *
          i];
        i2++;
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
  int32_T i3;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  int32_T d_i;
  y = NULL;
  m3 = emlrtCreateNumericArray(4, *(int32_T (*)[3])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m3);
  i3 = 0;
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 4; b_i++) {
      for (c_i = 0; c_i < 6; c_i++) {
        for (d_i = 0; d_i < u->size[0]; d_i++) {
          pData[i3] = u->data[((d_i + u->size[0] * c_i) + u->size[0] * u->size[1]
                               * b_i) + u->size[0] * u->size[1] * u->size[2] * i];
          i3++;
        }
      }
    }
  }

  emlrtAssign(&y, m3);
  return y;
}

const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m4;
  real_T *pData;
  int32_T i4;
  int32_T i;
  y = NULL;
  m4 = emlrtCreateNumericArray(1, *(int32_T (*)[3])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m4);
  i4 = 0;
  for (i = 0; i < u->size[0]; i++) {
    pData[i4] = u->data[i];
    i4++;
  }

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
  MSKFlag_dirty |= MSKFlag_dirty >> 1U;
  CEP_dirty |= CEP_dirty >> 1U;
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
  i_emlrt_marshallIn(sp, emlrtGetGlobalVariable("MSKFlag"), "MSKFlag", MSKFlag);
  i_emlrt_marshallIn(sp, emlrtGetGlobalVariable("CEP"), "CEP", CEP);
}

void emlrt_synchGlobalsToML(void)
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

  if (MSKFlag_dirty & 1U) {
    emlrtPutGlobalVariable("MSKFlag", d_emlrt_marshallOut(MSKFlag));
    MSKFlag_dirty &= 2U;
  }

  if (CEP_dirty & 1U) {
    emlrtPutGlobalVariable("CEP", d_emlrt_marshallOut(CEP));
    CEP_dirty &= 2U;
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

void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_MSKFlag, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(b_MSKFlag), &thisId, y);
  emlrtDestroyArray(&b_MSKFlag);
}

/* End of code generation (Blocking_mexutil.c) */
