/*
 * CalcPath2_mexutil.c
 *
 * Code generation for function 'CalcPath2_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CalcPath2.h"
#include "CalcPath2_mexutil.h"
#include "_coder_CalcPath2_api.h"
#include "CalcPath2_emxutil.h"
#include "CalcPath2_data.h"

/* Function Definitions */
const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m2;
  real_T *pData;
  int32_T i3;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  y = NULL;
  m2 = emlrtCreateNumericArray(3, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m2);
  i3 = 0;
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 6; b_i++) {
      for (c_i = 0; c_i < u->size[0]; c_i++) {
        pData[i3] = u->data[(c_i + u->size[0] * b_i) + u->size[0] * u->size[1] *
          i];
        i3++;
      }
    }
  }

  emlrtAssign(&y, m2);
  return y;
}

void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, 7 };

  const boolean_T bv4[2] = { true, false };

  int32_T iv6[2];
  int32_T i5;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv4[0],
    iv6);
  i5 = ret->size[0] * ret->size[1];
  ret->size[0] = iv6[0];
  ret->size[1] = iv6[1];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i5, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ordmax, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(ordmax), &thisId);
  emlrtDestroyArray(&ordmax);
  return y;
}

const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m3;
  real_T *pData;
  int32_T i4;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  int32_T d_i;
  y = NULL;
  m3 = emlrtCreateNumericArray(4, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m3);
  i4 = 0;
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 4; b_i++) {
      for (c_i = 0; c_i < 6; c_i++) {
        for (d_i = 0; d_i < u->size[0]; d_i++) {
          pData[i4] = u->data[((d_i + u->size[0] * c_i) + u->size[0] * u->size[1]
                               * b_i) + u->size[0] * u->size[1] * u->size[2] * i];
          i4++;
        }
      }
    }
  }

  emlrtAssign(&y, m3);
  return y;
}

void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[3] = { -1, 6, 3 };

  const boolean_T bv5[3] = { true, false, false };

  int32_T iv7[3];
  int32_T i6;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv5[0],
    iv7);
  i6 = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv7[0];
  ret->size[1] = iv7[1];
  ret->size[2] = iv7[2];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i6, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = v_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

const mxArray *d_emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m4;
  y = NULL;
  m4 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m4);
  return y;
}

void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[4] = { -1, 6, 4, 3 };

  const boolean_T bv6[4] = { true, false, false, false };

  int32_T iv8[4];
  int32_T i7;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 4U, dims, &bv6[0],
    iv8);
  i7 = ret->size[0] * ret->size[1] * ret->size[2] * ret->size[3];
  ret->size[0] = iv8[0];
  ret->size[1] = iv8[1];
  ret->size[2] = iv8[2];
  ret->size[3] = iv8[3];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i7, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

const mxArray *e_emlrt_marshallOut(const real_T u[304])
{
  const mxArray *y;
  const mxArray *m5;
  static const int32_T iv1[1] = { 304 };

  real_T *pData;
  int32_T i;
  y = NULL;
  m5 = emlrtCreateNumericArray(1, iv1, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m5);
  for (i = 0; i < 304; i++) {
    pData[i] = u[i];
  }

  emlrtAssign(&y, m5);
  return y;
}

void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[304])
{
  static const int32_T dims[1] = { 304 };

  int32_T i8;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i8 = 0; i8 < 304; i8++) {
    ret[i8] = (*(real_T (*)[304])mxGetData(src))[i8];
  }

  emlrtDestroyArray(&src);
}

void emlrt_checkEscapedGlobals(void)
{
  trun2_dirty |= trun2_dirty >> 1U;
  vnfaces_dirty |= vnfaces_dirty >> 1U;
  wedges_dirty |= wedges_dirty >> 1U;
  Nblock_dirty |= Nblock_dirty >> 1U;
  MSKFlag_dirty |= MSKFlag_dirty >> 1U;
  CEP_dirty |= CEP_dirty >> 1U;
}

const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m1;
  real_T *pData;
  int32_T i2;
  int32_T i;
  int32_T b_i;
  y = NULL;
  m1 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m1);
  i2 = 0;
  for (i = 0; i < 7; i++) {
    for (b_i = 0; b_i < u->size[0]; b_i++) {
      pData[i2] = u->data[b_i + u->size[0] * i];
      i2++;
    }
  }

  emlrtAssign(&y, m1);
  return y;
}

void emlrt_synchGlobalsFromML(const emlrtStack *sp)
{
  m_emlrt_marshallIn(sp, emlrtGetGlobalVariable("trun2"), "trun2", trun2);
  o_emlrt_marshallIn(sp, emlrtGetGlobalVariable("vnfaces"), "vnfaces", vnfaces);
  q_emlrt_marshallIn(sp, emlrtGetGlobalVariable("wedges"), "wedges", wedges);
  Nblock = c_emlrt_marshallIn(sp, emlrtGetGlobalVariable("Nblock"), "Nblock");
  s_emlrt_marshallIn(sp, emlrtGetGlobalVariable("MSKFlag"), "MSKFlag", MSKFlag);
  s_emlrt_marshallIn(sp, emlrtGetGlobalVariable("CEP"), "CEP", CEP);
}

void emlrt_synchGlobalsToML(void)
{
  if (trun2_dirty & 1U) {
    emlrtPutGlobalVariable("trun2", emlrt_marshallOut(trun2));
    trun2_dirty &= 2U;
  }

  if (vnfaces_dirty & 1U) {
    emlrtPutGlobalVariable("vnfaces", b_emlrt_marshallOut(vnfaces));
    vnfaces_dirty &= 2U;
  }

  if (wedges_dirty & 1U) {
    emlrtPutGlobalVariable("wedges", c_emlrt_marshallOut(wedges));
    wedges_dirty &= 2U;
  }

  if (Nblock_dirty & 1U) {
    emlrtPutGlobalVariable("Nblock", d_emlrt_marshallOut(Nblock));
    Nblock_dirty &= 2U;
  }

  if (MSKFlag_dirty & 1U) {
    emlrtPutGlobalVariable("MSKFlag", e_emlrt_marshallOut(MSKFlag));
    MSKFlag_dirty &= 2U;
  }

  if (CEP_dirty & 1U) {
    emlrtPutGlobalVariable("CEP", e_emlrt_marshallOut(CEP));
    CEP_dirty &= 2U;
  }
}

void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_trun2, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  n_emlrt_marshallIn(sp, emlrtAlias(b_trun2), &thisId, y);
  emlrtDestroyArray(&b_trun2);
}

void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_vnfaces, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  p_emlrt_marshallIn(sp, emlrtAlias(b_vnfaces), &thisId, y);
  emlrtDestroyArray(&b_vnfaces);
}

void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_wedges, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  r_emlrt_marshallIn(sp, emlrtAlias(b_wedges), &thisId, y);
  emlrtDestroyArray(&b_wedges);
}

void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  db_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_MSKFlag, const
  char_T *identifier, real_T y[304])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  t_emlrt_marshallIn(sp, emlrtAlias(b_MSKFlag), &thisId, y);
  emlrtDestroyArray(&b_MSKFlag);
}

void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[304])
{
  eb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

real_T v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/* End of code generation (CalcPath2_mexutil.c) */
