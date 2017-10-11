/*
 * Blocking.h
 *
 * Code generation for function 'Blocking'
 *
 */

#ifndef BLOCKING_H
#define BLOCKING_H

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
#include "EffConstruct_Image_types.h"

/* Function Declarations */
extern real_T Blocking(const emlrtStack *sp, const real_T P1_re[3], const real_T
  P2_re[3]);

#ifdef __WATCOMC__

#pragma aux Blocking value [8087];

#endif
#endif

/* End of code generation (Blocking.h) */
