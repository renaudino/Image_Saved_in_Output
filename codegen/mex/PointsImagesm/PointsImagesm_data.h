/*
 * PointsImagesm_data.h
 *
 * Code generation for function 'PointsImagesm_data'
 *
 */

#ifndef POINTSIMAGESM_DATA_H
#define POINTSIMAGESM_DATA_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "PointsImagesm_types.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern const volatile char_T *emlrtBreakCheckR2012bFlagVar;
extern emxArray_real_T_15 Nbrimg;
extern emxArray_real_T *Mtrun;
extern emxArray_real_T *wedges;
extern real_T Nblock;
extern emxArray_real_T_150x6x3 vnfaces;
extern real_T DBIMAGES[9];
extern real_T Nreflx;
extern real_T recept[3];
extern uint32_T Nbrimg_dirty;
extern uint32_T Mtrun_dirty;
extern uint32_T wedges_dirty;
extern uint32_T Nblock_dirty;
extern uint32_T vnfaces_dirty;
extern uint32_T DBIMAGES_dirty;
extern uint32_T Nreflx_dirty;
extern uint32_T recept_dirty;
extern emlrtContext emlrtContextGlobal;
extern emlrtBCInfo b_emlrtBCI;
extern emlrtBCInfo d_emlrtBCI;
extern emlrtBCInfo f_emlrtBCI;

#endif

/* End of code generation (PointsImagesm_data.h) */
