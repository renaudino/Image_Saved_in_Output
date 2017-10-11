/*
 * EffConstruct_mex.c
 *
 * Code generation for function 'EffConstruct'
 *
 * C source code generated on: Fri Dec 20 16:15:36 2013
 *
 */

/* Include files */
#include "mex.h"
#include "EffConstruct_api.h"
#include "EffConstruct_initialize.h"
#include "EffConstruct_terminate.h"

/* Type Definitions */

/* Function Declarations */
static void EffConstruct_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);
MEXFUNCTION_LINKAGE mxArray *emlrtMexFcnProperties(void);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "EffConstruct", NULL, false, {2045744189U,2170104910U,2743257031U,4284093946U}, NULL };
emlrtCTX emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void EffConstruct_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  mxArray *inputs[3];
  int n = 0;
  int nInputs = nrhs;
  /* Check for proper number of arguments. */
  if(nrhs != 3) {
    mexErrMsgIdAndTxt("emlcoder:emlmex:WrongNumberOfInputs","3 inputs required for entry-point 'EffConstruct'.");
  } else if(nlhs > 0) {
    mexErrMsgIdAndTxt("emlcoder:emlmex:TooManyOutputArguments","Too many output arguments for entry-point 'EffConstruct'.");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = (mxArray *)prhs[n];
  }
  /* Module initialization. */
  EffConstruct_initialize(&emlrtContextGlobal);
  /* Call the function. */
  EffConstruct_api((const mxArray**)inputs);
  /* Module finalization. */
  EffConstruct_terminate();
}

void EffConstruct_atexit_wrapper(void)
{
  EffConstruct_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(EffConstruct_atexit_wrapper);
  /* Dispatch the entry-point. */
  EffConstruct_mexFunction(nlhs, plhs, nrhs, prhs);
}

mxArray *emlrtMexFcnProperties(void)
{
    const char *mexProperties[] = {
        "Version",
        "EntryPoints"};
    const char *epProperties[] = {
        "Name",
        "NumberOfInputs",
        "NumberOfOutputs",
        "ConstantInputs"};
    mxArray *xResult = mxCreateStructMatrix(1,1,2,mexProperties);
    mxArray *xEntryPoints = mxCreateStructMatrix(1,1,4,epProperties);
    mxArray *xInputs = NULL;
    xInputs = mxCreateLogicalMatrix(1, 3);
    mxSetFieldByNumber(xEntryPoints, 0, 0, mxCreateString("EffConstruct"));
    mxSetFieldByNumber(xEntryPoints, 0, 1, mxCreateDoubleScalar(3));
    mxSetFieldByNumber(xEntryPoints, 0, 2, mxCreateDoubleScalar(0));
    mxSetFieldByNumber(xEntryPoints, 0, 3, xInputs);
    mxSetFieldByNumber(xResult, 0, 0, mxCreateString("8.0.0.783 (R2012b)"));
    mxSetFieldByNumber(xResult, 0, 1, xEntryPoints);

    return xResult;
}
/* End of code generation (EffConstruct_mex.c) */
