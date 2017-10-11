/*
 * AppGround.h
 *
 * Code generation for function 'AppGround'
 *
 */

#ifndef APPGROUND_H
#define APPGROUND_H

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
#include "PointsImagesm_types.h"

/* Function Declarations */
extern real_T AppGround(const emlrtStack *sp, const real_T gpoint[3]);

#ifdef __WATCOMC__

#pragma aux AppGround value [8087];

#endif
#endif

/* End of code generation (AppGround.h) */
