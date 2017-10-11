/*
 * _coder_PointsImagesm_api.c
 *
 * Code generation for function '_coder_PointsImagesm_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PointsImagesm.h"
#include "_coder_PointsImagesm_api.h"
#include "PointsImagesm_emxutil.h"
#include "PointsImagesm_data.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2];
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_Nbrimg,
  const char_T *identifier, real_T y_data[], int32_T y_size[1]);
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y_data[], int32_T y_size[1]);
static const mxArray *d_emlrt_marshallOut(const real_T u);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_Mtrun,
  const char_T *identifier, emxArray_real_T *y);
static const mxArray *e_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[3]);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *mid, const
  char_T *identifier))[2];
static const mxArray *emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[1]);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *f_emlrt_marshallOut(const real_T u[9]);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_wedges,
  const char_T *identifier, emxArray_real_T *y);
static const mxArray *g_emlrt_marshallOut(const real_T u[3]);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_Nblock,
  const char_T *identifier);
static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_vnfaces,
  const char_T *identifier, real_T y_data[], int32_T y_size[3]);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y_data[], int32_T y_size[3]);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_DBIMAGES,
  const char_T *identifier, real_T y[9]);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[9]);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_recept,
  const char_T *identifier, real_T y[3]);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3]);
static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2];
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret_data[], int32_T ret_size[1]);
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret_data[], int32_T ret_size[3]);
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[9]);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3]);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2]
{
  real_T (*y)[2];
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m1;
  real_T *pData;
  int32_T i6;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  y = NULL;
  m1 = emlrtCreateNumericArray(3, *(int32_T (*)[1])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m1);
  i6 = 0;
  for (i = 0; i < 9; i++) {
    for (b_i = 0; b_i < u->size[1]; b_i++) {
      for (c_i = 0; c_i < u->size[0]; c_i++) {
        pData[i6] = u->data[(c_i + u->size[0] * b_i) + u->size[0] * u->size[1] *
          i];
        i6++;
      }
    }
  }

  emlrtAssign(&y, m1);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_Nbrimg,
  const char_T *identifier, real_T y_data[], int32_T y_size[1])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(b_Nbrimg), &thisId, y_data, y_size);
  emlrtDestroyArray(&b_Nbrimg);
}

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m2;
  real_T *pData;
  int32_T i7;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  int32_T d_i;
  y = NULL;
  m2 = emlrtCreateNumericArray(4, *(int32_T (*)[1])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m2);
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

  emlrtAssign(&y, m2);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y_data[], int32_T y_size[1])
{
  r_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static const mxArray *d_emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m3;
  y = NULL;
  m3 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m3);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_Mtrun,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(b_Mtrun), &thisId, y);
  emlrtDestroyArray(&b_Mtrun);
}

static const mxArray *e_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[3])
{
  const mxArray *y;
  const mxArray *m4;
  real_T *pData;
  int32_T i8;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  y = NULL;
  m4 = emlrtCreateNumericArray(3, u_size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m4);
  i8 = 0;
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 6; b_i++) {
      for (c_i = 0; c_i < u_size[0]; c_i++) {
        pData[i8] = u_data[(c_i + u_size[0] * b_i) + u_size[0] * u_size[1] * i];
        i8++;
      }
    }
  }

  emlrtAssign(&y, m4);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *mid, const
  char_T *identifier))[2]
{
  real_T (*y)[2];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(mid), &thisId);
  emlrtDestroyArray(&mid);
  return y;
}
  static const mxArray *emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[1])
{
  const mxArray *y;
  const mxArray *m0;
  real_T *pData;
  int32_T i5;
  int32_T i;
  y = NULL;
  m0 = emlrtCreateNumericArray(1, u_size, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m0);
  i5 = 0;
  for (i = 0; i < u_size[0]; i++) {
    pData[i5] = u_data[i];
    i5++;
  }

  emlrtAssign(&y, m0);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  s_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *f_emlrt_marshallOut(const real_T u[9])
{
  const mxArray *y;
  const mxArray *m5;
  static const int32_T iv1[2] = { 1, 9 };

  real_T *pData;
  int32_T i;
  y = NULL;
  m5 = emlrtCreateNumericArray(2, iv1, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m5);
  for (i = 0; i < 9; i++) {
    pData[i] = u[i];
  }

  emlrtAssign(&y, m5);
  return y;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_wedges,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(b_wedges), &thisId, y);
  emlrtDestroyArray(&b_wedges);
}

static const mxArray *g_emlrt_marshallOut(const real_T u[3])
{
  const mxArray *y;
  const mxArray *m6;
  static const int32_T iv2[1] = { 3 };

  real_T *pData;
  int32_T i;
  y = NULL;
  m6 = emlrtCreateNumericArray(1, iv2, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m6);
  for (i = 0; i < 3; i++) {
    pData[i] = u[i];
  }

  emlrtAssign(&y, m6);
  return y;
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  t_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_Nblock,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(c_Nblock), &thisId);
  emlrtDestroyArray(&c_Nblock);
  return y;
}

static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = u_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_vnfaces,
  const char_T *identifier, real_T y_data[], int32_T y_size[3])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(b_vnfaces), &thisId, y_data, y_size);
  emlrtDestroyArray(&b_vnfaces);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y_data[], int32_T y_size[3])
{
  v_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_DBIMAGES,
  const char_T *identifier, real_T y[9])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  n_emlrt_marshallIn(sp, emlrtAlias(b_DBIMAGES), &thisId, y);
  emlrtDestroyArray(&b_DBIMAGES);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[9])
{
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_recept,
  const char_T *identifier, real_T y[3])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  p_emlrt_marshallIn(sp, emlrtAlias(b_recept), &thisId, y);
  emlrtDestroyArray(&b_recept);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3])
{
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2]
{
  real_T (*ret)[2];
  static const int32_T dims[1] = { 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[2])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret_data[], int32_T ret_size[1])
{
  static const int32_T dims[1] = { 15 };

  boolean_T bv0[1] = { true };

  int32_T iv3[1];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv0[0],
    iv3);
  ret_size[0] = iv3[0];
  emlrtImportArrayR2015b(sp, src, (void *)ret_data, 8, false);
  emlrtDestroyArray(&src);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[3] = { -1, -1, 9 };

  boolean_T bv1[3] = { true, true, false };

  int32_T iv4[3];
  int32_T i9;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv1[0],
    iv4);
  i9 = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv4[0];
  ret->size[1] = iv4[1];
  ret->size[2] = iv4[2];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i9, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[4] = { 150, 6, 4, 3 };

  boolean_T bv2[4] = { true, false, false, false };

  int32_T iv5[4];
  int32_T i10;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 4U, dims, &bv2[0],
    iv5);
  i10 = ret->size[0] * ret->size[1] * ret->size[2] * ret->size[3];
  ret->size[0] = iv5[0];
  ret->size[1] = iv5[1];
  ret->size[2] = iv5[2];
  ret->size[3] = iv5[3];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i10, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static real_T u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
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
  emlrtMsgIdentifier *msgId, real_T ret_data[], int32_T ret_size[3])
{
  static const int32_T dims[3] = { 150, 6, 3 };

  boolean_T bv3[3] = { true, false, false };

  int32_T iv6[3];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv3[0],
    iv6);
  ret_size[0] = iv6[0];
  ret_size[1] = iv6[1];
  ret_size[2] = iv6[2];
  emlrtImportArrayR2015b(sp, src, (void *)ret_data, 8, false);
  emlrtDestroyArray(&src);
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[9])
{
  static const int32_T dims[2] = { 1, 9 };

  int32_T i11;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i11 = 0; i11 < 9; i11++) {
    ret[i11] = (*(real_T (*)[9])mxGetData(src))[i11];
  }

  emlrtDestroyArray(&src);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3])
{
  static const int32_T dims[1] = { 3 };

  int32_T i12;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i12 = 0; i12 < 3; i12++) {
    ret[i12] = (*(real_T (*)[3])mxGetData(src))[i12];
  }

  emlrtDestroyArray(&src);
}

void PointsImagesm_api(const mxArray * const prhs[1], const mxArray *plhs[1])
{
  real_T (*mid)[2];
  const mxArray *tmp;
  real_T pnbr;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  mid = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "mid");

  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("Nbrimg");
  if (tmp != NULL) {
    c_emlrt_marshallIn(&st, tmp, "Nbrimg", Nbrimg.data, Nbrimg.size);
    Nbrimg_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Mtrun");
  if (tmp != NULL) {
    e_emlrt_marshallIn(&st, tmp, "Mtrun", Mtrun);
    Mtrun_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("wedges");
  if (tmp != NULL) {
    g_emlrt_marshallIn(&st, tmp, "wedges", wedges);
    wedges_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Nblock");
  if (tmp != NULL) {
    Nblock = i_emlrt_marshallIn(&st, tmp, "Nblock");
    Nblock_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("vnfaces");
  if (tmp != NULL) {
    k_emlrt_marshallIn(&st, tmp, "vnfaces", vnfaces.data, vnfaces.size);
    vnfaces_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("DBIMAGES");
  if (tmp != NULL) {
    m_emlrt_marshallIn(&st, tmp, "DBIMAGES", DBIMAGES);
    DBIMAGES_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("Nreflx");
  if (tmp != NULL) {
    Nreflx = i_emlrt_marshallIn(&st, tmp, "Nreflx");
    Nreflx_dirty = 0U;
  }

  tmp = emlrtGetGlobalVariable("recept");
  if (tmp != NULL) {
    o_emlrt_marshallIn(&st, tmp, "recept", recept);
    recept_dirty = 0U;
  }

  /* Invoke the target function */
  pnbr = PointsImagesm(&st, *mid);

  /* Marshall out global variables */
  emlrtPutGlobalVariable("Nbrimg", emlrt_marshallOut(Nbrimg.data, Nbrimg.size));
  emlrtPutGlobalVariable("Mtrun", b_emlrt_marshallOut(Mtrun));
  emlrtPutGlobalVariable("wedges", c_emlrt_marshallOut(wedges));
  emlrtPutGlobalVariable("Nblock", d_emlrt_marshallOut(Nblock));
  emlrtPutGlobalVariable("vnfaces", e_emlrt_marshallOut(vnfaces.data,
    vnfaces.size));
  emlrtPutGlobalVariable("DBIMAGES", f_emlrt_marshallOut(DBIMAGES));
  emlrtPutGlobalVariable("Nreflx", d_emlrt_marshallOut(Nreflx));
  emlrtPutGlobalVariable("recept", g_emlrt_marshallOut(recept));

  /* Marshall function outputs */
  plhs[0] = d_emlrt_marshallOut(pnbr);
}

/* End of code generation (_coder_PointsImagesm_api.c) */
