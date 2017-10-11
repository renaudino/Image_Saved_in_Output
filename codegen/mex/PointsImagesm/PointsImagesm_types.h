/*
 * PointsImagesm_types.h
 *
 * Code generation for function 'PointsImagesm'
 *
 */

#ifndef POINTSIMAGESM_TYPES_H
#define POINTSIMAGESM_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
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

#ifndef struct_emxArray_real_T_15
#define struct_emxArray_real_T_15

struct emxArray_real_T_15
{
  real_T data[15];
  int32_T size[1];
};

#endif                                 /*struct_emxArray_real_T_15*/

#ifndef typedef_emxArray_real_T_15
#define typedef_emxArray_real_T_15

typedef struct emxArray_real_T_15 emxArray_real_T_15;

#endif                                 /*typedef_emxArray_real_T_15*/

#ifndef struct_emxArray_real_T_150x6x3
#define struct_emxArray_real_T_150x6x3

struct emxArray_real_T_150x6x3
{
  real_T data[2700];
  int32_T size[3];
};

#endif                                 /*struct_emxArray_real_T_150x6x3*/

#ifndef typedef_emxArray_real_T_150x6x3
#define typedef_emxArray_real_T_150x6x3

typedef struct emxArray_real_T_150x6x3 emxArray_real_T_150x6x3;

#endif                                 /*typedef_emxArray_real_T_150x6x3*/
#endif

/* End of code generation (PointsImagesm_types.h) */
