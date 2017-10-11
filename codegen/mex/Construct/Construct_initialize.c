/*
 * Construct_initialize.c
 *
 * Code generation for function 'Construct_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Construct.h"
#include "Construct_initialize.h"
#include "Construct_emxutil.h"
#include "_coder_Construct_mex.h"
#include "Construct_data.h"

/* Named Constants */
#define b_Nblock                       (0.0)
#define b_Nreflx                       (5.0)

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 16,  /* lineNo */
  8,                                   /* colNo */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 16,/* lineNo */
  15,                                  /* colNo */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 10,/* lineNo */
  8,                                   /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 10,/* lineNo */
  31,                                  /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m"/* pName */
};

/* Function Declarations */
static void Construct_once(const emlrtStack *sp);

/* Function Definitions */
static void Construct_once(const emlrtStack *sp)
{
  int32_T i;
  emxInit_real_T(sp, &Nbrimg, 1, &emlrtRTEI, false);
  emxInit_real_T1(sp, &Mtrun, 3, &b_emlrtRTEI, false);
  emxInit_real_T2(sp, &wedges, 4, &c_emlrtRTEI, false);
  emxInit_real_T1(sp, &vnfaces, 3, &d_emlrtRTEI, false);
  recept_dirty = 0U;
  Nreflx_dirty = 0U;
  DBIMAGES_dirty = 0U;
  vnfaces_dirty = 0U;
  Nblock_dirty = 0U;
  wedges_dirty = 0U;
  Mtrun_dirty = 0U;
  Nbrimg_dirty = 0U;
  for (i = 0; i < 3; i++) {
    recept[i] = 0.0;
  }

  Nreflx = b_Nreflx;
  memset(&DBIMAGES[0], 0, 9U * sizeof(real_T));
  i = vnfaces->size[0] * vnfaces->size[1] * vnfaces->size[2];
  vnfaces->size[0] = 150;
  vnfaces->size[1] = 6;
  vnfaces->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)vnfaces, i, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 2700; i++) {
    vnfaces->data[i] = 0.0;
  }

  Nblock = b_Nblock;
  i = wedges->size[0] * wedges->size[1] * wedges->size[2] * wedges->size[3];
  wedges->size[0] = 150;
  wedges->size[1] = 6;
  wedges->size[2] = 4;
  wedges->size[3] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)wedges, i, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 10800; i++) {
    wedges->data[i] = 0.0;
  }

  i = Mtrun->size[0] * Mtrun->size[1] * Mtrun->size[2];
  Mtrun->size[0] = 6;
  Mtrun->size[1] = 1000000;
  Mtrun->size[2] = 9;
  emxEnsureCapacity(sp, (emxArray__common *)Mtrun, i, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 54000000; i++) {
    Mtrun->data[i] = 0.0;
  }

  i = Nbrimg->size[0];
  Nbrimg->size[0] = 10;
  emxEnsureCapacity(sp, (emxArray__common *)Nbrimg, i, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 10; i++) {
    Nbrimg->data[i] = 0.0;
  }
}

void Construct_initialize(void)
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
    Construct_once(&st);
  }
}

/* End of code generation (Construct_initialize.c) */
