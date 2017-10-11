/*
 * Blocking_data.c
 *
 * Code generation for function 'Blocking_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Blocking.h"
#include "Blocking_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
real_T Nblock;
emxArray_real_T *vnfaces;
emxArray_real_T *wedges;
emxArray_real_T *MSKFlag;
emxArray_real_T *CEP;
uint32_T Nblock_dirty;
uint32_T vnfaces_dirty;
uint32_T wedges_dirty;
uint32_T MSKFlag_dirty;
uint32_T CEP_dirty;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131450U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "Blocking",                          /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* End of code generation (Blocking_data.c) */
