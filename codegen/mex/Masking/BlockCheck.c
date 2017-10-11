/*
 * BlockCheck.c
 *
 * Code generation for function 'BlockCheck'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Masking.h"
#include "BlockCheck.h"
#include "AppFace2.h"
#include "Masking_data.h"

/* Variable Definitions */
static emlrtRTEInfo d_emlrtRTEI = { 18,/* lineNo */
  9,                                   /* colNo */
  "BlockCheck",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\BlockCheck.m"/* pName */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  45,                                  /* colNo */
  "wedges",                            /* aName */
  "BlockCheck",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\BlockCheck.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
real_T BlockCheck(const emlrtStack *sp, real_T bl, const real_T p_re[3])
{
  real_T flag;
  int32_T i3;
  real_T p[3];
  int32_T i;
  int32_T j;
  int32_T i4;
  int32_T i5;
  real_T dv1[12];

  /*  Checks if the penetration point belongs to some other block */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History: 2011.9.27 */
  /*  Updated by: Xuhong Li <xuhong@ftw.at> */
  /*  History: 2013.08.01 */
  for (i3 = 0; i3 < 3; i3++) {
    p[i3] = p_re[i3];
  }

  flag = -1.0;
  i3 = (int32_T)Nblock;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, Nblock, mxDOUBLE_CLASS, (int32_T)
    Nblock, &d_emlrtRTEI, sp);
  i = 0;
  while (i <= i3 - 1) {
    if (1.0 + (real_T)i != bl) {
      j = 0;
      while (j < 6) {
        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        /*              res = AppFace(p,f); */
        i4 = wedges->size[0];
        i5 = i + 1;
        if (!((i5 >= 1) && (i5 <= i4))) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &dc_emlrtBCI, sp);
        }

        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        for (i4 = 0; i4 < 4; i4++) {
          for (i5 = 0; i5 < 3; i5++) {
            dv1[i5 + 3 * i4] = wedges->data[((i + wedges->size[0] * j) +
              wedges->size[0] * wedges->size[1] * i4) + wedges->size[0] *
              wedges->size[1] * wedges->size[2] * i5];
          }
        }

        if (AppFace2(p, dv1) == 1.0) {
          flag = 1.0 + (real_T)i;
        }

        j++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /*  if (p(3) == 0) */
  /*      if (bl ~= 0) */
  /*          flag = 0; */
  /*      end */
  /*  end */
  return flag;
}

/* End of code generation (BlockCheck.c) */
