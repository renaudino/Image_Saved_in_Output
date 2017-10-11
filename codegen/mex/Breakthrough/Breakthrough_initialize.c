/*
 * Breakthrough_initialize.c
 *
 * Code generation for function 'Breakthrough_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Breakthrough.h"
#include "Breakthrough_initialize.h"
#include "Breakthrough_emxutil.h"
#include "_coder_Breakthrough_mex.h"
#include "Breakthrough_data.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 12,  /* lineNo */
  15,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 12,/* lineNo */
  8,                                   /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m"/* pName */
};

/* Function Declarations */
static void Breakthrough_once(const emlrtStack *sp);

/* Function Definitions */
static void Breakthrough_once(const emlrtStack *sp)
{
  int32_T i0;
  emxInit_real_T(sp, &vnfaces, 3, &emlrtRTEI, false);
  emxInit_real_T1(sp, &wedges, 4, &b_emlrtRTEI, false);
  wedges_dirty = 0U;
  vnfaces_dirty = 0U;
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

  i0 = vnfaces->size[0] * vnfaces->size[1] * vnfaces->size[2];
  vnfaces->size[0] = 50;
  vnfaces->size[1] = 6;
  vnfaces->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)vnfaces, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 900; i0++) {
    vnfaces->data[i0] = 0.0;
  }
}

void Breakthrough_initialize(void)
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
    Breakthrough_once(&st);
  }
}

/* End of code generation (Breakthrough_initialize.c) */
