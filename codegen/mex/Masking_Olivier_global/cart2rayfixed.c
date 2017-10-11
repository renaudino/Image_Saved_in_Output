/*
 * cart2rayfixed.c
 *
 * Code generation for function 'cart2rayfixed'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Masking_Olivier_global.h"
#include "cart2rayfixed.h"

/* Function Definitions */
void cart2rayfixed(const real_T s[3], real_T et[3], real_T eh[3])
{
  real_T el;
  real_T az;
  real_T dv2[9];
  int32_T i7;
  real_T dv3[9];
  static const int8_T iv5[3] = { 0, 0, 1 };

  static const int8_T iv6[3] = { 1, 0, 0 };

  int32_T i8;
  real_T dv4[9];
  int32_T i9;
  real_T e[9];
  static const int8_T b[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  el = muDoubleScalarAtan2(-s[2], muDoubleScalarHypot(-s[0], -s[1]));
  az = muDoubleScalarAtan2(-s[1], -s[0]);
  dv2[0] = muDoubleScalarCos(1.5707963267948966 - az);
  dv2[3] = muDoubleScalarSin(1.5707963267948966 - az);
  dv2[6] = 0.0;
  dv2[1] = -muDoubleScalarSin(1.5707963267948966 - az);
  dv2[4] = muDoubleScalarCos(1.5707963267948966 - az);
  dv2[7] = 0.0;
  for (i7 = 0; i7 < 3; i7++) {
    dv2[2 + 3 * i7] = iv5[i7];
    dv3[3 * i7] = iv6[i7];
  }

  dv3[1] = 0.0;
  dv3[4] = muDoubleScalarCos(3.1415926535897931 - el);
  dv3[7] = muDoubleScalarSin(3.1415926535897931 - el);
  dv3[2] = 0.0;
  dv3[5] = -muDoubleScalarSin(3.1415926535897931 - el);
  dv3[8] = muDoubleScalarCos(3.1415926535897931 - el);

  /*  (OR): unitary parallel vector (transmission field) --- 1st interface */
  for (i7 = 0; i7 < 3; i7++) {
    for (i8 = 0; i8 < 3; i8++) {
      dv4[i7 + 3 * i8] = 0.0;
      for (i9 = 0; i9 < 3; i9++) {
        dv4[i7 + 3 * i8] += dv2[i7 + 3 * i9] * dv3[i9 + 3 * i8];
      }
    }

    for (i8 = 0; i8 < 3; i8++) {
      e[i7 + 3 * i8] = 0.0;
      for (i9 = 0; i9 < 3; i9++) {
        e[i7 + 3 * i8] += dv4[i7 + 3 * i9] * (real_T)b[i9 + 3 * i8];
      }
    }

    et[i7] = e[i7];
    eh[i7] = e[6 + i7];
  }

  /*  (OR): unitary perpendicular vector (transmission field) --- 1st interface */
}

/* End of code generation (cart2rayfixed.c) */
