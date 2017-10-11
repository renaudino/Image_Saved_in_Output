/*
 * AppGround.c
 *
 * Code generation for function 'AppGround'
 *
 * C source code generated on: Fri Dec 20 16:13:08 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "AppGround.h"
#include "AppGround_data.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 14, "AppGround",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppGround.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 12, 1, "AppGround",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppGround.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 19, 21, "wedges", "AppFace",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppFace.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 20, 21, "wedges", "AppFace",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppFace.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 21, 21, "wedges", "AppFace",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppFace.m",
  0 };

/* Function Declarations */

/* Function Definitions */
real_T AppGround(const real_T gpoint[3])
{
  real_T appground;
  int32_T i1;
  int32_T i;
  boolean_T exitg1;
  real_T point[3];
  int32_T appface;
  int32_T i2;
  real_T p1[3];
  real_T p2[3];
  real_T p3[3];
  real_T resu1;
  real_T resu2;
  real_T v[3];
  real_T VectP4[3];
  real_T test1;
  real_T u;
  real_T VectP1;
  real_T b_VectP1[3];

  /*  Calculates if the point belongs to the ground */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History:  2011.9.19 */
  appground = 1.0;
  i1 = (int32_T)Nblock;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, Nblock, mxDOUBLE_CLASS, (int32_T)
    Nblock, &c_emlrtRTEI, emlrtRootTLSGlobal);
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i <= i1 - 1)) {
    emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);

    /*  Calculates if the point belongs to the face */
    /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
    /*  History:  2011.9.19 */
    for (appface = 0; appface < 3; appface++) {
      point[appface] = gpoint[appface];
    }

    /* p1(:,1) = wedges(face(1),face(2),1,:); */
    /* p2(:,1) = wedges(face(1),face(2),2,:); */
    /* p3(:,1) = wedges(face(1),face(2),4,:); */
    appface = wedges->size[0];
    i2 = (int32_T)(1.0 + (real_T)i);
    emlrtDynamicBoundsCheckFastR2012b(i2, 1, appface, &emlrtBCI,
      emlrtRootTLSGlobal);
    for (appface = 0; appface < 3; appface++) {
      p1[appface] = wedges->data[(((int32_T)(1.0 + (real_T)i) + (wedges->size[0]
        << 2)) + wedges->size[0] * wedges->size[1] * wedges->size[2] * appface)
        - 1];
    }

    appface = wedges->size[0];
    i2 = (int32_T)(1.0 + (real_T)i);
    emlrtDynamicBoundsCheckFastR2012b(i2, 1, appface, &b_emlrtBCI,
      emlrtRootTLSGlobal);
    for (appface = 0; appface < 3; appface++) {
      p2[appface] = wedges->data[((((int32_T)(1.0 + (real_T)i) + (wedges->size[0]
        << 2)) + wedges->size[0] * wedges->size[1]) + wedges->size[0] *
        wedges->size[1] * wedges->size[2] * appface) - 1];
    }

    appface = wedges->size[0];
    i2 = (int32_T)(1.0 + (real_T)i);
    emlrtDynamicBoundsCheckFastR2012b(i2, 1, appface, &c_emlrtBCI,
      emlrtRootTLSGlobal);

    /* resu1 = dot(VectP1,u); */
    /* resu2 = dot(VectP2,u); */
    resu1 = 0.0;
    resu2 = 0.0;
    for (appface = 0; appface < 3; appface++) {
      test1 = wedges->data[((((int32_T)(1.0 + (real_T)i) + (wedges->size[0] << 2))
        + wedges->size[0] * wedges->size[1] * 3) + wedges->size[0] *
                            wedges->size[1] * wedges->size[2] * appface) - 1];

      /* u(:,1) = wedges(face(1),face(2),2,:) - wedges(face(1),face(2),1,:); */
      /* v(:,1) = wedges(face(1),face(2),4,:) - wedges(face(1),face(2),1,:); */
      u = p2[appface] - p1[appface];
      v[appface] = test1 - p1[appface];
      VectP1 = p1[appface] - point[appface];
      VectP4[appface] = test1 - point[appface];
      resu1 += VectP1 * u;
      resu2 += (p2[appface] - point[appface]) * u;
      b_VectP1[appface] = VectP1;
      p3[appface] = test1;
    }

    test1 = resu1 * resu2;

    /* resu1 = dot(VectP1,v); */
    /* resu2 = dot(VectP4,v); */
    resu1 = 0.0;
    resu2 = 0.0;
    for (appface = 0; appface < 3; appface++) {
      resu1 += b_VectP1[appface] * v[appface];
      resu2 += VectP4[appface] * v[appface];
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

    emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
    if (appface == 1) {
      appground = 0.0;
      exitg1 = TRUE;
    } else {
      i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }
  }

  return appground;
}

/* End of code generation (AppGround.c) */
