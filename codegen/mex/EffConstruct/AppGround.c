/*
 * AppGround.c
 *
 * Code generation for function 'AppGround'
 *
 * C source code generated on: Fri Dec 20 16:15:35 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct.h"
#include "AppGround.h"
#include "AppFace.h"
#include "EffConstruct_data.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo r_emlrtRSI = { 14, "AppGround",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppGround.m"
};

static emlrtRTEInfo ab_emlrtRTEI = { 12, 1, "AppGround",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppGround.m"
};

/* Function Declarations */

/* Function Definitions */
real_T AppGround(const real_T gpoint[3])
{
  real_T appground;
  real_T face1[2];
  int32_T i7;
  int32_T i;
  boolean_T exitg1;
  real_T appface;

  /*  Calculates if the point belongs to the ground */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History:  2011.9.19 */
  face1[1] = 5.0;
  appground = 1.0;
  i7 = (int32_T)Nblock;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, Nblock, mxDOUBLE_CLASS, (int32_T)
    Nblock, &ab_emlrtRTEI, emlrtRootTLSGlobal);
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i <= i7 - 1)) {
    face1[0] = 1.0 + (real_T)i;
    emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
    appface = AppFace(gpoint, face1);
    emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
    if (appface == 1.0) {
      appground = 0.0;
      exitg1 = TRUE;
    } else {
      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }
  }

  return appground;
}

/* End of code generation (AppGround.c) */
