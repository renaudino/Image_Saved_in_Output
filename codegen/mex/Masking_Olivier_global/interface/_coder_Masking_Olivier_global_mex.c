/*
 * _coder_Masking_Olivier_global_mex.c
 *
 * Code generation for function '_coder_Masking_Olivier_global_mex'
 *
 */

/* Include files */
#include "Masking_Olivier_global.h"
#include "_coder_Masking_Olivier_global_mex.h"
#include "Masking_Olivier_global_terminate.h"
#include "_coder_Masking_Olivier_global_api.h"
#include "Masking_Olivier_global_initialize.h"
#include "Masking_Olivier_global_data.h"

/* Function Declarations */
static void c_Masking_Olivier_global_mexFun(Masking_Olivier_globalStackData *SD,
  int32_T nlhs, mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[2]);

/* Function Definitions */
static void c_Masking_Olivier_global_mexFun(Masking_Olivier_globalStackData *SD,
  int32_T nlhs, mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[2])
{
  int32_T n;
  const mxArray *inputs[2];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4,
                        22, "Masking_Olivier_global");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 22,
                        "Masking_Olivier_global");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  Masking_Olivier_global_api(SD, inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  Masking_Olivier_global_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  Masking_Olivier_globalStackData *c_Masking_Olivier_globalStackDa = NULL;
  c_Masking_Olivier_globalStackDa = (Masking_Olivier_globalStackData *)mxCalloc
    (1, 1U * sizeof(Masking_Olivier_globalStackData));
  mexAtExit(Masking_Olivier_global_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  Masking_Olivier_global_initialize();

  /* Dispatch the entry-point. */
  c_Masking_Olivier_global_mexFun(c_Masking_Olivier_globalStackDa, nlhs, plhs,
    nrhs, prhs);
  mxFree(c_Masking_Olivier_globalStackDa);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Masking_Olivier_global_mex.c) */
