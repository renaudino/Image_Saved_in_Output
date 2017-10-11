/*
 * AppGround_initialize.c
 *
 * Code generation for function 'AppGround_initialize'
 *
 * C source code generated on: Fri Dec 20 16:13:08 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "AppGround.h"
#include "AppGround_initialize.h"
#include "AppGround_emxutil.h"
#include "AppGround_data.h"

/* Type Definitions */

/* Named Constants */
#define b_Nblock                       (5.0)

/* Variable Declarations */

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 6, 8, "AppFace",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppFace.m"
};

static emlrtECInfo emlrtECI = { 1, -1, -1, "", "" };

/* Function Declarations */
static void AppGround_once(void);

/* Function Definitions */
static void AppGround_once(void)
{
  int32_T i0;
  emxInit_real_T(&wedges, 4, &emlrtRTEI, FALSE);
  wedges_dirty = 0U;
  emlrtDimSizeGeqCheckFastR2012b(150, 50, &emlrtECI, emlrtRootTLSGlobal);
  i0 = wedges->size[0] * wedges->size[1] * wedges->size[2] * wedges->size[3];
  wedges->size[0] = 50;
  wedges->size[1] = 6;
  wedges->size[2] = 4;
  wedges->size[3] = 3;
  emxEnsureCapacity((emxArray__common *)wedges, i0, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i0 = 0; i0 < 3600; i0++) {
    wedges->data[i0] = 0.0;
  }

  Nblock_dirty = 0U;
  Nblock = b_Nblock;
}

void AppGround_initialize(emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    AppGround_once();
  }
}

/* End of code generation (AppGround_initialize.c) */
