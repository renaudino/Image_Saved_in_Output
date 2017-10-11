/*
 * AppFace.h
 *
 * Code generation for function 'AppFace'
 *
 */

#ifndef APPFACE_H
#define APPFACE_H

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
#include "AppFace_types.h"

/* Function Declarations */
extern real_T AppFace(const emlrtStack *sp, const real_T point_re[3], const
                      real_T face[2]);

#ifdef __WATCOMC__

#pragma aux AppFace value [8087];

#endif
#endif

/* End of code generation (AppFace.h) */
