/*
 * abs.h
 *
 * Code generation for function 'abs'
 *
 */

#ifndef ABS_H
#define ABS_H

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
#include "dsfield_types.h"

/* Function Declarations */
extern void b_abs(const creal_T x[3], real_T y[3]);
extern void c_abs(const creal_T x[3], real_T y[3]);

#endif

/* End of code generation (abs.h) */
