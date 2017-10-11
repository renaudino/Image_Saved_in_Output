/*
 * _coder_BlockCheck_api.c
 *
 * Code generation for function '_coder_BlockCheck_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BlockCheck.h"
#include "_coder_BlockCheck_api.h"
#include "BlockCheck_emxutil.h"
#include "BlockCheck_data.h"

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *p_re,
  const char_T *identifier))[3];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_wedges,
  const char_T *identifier, emxArray_real_T *y);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *bl, const
  char_T *identifier);
static const mxArray *emlrt_marshallOut(const real_T u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m1;
  real_T *pData;
  int32_T i3;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  int32_T d_i;
  y = NULL;
  m1 = emlrtCreateNumericArray(4, *(int32_T (*)[4])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m1);
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

  emlrtAssign(&y, m1);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *p_re,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(p_re), &thisId);
  emlrtDestroyArray(&p_re);
  return y;
}
  static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_wedges,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(b_wedges), &thisId, y);
  emlrtDestroyArray(&b_wedges);
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *bl, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(bl), &thisId);
  emlrtDestroyArray(&bl);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m0);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[3] = { 1, 1, 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims);
  ret = (real_T (*)[3])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[4] = { -1, 6, 4, 3 };

  const boolean_T bv0[4] = { true, false, false, false };

  int32_T iv0[4];
  int32_T i4;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 4U, dims, &bv0[0],
    iv0);
  i4 = ret->size[0] * ret->size[1] * ret->size[2] * ret->size[3];
  ret->size[0] = iv0[0];
  ret->size[1] = iv0[1];
  ret->size[2] = iv0[2];
  ret->size[3] = iv0[3];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i4, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

void BlockCheck_api(const mxArray * const prhs[2], const mxArray *plhs[1])
{
  real_T bl;
  real_T (*p_re)[3];
  const mxArray *tmp;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  bl = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "bl");
  p_re = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "p_re");

  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("Nblock");
  if (tmp != NULL) {
    Nblock = emlrt_marshallIn(&st, tmp, "Nblock");
    Nblock_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("wedges");
  if (tmp != NULL) {
    e_emlrt_marshallIn(&st, tmp, "wedges", wedges);
    wedges_dirty = 0U;
  }

  /* Invoke the target function */
  bl = BlockCheck(&st, bl, *p_re);

  /* Marshall out global variables */
  emlrtPutGlobalVariable("Nblock", emlrt_marshallOut(Nblock));
  emlrtPutGlobalVariable("wedges", b_emlrt_marshallOut(wedges));

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(bl);
}

/* End of code generation (_coder_BlockCheck_api.c) */
