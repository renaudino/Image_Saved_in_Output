/*
 * scatterers_data.c
 *
 * Code generation for function 'scatterers_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "scatterers.h"
#include "scatterers_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
real_T Nblock;
emxArray_real_T *DSFlag;
emxArray_real_T *wedges;
emxArray_real_T *vnfaces;
real_T lambda;
uint32_T Nblock_dirty;
uint32_T DSFlag_dirty;
uint32_T wedges_dirty;
uint32_T vnfaces_dirty;
uint32_T lambda_dirty;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131450U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "scatterers",                        /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo j_emlrtRSI = { 37,         /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

emlrtRSInfo k_emlrtRSI = { 49,         /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

/* End of code generation (scatterers_data.c) */
