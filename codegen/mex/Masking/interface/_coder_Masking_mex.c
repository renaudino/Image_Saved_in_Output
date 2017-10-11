/*
 * _coder_Masking_mex.c
 *
 * Code generation for function '_coder_Masking_mex'
 *
 */

/* Include files */
#include "Masking.h"
#include "_coder_Masking_mex.h"
#include "Masking_terminate.h"
#include "_coder_Masking_api.h"
#include "Masking_initialize.h"
#include "Masking_data.h"

/* Function Declarations */
static void Masking_mexFunction(MaskingStackData *SD, int32_T nlhs, mxArray
  *plhs[2], int32_T nrhs, const mxArray *prhs[2]);

/* Function Definitions */
static void Masking_mexFunction(MaskingStackData *SD, int32_T nlhs, mxArray
  *plhs[2], int32_T nrhs, const mxArray *prhs[2])
{
  int32_T n;
  const mxArray *inputs[2];
  const mxArray *outputs[2];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4, 7,
                        "Masking");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 7,
                        "Masking");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  Masking_api(SD, inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  Masking_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  MaskingStackData *MaskingStackDataGlobal = NULL;
  MaskingStackDataGlobal = (MaskingStackData *)mxCalloc(1, 1U * sizeof
    (MaskingStackData));
  mexAtExit(Masking_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  Masking_initialize();

  /* Dispatch the entry-point. */
  Masking_mexFunction(MaskingStackDataGlobal, nlhs, plhs, nrhs, prhs);
  mxFree(MaskingStackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Masking_mex.c) */
