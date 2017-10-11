/*
 * CalcPath2_data.h
 *
 * Code generation for function 'CalcPath2_data'
 *
 */

#ifndef CALCPATH2_DATA_H
#define CALCPATH2_DATA_H

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
#include "CalcPath2_types.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern const volatile char_T *emlrtBreakCheckR2012bFlagVar;
extern emxArray_real_T *trun2;
extern emxArray_real_T *vnfaces;
extern emxArray_real_T *wedges;
extern real_T Nblock;
extern real_T MSKFlag[304];
extern real_T CEP[304];
extern uint32_T trun2_dirty;
extern uint32_T vnfaces_dirty;
extern uint32_T wedges_dirty;
extern uint32_T Nblock_dirty;
extern uint32_T MSKFlag_dirty;
extern uint32_T CEP_dirty;
extern emlrtContext emlrtContextGlobal;

#endif

/* End of code generation (CalcPath2_data.h) */
