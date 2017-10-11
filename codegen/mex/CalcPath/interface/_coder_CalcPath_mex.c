/*
 * _coder_CalcPath_mex.c
 *
 * Code generation for function '_coder_CalcPath_mex'
 *
 */

/* Include files */
#include "CalcPath.h"
#include "_coder_CalcPath_mex.h"
#include "CalcPath_terminate.h"
#include "_coder_CalcPath_api.h"
#include "CalcPath_initialize.h"
#include "CalcPath_data.h"

/* Function Declarations */
static void CalcPath_mexFunction(int32_T nlhs, int32_T nrhs, const mxArray *
  prhs[4]);

/* Function Definitions */
static void CalcPath_mexFunction(int32_T nlhs, int32_T nrhs, const mxArray *
  prhs[4])
{
  int32_T n;
  const mxArray *inputs[4];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4, 8,
                        "CalcPath");
  }

  if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 8,
                        "CalcPath");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  CalcPath_api(inputs);

  /* Module termination. */
  CalcPath_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  (void)plhs;
  mexAtExit(CalcPath_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  CalcPath_initialize();

  /* Dispatch the entry-point. */
  CalcPath_mexFunction(nlhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_CalcPath_mex.c) */
