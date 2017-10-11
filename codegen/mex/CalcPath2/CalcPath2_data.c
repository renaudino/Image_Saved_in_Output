/*
 * CalcPath2_data.c
 *
 * Code generation for function 'CalcPath2_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CalcPath2.h"
#include "CalcPath2_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emxArray_real_T *trun2;
emxArray_real_T *vnfaces;
emxArray_real_T *wedges;
real_T Nblock;
real_T MSKFlag[304];
real_T CEP[304];
uint32_T trun2_dirty;
uint32_T vnfaces_dirty;
uint32_T wedges_dirty;
uint32_T Nblock_dirty;
uint32_T MSKFlag_dirty;
uint32_T CEP_dirty;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131450U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "CalcPath2",                         /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* End of code generation (CalcPath2_data.c) */
