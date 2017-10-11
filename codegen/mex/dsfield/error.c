/*
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dsfield.h"
#include "error.h"

/* Variable Definitions */
static emlrtRTEInfo j_emlrtRTEI = { 17,/* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\error.m"/* pName */
};

/* Function Definitions */
void b_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &j_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
}

void c_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &j_emlrtRTEI, "MATLAB:nchoosek:KOutOfRange",
    0);
}

void error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &j_emlrtRTEI,
    "Coder:toolbox:power_domainError", 0);
}

/* End of code generation (error.c) */
