/*
 * Masking_Olivier_global_mexutil.h
 *
 * Code generation for function 'Masking_Olivier_global_mexutil'
 *
 */

#ifndef MASKING_OLIVIER_GLOBAL_MEXUTIL_H
#define MASKING_OLIVIER_GLOBAL_MEXUTIL_H

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
#include "Masking_Olivier_global_types.h"

/* Function Declarations */
extern const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
extern const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);
extern const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_creal_T *u);
extern void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_vnfaces,
  const char_T *identifier, emxArray_real_T *y);
extern void emlrt_checkEscapedGlobals(void);
extern real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_feval,
  const char_T *identifier);

#ifdef __WATCOMC__

#pragma aux emlrt_marshallIn value [8087];

#endif

extern const mxArray *emlrt_marshallOut(const real_T u);
extern void emlrt_synchGlobalsFromML(const emlrtStack *sp);
extern void emlrt_synchGlobalsToML(const emlrtStack *sp);
extern void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_wedges,
  const char_T *identifier, emxArray_real_T *y);
extern void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_eta, const
  char_T *identifier, emxArray_creal_T *y);

#endif

/* End of code generation (Masking_Olivier_global_mexutil.h) */