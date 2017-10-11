/*
 * CalcPath_mexutil.c
 *
 * Code generation for function 'CalcPath_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CalcPath.h"
#include "CalcPath_mexutil.h"
#include "CalcPath_emxutil.h"
#include "CalcPath_data.h"

/* Function Declarations */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[4] = { -1, -1, -1, 3 };

  const boolean_T bv4[4] = { true, true, true, false };

  int32_T iv5[4];
  int32_T i15;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 4U, dims, &bv4[0],
    iv5);
  i15 = ret->size[0] * ret->size[1] * ret->size[2] * ret->size[3];
  ret->size[0] = iv5[0];
  ret->size[1] = iv5[1];
  ret->size[2] = iv5[2];
  ret->size[3] = iv5[3];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i15, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[4] = { -1, -1, -1, 2 };

  const boolean_T bv5[4] = { true, true, true, false };

  int32_T iv6[4];
  int32_T i16;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 4U, dims, &bv5[0],
    iv6);
  i16 = ret->size[0] * ret->size[1] * ret->size[2] * ret->size[3];
  ret->size[0] = iv6[0];
  ret->size[1] = iv6[1];
  ret->size[2] = iv6[2];
  ret->size[3] = iv6[3];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i16, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = u_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  v_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  y_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
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
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv0[1] = { true };

  int32_T iv1[1];
  int32_T i11;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv0[0],
    iv1);
  i11 = ret->size[0];
  ret->size[0] = iv1[0];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i11, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[3] = { -1, -1, 9 };

  const boolean_T bv1[3] = { true, true, false };

  int32_T iv2[3];
  int32_T i12;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv1[0],
    iv2);
  i12 = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv2[0];
  ret->size[1] = iv2[1];
  ret->size[2] = iv2[2];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i12, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[3] = { -1, 6, 3 };

  const boolean_T bv2[3] = { true, false, false };

  int32_T iv3[3];
  int32_T i13;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv2[0],
    iv3);
  i13 = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv3[0];
  ret->size[1] = iv3[1];
  ret->size[2] = iv3[2];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i13, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[4] = { -1, 6, 4, 3 };

  const boolean_T bv3[4] = { true, false, false, false };

  int32_T iv4[4];
  int32_T i14;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 4U, dims, &bv3[0],
    iv4);
  i14 = ret->size[0] * ret->size[1] * ret->size[2] * ret->size[3];
  ret->size[0] = iv4[0];
  ret->size[1] = iv4[1];
  ret->size[2] = iv4[2];
  ret->size[3] = iv4[3];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i14, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
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
  m2 = emlrtCreateNumericArray(3, *(int32_T (*)[1])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m2);
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

  emlrtAssign(&y, m2);
  return y;
}

const mxArray *c_emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m3;
  y = NULL;
  m3 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m3);
  return y;
}

const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m4;
  real_T *pData;
  int32_T i7;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  y = NULL;
  m4 = emlrtCreateNumericArray(3, *(int32_T (*)[1])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m4);
  i7 = 0;
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 6; b_i++) {
      for (c_i = 0; c_i < u->size[0]; c_i++) {
        pData[i7] = u->data[(c_i + u->size[0] * b_i) + u->size[0] * u->size[1] *
          i];
        i7++;
      }
    }
  }

  emlrtAssign(&y, m4);
  return y;
}

real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ordmax, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(ordmax), &thisId);
  emlrtDestroyArray(&ordmax);
  return y;
}

const mxArray *e_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m5;
  real_T *pData;
  int32_T i8;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  int32_T d_i;
  y = NULL;
  m5 = emlrtCreateNumericArray(4, *(int32_T (*)[1])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m5);
  i8 = 0;
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 4; b_i++) {
      for (c_i = 0; c_i < 6; c_i++) {
        for (d_i = 0; d_i < u->size[0]; d_i++) {
          pData[i8] = u->data[((d_i + u->size[0] * c_i) + u->size[0] * u->size[1]
                               * b_i) + u->size[0] * u->size[1] * u->size[2] * i];
          i8++;
        }
      }
    }
  }

  emlrtAssign(&y, m5);
  return y;
}

