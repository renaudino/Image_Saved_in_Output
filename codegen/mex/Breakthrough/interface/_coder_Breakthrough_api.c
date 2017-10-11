/*
 * _coder_Breakthrough_api.c
 *
 * Code generation for function '_coder_Breakthrough_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Breakthrough.h"
#include "_coder_Breakthrough_api.h"
#include "Breakthrough_emxutil.h"
#include "Breakthrough_data.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2];
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Pnneg_re,
  const char_T *identifier))[3];
static const mxArray *c_emlrt_marshallOut(const real_T u[3]);
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_vnfaces,
  const char_T *identifier, emxArray_real_T *y);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *face,
  const char_T *identifier))[2];
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_wedges,
  const char_T *identifier, emxArray_real_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2];
static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2]
{
  real_T (*y)[2];
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m1;
  real_T *pData;
  int32_T i2;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  int32_T d_i;
  y = NULL;
  m1 = emlrtCreateNumericArray(4, *(int32_T (*)[3])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m1);
  i2 = 0;
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 4; b_i++) {
      for (c_i = 0; c_i < 6; c_i++) {
        for (d_i = 0; d_i < u->size[0]; d_i++) {
          pData[i2] = u->data[((d_i + u->size[0] * c_i) + u->size[0] * u->size[1]
                               * b_i) + u->size[0] * u->size[1] * u->size[2] * i];
          i2++;
        }
      }
    }
  }

  emlrtAssign(&y, m1);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Pnneg_re,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(Pnneg_re), &thisId);
  emlrtDestroyArray(&Pnneg_re);
  return y;
}
  static const mxArray *c_emlrt_marshallOut(const real_T u[3])
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv0[1] = { 0 };

  static const int32_T iv1[1] = { 3 };

  y = NULL;
  m2 = emlrtCreateNumericArray(1, iv0, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m2, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m2, iv1, 1);
  emlrtAssign(&y, m2);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_vnfaces,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(b_vnfaces), &thisId, y);
  emlrtDestroyArray(&b_vnfaces);
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *face,
  const char_T *identifier))[2]
{
  real_T (*y)[2];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(face), &thisId);
  emlrtDestroyArray(&face);
  return y;
}
  static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m0;
  real_T *pData;
  int32_T i1;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  y = NULL;
  m0 = emlrtCreateNumericArray(3, *(int32_T (*)[3])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m0);
  i1 = 0;
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 6; b_i++) {
      for (c_i = 0; c_i < u->size[0]; c_i++) {
        pData[i1] = u->data[(c_i + u->size[0] * b_i) + u->size[0] * u->size[1] *
          i];
        i1++;
      }
    }
  }

  emlrtAssign(&y, m0);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  k_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_wedges,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(b_wedges), &thisId, y);
  emlrtDestroyArray(&b_wedges);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  l_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2]
{
  real_T (*ret)[2];
  static const int32_T dims[2] = { 1, 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[2])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[3])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[3] = { -1, 6, 3 };

  const boolean_T bv0[3] = { true, false, false };

  int32_T iv2[3];
  int32_T i3;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv0[0],
    iv2);
  i3 = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv2[0];
  ret->size[1] = iv2[1];
  ret->size[2] = iv2[2];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i3, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[4] = { -1, 6, 4, 3 };

  const boolean_T bv1[4] = { true, false, false, false };

  int32_T iv3[4];
  int32_T i4;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 4U, dims, &bv1[0],
    iv3);
  i4 = ret->size[0] * ret->size[1] * ret->size[2] * ret->size[3];
  ret->size[0] = iv3[0];
  ret->size[1] = iv3[1];
  ret->size[2] = iv3[2];
  ret->size[3] = iv3[3];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i4, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

void Breakthrough_api(const mxArray * const prhs[3], const mxArray *plhs[1])
{
  real_T (*Pbreak)[3];
  real_T (*face)[2];
  real_T (*Pnneg_re)[3];
  real_T (*Pnpos_re)[3];
  const mxArray *tmp;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  Pbreak = (real_T (*)[3])mxMalloc(sizeof(real_T [3]));

  /* Marshall function inputs */
  face = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "face");
  Pnneg_re = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "Pnneg_re");
  Pnpos_re = c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "Pnpos_re");

  /* Marshall in global variables */
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

  /* Invoke the target function */
  Breakthrough(&st, *face, *Pnneg_re, *Pnpos_re, *Pbreak);

  /* Marshall out global variables */
  emlrtPutGlobalVariable("vnfaces", emlrt_marshallOut(vnfaces));
  emlrtPutGlobalVariable("wedges", b_emlrt_marshallOut(wedges));

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(*Pbreak);
}

/* End of code generation (_coder_Breakthrough_api.c) */
