/*
 * squeeze.c
 *
 * Code generation for function 'squeeze'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct_Image.h"
#include "squeeze.h"

/* Function Definitions */
void squeeze(const real_T a[12], real_T b[12])
{
  memcpy(&b[0], &a[0], 12U * sizeof(real_T));
}

/* End of code generation (squeeze.c) */
