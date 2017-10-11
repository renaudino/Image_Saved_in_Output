/*
 * nchoosek.h
 *
 * Code generation for function 'nchoosek'
 *
 */

#ifndef NCHOOSEK_H
#define NCHOOSEK_H

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
extern real_T nchoosek(const emlrtStack *sp, real_T x, real_T k);

#ifdef __WATCOMC__

#pragma aux nchoosek value [8087];

#endif
#endif

/* End of code generation (nchoosek.h) */
