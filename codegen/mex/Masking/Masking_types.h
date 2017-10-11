/*
 * Masking_types.h
 *
 * Code generation for function 'Masking'
 *
 */

#ifndef MASKING_TYPES_H
#define MASKING_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  real_T shi[30000];
  real_T sti[30000];
  real_T stt[30000];
  real_T sht[30000];
  real_T sho[30000];
  real_T sto[30000];
  real_T str[30000];
  real_T shr[30000];
  creal_T Tti[10000];
  creal_T Thi[10000];
  creal_T Ttt[10000];
  creal_T Tht[10000];
  creal_T ploss[10000];
  real_T pd[10000];
  real_T epd[10000];
  real_T nbpen[10000];
  real_T pflag[20000];
  real_T mask;
  real_T npb;
} struct0_T;

#endif                                 /*typedef_struct0_T*/

#ifndef typedef_MaskingStackData
#define typedef_MaskingStackData

typedef struct {
  struct {
    real_T msti[30000];
    real_T mstt[30000];
    real_T mshi[30000];
    real_T msht[30000];
    real_T mstr[30000];
    real_T msto[30000];
    real_T mshr[30000];
    real_T msho[30000];
    creal_T mploss[10000];
    creal_T mTti[10000];
    creal_T mThi[10000];
    creal_T mTtt[10000];
    creal_T mTht[10000];
    real_T mpd[10000];
    real_T mepd[10000];
    real_T dist[10000];
  } f0;

  struct {
    struct0_T m;
  } f1;
} MaskingStackData;

#endif                                 /*typedef_MaskingStackData*/

#ifndef struct_emxArray__common
#define struct_emxArray__common

struct emxArray__common
{
  void *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray__common*/

#ifndef typedef_emxArray__common
#define typedef_emxArray__common

typedef struct emxArray__common emxArray__common;

#endif                                 /*typedef_emxArray__common*/

#ifndef struct_emxArray_creal_T
#define struct_emxArray_creal_T

struct emxArray_creal_T
{
  creal_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_creal_T*/

#ifndef typedef_emxArray_creal_T
#define typedef_emxArray_creal_T

typedef struct emxArray_creal_T emxArray_creal_T;

#endif                                 /*typedef_emxArray_creal_T*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/
#endif

/* End of code generation (Masking_types.h) */
