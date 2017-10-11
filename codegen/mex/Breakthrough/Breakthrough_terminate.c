/*
 * Breakthrough_terminate.c
 *
 * Code generation for function 'Breakthrough_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Breakthrough.h"
#include "Breakthrough_terminate.h"
#include "Breakthrough_emxutil.h"
#include "_coder_Breakthrough_mex.h"
#include "Breakthrough_data.h"

/* Function Definitions */
void Breakthrough_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emxFree_real_T(&vnfaces);
  emxFree_real_T(&wedges);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void Breakthrough_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (Breakthrough_terminate.c) */
