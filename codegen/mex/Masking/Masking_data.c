/*
 * Masking_data.c
 *
 * Code generation for function 'Masking_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Masking.h"
#include "Masking_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
real_T Nblock;
emxArray_real_T *vnfaces;
emxArray_real_T *wedges;
emxArray_creal_T *eta;
real_T K;
uint32_T Nblock_dirty;
uint32_T vnfaces_dirty;
uint32_T wedges_dirty;
uint32_T eta_dirty;
uint32_T K_dirty;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131450U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "Masking",                           /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo l_emlrtRSI = { 37,         /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

emlrtRSInfo m_emlrtRSI = { 49,         /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

/* End of code generation (Masking_data.c) */
