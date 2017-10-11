/*
 * _coder_BlockingTEST_api.h
 *
 * Code generation for function '_coder_BlockingTEST_api'
 *
 */

#ifndef _CODER_BLOCKINGTEST_API_H
#define _CODER_BLOCKINGTEST_API_H

/* Include files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_BlockingTEST_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern real_T BlockingTEST(real_T P1_re[3], real_T P2_re[3]);
extern void BlockingTEST_api(const mxArray *prhs[2], const mxArray *plhs[1]);
extern void BlockingTEST_atexit(void);
extern void BlockingTEST_initialize(void);
extern void BlockingTEST_terminate(void);
extern void BlockingTEST_xil_terminate(void);

#endif

/* End of code generation (_coder_BlockingTEST_api.h) */
