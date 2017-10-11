/*
 * AppGround_terminate.c
 *
 * Code generation for function 'AppGround_terminate'
 *
 * C source code generated on: Fri Dec 20 16:13:08 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "AppGround.h"
#include "AppGround_terminate.h"
#include "AppGround_emxutil.h"
#include "AppGround_data.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void AppGround_atexit(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emxFree_real_T(&wedges);
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void AppGround_terminate(void)
{
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (AppGround_terminate.c) */
