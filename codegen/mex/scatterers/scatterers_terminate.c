/*
 * scatterers_terminate.c
 *
 * Code generation for function 'scatterers_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "scatterers.h"
#include "scatterers_terminate.h"
#include "scatterers_emxutil.h"
#include "_coder_scatterers_mex.h"
#include "scatterers_data.h"

/* Function Definitions */
void scatterers_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emxFree_real_T(&DSFlag);
  emxFree_real_T(&wedges);
  emxFree_real_T(&vnfaces);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void scatterers_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (scatterers_terminate.c) */
