/*
 * CalcPath.h
 *
 * Code generation for function 'CalcPath'
 *
 */

#ifndef CALCPATH_H
#define CALCPATH_H

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
#include "CalcPath_types.h"

/* Function Declarations */
extern void CalcPath(const emlrtStack *sp, const real_T tx[3], const real_T rx[3],
                     real_T ordmax, real_T rvsds);

#endif

/* End of code generation (CalcPath.h) */
