/*
 * Masking_terminate.c
 *
 * Code generation for function 'Masking_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Masking.h"
#include "Masking_terminate.h"
#include "Masking_emxutil.h"
#include "_coder_Masking_mex.h"
#include "Masking_data.h"

/* Function Definitions */
void Masking_atexit(void)
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
  emxFree_creal_T(&eta);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void Masking_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (Masking_terminate.c) */
