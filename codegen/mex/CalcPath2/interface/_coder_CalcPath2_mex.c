/*
 * _coder_CalcPath2_mex.c
 *
 * Code generation for function '_coder_CalcPath2_mex'
 *
 */

/* Include files */
#include "CalcPath2.h"
#include "_coder_CalcPath2_mex.h"
#include "CalcPath2_terminate.h"
#include "_coder_CalcPath2_api.h"
#include "CalcPath2_initialize.h"
#include "CalcPath2_data.h"

/* Function Declarations */
static void CalcPath2_mexFunction(int32_T nlhs, mxArray *plhs[7], int32_T nrhs,
  const mxArray *prhs[10]);

/* Function Definitions */
static void CalcPath2_mexFunction(int32_T nlhs, mxArray *plhs[7], int32_T nrhs,
  const mxArray *prhs[10])
{
  int32_T n;
  const mxArray *inputs[10];
  const mxArray *outputs[7];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 10) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 10, 4,
                        9, "CalcPath2");
  }

  if (nlhs > 7) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 9,
                        "CalcPath2");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  CalcPath2_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  CalcPath2_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(CalcPath2_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  CalcPath2_initialize();

  /* Dispatch the entry-point. */
  CalcPath2_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_CalcPath2_mex.c) */
