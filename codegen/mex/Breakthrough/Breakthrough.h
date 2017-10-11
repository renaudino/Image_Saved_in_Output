/*
 * Breakthrough.h
 *
 * Code generation for function 'Breakthrough'
 *
 */

#ifndef BREAKTHROUGH_H
#define BREAKTHROUGH_H

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
#include "Breakthrough_types.h"

/* Function Declarations */
extern void Breakthrough(const emlrtStack *sp, const real_T face[2], const
  real_T Pnneg_re[3], const real_T Pnpos_re[3], real_T Pbreak[3]);

#endif

/* End of code generation (Breakthrough.h) */
