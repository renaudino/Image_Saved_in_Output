/*
 * scatterers.h
 *
 * Code generation for function 'scatterers'
 *
 */

#ifndef SCATTERERS_H
#define SCATTERERS_H

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
#include "scatterers_types.h"

/* Function Declarations */
extern real_T scatterers(const emlrtStack *sp, real_T ebl, const real_T vtx_re[3],
  emxArray_real_T *PDS, emxArray_real_T *FDS, emxArray_real_T *Area);

#ifdef __WATCOMC__

#pragma aux scatterers value [8087];

#endif
#endif

/* End of code generation (scatterers.h) */
