/*
 * EffConstruct_initialize.c
 *
 * Code generation for function 'EffConstruct_initialize'
 *
 * C source code generated on: Fri Dec 20 16:15:35 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct.h"
#include "EffConstruct_initialize.h"
#include "EffConstruct_emxutil.h"
#include "EffConstruct_data.h"

/* Type Definitions */

/* Named Constants */
#define b_oldReflex                    (0.0)
#define b_Reflex                       (0.0)
#define b_Nblock                       (5.0)

/* Variable Declarations */

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 14, 81, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 14, 65, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 14, 70, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 14, 75, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 14, 78, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 11, 8, "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m"
};

static emlrtECInfo emlrtECI = { 1, -1, -1, "", "" };

static emlrtECInfo b_emlrtECI = { 2, -1, -1, "", "" };

/* Function Declarations */
static void EffConstruct_once(void);

/* Function Definitions */
static void EffConstruct_once(void)
{
  int32_T i;
  emxInit_real_T(&Mpath, 3, &emlrtRTEI, FALSE);
  vnfaces.size[2] = 0;
  NbrSlns.size[0] = 0;
  b_emxInit_real_T(&PSLN, 4, &d_emlrtRTEI, FALSE);
  b_emxInit_real_T(&FSLN, 4, &e_emlrtRTEI, FALSE);
  NbrDSSlns.size[0] = 0;
  b_emxInit_real_T(&RP, 4, &g_emlrtRTEI, FALSE);
  b_emxInit_real_T(&RF, 4, &h_emlrtRTEI, FALSE);
  b_emxInit_real_T(&wedges, 4, &i_emlrtRTEI, FALSE);
  MSKFlag.size[0] = 0;
  CEP.size[0] = 0;
  CEP_dirty = 0U;
  emlrtDimSizeGeqCheckFastR2012b(150, 50, &emlrtECI, emlrtRootTLSGlobal);
  CEP.size[0] = 50;
  for (i = 0; i < 50; i++) {
    CEP.data[i] = 0.0;
  }

  CEP_dirty = 1U;
  MSKFlag_dirty = 0U;
  emlrtDimSizeGeqCheckFastR2012b(150, 50, &emlrtECI, emlrtRootTLSGlobal);
  MSKFlag.size[0] = 50;
  for (i = 0; i < 50; i++) {
    MSKFlag.data[i] = 0.0;
  }

  MSKFlag_dirty = 1U;
  wedges_dirty = 0U;
  emlrtDimSizeGeqCheckFastR2012b(150, 50, &emlrtECI, emlrtRootTLSGlobal);
  i = wedges->size[0] * wedges->size[1] * wedges->size[2] * wedges->size[3];
  wedges->size[0] = 50;
  wedges->size[1] = 6;
  wedges->size[2] = 4;
  wedges->size[3] = 3;
  emxEnsureCapacity((emxArray__common *)wedges, i, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 3600; i++) {
    wedges->data[i] = 0.0;
  }

  wedges_dirty = 1U;
  i = RF->size[0] * RF->size[1] * RF->size[2] * RF->size[3];
  RF->size[0] = 15;
  RF->size[1] = 50;
  RF->size[2] = 15;
  RF->size[3] = 2;
  emxEnsureCapacity((emxArray__common *)RF, i, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 22500; i++) {
    RF->data[i] = 0.0;
  }

  RF_dirty = 1U;
  i = RP->size[0] * RP->size[1] * RP->size[2] * RP->size[3];
  RP->size[0] = 15;
  RP->size[1] = 50;
  RP->size[2] = 15;
  RP->size[3] = 3;
  emxEnsureCapacity((emxArray__common *)RP, i, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 33750; i++) {
    RP->data[i] = 0.0;
  }

  RP_dirty = 1U;
  NbrDSSlns_dirty = 0U;
  emlrtDimSizeGeqCheckFastR2012b(15, 5, &emlrtECI, emlrtRootTLSGlobal);
  NbrDSSlns.size[0] = 5;
  for (i = 0; i < 5; i++) {
    NbrDSSlns.data[i] = 0.0;
  }

  NbrDSSlns_dirty = 1U;
  i = FSLN->size[0] * FSLN->size[1] * FSLN->size[2] * FSLN->size[3];
  FSLN->size[0] = 15;
  FSLN->size[1] = 50;
  FSLN->size[2] = 15;
  FSLN->size[3] = 2;
  emxEnsureCapacity((emxArray__common *)FSLN, i, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 22500; i++) {
    FSLN->data[i] = 0.0;
  }

  FSLN_dirty = 1U;
  i = PSLN->size[0] * PSLN->size[1] * PSLN->size[2] * PSLN->size[3];
  PSLN->size[0] = 15;
  PSLN->size[1] = 50;
  PSLN->size[2] = 15;
  PSLN->size[3] = 3;
  emxEnsureCapacity((emxArray__common *)PSLN, i, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 33750; i++) {
    PSLN->data[i] = 0.0;
  }

  PSLN_dirty = 1U;
  NbrSlns_dirty = 0U;
  emlrtDimSizeGeqCheckFastR2012b(15, 5, &emlrtECI, emlrtRootTLSGlobal);
  NbrSlns.size[0] = 5;
  for (i = 0; i < 5; i++) {
    NbrSlns.data[i] = 0.0;
  }

  NbrSlns_dirty = 1U;
  vnfaces_dirty = 0U;
  emlrtDimSizeGeqCheckFastR2012b(150, 50, &emlrtECI, emlrtRootTLSGlobal);
  vnfaces.size[0] = 50;
  vnfaces.size[1] = 6;
  vnfaces.size[2] = 3;
  for (i = 0; i < 900; i++) {
    vnfaces.data[i] = 0.0;
  }

  vnfaces_dirty = 1U;
  Mpath_dirty = 0U;
  emlrtDimSizeGeqCheckFastR2012b(15, 5, &emlrtECI, emlrtRootTLSGlobal);
  emlrtDimSizeGeqCheckFastR2012b(900, 300, &b_emlrtECI, emlrtRootTLSGlobal);
  i = Mpath->size[0] * Mpath->size[1] * Mpath->size[2];
  Mpath->size[0] = 5;
  Mpath->size[1] = 300;
  Mpath->size[2] = 5;
  emxEnsureCapacity((emxArray__common *)Mpath, i, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 7500; i++) {
    Mpath->data[i] = 0.0;
  }

  Mpath_dirty = 1U;
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

void EffConstruct_initialize(emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    EffConstruct_once();
  }
}

/* End of code generation (EffConstruct_initialize.c) */
