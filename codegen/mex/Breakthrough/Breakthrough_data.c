/*
 * Breakthrough_data.c
 *
 * Code generation for function 'Breakthrough_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Breakthrough.h"
#include "Breakthrough_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emxArray_real_T *vnfaces;
emxArray_real_T *wedges;
uint32_T vnfaces_dirty;
uint32_T wedges_dirty;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131450U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "Breakthrough",                      /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* End of code generation (Breakthrough_data.c) */
