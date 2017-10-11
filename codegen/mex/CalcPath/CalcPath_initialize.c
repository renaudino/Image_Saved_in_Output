/*
 * CalcPath_initialize.c
 *
 * Code generation for function 'CalcPath_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CalcPath.h"
#include "CalcPath_initialize.h"
#include "CalcPath_emxutil.h"
#include "_coder_CalcPath_mex.h"
#include "CalcPath_data.h"

/* Named Constants */
#define b_oldReflex                    (0.0)
#define b_Reflex                       (0.0)
#define b_Nblock                       (5.0)

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 11,  /* lineNo */
  73,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 11,/* lineNo */
  67,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 11,/* lineNo */
  41,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 11,/* lineNo */
  16,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 11,/* lineNo */
  8,                                   /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 11,/* lineNo */
  51,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 11,/* lineNo */
  24,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 11,/* lineNo */
  54,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 11,/* lineNo */
  29,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 11,/* lineNo */
  80,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 13,/* lineNo */
  23,                                  /* colNo */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 13,/* lineNo */
  31,                                  /* colNo */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m"/* pName */
};

/* Function Declarations */
static void CalcPath_once(const emlrtStack *sp);

/* Function Definitions */
static void CalcPath_once(const emlrtStack *sp)
{
  int32_T i0;
  emxInit_real_T(sp, &Nbrimg, 1, &emlrtRTEI, false);
  emxInit_real_T1(sp, &Mtrun, 3, &b_emlrtRTEI, false);
  emxInit_real_T(sp, &NbrDSSlns, 1, &c_emlrtRTEI, false);
  emxInit_real_T(sp, &NbrSlns, 1, &d_emlrtRTEI, false);
  emxInit_real_T1(sp, &vnfaces, 3, &e_emlrtRTEI, false);
  emxInit_real_T2(sp, &RP, 4, &f_emlrtRTEI, false);
  emxInit_real_T2(sp, &PSLN, 4, &g_emlrtRTEI, false);
  emxInit_real_T2(sp, &RF, 4, &h_emlrtRTEI, false);
  emxInit_real_T2(sp, &FSLN, 4, &i_emlrtRTEI, false);
  emxInit_real_T2(sp, &wedges, 4, &j_emlrtRTEI, false);
  emxInit_real_T(sp, &MSKFlag, 1, &k_emlrtRTEI, false);
  emxInit_real_T(sp, &CEP, 1, &l_emlrtRTEI, false);
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
  Nblock = b_Nblock;
  Nblock_dirty = 1U;
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
  i0 = FSLN->size[0] * FSLN->size[1] * FSLN->size[2] * FSLN->size[3];
  FSLN->size[0] = 15;
  FSLN->size[1] = 50;
  FSLN->size[2] = 15;
  FSLN->size[3] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)FSLN, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 22500; i0++) {
    FSLN->data[i0] = 0.0;
  }

  FSLN_dirty = 1U;
  i0 = RF->size[0] * RF->size[1] * RF->size[2] * RF->size[3];
  RF->size[0] = 15;
  RF->size[1] = 50;
  RF->size[2] = 15;
  RF->size[3] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)RF, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 22500; i0++) {
    RF->data[i0] = 0.0;
  }

  RF_dirty = 1U;
  i0 = PSLN->size[0] * PSLN->size[1] * PSLN->size[2] * PSLN->size[3];
  PSLN->size[0] = 15;
  PSLN->size[1] = 50;
  PSLN->size[2] = 15;
  PSLN->size[3] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)PSLN, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 33750; i0++) {
    PSLN->data[i0] = 0.0;
  }

  PSLN_dirty = 1U;
  i0 = RP->size[0] * RP->size[1] * RP->size[2] * RP->size[3];
  RP->size[0] = 15;
  RP->size[1] = 50;
  RP->size[2] = 15;
  RP->size[3] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)RP, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 33750; i0++) {
    RP->data[i0] = 0.0;
  }

  RP_dirty = 1U;
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
  i0 = NbrSlns->size[0];
  NbrSlns->size[0] = 15;
  emxEnsureCapacity(sp, (emxArray__common *)NbrSlns, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 15; i0++) {
    NbrSlns->data[i0] = 0.0;
  }

  NbrSlns_dirty = 1U;
  i0 = NbrDSSlns->size[0];
  NbrDSSlns->size[0] = 15;
  emxEnsureCapacity(sp, (emxArray__common *)NbrDSSlns, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 15; i0++) {
    NbrDSSlns->data[i0] = 0.0;
  }

  NbrDSSlns_dirty = 1U;
  Reflex = b_Reflex;
  Reflex_dirty = 1U;
  oldReflex = b_oldReflex;
  oldReflex_dirty = 1U;
  i0 = Mtrun->size[0] * Mtrun->size[1] * Mtrun->size[2];
  Mtrun->size[0] = 6;
  Mtrun->size[1] = 100000;
  Mtrun->size[2] = 9;
  emxEnsureCapacity(sp, (emxArray__common *)Mtrun, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 5400000; i0++) {
    Mtrun->data[i0] = 0.0;
  }

  Mtrun_dirty = 1U;
  i0 = Nbrimg->size[0];
  Nbrimg->size[0] = 10;
  emxEnsureCapacity(sp, (emxArray__common *)Nbrimg, i0, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 10; i0++) {
    Nbrimg->data[i0] = 0.0;
  }

  Nbrimg_dirty = 1U;
}

void CalcPath_initialize(void)
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
    CalcPath_once(&st);
  }
}

/* End of code generation (CalcPath_initialize.c) */
