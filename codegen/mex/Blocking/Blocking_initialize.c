/*
 * Blocking_initialize.c
 *
 * Code generation for function 'Blocking_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Blocking.h"
#include "Blocking_initialize.h"
#include "Blocking_emxutil.h"
#include "_coder_Blocking_mex.h"
#include "Blocking_data.h"

/* Named Constants */
#define b_Nblock                       (5.0)

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 13,  /* lineNo */
  8,                                   /* colNo */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 13,/* lineNo */
  35,                                  /* colNo */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 13,/* lineNo */
  23,                                  /* colNo */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 13,/* lineNo */
  31,                                  /* colNo */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m"/* pName */
};

/* Function Declarations */
static void Blocking_once(const emlrtStack *sp);

/* Function Definitions */
static void Blocking_once(const emlrtStack *sp)
{
  int32_T i0;
  emxInit_real_T(sp, &vnfaces, 3, &emlrtRTEI, false);
  emxInit_real_T1(sp, &wedges, 4, &b_emlrtRTEI, false);
  emxInit_real_T2(sp, &MSKFlag, 1, &c_emlrtRTEI, false);
  emxInit_real_T2(sp, &CEP, 1, &d_emlrtRTEI, false);
  i0 = CEP->size[0];
  CEP->size[0] = 50;
  emxEnsureCapacity(sp, (emxArray__common *)CEP, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 50; i0++) {
    CEP->data[i0] = 0.0;
  }

  CEP_dirty = 1U;
  i0 = MSKFlag->size[0];
  MSKFlag->size[0] = 50;
  emxEnsureCapacity(sp, (emxArray__common *)MSKFlag, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 50; i0++) {
    MSKFlag->data[i0] = 0.0;
  }

  MSKFlag_dirty = 1U;
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

void Blocking_initialize(void)
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
    Blocking_once(&st);
  }
}

/* End of code generation (Blocking_initialize.c) */
