/*
 * PointsImages_terminate.c
 *
 * Code generation for function 'PointsImages_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PointsImages.h"
#include "PointsImages_terminate.h"
#include "PointsImages_emxutil.h"
#include "_coder_PointsImages_mex.h"
#include "PointsImages_data.h"

/* Function Definitions */
void PointsImages_atexit(void)
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

void PointsImages_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (PointsImages_terminate.c) */
