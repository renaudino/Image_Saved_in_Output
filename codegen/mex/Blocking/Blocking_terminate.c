/*
 * Blocking_terminate.c
 *
 * Code generation for function 'Blocking_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Blocking.h"
#include "Blocking_terminate.h"
#include "Blocking_emxutil.h"
#include "_coder_Blocking_mex.h"
#include "Blocking_data.h"

/* Function Definitions */
void Blocking_atexit(void)
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
  emxFree_real_T(&MSKFlag);
  emxFree_real_T(&CEP);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void Blocking_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (Blocking_terminate.c) */
