/*
 * Masking_Olivier_global_data.h
 *
 * Code generation for function 'Masking_Olivier_global_data'
 *
 */

#ifndef MASKING_OLIVIER_GLOBAL_DATA_H
#define MASKING_OLIVIER_GLOBAL_DATA_H

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

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern const volatile char_T *emlrtBreakCheckR2012bFlagVar;
extern real_T Nblock;
extern emxArray_real_T *vnfaces;
extern emxArray_real_T *wedges;
extern emxArray_creal_T *eta;
extern real_T K;
extern uint32_T Nblock_dirty;
extern uint32_T vnfaces_dirty;
extern uint32_T wedges_dirty;
extern uint32_T eta_dirty;
extern uint32_T K_dirty;
extern emlrtContext emlrtContextGlobal;
extern emlrtRSInfo w_emlrtRSI;
extern emlrtRSInfo hb_emlrtRSI;
extern emlrtRSInfo ib_emlrtRSI;
extern emlrtRSInfo jb_emlrtRSI;
extern emlrtRSInfo lb_emlrtRSI;
extern emlrtRSInfo rb_emlrtRSI;
extern emlrtRSInfo sb_emlrtRSI;

#endif

/* End of code generation (Masking_Olivier_global_data.h) */
