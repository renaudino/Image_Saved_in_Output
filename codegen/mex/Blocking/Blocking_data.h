/*
 * Blocking_data.h
 *
 * Code generation for function 'Blocking_data'
 *
 */

#ifndef BLOCKING_DATA_H
#define BLOCKING_DATA_H

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
#include "Blocking_types.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern const volatile char_T *emlrtBreakCheckR2012bFlagVar;
extern real_T Nblock;
extern emxArray_real_T *vnfaces;
extern emxArray_real_T *wedges;
extern emxArray_real_T *MSKFlag;
extern emxArray_real_T *CEP;
extern uint32_T Nblock_dirty;
extern uint32_T vnfaces_dirty;
extern uint32_T wedges_dirty;
extern uint32_T MSKFlag_dirty;
extern uint32_T CEP_dirty;
extern emlrtContext emlrtContextGlobal;

#endif

/* End of code generation (Blocking_data.h) */
