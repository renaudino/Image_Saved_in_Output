/*
 * scatterers_data.h
 *
 * Code generation for function 'scatterers_data'
 *
 */

#ifndef SCATTERERS_DATA_H
#define SCATTERERS_DATA_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "scatterers_types.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern const volatile char_T *emlrtBreakCheckR2012bFlagVar;
extern real_T Nblock;
extern emxArray_real_T *DSFlag;
extern emxArray_real_T *wedges;
extern emxArray_real_T *vnfaces;
extern real_T lambda;
extern uint32_T Nblock_dirty;
extern uint32_T DSFlag_dirty;
extern uint32_T wedges_dirty;
extern uint32_T vnfaces_dirty;
extern uint32_T lambda_dirty;
extern emlrtContext emlrtContextGlobal;
extern emlrtRSInfo j_emlrtRSI;
extern emlrtRSInfo k_emlrtRSI;

#endif

/* End of code generation (scatterers_data.h) */
