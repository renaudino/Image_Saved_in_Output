/*
 * dsfield.h
 *
 * Code generation for function 'dsfield'
 *
 */

#ifndef DSFIELD_H
#define DSFIELD_H

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
extern void dsfield(const emlrtStack *sp, const creal_T Einc[3], const real_T
                    start_re[3], const real_T fin_re[3], const real_T sf[2],
                    const real_T sp_re[3], real_T surf, creal_T Eds[3], real_T
                    *ri);

#endif

/* End of code generation (dsfield.h) */
