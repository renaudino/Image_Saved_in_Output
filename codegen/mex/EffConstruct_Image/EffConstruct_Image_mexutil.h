/*
 * EffConstruct_Image_mexutil.h
 *
 * Code generation for function 'EffConstruct_Image_mexutil'
 *
 */

#ifndef EFFCONSTRUCT_IMAGE_MEXUTIL_H
#define EFFCONSTRUCT_IMAGE_MEXUTIL_H

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
#include "EffConstruct_Image_types.h"

/* Function Declarations */
extern const mxArray *b_emlrt_marshallOut(const real_T u[3]);
extern const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);
extern const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);
extern void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_recept,
  const char_T *identifier, real_T y[3]);
extern const mxArray *e_emlrt_marshallOut(const emxArray_real_T *u);
extern void emlrt_checkEscapedGlobals(void);
extern real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *OrdRef,
  const char_T *identifier);

#ifdef __WATCOMC__

#pragma aux emlrt_marshallIn value [8087];

#endif

extern const mxArray *emlrt_marshallOut(const real_T u);
extern void emlrt_synchGlobalsFromML(const emlrtStack *sp);
extern void emlrt_synchGlobalsToML(void);
extern const mxArray *f_emlrt_marshallOut(const emxArray_real_T *u);
extern void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_Mpath,
  const char_T *identifier, emxArray_real_T *y);
extern const mxArray *g_emlrt_marshallOut(const emxArray_real_T *u);
extern const mxArray *h_emlrt_marshallOut(const emxArray_real_T *u);
extern void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_vnfaces,
  const char_T *identifier, emxArray_real_T *y);
extern void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_wedges,
  const char_T *identifier, emxArray_real_T *y);
extern void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_NbrSlns,
  const char_T *identifier, emxArray_real_T *y);
extern void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_PSLN,
  const char_T *identifier, emxArray_real_T *y);
extern void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_FSLN,
  const char_T *identifier, emxArray_real_T *y);

#endif

/* End of code generation (EffConstruct_Image_mexutil.h) */
