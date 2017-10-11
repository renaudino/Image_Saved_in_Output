/*
 * EffConstruct_terminate.c
 *
 * Code generation for function 'EffConstruct_terminate'
 *
 * C source code generated on: Fri Dec 20 16:15:35 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct.h"
#include "EffConstruct_terminate.h"
#include "EffConstruct_emxutil.h"
#include "EffConstruct_data.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void EffConstruct_atexit(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emxFree_real_T(&Mpath);
  emxFree_real_T(&PSLN);
  emxFree_real_T(&FSLN);
  emxFree_real_T(&RP);
  emxFree_real_T(&RF);
  emxFree_real_T(&wedges);
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void EffConstruct_terminate(void)
{
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (EffConstruct_terminate.c) */
