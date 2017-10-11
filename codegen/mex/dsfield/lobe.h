/*
 * lobe.h
 *
 * Code generation for function 'lobe'
 *
 */

#ifndef LOBE_H
#define LOBE_H

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
extern real_T lobe(const emlrtStack *sp, real_T cosp, real_T alpha);

#ifdef __WATCOMC__

#pragma aux lobe value [8087];

#endif
#endif

/* End of code generation (lobe.h) */
