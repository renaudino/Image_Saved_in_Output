/*
 * dsfield_initialize.c
 *
 * Code generation for function 'dsfield_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dsfield.h"
#include "dsfield_initialize.h"
#include "dsfield_emxutil.h"
#include "_coder_dsfield_mex.h"
#include "dsfield_data.h"

/* Named Constants */
#define b_kxpol                        (0.0)
#define b_K                            (0.0)

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 19,  /* lineNo */
  38,                                  /* colNo */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 19,/* lineNo */
  25,                                  /* colNo */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 19,/* lineNo */
  12,                                  /* colNo */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 19,/* lineNo */
  21,                                  /* colNo */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 19,/* lineNo */
  8,                                   /* colNo */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 19,/* lineNo */
  31,                                  /* colNo */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 22,/* lineNo */
  8,                                   /* colNo */
  "RefFieldUP",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 22,/* lineNo */
  12,                                  /* colNo */
  "RefFieldUP",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 22,/* lineNo */
  18,                                  /* colNo */
  "RefFieldUP",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m"/* pName */
};

/* Function Declarations */
static void dsfield_once(const emlrtStack *sp);

/* Function Definitions */
static void dsfield_once(const emlrtStack *sp)
{
  int32_T i0;
  emxInit_real_T(sp, &vnfaces, 3, &emlrtRTEI, false);
  emxInit_real_T1(sp, &Model, 1, &b_emlrtRTEI, false);
  emxInit_real_T1(sp, &Ar, 1, &c_emlrtRTEI, false);
  emxInit_real_T1(sp, &Lam, 1, &d_emlrtRTEI, false);
  emxInit_real_T1(sp, &Aii, 1, &e_emlrtRTEI, false);
  emxInit_real_T1(sp, &Scoeff, 1, &f_emlrtRTEI, false);
  emxInit_real_T1(sp, &CEP, 1, &g_emlrtRTEI, false);
  emxInit_creal_T(sp, &eta, 1, &h_emlrtRTEI, false);
  emxInit_real_T1(sp, &Rcoeff, 1, &i_emlrtRTEI, false);
  i0 = Rcoeff->size[0];
  Rcoeff->size[0] = 150;
  emxEnsureCapacity(sp, (emxArray__common *)Rcoeff, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 150; i0++) {
    Rcoeff->data[i0] = 0.0;
  }

  Rcoeff_dirty = 1U;
  K = b_K;
  K_dirty = 1U;
  i0 = eta->size[0];
  eta->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)eta, i0, sizeof(creal_T),
                    (emlrtRTEInfo *)NULL);
  eta->data[0].re = 0.0;
  eta->data[0].im = 0.0;
  eta_dirty = 1U;
  i0 = CEP->size[0];
  CEP->size[0] = 150;
  emxEnsureCapacity(sp, (emxArray__common *)CEP, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 150; i0++) {
    CEP->data[i0] = 0.0;
  }

  CEP_dirty = 1U;
  kxpol = b_kxpol;
  kxpol_dirty = 1U;
  i0 = Scoeff->size[0];
  Scoeff->size[0] = 150;
  emxEnsureCapacity(sp, (emxArray__common *)Scoeff, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 150; i0++) {
    Scoeff->data[i0] = 0.0;
  }

  Scoeff_dirty = 1U;
  i0 = Aii->size[0];
  Aii->size[0] = 150;
  emxEnsureCapacity(sp, (emxArray__common *)Aii, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 150; i0++) {
    Aii->data[i0] = 0.0;
  }

  Aii_dirty = 1U;
  i0 = Lam->size[0];
  Lam->size[0] = 150;
  emxEnsureCapacity(sp, (emxArray__common *)Lam, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 150; i0++) {
    Lam->data[i0] = 0.0;
  }

  Lam_dirty = 1U;
  i0 = Ar->size[0];
  Ar->size[0] = 150;
  emxEnsureCapacity(sp, (emxArray__common *)Ar, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 150; i0++) {
    Ar->data[i0] = 0.0;
  }

  Ar_dirty = 1U;
  i0 = Model->size[0];
  Model->size[0] = 150;
  emxEnsureCapacity(sp, (emxArray__common *)Model, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 150; i0++) {
    Model->data[i0] = 0.0;
  }

  Model_dirty = 1U;
  i0 = vnfaces->size[0] * vnfaces->size[1] * vnfaces->size[2];
  vnfaces->size[0] = 150;
  vnfaces->size[1] = 6;
  vnfaces->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)vnfaces, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 2700; i0++) {
    vnfaces->data[i0] = 0.0;
  }

  vnfaces_dirty = 1U;
}

void dsfield_initialize(void)
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
    dsfield_once(&st);
  }
}

/* End of code generation (dsfield_initialize.c) */
