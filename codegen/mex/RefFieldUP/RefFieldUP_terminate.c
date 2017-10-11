/*
 * RefFieldUP_terminate.c
 *
 * Code generation for function 'RefFieldUP_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RefFieldUP.h"
#include "RefFieldUP_terminate.h"
#include "RefFieldUP_emxutil.h"
#include "_coder_RefFieldUP_mex.h"
#include "RefFieldUP_data.h"

/* Function Definitions */
void RefFieldUP_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emxFree_real_T(&CEP);
  emxFree_creal_T(&eta);
  emxFree_real_T(&Rcoeff);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void RefFieldUP_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (RefFieldUP_terminate.c) */
