/*
 * CalcPath_terminate.c
 *
 * Code generation for function 'CalcPath_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CalcPath.h"
#include "CalcPath_terminate.h"
#include "CalcPath_emxutil.h"
#include "_coder_CalcPath_mex.h"
#include "CalcPath_data.h"

/* Function Definitions */
void CalcPath_atexit(void)
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
  emxFree_real_T(&NbrDSSlns);
  emxFree_real_T(&NbrSlns);
  emxFree_real_T(&vnfaces);
  emxFree_real_T(&RP);
  emxFree_real_T(&PSLN);
  emxFree_real_T(&RF);
  emxFree_real_T(&FSLN);
  emxFree_real_T(&wedges);
  emxFree_real_T(&MSKFlag);
  emxFree_real_T(&CEP);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void CalcPath_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (CalcPath_terminate.c) */
