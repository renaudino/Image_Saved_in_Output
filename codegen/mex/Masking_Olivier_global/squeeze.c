/*
 * squeeze.c
 *
 * Code generation for function 'squeeze'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Masking_Olivier_global.h"
#include "squeeze.h"

/* Function Definitions */
void squeeze(const real_T a[3], real_T b[3])
{
  int32_T k;
  for (k = 0; k < 3; k++) {
    b[k] = a[k];
  }
}

/* End of code generation (squeeze.c) */
