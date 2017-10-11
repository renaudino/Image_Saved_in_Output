/*
 * _coder_RefFieldUP_mex.c
 *
 * Code generation for function '_coder_RefFieldUP_mex'
 *
 */

/* Include files */
#include "RefFieldUP.h"
#include "_coder_RefFieldUP_mex.h"
#include "RefFieldUP_terminate.h"
#include "_coder_RefFieldUP_api.h"
#include "RefFieldUP_initialize.h"
#include "RefFieldUP_data.h"

/* Function Declarations */
static void RefFieldUP_mexFunction(int32_T nlhs, mxArray *plhs[3], int32_T nrhs,
  const mxArray *prhs[7]);

/* Function Definitions */
static void RefFieldUP_mexFunction(int32_T nlhs, mxArray *plhs[3], int32_T nrhs,
  const mxArray *prhs[7])
{
  int32_T n;
  const mxArray *inputs[7];
  const mxArray *outputs[3];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 7) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 7, 4,
                        10, "RefFieldUP");
  }

  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 10,
                        "RefFieldUP");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  RefFieldUP_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  RefFieldUP_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(RefFieldUP_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  RefFieldUP_initialize();

  /* Dispatch the entry-point. */
  RefFieldUP_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_RefFieldUP_mex.c) */