void emlrt_checkEscapedGlobals(void)
{
  Nbrimg_dirty |= Nbrimg_dirty >> 1U;
  Mtrun_dirty |= Mtrun_dirty >> 1U;
  oldReflex_dirty |= oldReflex_dirty >> 1U;
  Reflex_dirty |= Reflex_dirty >> 1U;
  NbrDSSlns_dirty |= NbrDSSlns_dirty >> 1U;
  NbrSlns_dirty |= NbrSlns_dirty >> 1U;
  vnfaces_dirty |= vnfaces_dirty >> 1U;
  RP_dirty |= RP_dirty >> 1U;
  PSLN_dirty |= PSLN_dirty >> 1U;
  RF_dirty |= RF_dirty >> 1U;
  FSLN_dirty |= FSLN_dirty >> 1U;
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
  int32_T i5;
  int32_T i;
  y = NULL;
  m1 = emlrtCreateNumericArray(1, *(int32_T (*)[1])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m1);
  i5 = 0;
  for (i = 0; i < u->size[0]; i++) {
    pData[i5] = u->data[i];
    i5++;
  }

  emlrtAssign(&y, m1);
  return y;
}

void emlrt_synchGlobalsFromML(const emlrtStack *sp)
{
  g_emlrt_marshallIn(sp, emlrtGetGlobalVariable("Nbrimg"), "Nbrimg", Nbrimg);
  i_emlrt_marshallIn(sp, emlrtGetGlobalVariable("Mtrun"), "Mtrun", Mtrun);
  oldReflex = e_emlrt_marshallIn(sp, emlrtGetGlobalVariable("oldReflex"),
    "oldReflex");
  Reflex = e_emlrt_marshallIn(sp, emlrtGetGlobalVariable("Reflex"), "Reflex");
  g_emlrt_marshallIn(sp, emlrtGetGlobalVariable("NbrDSSlns"), "NbrDSSlns",
                     NbrDSSlns);
  g_emlrt_marshallIn(sp, emlrtGetGlobalVariable("NbrSlns"), "NbrSlns", NbrSlns);
  k_emlrt_marshallIn(sp, emlrtGetGlobalVariable("vnfaces"), "vnfaces", vnfaces);
  o_emlrt_marshallIn(sp, emlrtGetGlobalVariable("RP"), "RP", RP);
  o_emlrt_marshallIn(sp, emlrtGetGlobalVariable("PSLN"), "PSLN", PSLN);
  q_emlrt_marshallIn(sp, emlrtGetGlobalVariable("RF"), "RF", RF);
  q_emlrt_marshallIn(sp, emlrtGetGlobalVariable("FSLN"), "FSLN", FSLN);
  m_emlrt_marshallIn(sp, emlrtGetGlobalVariable("wedges"), "wedges", wedges);
  Nblock = e_emlrt_marshallIn(sp, emlrtGetGlobalVariable("Nblock"), "Nblock");
  g_emlrt_marshallIn(sp, emlrtGetGlobalVariable("MSKFlag"), "MSKFlag", MSKFlag);
  g_emlrt_marshallIn(sp, emlrtGetGlobalVariable("CEP"), "CEP", CEP);
}

