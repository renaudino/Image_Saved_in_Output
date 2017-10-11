/*
 * CalcPath2_mexutil.h
 *
 * Code generation for function 'CalcPath2_mexutil'
 *
 */

#ifndef CALCPATH2_MEXUTIL_H
#define CALCPATH2_MEXUTIL_H

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
extern const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
extern void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
extern real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ordmax,
  const char_T *identifier);

#ifdef __WATCOMC__

#pragma aux c_emlrt_marshallIn value [8087];

#endif

extern const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);
extern void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
extern real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);

#ifdef __WATCOMC__

#pragma aux d_emlrt_marshallIn value [8087];

#endif

extern const mxArray *d_emlrt_marshallOut(const real_T u);
extern void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
extern const mxArray *e_emlrt_marshallOut(const real_T u[304]);
extern void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[304]);
extern void emlrt_checkEscapedGlobals(void);
extern const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
extern void emlrt_synchGlobalsFromML(const emlrtStack *sp);
extern void emlrt_synchGlobalsToML(void);
extern void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_trun2,
  const char_T *identifier, emxArray_real_T *y);
extern void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
extern void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_vnfaces,
  const char_T *identifier, emxArray_real_T *y);
extern void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
extern void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_wedges,
  const char_T *identifier, emxArray_real_T *y);
extern void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
extern void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_MSKFlag,
  const char_T *identifier, real_T y[304]);
extern void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[304]);
extern real_T v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

#ifdef __WATCOMC__

#pragma aux v_emlrt_marshallIn value [8087];

#endif
#endif

/* End of code generation (CalcPath2_mexutil.h) */
