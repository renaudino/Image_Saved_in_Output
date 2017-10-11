/*
 * dsfield_terminate.c
 *
 * Code generation for function 'dsfield_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dsfield.h"
#include "dsfield_terminate.h"
#include "dsfield_emxutil.h"
#include "_coder_dsfield_mex.h"
#include "dsfield_data.h"

/* Function Definitions */
void dsfield_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emxFree_real_T(&vnfaces);
  emxFree_real_T(&Model);
  emxFree_real_T(&Ar);
  emxFree_real_T(&Lam);
  emxFree_real_T(&Aii);
  emxFree_real_T(&Scoeff);
  emxFree_real_T(&CEP);
  emxFree_creal_T(&eta);
  emxFree_real_T(&Rcoeff);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void dsfield_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (dsfield_terminate.c) */
