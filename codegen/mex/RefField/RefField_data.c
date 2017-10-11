/*
 * RefField_data.c
 *
 * Code generation for function 'RefField_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RefField.h"
#include "RefField_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emxArray_real_T *CEP;
emxArray_creal_T *eta;
real_T K;
emxArray_real_T *Rcoeff;
uint32_T CEP_dirty;
uint32_T eta_dirty;
uint32_T K_dirty;
uint32_T Rcoeff_dirty;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131450U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "RefField",                          /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* End of code generation (RefField_data.c) */
