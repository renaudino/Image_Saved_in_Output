/*
 * Construct2_terminate.c
 *
 * Code generation for function 'Construct2_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Construct2.h"
#include "Construct2_terminate.h"
#include "Construct2_emxutil.h"
#include "_coder_Construct2_mex.h"
#include "Construct2_data.h"

/* Function Definitions */
void Construct2_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emxFree_real_T(&trun2);
  emxFree_real_T(&wedges);
  emxFree_real_T(&vnfaces);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void Construct2_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (Construct2_terminate.c) */
