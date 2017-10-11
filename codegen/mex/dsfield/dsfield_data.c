/*
 * dsfield_data.c
 *
 * Code generation for function 'dsfield_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dsfield.h"
#include "dsfield_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emxArray_real_T *vnfaces;
emxArray_real_T *Model;
emxArray_real_T *Ar;
emxArray_real_T *Lam;
emxArray_real_T *Aii;
emxArray_real_T *Scoeff;
real_T kxpol;
emxArray_real_T *CEP;
emxArray_creal_T *eta;
real_T K;
emxArray_real_T *Rcoeff;
uint32_T vnfaces_dirty;
uint32_T Model_dirty;
uint32_T Ar_dirty;
uint32_T Lam_dirty;
uint32_T Aii_dirty;
uint32_T Scoeff_dirty;
uint32_T kxpol_dirty;
uint32_T CEP_dirty;
uint32_T eta_dirty;
uint32_T K_dirty;
uint32_T Rcoeff_dirty;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131450U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "dsfield",                           /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo l_emlrtRSI = { 49,         /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

emlrtRSInfo n_emlrtRSI = { 12,         /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

/* End of code generation (dsfield_data.c) */
