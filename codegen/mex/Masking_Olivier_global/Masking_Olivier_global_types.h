/*
 * Masking_Olivier_global_types.h
 *
 * Code generation for function 'Masking_Olivier_global'
 *
 */

#ifndef MASKING_OLIVIER_GLOBAL_TYPES_H
#define MASKING_OLIVIER_GLOBAL_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_creal_T_1000x3
#define struct_emxArray_creal_T_1000x3

struct emxArray_creal_T_1000x3
{
  creal_T data[3000];
  int32_T size[2];
};

#endif                                 /*struct_emxArray_creal_T_1000x3*/

#ifndef typedef_emxArray_creal_T_1000x3
#define typedef_emxArray_creal_T_1000x3

typedef struct emxArray_creal_T_1000x3 emxArray_creal_T_1000x3;

#endif                                 /*typedef_emxArray_creal_T_1000x3*/

#ifndef struct_emxArray_real_T_1000
#define struct_emxArray_real_T_1000

struct emxArray_real_T_1000
{
  real_T data[1000];
  int32_T size[1];
};

#endif                                 /*struct_emxArray_real_T_1000*/

#ifndef typedef_emxArray_real_T_1000
#define typedef_emxArray_real_T_1000

typedef struct emxArray_real_T_1000 emxArray_real_T_1000;

#endif                                 /*typedef_emxArray_real_T_1000*/

#ifndef struct_emxArray_real_T_1000x2
#define struct_emxArray_real_T_1000x2

struct emxArray_real_T_1000x2
{
  real_T data[2000];
  int32_T size[2];
};

#endif                                 /*struct_emxArray_real_T_1000x2*/

#ifndef typedef_emxArray_real_T_1000x2
#define typedef_emxArray_real_T_1000x2

typedef struct emxArray_real_T_1000x2 emxArray_real_T_1000x2;

#endif                                 /*typedef_emxArray_real_T_1000x2*/

#ifndef struct_sr9C9QVnXjStmdazeTELePF
#define struct_sr9C9QVnXjStmdazeTELePF

struct sr9C9QVnXjStmdazeTELePF
{
  emxArray_creal_T_1000x3 shi;
  emxArray_creal_T_1000x3 sti;
  emxArray_creal_T_1000x3 stt;
  emxArray_creal_T_1000x3 sht;
  emxArray_creal_T_1000x3 sho;
  emxArray_creal_T_1000x3 sto;
  emxArray_creal_T_1000x3 str;
  emxArray_creal_T_1000x3 shr;
  emxArray_creal_T_1000x3 Tti;
  emxArray_creal_T_1000x3 Thi;
  emxArray_creal_T_1000x3 Ttt;
  emxArray_creal_T_1000x3 Tht;
  emxArray_creal_T_1000x3 ploss;
  emxArray_real_T_1000 pd;
  emxArray_real_T_1000 epd;
  emxArray_real_T_1000 nbpen;
  emxArray_real_T_1000x2 pflag;
  real_T mask;
  real_T npb;
};

#endif                                 /*struct_sr9C9QVnXjStmdazeTELePF*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct sr9C9QVnXjStmdazeTELePF struct0_T;

#endif                                 /*typedef_struct0_T*/

#ifndef typedef_Masking_Olivier_globalStackData
#define typedef_Masking_Olivier_globalStackData

typedef struct {
  struct {
    real_T tpp[6000];
    creal_T msti_data[3000];
    creal_T mstt_data[3000];
    creal_T mshi_data[3000];
    real_T tpp_data[6000];
    creal_T msht_data[3000];
    creal_T mstr_data[3000];
    creal_T msto_data[3000];
    creal_T mshr_data[3000];
    creal_T msho_data[3000];
    real_T tff[4000];
  } f0;

  struct {
    struct0_T m;
  } f1;
} Masking_Olivier_globalStackData;

#endif                                 /*typedef_Masking_Olivier_globalStackData*/

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

/* End of code generation (Masking_Olivier_global_types.h) */
