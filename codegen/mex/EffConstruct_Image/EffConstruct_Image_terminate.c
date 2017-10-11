/*
 * EffConstruct_Image_terminate.c
 *
 * Code generation for function 'EffConstruct_Image_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct_Image.h"
#include "EffConstruct_Image_terminate.h"
#include "EffConstruct_Image_emxutil.h"
#include "_coder_EffConstruct_Image_mex.h"
#include "EffConstruct_Image_data.h"

/* Function Definitions */
void EffConstruct_Image_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emxFree_real_T(&NbrDSSlns);
  emxFree_real_T(&NbrSlns);
  emxFree_real_T(&Mpath);
  emxFree_real_T(&wedges);
  emxFree_real_T(&RP);
  emxFree_real_T(&PSLN);
  emxFree_real_T(&RF);
  emxFree_real_T(&FSLN);
  emxFree_real_T(&vnfaces);
  emxFree_real_T(&ISLN);
  emxFree_real_T(&MSKFlag);
  emxFree_real_T(&CEP);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void EffConstruct_Image_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (EffConstruct_Image_terminate.c) */
