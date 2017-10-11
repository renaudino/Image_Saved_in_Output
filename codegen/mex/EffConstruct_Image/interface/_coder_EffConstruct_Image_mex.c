/*
 * _coder_EffConstruct_Image_mex.c
 *
 * Code generation for function '_coder_EffConstruct_Image_mex'
 *
 */

/* Include files */
#include "EffConstruct_Image.h"
#include "_coder_EffConstruct_Image_mex.h"
#include "EffConstruct_Image_terminate.h"
#include "_coder_EffConstruct_Image_api.h"
#include "EffConstruct_Image_initialize.h"
#include "EffConstruct_Image_data.h"

/* Function Declarations */
static void EffConstruct_Image_mexFunction(int32_T nlhs, int32_T nrhs, const
  mxArray *prhs[3]);

/* Function Definitions */
static void EffConstruct_Image_mexFunction(int32_T nlhs, int32_T nrhs, const
  mxArray *prhs[3])
{
  int32_T n;
  const mxArray *inputs[3];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        18, "EffConstruct_Image");
  }

  if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 18,
                        "EffConstruct_Image");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  EffConstruct_Image_api(inputs);

  /* Module termination. */
  EffConstruct_Image_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  (void)plhs;
  mexAtExit(EffConstruct_Image_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  EffConstruct_Image_initialize();

  /* Dispatch the entry-point. */
  EffConstruct_Image_mexFunction(nlhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_EffConstruct_Image_mex.c) */
