/*
 * BlockCheck_initialize.c
 *
 * Code generation for function 'BlockCheck_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BlockCheck.h"
#include "BlockCheck_initialize.h"
#include "BlockCheck_emxutil.h"
#include "_coder_BlockCheck_mex.h"
#include "BlockCheck_data.h"

/* Named Constants */
#define b_Nblock                       (200.0)

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 10,  /* lineNo */
  15,                                  /* colNo */
  "BlockCheck",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\BlockCheck.m"/* pName */
};

/* Function Declarations */
static void BlockCheck_once(const emlrtStack *sp);

/* Function Definitions */
static void BlockCheck_once(const emlrtStack *sp)
{
  int32_T i0;
  emxInit_real_T(sp, &wedges, 4, &emlrtRTEI, false);
  wedges_dirty = 0U;
  Nblock_dirty = 0U;
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

  Nblock = b_Nblock;
}

void BlockCheck_initialize(void)
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
    BlockCheck_once(&st);
  }
}

/* End of code generation (BlockCheck_initialize.c) */
