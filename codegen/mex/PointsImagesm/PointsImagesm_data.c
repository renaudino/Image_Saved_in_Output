/*
 * PointsImagesm_data.c
 *
 * Code generation for function 'PointsImagesm_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PointsImagesm.h"
#include "PointsImagesm_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emxArray_real_T_15 Nbrimg;
emxArray_real_T *Mtrun;
emxArray_real_T *wedges;
real_T Nblock;
emxArray_real_T_150x6x3 vnfaces;
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
emlrtContext emlrtContextGlobal = { true, false, 131434U, NULL, "PointsImagesm",
  NULL, false, { 2045744189U, 2170104910U, 2743257031U, 4284093946U }, NULL };

emlrtBCInfo b_emlrtBCI = { -1, -1, 21, 21, "wedges", "AppFace",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\AppFace.m",
  0 };

emlrtBCInfo d_emlrtBCI = { -1, -1, 20, 21, "wedges", "AppFace",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\AppFace.m",
  0 };

emlrtBCInfo f_emlrtBCI = { -1, -1, 19, 21, "wedges", "AppFace",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\AppFace.m",
  0 };

/* End of code generation (PointsImagesm_data.c) */
