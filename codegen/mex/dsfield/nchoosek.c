/*
 * nchoosek.c
 *
 * Code generation for function 'nchoosek'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dsfield.h"
#include "nchoosek.h"
#include "error.h"
#include "warning.h"

/* Variable Definitions */
static emlrtRSInfo t_emlrtRSI = { 45,  /* lineNo */
  "nchoosek",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 39,  /* lineNo */
  "nchoosek",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 116, /* lineNo */
  "nchoosek",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m"/* pathName */
};

static emlrtRTEInfo m_emlrtRTEI = { 43,/* lineNo */
  23,                                  /* colNo */
  "nchoosek",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 25,/* lineNo */
  15,                                  /* colNo */
  "nchoosek",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 103,/* lineNo */
  21,                                  /* colNo */
  "nchoosek",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m"/* pName */
};

/* Function Definitions */
real_T nchoosek(const emlrtStack *sp, real_T x, real_T k)
{
  real_T y;
  real_T b_k;
  real_T nmk;
  int32_T j;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!(k == muDoubleScalarFloor(k))) {
    emlrtErrorWithMessageIdR2012b(sp, &n_emlrtRTEI,
      "MATLAB:nchoosek:InvalidArg2", 0);
  }

  if (k > x) {
    st.site = &u_emlrtRSI;
    c_error(&st);
  } else {
    if (!(x <= 9.007199254740992E+15)) {
      emlrtErrorWithMessageIdR2012b(sp, &m_emlrtRTEI,
        "MATLAB:nchoosek:NOutOfRange", 0);
    }

    st.site = &t_emlrtRSI;
    b_k = k;
    if ((!muDoubleScalarIsInf(x)) && (!muDoubleScalarIsNaN(x)) &&
        ((!muDoubleScalarIsInf(k)) && (!muDoubleScalarIsNaN(k)))) {
      if (k > x / 2.0) {
        b_k = x - k;
      }

      if (b_k > 1000.0) {
        y = rtInf;
      } else {
        y = 1.0;
        nmk = x - b_k;
        emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_k, mxDOUBLE_CLASS, (int32_T)
          b_k, &o_emlrtRTEI, &st);
        for (j = 0; j < (int32_T)b_k; j++) {
          y *= ((1.0 + (real_T)j) + nmk) / (1.0 + (real_T)j);
        }

        y = muDoubleScalarRound(y);
      }
    } else {
      y = rtNaN;
    }

    if (!(y <= 9.007199254740992E+15)) {
      b_st.site = &v_emlrtRSI;
      warning(&b_st);
    }
  }

  return y;
}

/* End of code generation (nchoosek.c) */
