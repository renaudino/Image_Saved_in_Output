/*
 * AppGround.c
 *
 * Code generation for function 'AppGround'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PointsImagesm.h"
#include "AppGround.h"
#include "PointsImagesm_data.h"

/* Variable Definitions */
static emlrtRSInfo d_emlrtRSI = { 14, "AppGround",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\AppGround.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 12, 1, "AppGround",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\AppGround.m"
};

/* Function Definitions */
real_T AppGround(const emlrtStack *sp, const real_T gpoint[3])
{
  real_T appground;
  int32_T i3;
  int32_T i;
  boolean_T exitg1;
  real_T point[3];
  int32_T k;
  int32_T i4;
  real_T p1[3];
  real_T p2[3];
  real_T resu1;
  real_T resu2;
  real_T p3[3];
  real_T v[3];
  real_T VectP1[3];
  real_T VectP4[3];
  real_T test1;
  real_T b_p3;
  real_T u;
  real_T b_VectP1;
  int32_T appface;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Calculates if the point belongs to the ground */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History:  2011.9.19 */
  appground = 1.0;
  i3 = (int32_T)Nblock;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, Nblock, mxDOUBLE_CLASS, (int32_T)
    Nblock, &d_emlrtRTEI, sp);
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i <= i3 - 1)) {
    st.site = &d_emlrtRSI;

    /*  Calculates if the point belongs to the face */
    /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
    /*  History:  2011.9.19 */
    for (k = 0; k < 3; k++) {
      point[k] = gpoint[k];
    }

    /* p1(:,1) = wedges(face(1),face(2),1,:); */
    /* p2(:,1) = wedges(face(1),face(2),2,:); */
    /* p3(:,1) = wedges(face(1),face(2),4,:); */
    k = wedges->size[0];
    i4 = i + 1;
    if (!((i4 >= 1) && (i4 <= k))) {
      emlrtDynamicBoundsCheckR2012b(i4, 1, k, &f_emlrtBCI, &st);
    }

    for (k = 0; k < 3; k++) {
      p1[k] = wedges->data[(i + (wedges->size[0] << 2)) + wedges->size[0] *
        wedges->size[1] * wedges->size[2] * k];
    }

    k = wedges->size[0];
    i4 = i + 1;
    if (!((i4 >= 1) && (i4 <= k))) {
      emlrtDynamicBoundsCheckR2012b(i4, 1, k, &d_emlrtBCI, &st);
    }

    for (k = 0; k < 3; k++) {
      p2[k] = wedges->data[((i + (wedges->size[0] << 2)) + wedges->size[0] *
                            wedges->size[1]) + wedges->size[0] * wedges->size[1]
        * wedges->size[2] * k];
    }

    k = wedges->size[0];
    i4 = i + 1;
    if (!((i4 >= 1) && (i4 <= k))) {
      emlrtDynamicBoundsCheckR2012b(i4, 1, k, &b_emlrtBCI, &st);
    }

    /* u(:,1) = wedges(face(1),face(2),2,:) - wedges(face(1),face(2),1,:); */
    /* v(:,1) = wedges(face(1),face(2),4,:) - wedges(face(1),face(2),1,:); */
    /* resu1 = dot(VectP1,u); */
    /* resu2 = dot(VectP2,u); */
    resu1 = 0.0;
    resu2 = 0.0;
    for (k = 0; k < 3; k++) {
      b_p3 = wedges->data[((i + (wedges->size[0] << 2)) + wedges->size[0] *
                           wedges->size[1] * 3) + wedges->size[0] * wedges->
        size[1] * wedges->size[2] * k];
      u = p2[k] - p1[k];
      v[k] = b_p3 - p1[k];
      b_VectP1 = p1[k] - point[k];
      VectP4[k] = b_p3 - point[k];
      resu1 += b_VectP1 * u;
      resu2 += (p2[k] - point[k]) * u;
      p3[k] = b_p3;
      VectP1[k] = b_VectP1;
    }

    test1 = resu1 * resu2;

    /* resu1 = dot(VectP1,v); */
    /* resu2 = dot(VectP4,v); */
    resu1 = 0.0;
    resu2 = 0.0;
    for (k = 0; k < 3; k++) {
      resu1 += VectP1[k] * v[k];
      resu2 += VectP4[k] * v[k];
    }

    if ((test1 <= 1.0E-10) && (resu1 * resu2 <= 1.0E-10) && (muDoubleScalarAbs
         ((((p2[1] - p1[1]) * (p3[2] - p1[2]) - (p3[1] - p1[1]) * (p2[2] - p1[2]))
           * (point[0] - p1[0]) + ((p2[2] - p1[2]) * (p3[0] - p1[0]) - (p3[2] -
             p1[2]) * (p2[0] - p1[0])) * (point[1] - p1[1])) + ((p2[0] - p1[0]) *
           (p3[1] - p1[1]) - (p3[0] - p1[0]) * (p2[1] - p1[1])) * (point[2] -
           p1[2])) <= 1.0E-8)) {
      appface = 1;
    } else {
      appface = 0;
    }

    if (appface == 1) {
      appground = 0.0;
      exitg1 = true;
    } else {
      i++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }
  }

  return appground;
}

/* End of code generation (AppGround.c) */
