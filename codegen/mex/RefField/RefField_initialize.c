/*
 * RefField_initialize.c
 *
 * Code generation for function 'RefField_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RefField.h"
#include "RefField_initialize.h"
#include "RefField_emxutil.h"
#include "_coder_RefField_mex.h"
#include "RefField_data.h"

/* Named Constants */
#define b_K                            (0.0)

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 17,  /* lineNo */
  8,                                   /* colNo */
  "RefField",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefField.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 17,/* lineNo */
  12,                                  /* colNo */
  "RefField",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefField.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 17,/* lineNo */
  18,                                  /* colNo */
  "RefField",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefField.m"/* pName */
};

/* Function Declarations */
static void RefField_once(const emlrtStack *sp);

/* Function Definitions */
static void RefField_once(const emlrtStack *sp)
{
  int32_T i0;
  emxInit_real_T(sp, &CEP, 1, &emlrtRTEI, false);
  emxInit_creal_T(sp, &eta, 1, &b_emlrtRTEI, false);
  emxInit_real_T(sp, &Rcoeff, 1, &c_emlrtRTEI, false);
  Rcoeff_dirty = 0U;
  K_dirty = 0U;
  eta_dirty = 0U;
  CEP_dirty = 0U;
  i0 = Rcoeff->size[0];
  Rcoeff->size[0] = 150;
  emxEnsureCapacity(sp, (emxArray__common *)Rcoeff, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 150; i0++) {
    Rcoeff->data[i0] = 0.0;
  }

  K = b_K;
  i0 = eta->size[0];
  eta->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)eta, i0, sizeof(creal_T),
                    (emlrtRTEInfo *)NULL);
  eta->data[0].re = 0.0;
  eta->data[0].im = 0.0;
  i0 = CEP->size[0];
  CEP->size[0] = 150;
  emxEnsureCapacity(sp, (emxArray__common *)CEP, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 150; i0++) {
    CEP->data[i0] = 0.0;
  }
}

void RefField_initialize(void)
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
    RefField_once(&st);
  }
}

/* End of code generation (RefField_initialize.c) */
