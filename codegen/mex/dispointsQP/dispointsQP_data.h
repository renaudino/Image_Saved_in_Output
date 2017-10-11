/*
 * dispointsQP_data.h
 *
 * Code generation for function 'dispointsQP_data'
 *
 */

#ifndef DISPOINTSQP_DATA_H
#define DISPOINTSQP_DATA_H

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
#include "dispointsQP_types.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern const volatile char_T *emlrtBreakCheckR2012bFlagVar;
extern emxArray_real_T *wedges;
extern real_T lambda;
extern emxArray_real_T *vnfaces;
extern uint32_T wedges_dirty;
extern uint32_T lambda_dirty;
extern uint32_T vnfaces_dirty;
extern emlrtContext emlrtContextGlobal;
extern emlrtRSInfo i_emlrtRSI;
extern emlrtRSInfo j_emlrtRSI;

#endif

/* End of code generation (dispointsQP_data.h) */
