/*
 * RefFieldUP.h
 *
 * Code generation for function 'RefFieldUP'
 *
 */

#ifndef REFFIELDUP_H
#define REFFIELDUP_H

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
#include "RefFieldUP_types.h"

/* Function Declarations */
extern void RefFieldUP(const emlrtStack *sp, real_T pblo, real_T blo, const
  real_T E_re[3], const real_T R_re[3], const real_T qr_re[3], const real_T
  n_re[3], const creal_T Ein[3], creal_T Eout[3], creal_T *Rt, creal_T *Rh);

#endif

/* End of code generation (RefFieldUP.h) */
