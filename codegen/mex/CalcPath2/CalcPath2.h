/*
 * CalcPath2.h
 *
 * Code generation for function 'CalcPath2'
 *
 */

#ifndef CALCPATH2_H
#define CALCPATH2_H

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
#include "CalcPath2_types.h"

/* Function Declarations */
extern real_T CalcPath2(const emlrtStack *sp, const real_T tx[3], const real_T
  rx[3], real_T ordmax, real_T rvsds, emxArray_real_T *FSLN, emxArray_real_T
  *PSLN, emxArray_real_T *RF, emxArray_real_T *RP, emxArray_real_T *NbrDSSlns,
  emxArray_real_T *NbrSlns);

#ifdef __WATCOMC__

#pragma aux CalcPath2 value [8087];

#endif

extern void CalcPath2_init(void);
extern void oldReflex_not_empty_init(void);

#endif

/* End of code generation (CalcPath2.h) */
