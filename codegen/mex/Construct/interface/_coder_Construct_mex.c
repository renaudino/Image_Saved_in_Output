/*
 * _coder_Construct_mex.c
 *
 * Code generation for function '_coder_Construct_mex'
 *
 */

/* Include files */
#include "Construct.h"
#include "_coder_Construct_mex.h"
#include "Construct_terminate.h"
#include "_coder_Construct_api.h"
#include "Construct_initialize.h"
#include "Construct_data.h"

/* Function Declarations */
static void Construct_mexFunction(int32_T nlhs, int32_T nrhs, const mxArray
  *prhs[1]);

/* Function Definitions */
static void Construct_mexFunction(int32_T nlhs, int32_T nrhs, const mxArray
  *prhs[1])
{
  int32_T n;
  const mxArray *inputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4, 9,
                        "Construct");
  }

  if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 9,
                        "Construct");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  Construct_api(inputs);

  /* Module termination. */
  Construct_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  (void)plhs;
  mexAtExit(Construct_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  Construct_initialize();

  /* Dispatch the entry-point. */
  Construct_mexFunction(nlhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Construct_mex.c) */
