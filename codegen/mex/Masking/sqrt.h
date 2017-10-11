/*
 * sqrt.h
 *
 * Code generation for function 'sqrt'
 *
 */

#ifndef SQRT_H
#define SQRT_H

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
#include "Masking_types.h"

/* Function Declarations */
extern real_T b_sqrt(const emlrtStack *sp, real_T x);

#ifdef __WATCOMC__

#pragma aux b_sqrt value [8087];

#endif

extern void c_sqrt(creal_T *x);
extern void d_sqrt(const emlrtStack *sp, real_T *x);

#endif

/* End of code generation (sqrt.h) */
