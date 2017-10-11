/*
 * Masking_Olivier_global_terminate.c
 *
 * Code generation for function 'Masking_Olivier_global_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Masking_Olivier_global.h"
#include "Masking_Olivier_global_terminate.h"
#include "Masking_Olivier_global_emxutil.h"
#include "_coder_Masking_Olivier_global_mex.h"
#include "Masking_Olivier_global_data.h"

/* Function Definitions */
void Masking_Olivier_global_atexit(void)
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

void Masking_Olivier_global_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (Masking_Olivier_global_terminate.c) */
