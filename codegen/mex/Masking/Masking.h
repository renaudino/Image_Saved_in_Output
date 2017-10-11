/*
 * Masking.h
 *
 * Code generation for function 'Masking'
 *
 */

#ifndef MASKING_H
#define MASKING_H

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
extern void Masking(MaskingStackData *SD, const emlrtStack *sp, const real_T
                    P1_re[3], const real_T P2_re[3], real_T *mmask, struct0_T
                    *b_m);

#endif

/* End of code generation (Masking.h) */
