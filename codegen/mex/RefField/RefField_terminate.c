/*
 * RefField_terminate.c
 *
 * Code generation for function 'RefField_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RefField.h"
#include "RefField_terminate.h"
#include "RefField_emxutil.h"
#include "_coder_RefField_mex.h"
#include "RefField_data.h"

/* Function Definitions */
void RefField_atexit(void)
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

void RefField_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (RefField_terminate.c) */
