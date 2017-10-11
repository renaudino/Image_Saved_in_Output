/*
 * Masking_initialize.c
 *
 * Code generation for function 'Masking_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Masking.h"
#include "Masking_initialize.h"
#include "Masking_emxutil.h"
#include "_coder_Masking_mex.h"
#include "Masking_data.h"

/* Named Constants */
#define b_Nblock                       (100.0)
#define b_K                            (0.0)

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 14,  /* lineNo */
  19,                                  /* colNo */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 14,/* lineNo */
  29,                                  /* colNo */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 14,/* lineNo */
  15,                                  /* colNo */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pName */
};

/* Function Declarations */
static void Masking_once(const emlrtStack *sp);

/* Function Definitions */
static void Masking_once(const emlrtStack *sp)
{
  int32_T i0;
  emxInit_real_T(sp, &vnfaces, 3, &emlrtRTEI, false);
  emxInit_real_T1(sp, &wedges, 4, &b_emlrtRTEI, false);
  emxInit_creal_T(sp, &eta, 1, &c_emlrtRTEI, false);
  K = b_K;
  K_dirty = 1U;
  i0 = eta->size[0];
  eta->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)eta, i0, sizeof(creal_T),
                    (emlrtRTEInfo *)NULL);
  eta->data[0].re = 0.0;
  eta->data[0].im = 0.0;
  eta_dirty = 1U;
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

  wedges_dirty = 1U;
  i0 = vnfaces->size[0] * vnfaces->size[1] * vnfaces->size[2];
  vnfaces->size[0] = 50;
  vnfaces->size[1] = 6;
  vnfaces->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)vnfaces, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 900; i0++) {
    vnfaces->data[i0] = 0.0;
  }

  vnfaces_dirty = 1U;
  Nblock = b_Nblock;
  Nblock_dirty = 1U;
}

void Masking_initialize(void)
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
    Masking_once(&st);
  }
}

/* End of code generation (Masking_initialize.c) */
