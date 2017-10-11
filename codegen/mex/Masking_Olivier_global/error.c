/*
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Masking_Olivier_global.h"
#include "error.h"
#include "Masking_Olivier_global_mexutil.h"

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 27,    /* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pName */
};

static emlrtRSInfo ub_emlrtRSI = { 27, /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pathName */
};

/* Function Declarations */
static void c_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);

/* Function Definitions */
static void c_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void error(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv4[2] = { 1, 64 };

  static const char_T varargin_1[64] = { ' ', ' ', ' ', 'E', 'r', 'r', 'o', 'r',
    ':', ' ', 't', 'h', 'e', ' ', 'd', 'e', 't', 'e', 'r', 'm', 'i', 'n', 'a',
    'n', 't', ' ', 'i', 's', ' ', 'e', 'q', 'u', 'a', 'l', ' ', 't', 'o', ' ',
    'z', 'e', 'r', 'o', ' ', 'i', 'n', ' ', 'b', 'l', 'o', 'c', 'k', 'i', 'n',
    'g', ' ', 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n', '!' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrt_synchGlobalsToML(sp);
  y = NULL;
  m1 = emlrtCreateCharArray(2, iv4);
  emlrtInitCharArrayR2013a(sp, 64, m1, &varargin_1[0]);
  emlrtAssign(&y, m1);
  st.site = &ub_emlrtRSI;
  c_error(&st, y, &emlrtMCI);
  emlrt_synchGlobalsFromML(sp);
}

/* End of code generation (error.c) */
