/*
 * EffConstruct_emxutil.h
 *
 * Code generation for function 'EffConstruct_emxutil'
 *
 * C source code generated on: Fri Dec 20 16:15:35 2013
 *
 */

#ifndef __EFFCONSTRUCT_EMXUTIL_H__
#define __EFFCONSTRUCT_EMXUTIL_H__
/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blascompat32.h"
#include "rtwtypes.h"
#include "EffConstruct_types.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern void b_emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T b_numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void b_emxInit_real_T(emxArray_real_T **pEmxArray, int32_T b_numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void c_emxInit_real_T(emxArray_real_T **pEmxArray, int32_T b_numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void d_emxInit_real_T(emxArray_real_T **pEmxArray, int32_T b_numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxEnsureCapacity(emxArray__common *emxArray, int32_T oldNumel, int32_T elementSize, const emlrtRTEInfo *srcLocation);
extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T b_numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T b_numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
#endif
/* End of code generation (EffConstruct_emxutil.h) */
