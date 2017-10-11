/*
 * _coder_Construct2_mex.c
 *
 * Code generation for function '_coder_Construct2_mex'
 *
 */

/* Include files */
#include "Construct2.h"
#include "_coder_Construct2_mex.h"
#include "Construct2_terminate.h"
#include "_coder_Construct2_api.h"
#include "Construct2_initialize.h"
#include "Construct2_data.h"

/* Function Declarations */
static void Construct2_mexFunction(int32_T nlhs, int32_T nrhs, const mxArray
  *prhs[1]);

/* Function Definitions */
static void Construct2_mexFunction(int32_T nlhs, int32_T nrhs, const mxArray
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
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        10, "Construct2");
  }

  if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 10,
                        "Construct2");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  Construct2_api(inputs);

  /* Module termination. */
  Construct2_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  (void)plhs;
  mexAtExit(Construct2_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  Construct2_initialize();

  /* Dispatch the entry-point. */
  Construct2_mexFunction(nlhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Construct2_mex.c) */
