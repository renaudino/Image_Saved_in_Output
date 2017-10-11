/*
 * sort1.c
 *
 * Code generation for function 'sort1'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Masking_Olivier_global.h"
#include "sort1.h"
#include "assertValidDim.h"
#include "eml_int_forloop_overflow_check.h"
#include "sortIdx.h"
#include "Masking_Olivier_global_data.h"

/* Variable Definitions */
static emlrtRSInfo n_emlrtRSI = { 19,  /* lineNo */
  "sort",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 50,  /* lineNo */
  "sort",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 71,  /* lineNo */
  "sort",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 74,  /* lineNo */
  "sort",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 76,  /* lineNo */
  "sort",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 79,  /* lineNo */
  "sort",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 82,  /* lineNo */
  "sort",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 84,  /* lineNo */
  "sort",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 49,  /* lineNo */
  "prodsize",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\prodsize.m"/* pathName */
};

/* Function Declarations */
static void b_sort(real_T x[2], int32_T idx[2]);
static void d_sort(const emlrtStack *sp, real_T x_data[], int32_T x_size[1],
                   int32_T dim, int32_T idx_data[], int32_T idx_size[1]);

/* Function Definitions */
static void b_sort(real_T x[2], int32_T idx[2])
{
  boolean_T p;
  real_T tmp;
  if ((x[0] <= x[1]) || muDoubleScalarIsNaN(x[1])) {
    p = true;
  } else {
    p = false;
  }

  if (p) {
    idx[0] = 1;
    idx[1] = 2;
  } else {
    idx[0] = 2;
    idx[1] = 1;
    tmp = x[0];
    x[0] = x[1];
    x[1] = tmp;
  }
}

static void d_sort(const emlrtStack *sp, real_T x_data[], int32_T x_size[1],
                   int32_T dim, int32_T idx_data[], int32_T idx_size[1])
{
  int32_T i16;
  int32_T vwork_size[1];
  int32_T vstride;
  int32_T k;
  int32_T j;
  real_T vwork_data[1000];
  int32_T iidx_data[1000];
  int32_T iidx_size[1];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &o_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  assertValidDim();
  if (dim <= 1) {
    i16 = x_size[0];
  } else {
    i16 = 1;
  }

  vwork_size[0] = (int16_T)i16;
  idx_size[0] = (int16_T)x_size[0];
  st.site = &p_emlrtRSI;
  vstride = 1;
  b_st.site = &v_emlrtRSI;
  if ((!(1 > dim - 1)) && (dim - 1 > 2147483646)) {
    c_st.site = &w_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  k = 1;
  while (k <= dim - 1) {
    vstride *= x_size[0];
    k = 2;
  }

  st.site = &q_emlrtRSI;
  st.site = &r_emlrtRSI;
  if ((!(1 > vstride)) && (vstride > 2147483646)) {
    b_st.site = &w_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (j = 0; j + 1 <= vstride; j++) {
    st.site = &s_emlrtRSI;
    for (k = 0; k + 1 <= i16; k++) {
      vwork_data[k] = x_data[j + k * vstride];
    }

    st.site = &t_emlrtRSI;
    sortIdx(&st, vwork_data, vwork_size, iidx_data, iidx_size);
    st.site = &u_emlrtRSI;
    for (k = 0; k + 1 <= i16; k++) {
      x_data[j + k * vstride] = vwork_data[k];
      idx_data[j + k * vstride] = iidx_data[k];
    }
  }
}

void c_sort(const emlrtStack *sp, real_T x_data[], int32_T x_size[1], int32_T
            idx_data[], int32_T idx_size[1])
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &n_emlrtRSI;
  d_sort(&st, x_data, x_size, 1, idx_data, idx_size);
}

void sort(real_T x[2], int32_T idx[2])
{
  b_sort(x, idx);
}

/* End of code generation (sort1.c) */
