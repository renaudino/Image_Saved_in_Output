/*
 * Construct2_data.c
 *
 * Code generation for function 'Construct2_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Construct2.h"
#include "Construct2_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emxArray_real_T *trun2;
real_T emett[3];
emxArray_real_T *wedges;
real_T Nblock;
emxArray_real_T *vnfaces;
uint32_T trun2_dirty;
uint32_T emett_dirty;
uint32_T wedges_dirty;
uint32_T Nblock_dirty;
uint32_T vnfaces_dirty;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131450U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "Construct2",                        /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* End of code generation (Construct2_data.c) */
