/*
 * CalcPath_data.h
 *
 * Code generation for function 'CalcPath_data'
 *
 */

#ifndef CALCPATH_DATA_H
#define CALCPATH_DATA_H

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

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern const volatile char_T *emlrtBreakCheckR2012bFlagVar;
extern emxArray_real_T *Nbrimg;
extern emxArray_real_T *Mtrun;
extern real_T oldReflex;
extern real_T Reflex;
extern emxArray_real_T *NbrDSSlns;
extern emxArray_real_T *NbrSlns;
extern emxArray_real_T *vnfaces;
extern emxArray_real_T *RP;
extern emxArray_real_T *PSLN;
extern emxArray_real_T *RF;
extern emxArray_real_T *FSLN;
extern emxArray_real_T *wedges;
extern real_T Nblock;
extern emxArray_real_T *MSKFlag;
extern emxArray_real_T *CEP;
extern uint32_T Nbrimg_dirty;
extern uint32_T Mtrun_dirty;
extern uint32_T oldReflex_dirty;
extern uint32_T Reflex_dirty;
extern uint32_T vnfaces_dirty;
extern uint32_T wedges_dirty;
extern uint32_T NbrSlns_dirty;
extern uint32_T PSLN_dirty;
extern uint32_T FSLN_dirty;
extern uint32_T NbrDSSlns_dirty;
extern uint32_T RP_dirty;
extern uint32_T RF_dirty;
extern uint32_T Nblock_dirty;
extern uint32_T MSKFlag_dirty;
extern uint32_T CEP_dirty;
extern emlrtContext emlrtContextGlobal;

#endif

/* End of code generation (CalcPath_data.h) */
