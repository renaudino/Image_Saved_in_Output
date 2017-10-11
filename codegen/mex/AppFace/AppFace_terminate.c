/*
 * AppFace_terminate.c
 *
 * Code generation for function 'AppFace_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "AppFace.h"
#include "AppFace_terminate.h"
#include "AppFace_emxutil.h"
#include "_coder_AppFace_mex.h"
#include "AppFace_data.h"

/* Function Definitions */
void AppFace_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emxFree_real_T(&wedges);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void AppFace_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (AppFace_terminate.c) */
