/*
 * lobe.c
 *
 * Code generation for function 'lobe'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dsfield.h"
#include "lobe.h"
#include "error.h"
#include "dsfield_data.h"

/* Variable Definitions */
static emlrtRSInfo m_emlrtRSI = { 61,  /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 7,   /* lineNo */
  "lobe",                              /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\lobe.m"/* pathName */
};

/* Function Definitions */
real_T lobe(const emlrtStack *sp, real_T cosp, real_T alpha)
{
  real_T Dmc;
  real_T a;
  boolean_T p;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /*  directive model coefficient */
  /*  Calculates the ((1+cosfr)/2).^alpha (refer to the paper Vittorio D. 2007) */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History:  2011.10.3 */
  a = (1.0 + cosp) / 2.0;
  st.site = &w_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  Dmc = muDoubleScalarPower(a, alpha);
  p = false;
  if (a < 0.0) {
    if (muDoubleScalarIsNaN(alpha) || (muDoubleScalarFloor(alpha) == alpha)) {
      p = true;
    } else {
      p = false;
    }

    p = !p;
  }

  if (p) {
    c_st.site = &m_emlrtRSI;
    error(&c_st);
  }

  return Dmc;
}

/* End of code generation (lobe.c) */
