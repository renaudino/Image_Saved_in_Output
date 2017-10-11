/*
 * dispointsQP.h
 *
 * Code generation for function 'dispointsQP'
 *
 */

#ifndef DISPOINTSQP_H
#define DISPOINTSQP_H

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

/* Function Declarations */
extern void dispointsQP(const emlrtStack *sp, real_T b, real_T f, const real_T
  op[3], emxArray_real_T *points, real_T *number, emxArray_real_T *space);

#endif

/* End of code generation (dispointsQP.h) */
