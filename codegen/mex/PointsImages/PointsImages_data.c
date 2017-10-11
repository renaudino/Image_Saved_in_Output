/*
 * PointsImages_data.c
 *
 * Code generation for function 'PointsImages_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PointsImages.h"
#include "PointsImages_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emxArray_real_T *Nbrimg;
emxArray_real_T *Mtrun;
emxArray_real_T *wedges;
real_T Nblock;
emxArray_real_T *vnfaces;
real_T DBIMAGES[9];
real_T Nreflx;
real_T recept[3];
uint32_T Nbrimg_dirty;
uint32_T Mtrun_dirty;
uint32_T wedges_dirty;
uint32_T Nblock_dirty;
uint32_T vnfaces_dirty;
uint32_T DBIMAGES_dirty;
uint32_T Nreflx_dirty;
uint32_T recept_dirty;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131450U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "PointsImages",                      /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* End of code generation (PointsImages_data.c) */
