/*
 * nullAssignment.c
 *
 * Code generation for function 'nullAssignment'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dispointsQP.h"
#include "nullAssignment.h"
#include "dispointsQP_emxutil.h"

/* Variable Definitions */
static emlrtRSInfo k_emlrtRSI = { 21,  /* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 25,  /* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRTEInfo d_emlrtRTEI = { 1, /* lineNo */
  14,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 79,/* lineNo */
  27,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 295,/* lineNo */
  1,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

/* Function Declarations */
static void make_bitarray(int32_T n, const int32_T idx_data[], const int32_T
  idx_size[2], boolean_T b_data[], int32_T b_size[2]);
static int32_T num_true(const boolean_T b_data[], const int32_T b_size[2]);
static void validate_inputs(const emlrtStack *sp, const emxArray_real_T *x,
  const int32_T idx_data[], const int32_T idx_size[2]);

/* Function Definitions */
static void make_bitarray(int32_T n, const int32_T idx_data[], const int32_T
  idx_size[2], boolean_T b_data[], int32_T b_size[2])
{
  int32_T k;
  b_size[0] = 1;
  b_size[1] = n;
  for (k = 0; k < n; k++) {
    b_data[k] = false;
  }

  for (k = 1; k <= idx_size[1]; k++) {
    b_data[idx_data[k - 1] - 1] = true;
  }
}

static int32_T num_true(const boolean_T b_data[], const int32_T b_size[2])
{
  int32_T n;
  int32_T k;
  n = 0;
  for (k = 1; k <= b_size[1]; k++) {
    n += b_data[k - 1];
  }

  return n;
}

static void validate_inputs(const emlrtStack *sp, const emxArray_real_T *x,
  const int32_T idx_data[], const int32_T idx_size[2])
{
  boolean_T p;
  int32_T k;
  boolean_T exitg1;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= idx_size[1] - 1)) {
    if (idx_data[k] > x->size[0]) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (!p) {
    emlrtErrorWithMessageIdR2012b(sp, &h_emlrtRTEI, "MATLAB:subsdeldimmismatch",
      0);
  }
}

void nullAssignment(const emlrtStack *sp, emxArray_real_T *x, const int32_T
                    idx_data[], const int32_T idx_size[2])
{
  int32_T nrowx;
  boolean_T b_data[10000];
  int32_T b_size[2];
  int32_T nrows;
  int32_T j;
  int32_T i;
  int32_T k;
  emxArray_real_T *b_x;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &k_emlrtRSI;
  validate_inputs(&st, x, idx_data, idx_size);
  st.site = &l_emlrtRSI;
  nrowx = x->size[0];
  if (idx_size[1] == 1) {
    nrows = x->size[0] - 1;
    for (j = 0; j < 3; j++) {
      for (i = idx_data[0]; i < nrowx; i++) {
        x->data[(i + x->size[0] * j) - 1] = x->data[i + x->size[0] * j];
      }
    }
  } else {
    make_bitarray(x->size[0], idx_data, idx_size, b_data, b_size);
    nrows = x->size[0] - num_true(b_data, b_size);
    i = 0;
    for (k = 1; k <= nrowx; k++) {
      if ((k > b_size[1]) || (!b_data[k - 1])) {
        for (j = 0; j < 3; j++) {
          x->data[i + x->size[0] * j] = x->data[(k + x->size[0] * j) - 1];
        }

        i++;
      }
    }
  }

  if (!(nrows <= nrowx)) {
    emlrtErrorWithMessageIdR2012b(&st, &i_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > nrows) {
    nrowx = 0;
  } else {
    nrowx = nrows;
  }

  emxInit_real_T2(&st, &b_x, 2, &d_emlrtRTEI, true);
  nrows = b_x->size[0] * b_x->size[1];
  b_x->size[0] = nrowx;
  b_x->size[1] = 3;
  emxEnsureCapacity(&st, (emxArray__common *)b_x, nrows, sizeof(real_T),
                    &d_emlrtRTEI);
  for (nrows = 0; nrows < 3; nrows++) {
    for (i = 0; i < nrowx; i++) {
      b_x->data[i + b_x->size[0] * nrows] = x->data[i + x->size[0] * nrows];
    }
  }

  nrows = x->size[0] * x->size[1];
  x->size[0] = b_x->size[0];
  x->size[1] = 3;
  emxEnsureCapacity(&st, (emxArray__common *)x, nrows, sizeof(real_T),
                    &d_emlrtRTEI);
  for (nrows = 0; nrows < 3; nrows++) {
    nrowx = b_x->size[0];
    for (i = 0; i < nrowx; i++) {
      x->data[i + x->size[0] * nrows] = b_x->data[i + b_x->size[0] * nrows];
    }
  }

  emxFree_real_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (nullAssignment.c) */
