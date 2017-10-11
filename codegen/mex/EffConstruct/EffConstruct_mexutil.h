/*
 * EffConstruct_mexutil.h
 *
 * Code generation for function 'EffConstruct_mexutil'
 *
 * C source code generated on: Fri Dec 20 16:15:35 2013
 *
 */

#ifndef __EFFCONSTRUCT_MEXUTIL_H__
#define __EFFCONSTRUCT_MEXUTIL_H__
/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blascompat32.h"
#include "rtwtypes.h"
#include "EffConstruct_types.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *b_emlrt_marshallOut(const real_T u[3]);
extern const mxArray *c_emlrt_marshallOut(emxArray_real_T *u);
extern const mxArray *d_emlrt_marshallOut(real_T u_data[2700], int32_T u_size[3]);
extern void e_emlrt_marshallIn(const mxArray *c_recept, const char_T *identifier, real_T y[3]);
extern const mxArray *e_emlrt_marshallOut(real_T u_data[15], int32_T u_size[1]);
extern void emlrt_checkEscapedGlobals(void);
extern real_T emlrt_marshallIn(const mxArray *OrdRef, const char_T *identifier);
#ifdef __WATCOMC__
#pragma aux emlrt_marshallIn value [8087];
#endif
extern const mxArray *emlrt_marshallOut(real_T u);
extern void emlrt_synchGlobalsFromML(void);
extern void emlrt_synchGlobalsToML(void);
extern const mxArray *f_emlrt_marshallOut(emxArray_real_T *u);
extern void g_emlrt_marshallIn(const mxArray *c_Mpath, const char_T *identifier, emxArray_real_T *y);
extern const mxArray *g_emlrt_marshallOut(emxArray_real_T *u);
extern const mxArray *h_emlrt_marshallOut(emxArray_real_T *u);
extern void i_emlrt_marshallIn(const mxArray *c_vnfaces, const char_T *identifier, real_T y_data[2700], int32_T y_size[3]);
extern const mxArray *i_emlrt_marshallOut(real_T u_data[150], int32_T u_size[1]);
extern void k_emlrt_marshallIn(const mxArray *c_NbrSlns, const char_T *identifier, real_T y_data[15], int32_T y_size[1]);
extern void m_emlrt_marshallIn(const mxArray *c_PSLN, const char_T *identifier, emxArray_real_T *y);
extern void o_emlrt_marshallIn(const mxArray *c_FSLN, const char_T *identifier, emxArray_real_T *y);
extern void q_emlrt_marshallIn(const mxArray *c_wedges, const char_T *identifier, emxArray_real_T *y);
extern void s_emlrt_marshallIn(const mxArray *c_MSKFlag, const char_T *identifier, real_T y_data[150], int32_T y_size[1]);
#endif
/* End of code generation (EffConstruct_mexutil.h) */
