/*
 * EffConstruct_Image_initialize.c
 *
 * Code generation for function 'EffConstruct_Image_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct_Image.h"
#include "EffConstruct_Image_initialize.h"
#include "EffConstruct_Image_emxutil.h"
#include "_coder_EffConstruct_Image_mex.h"
#include "EffConstruct_Image_data.h"

/* Named Constants */
#define b_oldReflex                    (0.0)
#define b_Reflex                       (0.0)
#define b_Nblock                       (0.0)

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 14,  /* lineNo */
  45,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 14,/* lineNo */
  37,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 14,/* lineNo */
  86,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 14,/* lineNo */
  92,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 14,/* lineNo */
  80,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 14,/* lineNo */
  65,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 14,/* lineNo */
  83,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 14,/* lineNo */
  70,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 14,/* lineNo */
  8,                                   /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 14,/* lineNo */
  75,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 13,/* lineNo */
  23,                                  /* colNo */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 13,/* lineNo */
  31,                                  /* colNo */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m"/* pName */
};

/* Function Declarations */
static void EffConstruct_Image_once(const emlrtStack *sp);

/* Function Definitions */
static void EffConstruct_Image_once(const emlrtStack *sp)
{
  int32_T i;
  emxInit_real_T(sp, &NbrDSSlns, 1, &emlrtRTEI, false);
  emxInit_real_T(sp, &NbrSlns, 1, &b_emlrtRTEI, false);
  emxInit_real_T1(sp, &Mpath, 3, &c_emlrtRTEI, false);
  emxInit_real_T2(sp, &wedges, 4, &d_emlrtRTEI, false);
  emxInit_real_T2(sp, &RP, 4, &e_emlrtRTEI, false);
  emxInit_real_T2(sp, &PSLN, 4, &f_emlrtRTEI, false);
  emxInit_real_T2(sp, &RF, 4, &g_emlrtRTEI, false);
  emxInit_real_T2(sp, &FSLN, 4, &h_emlrtRTEI, false);
  emxInit_real_T1(sp, &vnfaces, 3, &i_emlrtRTEI, false);
  emxInit_real_T2(sp, &ISLN, 4, &j_emlrtRTEI, false);
  emxInit_real_T(sp, &MSKFlag, 1, &k_emlrtRTEI, false);
  emxInit_real_T(sp, &CEP, 1, &l_emlrtRTEI, false);
  i = CEP->size[0];
  CEP->size[0] = 150;
  emxEnsureCapacity(sp, (emxArray__common *)CEP, i, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 150; i++) {
    CEP->data[i] = 0.0;
  }

  CEP_dirty = 1U;
  i = MSKFlag->size[0];
  MSKFlag->size[0] = 150;
  emxEnsureCapacity(sp, (emxArray__common *)MSKFlag, i, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 150; i++) {
    MSKFlag->data[i] = 0.0;
  }

  MSKFlag_dirty = 1U;
  i = ISLN->size[0] * ISLN->size[1] * ISLN->size[2] * ISLN->size[3];
  ISLN->size[0] = 15;
  ISLN->size[1] = 50;
  ISLN->size[2] = 15;
  ISLN->size[3] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)ISLN, i, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 33750; i++) {
    ISLN->data[i] = 0.0;
  }

  ISLN_dirty = 1U;
  i = vnfaces->size[0] * vnfaces->size[1] * vnfaces->size[2];
  vnfaces->size[0] = 150;
  vnfaces->size[1] = 6;
  vnfaces->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)vnfaces, i, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 2700; i++) {
    vnfaces->data[i] = 0.0;
  }

  vnfaces_dirty = 1U;
  i = FSLN->size[0] * FSLN->size[1] * FSLN->size[2] * FSLN->size[3];
  FSLN->size[0] = 15;
  FSLN->size[1] = 50;
  FSLN->size[2] = 15;
  FSLN->size[3] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)FSLN, i, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 22500; i++) {
    FSLN->data[i] = 0.0;
  }

  FSLN_dirty = 1U;
  i = RF->size[0] * RF->size[1] * RF->size[2] * RF->size[3];
  RF->size[0] = 15;
  RF->size[1] = 50;
  RF->size[2] = 15;
  RF->size[3] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)RF, i, sizeof(real_T), (emlrtRTEInfo
    *)NULL);
  for (i = 0; i < 22500; i++) {
    RF->data[i] = 0.0;
  }

  RF_dirty = 1U;
  i = PSLN->size[0] * PSLN->size[1] * PSLN->size[2] * PSLN->size[3];
  PSLN->size[0] = 15;
  PSLN->size[1] = 50;
  PSLN->size[2] = 15;
  PSLN->size[3] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)PSLN, i, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 33750; i++) {
    PSLN->data[i] = 0.0;
  }

  PSLN_dirty = 1U;
  i = RP->size[0] * RP->size[1] * RP->size[2] * RP->size[3];
  RP->size[0] = 15;
  RP->size[1] = 50;
  RP->size[2] = 15;
  RP->size[3] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)RP, i, sizeof(real_T), (emlrtRTEInfo
    *)NULL);
  for (i = 0; i < 33750; i++) {
    RP->data[i] = 0.0;
  }

  RP_dirty = 1U;
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

  wedges_dirty = 1U;
  i = Mpath->size[0] * Mpath->size[1] * Mpath->size[2];
  Mpath->size[0] = 15;
  Mpath->size[1] = 900;
  Mpath->size[2] = 5;
  emxEnsureCapacity(sp, (emxArray__common *)Mpath, i, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 67500; i++) {
    Mpath->data[i] = 0.0;
  }

  Mpath_dirty = 1U;
  i = NbrSlns->size[0];
  NbrSlns->size[0] = 15;
  emxEnsureCapacity(sp, (emxArray__common *)NbrSlns, i, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 15; i++) {
    NbrSlns->data[i] = 0.0;
  }

  NbrSlns_dirty = 1U;
  i = NbrDSSlns->size[0];
  NbrDSSlns->size[0] = 15;
  emxEnsureCapacity(sp, (emxArray__common *)NbrDSSlns, i, sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 15; i++) {
    NbrDSSlns->data[i] = 0.0;
  }

  NbrDSSlns_dirty = 1U;
  for (i = 0; i < 3; i++) {
    recept[i] = 0.0;
  }

  recept_dirty = 1U;
  Nblock = b_Nblock;
  Nblock_dirty = 1U;
  Reflex = b_Reflex;
  Reflex_dirty = 1U;
  oldReflex = b_oldReflex;
  oldReflex_dirty = 1U;
}

void EffConstruct_Image_initialize(void)
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
    EffConstruct_Image_once(&st);
  }
}

/* End of code generation (EffConstruct_Image_initialize.c) */
