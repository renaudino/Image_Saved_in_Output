/*
 * Construct_terminate.c
 *
 * Code generation for function 'Construct_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Construct.h"
#include "Construct_terminate.h"
#include "Construct_emxutil.h"
#include "_coder_Construct_mex.h"
#include "Construct_data.h"

/* Function Definitions */
void Construct_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emxFree_real_T(&Nbrimg);
  emxFree_real_T(&Mtrun);
  emxFree_real_T(&wedges);
  emxFree_real_T(&vnfaces);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void Construct_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (Construct_terminate.c) */
