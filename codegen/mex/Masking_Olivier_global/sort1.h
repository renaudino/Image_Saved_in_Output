/*
 * sort1.h
 *
 * Code generation for function 'sort1'
 *
 */

#ifndef SORT1_H
#define SORT1_H

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
#include "Masking_Olivier_global_types.h"

/* Function Declarations */
extern void c_sort(const emlrtStack *sp, real_T x_data[], int32_T x_size[1],
                   int32_T idx_data[], int32_T idx_size[1]);
extern void sort(real_T x[2], int32_T idx[2]);

#endif

/* End of code generation (sort1.h) */
