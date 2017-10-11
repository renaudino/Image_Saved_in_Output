/*
 * _coder_scatterers_api.c
 *
 * Code generation for function '_coder_scatterers_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "scatterers.h"
#include "_coder_scatterers_api.h"
#include "scatterers_emxutil.h"
#include "scatterers_data.h"

/* Variable Definitions */
static emlrtRTEInfo g_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_scatterers_api",             /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *vtx_re,
  const char_T *identifier))[3];
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *PDS, const
  char_T *identifier, emxArray_real_T *y);
static void e_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *ebl, const
  char_T *identifier);
static const mxArray *emlrt_marshallOut(const real_T u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void f_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *FDS, const
  char_T *identifier, emxArray_real_T *y);
static void g_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Area, const
  char_T *identifier, emxArray_real_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_DSFlag,
  const char_T *identifier, emxArray_real_T *y);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_wedges,
  const char_T *identifier, emxArray_real_T *y);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_vnfaces,
  const char_T *identifier, emxArray_real_T *y);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m1;
  real_T *pData;
  int32_T i1;
  int32_T i;
  y = NULL;
  m1 = emlrtCreateNumericArray(1, *(int32_T (*)[1])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m1);
  i1 = 0;
  for (i = 0; i < u->size[0]; i++) {
    pData[i1] = u->data[i];
    i1++;
  }

  emlrtAssign(&y, m1);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *vtx_re,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(vtx_re), &thisId);
  emlrtDestroyArray(&vtx_re);
  return y;
}
  static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m2;
  real_T *pData;
  int32_T i2;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  int32_T d_i;
  y = NULL;
  m2 = emlrtCreateNumericArray(4, *(int32_T (*)[1])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m2);
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

  emlrtAssign(&y, m2);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m3;
  real_T *pData;
  int32_T i3;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  y = NULL;
  m3 = emlrtCreateNumericArray(3, *(int32_T (*)[1])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m3);
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

  emlrtAssign(&y, m3);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *PDS, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(PDS), &thisId, y);
  emlrtDestroyArray(&PDS);
}

static void e_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y)
{
  mxSetData((mxArray *)y, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)y, u->size, 2);
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *ebl, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(ebl), &thisId);
  emlrtDestroyArray(&ebl);
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
  s_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void f_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y)
{
  mxSetData((mxArray *)y, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)y, u->size, 2);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *FDS, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(FDS), &thisId, y);
  emlrtDestroyArray(&FDS);
}

static void g_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y)
{
  mxSetData((mxArray *)y, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)y, u->size, 2);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  t_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Area, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(Area), &thisId, y);
  emlrtDestroyArray(&Area);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  u_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_DSFlag,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(b_DSFlag), &thisId, y);
  emlrtDestroyArray(&b_DSFlag);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  v_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_wedges,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  n_emlrt_marshallIn(sp, emlrtAlias(b_wedges), &thisId, y);
  emlrtDestroyArray(&b_wedges);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_vnfaces,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  p_emlrt_marshallIn(sp, emlrtAlias(b_vnfaces), &thisId, y);
  emlrtDestroyArray(&b_vnfaces);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
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

static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[3])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, 3 };

  const boolean_T bv0[2] = { true, false };

  int32_T iv0[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv0);
  ret->size[0] = iv0[0];
  ret->size[1] = iv0[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, 2 };

  const boolean_T bv1[2] = { true, false };

  int32_T iv1[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv1[0],
    iv1);
  ret->size[0] = iv1[0];
  ret->size[1] = iv1[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 1, -1 };

  const boolean_T bv2[2] = { false, true };

  int32_T iv2[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv2[0],
    iv2);
  ret->size[0] = iv2[0];
  ret->size[1] = iv2[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv3[1] = { true };

  int32_T iv3[1];
  int32_T i4;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv3[0],
    iv3);
  i4 = ret->size[0];
  ret->size[0] = iv3[0];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i4, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[4] = { -1, 6, 4, 3 };

  const boolean_T bv4[4] = { true, false, false, false };

  int32_T iv4[4];
  int32_T i5;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 4U, dims, &bv4[0],
    iv4);
  i5 = ret->size[0] * ret->size[1] * ret->size[2] * ret->size[3];
  ret->size[0] = iv4[0];
  ret->size[1] = iv4[1];
  ret->size[2] = iv4[2];
  ret->size[3] = iv4[3];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i5, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[3] = { -1, 6, 3 };

  const boolean_T bv5[3] = { true, false, false };

  int32_T iv5[3];
  int32_T i6;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv5[0],
    iv5);
  i6 = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv5[0];
  ret->size[1] = iv5[1];
  ret->size[2] = iv5[2];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i6, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

void scatterers_api(const mxArray *prhs[5], const mxArray *plhs[4])
{
  emxArray_real_T *PDS;
  emxArray_real_T *FDS;
  emxArray_real_T *Area;
  real_T ebl;
  real_T (*vtx_re)[3];
  const mxArray *tmp;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T3(&st, &PDS, 2, &g_emlrtRTEI, true);
  emxInit_real_T3(&st, &FDS, 2, &g_emlrtRTEI, true);
  emxInit_real_T3(&st, &Area, 2, &g_emlrtRTEI, true);
  prhs[2] = emlrtProtectR2012b(prhs[2], 2, true, -1);
  prhs[3] = emlrtProtectR2012b(prhs[3], 3, true, -1);
  prhs[4] = emlrtProtectR2012b(prhs[4], 4, true, -1);

  /* Marshall function inputs */
  ebl = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "ebl");
  vtx_re = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "vtx_re");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "PDS", PDS);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "FDS", FDS);
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "Area", Area);

  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("Nblock");
  if (tmp != NULL) {
    Nblock = emlrt_marshallIn(&st, tmp, "Nblock");
    Nblock_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("DSFlag");
  if (tmp != NULL) {
    k_emlrt_marshallIn(&st, tmp, "DSFlag", DSFlag);
    DSFlag_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("wedges");
  if (tmp != NULL) {
    m_emlrt_marshallIn(&st, tmp, "wedges", wedges);
    wedges_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("vnfaces");
  if (tmp != NULL) {
    o_emlrt_marshallIn(&st, tmp, "vnfaces", vnfaces);
    vnfaces_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("lambda");
  if (tmp != NULL) {
    lambda = emlrt_marshallIn(&st, tmp, "lambda");
    lambda_dirty = 0U;
  }

  /* Invoke the target function */
  ebl = scatterers(&st, ebl, *vtx_re, PDS, FDS, Area);

  /* Marshall out global variables */
  emlrtPutGlobalVariable("Nblock", emlrt_marshallOut(Nblock));
  emlrtPutGlobalVariable("DSFlag", b_emlrt_marshallOut(DSFlag));
  emlrtPutGlobalVariable("wedges", c_emlrt_marshallOut(wedges));
  emlrtPutGlobalVariable("vnfaces", d_emlrt_marshallOut(vnfaces));
  emlrtPutGlobalVariable("lambda", emlrt_marshallOut(lambda));

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(ebl);
  e_emlrt_marshallOut(PDS, prhs[2]);
  plhs[1] = prhs[2];
  f_emlrt_marshallOut(FDS, prhs[3]);
  plhs[2] = prhs[3];
  g_emlrt_marshallOut(Area, prhs[4]);
  plhs[3] = prhs[4];
  Area->canFreeData = false;
  emxFree_real_T(&Area);
  FDS->canFreeData = false;
  emxFree_real_T(&FDS);
  PDS->canFreeData = false;
  emxFree_real_T(&PDS);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_scatterers_api.c) */
