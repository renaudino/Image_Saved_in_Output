/*
 * AppFace_initialize.c
 *
 * Code generation for function 'AppFace_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "AppFace.h"
#include "AppFace_initialize.h"
#include "AppFace_emxutil.h"
#include "_coder_AppFace_mex.h"
#include "AppFace_data.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 6,   /* lineNo */
  8,                                   /* colNo */
  "AppFace",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Start_RT_2\\AppFace.m"/* pName */
};

/* Function Declarations */
static void AppFace_once(const emlrtStack *sp);

/* Function Definitions */
static void AppFace_once(const emlrtStack *sp)
{
  int32_T i0;
  emxInit_real_T(sp, &wedges, 4, &emlrtRTEI, false);
  wedges_dirty = 0U;
  i0 = wedges->size[0] * wedges->size[1] * wedges->size[2] * wedges->size[3];
  wedges->size[0] = 50;
  wedges->size[1] = 6;
  wedges->size[2] = 4;
  wedges->size[3] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)wedges, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 3600; i0++) {
    wedges->data[i0] = 0.0;
  }
}

void AppFace_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    AppFace_once(&st);
  }
}

/* End of code generation (AppFace_initialize.c) */
