/*
 * PointsImagesm_terminate.c
 *
 * Code generation for function 'PointsImagesm_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PointsImagesm.h"
#include "PointsImagesm_terminate.h"
#include "PointsImagesm_emxutil.h"
#include "_coder_PointsImagesm_mex.h"
#include "PointsImagesm_data.h"

/* Function Definitions */
void PointsImagesm_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emxFree_real_T(&Mtrun);
  emxFree_real_T(&wedges);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void PointsImagesm_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (PointsImagesm_terminate.c) */
