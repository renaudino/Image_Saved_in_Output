/*
 * Falpha.h
 *
 * Code generation for function 'Falpha'
 *
 */

#ifndef FALPHA_H
#define FALPHA_H

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
extern real_T Falpha(const emlrtStack *sp, real_T alpha, real_T cost);

#ifdef __WATCOMC__

#pragma aux Falpha value [8087];

#endif
#endif

/* End of code generation (Falpha.h) */
