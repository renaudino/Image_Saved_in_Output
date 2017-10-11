/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dsfield.h"
#include "abs.h"

/* Function Definitions */
void b_abs(const creal_T x[3], real_T y[3])
{
  int32_T k;
  for (k = 0; k < 3; k++) {
    y[k] = muDoubleScalarHypot(x[k].re, x[k].im);
  }
}

void c_abs(const creal_T x[3], real_T y[3])
{
  int32_T k;
  for (k = 0; k < 3; k++) {
    y[k] = muDoubleScalarHypot(x[k].re, x[k].im);
  }
}

/* End of code generation (abs.c) */
