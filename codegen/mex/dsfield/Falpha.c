/*
 * Falpha.c
 *
 * Code generation for function 'Falpha'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dsfield.h"
#include "Falpha.h"
#include "error.h"
#include "nchoosek.h"
#include "dsfield_data.h"

/* Variable Definitions */
static emlrtRSInfo o_emlrtRSI = { 7,   /* lineNo */
  "Falpha",                            /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Falpha.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 8,   /* lineNo */
  "Falpha",                            /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Falpha.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 11,  /* lineNo */
  "Falpha",                            /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Falpha.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 18,  /* lineNo */
  "Falpha",                            /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Falpha.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 19,  /* lineNo */
  "Falpha",                            /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Falpha.m"/* pathName */
};

static emlrtRTEInfo k_emlrtRTEI = { 10,/* lineNo */
  9,                                   /* colNo */
  "Falpha",                            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Falpha.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 17,/* lineNo */
  17,                                  /* colNo */
  "Falpha",                            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Falpha.m"/* pName */
};

/* Function Definitions */
real_T Falpha(const emlrtStack *sp, real_T alpha, real_T cost)
{
  real_T sint;
  real_T sumj;
  int32_T j;
  real_T alphabin;
  real_T dpi;
  int32_T b_j;
  real_T sumw;
  real_T d0;
  int32_T w;
  real_T omegabin;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*  F_alpha function */
  /*  Calculates the F_alphar (refer to the paper Vittorio D. 2007) */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History:  2011.10.3 */
  st.site = &o_emlrtRSI;
  sint = cost * cost;
  st.site = &o_emlrtRSI;
  if (1.0 - sint < 0.0) {
    b_st.site = &n_emlrtRSI;
    b_error(&b_st);
  }

  sint = muDoubleScalarSqrt(1.0 - sint);
  st.site = &p_emlrtRSI;
  sumj = 0.0;
  emlrtForLoopVectorCheckR2012b(0.0, 1.0, alpha, mxDOUBLE_CLASS, (int32_T)(alpha
    + 1.0), &k_emlrtRTEI, sp);
  j = 0;
  while (j <= (int32_T)(alpha + 1.0) - 1) {
    st.site = &q_emlrtRSI;
    alphabin = nchoosek(&st, alpha, j);

    /*  binomial coefficent */
    dpi = 6.2831853071795862 / ((real_T)j + 1.0);
    if (j == 0) {
      b_j = 0;
    } else {
      b_j = (int32_T)muDoubleScalarRem(j, 2.0);
    }

    if (!(b_j == 0.0)) {
      sumw = 0.0;
      d0 = ((real_T)j - 1.0) / 2.0;
      emlrtForLoopVectorCheckR2012b(0.0, 1.0, d0, mxDOUBLE_CLASS, (int32_T)(d0 +
        1.0), &l_emlrtRTEI, sp);
      w = 0;
      while (w <= (int32_T)(d0 + 1.0) - 1) {
        st.site = &r_emlrtRSI;
        omegabin = nchoosek(&st, 2.0 * (real_T)w, w);
        st.site = &s_emlrtRSI;
        st.site = &s_emlrtRSI;
        sumw += omegabin * (muDoubleScalarPower(sint, w << 1) /
                            muDoubleScalarPower(2.0, 2.0 * (real_T)w));
        w++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      dpi = dpi * cost * sumw;
    }

    sumj += alphabin * dpi;
    j++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  return sumj * (1.0 / muDoubleScalarPower(2.0, alpha));
}

/* End of code generation (Falpha.c) */
