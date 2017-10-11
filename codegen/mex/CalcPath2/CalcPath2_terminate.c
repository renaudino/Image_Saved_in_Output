/*
 * CalcPath2_terminate.c
 *
 * Code generation for function 'CalcPath2_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CalcPath2.h"
#include "CalcPath2_terminate.h"
#include "CalcPath2_emxutil.h"
#include "_coder_CalcPath2_mex.h"
#include "CalcPath2_data.h"

/* Function Definitions */
void CalcPath2_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emxFree_real_T(&trun2);
  emxFree_real_T(&vnfaces);
  emxFree_real_T(&wedges);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void CalcPath2_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (CalcPath2_terminate.c) */
