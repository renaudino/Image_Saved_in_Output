/*
 * Masking_data.h
 *
 * Code generation for function 'Masking_data'
 *
 */

#ifndef MASKING_DATA_H
#define MASKING_DATA_H

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
#include "Masking_types.h"

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
extern emlrtRSInfo l_emlrtRSI;
extern emlrtRSInfo m_emlrtRSI;

#endif

/* End of code generation (Masking_data.h) */
