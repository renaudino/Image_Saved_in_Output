/*
 * dsfield_data.h
 *
 * Code generation for function 'dsfield_data'
 *
 */

#ifndef DSFIELD_DATA_H
#define DSFIELD_DATA_H

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

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern const volatile char_T *emlrtBreakCheckR2012bFlagVar;
extern emxArray_real_T *vnfaces;
extern emxArray_real_T *Model;
extern emxArray_real_T *Ar;
extern emxArray_real_T *Lam;
extern emxArray_real_T *Aii;
extern emxArray_real_T *Scoeff;
extern real_T kxpol;
extern emxArray_real_T *CEP;
extern emxArray_creal_T *eta;
extern real_T K;
extern emxArray_real_T *Rcoeff;
extern uint32_T vnfaces_dirty;
extern uint32_T Model_dirty;
extern uint32_T Ar_dirty;
extern uint32_T Lam_dirty;
extern uint32_T Aii_dirty;
extern uint32_T Scoeff_dirty;
extern uint32_T kxpol_dirty;
extern uint32_T CEP_dirty;
extern uint32_T eta_dirty;
extern uint32_T K_dirty;
extern uint32_T Rcoeff_dirty;
extern emlrtContext emlrtContextGlobal;
extern emlrtRSInfo l_emlrtRSI;
extern emlrtRSInfo n_emlrtRSI;

#endif

/* End of code generation (dsfield_data.h) */
