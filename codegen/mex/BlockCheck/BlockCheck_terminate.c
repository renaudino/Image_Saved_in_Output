/*
 * BlockCheck_terminate.c
 *
 * Code generation for function 'BlockCheck_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BlockCheck.h"
#include "BlockCheck_terminate.h"
#include "BlockCheck_emxutil.h"
#include "_coder_BlockCheck_mex.h"
#include "BlockCheck_data.h"

/* Function Definitions */
void BlockCheck_atexit(void)
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

void BlockCheck_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (BlockCheck_terminate.c) */
