/*
 * BlockCheck_data.c
 *
 * Code generation for function 'BlockCheck_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BlockCheck.h"
#include "BlockCheck_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
real_T Nblock;
emxArray_real_T *wedges;
uint32_T Nblock_dirty;
uint32_T wedges_dirty;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131450U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "BlockCheck",                        /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* End of code generation (BlockCheck_data.c) */
