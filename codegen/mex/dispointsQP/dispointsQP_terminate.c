/*
 * dispointsQP_terminate.c
 *
 * Code generation for function 'dispointsQP_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dispointsQP.h"
#include "dispointsQP_terminate.h"
#include "dispointsQP_emxutil.h"
#include "_coder_dispointsQP_mex.h"
#include "dispointsQP_data.h"

/* Function Definitions */
void dispointsQP_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emxFree_real_T(&wedges);
  emxFree_real_T(&vnfaces);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void dispointsQP_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (dispointsQP_terminate.c) */