void emlrt_synchGlobalsToML(void)
{
  if (Nbrimg_dirty & 1U) {
    emlrtPutGlobalVariable("Nbrimg", emlrt_marshallOut(Nbrimg));
    Nbrimg_dirty &= 2U;
  }

  if (Mtrun_dirty & 1U) {
    emlrtPutGlobalVariable("Mtrun", b_emlrt_marshallOut(Mtrun));
    Mtrun_dirty &= 2U;
  }

  if (oldReflex_dirty & 1U) {
    emlrtPutGlobalVariable("oldReflex", c_emlrt_marshallOut(oldReflex));
    oldReflex_dirty &= 2U;
  }

  if (Reflex_dirty & 1U) {
    emlrtPutGlobalVariable("Reflex", c_emlrt_marshallOut(Reflex));
    Reflex_dirty &= 2U;
  }

  if (NbrDSSlns_dirty & 1U) {
    emlrtPutGlobalVariable("NbrDSSlns", emlrt_marshallOut(NbrDSSlns));
    NbrDSSlns_dirty &= 2U;
  }

  if (NbrSlns_dirty & 1U) {
    emlrtPutGlobalVariable("NbrSlns", emlrt_marshallOut(NbrSlns));
    NbrSlns_dirty &= 2U;
  }

  if (vnfaces_dirty & 1U) {
    emlrtPutGlobalVariable("vnfaces", d_emlrt_marshallOut(vnfaces));
    vnfaces_dirty &= 2U;
  }

  if (RP_dirty & 1U) {
    emlrtPutGlobalVariable("RP", f_emlrt_marshallOut(RP));
    RP_dirty &= 2U;
  }

  if (PSLN_dirty & 1U) {
    emlrtPutGlobalVariable("PSLN", f_emlrt_marshallOut(PSLN));
    PSLN_dirty &= 2U;
  }

  if (RF_dirty & 1U) {
    emlrtPutGlobalVariable("RF", g_emlrt_marshallOut(RF));
    RF_dirty &= 2U;
  }

  if (FSLN_dirty & 1U) {
    emlrtPutGlobalVariable("FSLN", g_emlrt_marshallOut(FSLN));
    FSLN_dirty &= 2U;
  }

  if (wedges_dirty & 1U) {
    emlrtPutGlobalVariable("wedges", e_emlrt_marshallOut(wedges));
    wedges_dirty &= 2U;
  }

  if (Nblock_dirty & 1U) {
    emlrtPutGlobalVariable("Nblock", c_emlrt_marshallOut(Nblock));
    Nblock_dirty &= 2U;
  }

  if (MSKFlag_dirty & 1U) {
    emlrtPutGlobalVariable("MSKFlag", emlrt_marshallOut(MSKFlag));
    MSKFlag_dirty &= 2U;
  }

  if (CEP_dirty & 1U) {
    emlrtPutGlobalVariable("CEP", emlrt_marshallOut(CEP));
    CEP_dirty &= 2U;
  }
}

const mxArray *f_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m6;
  real_T *pData;
  int32_T i9;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  int32_T d_i;
  y = NULL;
  m6 = emlrtCreateNumericArray(4, *(int32_T (*)[1])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m6);
  i9 = 0;
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < u->size[2]; b_i++) {
      for (c_i = 0; c_i < u->size[1]; c_i++) {
        for (d_i = 0; d_i < u->size[0]; d_i++) {
          pData[i9] = u->data[((d_i + u->size[0] * c_i) + u->size[0] * u->size[1]
                               * b_i) + u->size[0] * u->size[1] * u->size[2] * i];
          i9++;
        }
      }
    }
  }

  emlrtAssign(&y, m6);
  return y;
}

void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_Nbrimg, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(b_Nbrimg), &thisId, y);
  emlrtDestroyArray(&b_Nbrimg);
}

const mxArray *g_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m7;
  real_T *pData;
  int32_T i10;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  int32_T d_i;
  y = NULL;
  m7 = emlrtCreateNumericArray(4, *(int32_T (*)[1])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m7);
  i10 = 0;
  for (i = 0; i < 2; i++) {
    for (b_i = 0; b_i < u->size[2]; b_i++) {
      for (c_i = 0; c_i < u->size[1]; c_i++) {
        for (d_i = 0; d_i < u->size[0]; d_i++) {
          pData[i10] = u->data[((d_i + u->size[0] * c_i) + u->size[0] * u->size
                                [1] * b_i) + u->size[0] * u->size[1] * u->size[2]
            * i];
          i10++;
        }
      }
    }
  }

  emlrtAssign(&y, m7);
  return y;
}

void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_Mtrun, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(b_Mtrun), &thisId, y);
  emlrtDestroyArray(&b_Mtrun);
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

void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_wedges, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  n_emlrt_marshallIn(sp, emlrtAlias(b_wedges), &thisId, y);
  emlrtDestroyArray(&b_wedges);
}

void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_PSLN, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  p_emlrt_marshallIn(sp, emlrtAlias(b_PSLN), &thisId, y);
  emlrtDestroyArray(&b_PSLN);
}

void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_FSLN, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  r_emlrt_marshallIn(sp, emlrtAlias(b_FSLN), &thisId, y);
  emlrtDestroyArray(&b_FSLN);
}

/* End of code generation (CalcPath_mexutil.c) */
