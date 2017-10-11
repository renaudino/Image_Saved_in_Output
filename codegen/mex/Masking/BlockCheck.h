/*
 * BlockCheck.h
 *
 * Code generation for function 'BlockCheck'
 *
 */

#ifndef BLOCKCHECK_H
#define BLOCKCHECK_H

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
extern real_T BlockCheck(const emlrtStack *sp, real_T bl, const real_T p_re[3]);

#ifdef __WATCOMC__

#pragma aux BlockCheck value [8087];

#endif
#endif

/* End of code generation (BlockCheck.h) */
