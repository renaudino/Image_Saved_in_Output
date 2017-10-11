/*
 * EffConstruct_Image_data.c
 *
 * Code generation for function 'EffConstruct_Image_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct_Image.h"
#include "EffConstruct_Image_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
real_T oldReflex;
real_T Reflex;
real_T Nblock;
real_T recept[3];
emxArray_real_T *NbrDSSlns;
emxArray_real_T *NbrSlns;
emxArray_real_T *Mpath;
emxArray_real_T *wedges;
emxArray_real_T *RP;
emxArray_real_T *PSLN;
emxArray_real_T *RF;
emxArray_real_T *FSLN;
emxArray_real_T *vnfaces;
emxArray_real_T *ISLN;
emxArray_real_T *MSKFlag;
emxArray_real_T *CEP;
uint32_T oldReflex_dirty;
uint32_T Reflex_dirty;
uint32_T Nblock_dirty;
uint32_T recept_dirty;
uint32_T Mpath_dirty;
uint32_T vnfaces_dirty;
uint32_T wedges_dirty;
uint32_T NbrSlns_dirty;
uint32_T PSLN_dirty;
uint32_T FSLN_dirty;
uint32_T ISLN_dirty;
uint32_T NbrDSSlns_dirty;
uint32_T RP_dirty;
uint32_T RF_dirty;
uint32_T MSKFlag_dirty;
uint32_T CEP_dirty;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131450U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "EffConstruct_Image",                /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* End of code generation (EffConstruct_Image_data.c) */
