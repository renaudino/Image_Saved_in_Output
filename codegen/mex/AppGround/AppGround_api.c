/*
 * AppGround_api.c
 *
 * Code generation for function 'AppGround_api'
 *
 * C source code generated on: Fri Dec 20 16:13:08 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "AppGround.h"
#include "AppGround_api.h"
#include "AppGround_emxutil.h"
#include "AppGround_data.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 1, 1, "AppGround_api", "" };

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId))[3];
static const mxArray *b_emlrt_marshallOut(emxArray_real_T *u);
static real_T c_emlrt_marshallIn(const mxArray *c_Nblock, const char_T
  *identifier);
static real_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static void e_emlrt_marshallIn(const mxArray *c_wedges, const char_T *identifier,
  emxArray_real_T *y);
static real_T (*emlrt_marshallIn(const mxArray *gpoint, const char_T *identifier))
  [3];
static const mxArray *emlrt_marshallOut(real_T u);
static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y);
static real_T (*g_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier *
  msgId))[3];
static real_T h_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static void i_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId))[3]
{
  real_T (*y)[3];
  y = g_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *b_emlrt_marshallOut(emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m1;
  real_T (*pData)[];
  int32_T i4;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  int32_T d_i;
  y = NULL;
  m1 = mxCreateNumericArray(4, (int32_T *)u->size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m1);
  i4 = 0;
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 4; b_i++) {
      for (c_i = 0; c_i < 6; c_i++) {
        for (d_i = 0; d_i < u->size[0]; d_i++) {
          (*pData)[i4] = u->data[((d_i + u->size[0] * c_i) + u->size[0] *
            u->size[1] * b_i) + u->size[0] * u->size[1] * u->size[2] * i];
          i4++;
        }
      }
    }
  }

  emlrtAssign(&y, m1);
  return y;
}

static real_T c_emlrt_marshallIn(const mxArray *c_Nblock, const char_T
  *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(emlrtAlias(c_Nblock), &thisId);
  emlrtDestroyArray(&c_Nblock);
  return y;
}

static real_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  real_T y;
  y = h_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const mxArray *c_wedges, const char_T *identifier,
  emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  f_emlrt_marshallIn(emlrtAlias(c_wedges), &thisId, y);
  emlrtDestroyArray(&c_wedges);
}

static real_T (*emlrt_marshallIn(const mxArray *gpoint, const char_T *identifier))
  [3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(emlrtAlias(gpoint), &thisId);
  emlrtDestroyArray(&gpoint);
  return y;
}
  static const mxArray *emlrt_marshallOut(real_T u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = mxCreateDoubleScalar(u);
  emlrtAssign(&y, m0);
  return y;
}

static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y)
{
  i_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*g_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier *
  msgId))[3]
{
  real_T (*ret)[3];
  int32_T iv0[1];
  iv0[0] = 3;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 1U,
    iv0);
  ret = (real_T (*)[3])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T h_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier *
  msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void i_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret)
{
  int32_T iv1[4];
  boolean_T bv0[4];
  int32_T i;
  static const uint8_T uv0[4] = { 150, 6, 4, 3 };

  static const boolean_T bv1[4] = { TRUE, FALSE, FALSE, FALSE };

  for (i = 0; i < 4; i++) {
    iv1[i] = uv0[i];
    bv0[i] = bv1[i];
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 4U,
    iv1, bv0, ret->size);
  i = ret->size[0] * ret->size[1] * ret->size[2] * ret->size[3];
  ret->size[0] = ret->size[0];
  ret->size[1] = 6;
  ret->size[2] = 4;
  ret->size[3] = 3;
  emxEnsureCapacity((emxArray__common *)ret, i, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, FALSE);
  emlrtDestroyArray(&src);
}

void AppGround_api(const mxArray * const prhs[1], const mxArray *plhs[1])
{
  real_T (*gpoint)[3];
  const mxArray *tmp;
  emxArray_real_T *r0;
  real_T appground;
  int32_T i3;
  int32_T loop_ub;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);

  /* Marshall function inputs */
  gpoint = emlrt_marshallIn(emlrtAlias(prhs[0]), "gpoint");

  /* Marshall in global variables */
  tmp = mexGetVariable("global", "Nblock");
  if (tmp) {
    Nblock = c_emlrt_marshallIn(tmp, "Nblock");
    Nblock_dirty = 0U;
  }

  tmp = mexGetVariable("global", "wedges");
  if (tmp) {
    e_emlrt_marshallIn(tmp, "wedges", wedges);
    wedges_dirty = 0U;
  }

  emxInit_real_T(&r0, 4, &b_emlrtRTEI, TRUE);

  /* Invoke the target function */
  appground = AppGround(*gpoint);

  /* Marshall out global variables */
  mexPutVariable("global", "Nblock", emlrt_marshallOut(Nblock));
  i3 = r0->size[0] * r0->size[1] * r0->size[2] * r0->size[3];
  r0->size[0] = wedges->size[0];
  r0->size[1] = 6;
  r0->size[2] = 4;
  r0->size[3] = 3;
  emxEnsureCapacity((emxArray__common *)r0, i3, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  loop_ub = wedges->size[0] * wedges->size[1] * wedges->size[2] * wedges->size[3];
  for (i3 = 0; i3 < loop_ub; i3++) {
    r0->data[i3] = wedges->data[i3];
  }

  mexPutVariable("global", "wedges", b_emlrt_marshallOut(r0));

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(appground);
  emxFree_real_T(&r0);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (AppGround_api.c) */
