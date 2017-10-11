/*
 * norm.h
 *
 * Code generation for function 'norm'
 *
 * C source code generated on: Fri Dec 20 16:15:35 2013
 *
 */

#ifndef __NORM_H__
#define __NORM_H__
/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blascompat32.h"
#include "rtwtypes.h"
#include "EffConstruct_types.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern real_T norm(const real_T x[3]);
#ifdef __WATCOMC__
#pragma aux norm value [8087];
#endif
#endif
/* End of code generation (norm.h) */
