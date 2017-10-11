/*
 * CalcPath_mexutil.h
 *
 * Code generation for function 'CalcPath_mexutil'
 *
 */

#ifndef CALCPATH_MEXUTIL_H
#define CALCPATH_MEXUTIL_H

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
#include "CalcPath_types.h"

/* Function Declarations */
extern const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
extern const mxArray *c_emlrt_marshallOut(const real_T u);
extern const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);
extern real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ordmax,
  const char_T *identifier);

#ifdef __WATCOMC__

#pragma aux e_emlrt_marshallIn value [8087];

#endif

extern const mxArray *e_emlrt_marshallOut(const emxArray_real_T *u);
extern void emlrt_checkEscapedGlobals(void);
extern const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
extern void emlrt_synchGlobalsFromML(const emlrtStack *sp);
extern void emlrt_synchGlobalsToML(void);
extern const mxArray *f_emlrt_marshallOut(const emxArray_real_T *u);
extern void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_Nbrimg,
  const char_T *identifier, emxArray_real_T *y);
extern const mxArray *g_emlrt_marshallOut(const emxArray_real_T *u);
extern void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_Mtrun,
  const char_T *identifier, emxArray_real_T *y);
extern void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_vnfaces,
  const char_T *identifier, emxArray_real_T *y);
extern void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_wedges,
  const char_T *identifier, emxArray_real_T *y);
extern void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_PSLN,
  const char_T *identifier, emxArray_real_T *y);
extern void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_FSLN,
  const char_T *identifier, emxArray_real_T *y);

#endif

/* End of code generation (CalcPath_mexutil.h) */
