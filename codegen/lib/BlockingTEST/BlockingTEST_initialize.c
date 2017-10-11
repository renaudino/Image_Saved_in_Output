/*
 * BlockingTEST_initialize.c
 *
 * Code generation for function 'BlockingTEST_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BlockingTEST.h"
#include "BlockingTEST_initialize.h"
#include "BlockingTEST_data.h"

/* Named Constants */
#define b_Nblock                       (0.0)

/* Function Definitions */
void BlockingTEST_initialize(void)
{
  rt_InitInfAndNaN(8U);
  memset(&CEP[0], 0, 150U * sizeof(double));
  memset(&MSKFlag[0], 0, 150U * sizeof(double));
  memset(&wedges[0], 0, 10800U * sizeof(double));
  memset(&vnfaces[0], 0, 2700U * sizeof(double));
  Nblock = b_Nblock;
}

/* End of code generation (BlockingTEST_initialize.c) */
