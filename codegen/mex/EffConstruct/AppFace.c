/*
 * AppFace.c
 *
 * Code generation for function 'AppFace'
 *
 * C source code generated on: Fri Dec 20 16:15:35 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct.h"
#include "AppFace.h"
#include "EffConstruct_data.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtDCInfo r_emlrtDCI = { 19, 21, "AppFace",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppFace.m",
  1 };

static emlrtBCInfo if_emlrtBCI = { -1, -1, 19, 21, "wedges", "AppFace",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppFace.m",
  0 };

static emlrtDCInfo s_emlrtDCI = { 19, 29, "AppFace",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppFace.m",
  1 };

static emlrtBCInfo jf_emlrtBCI = { 1, 6, 19, 29, "wedges", "AppFace",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppFace.m",
  0 };

static emlrtDCInfo t_emlrtDCI = { 20, 21, "AppFace",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppFace.m",
  1 };

static emlrtBCInfo kf_emlrtBCI = { -1, -1, 20, 21, "wedges", "AppFace",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppFace.m",
  0 };

static emlrtDCInfo u_emlrtDCI = { 20, 29, "AppFace",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppFace.m",
  1 };

static emlrtBCInfo lf_emlrtBCI = { 1, 6, 20, 29, "wedges", "AppFace",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppFace.m",
  0 };

static emlrtDCInfo v_emlrtDCI = { 21, 21, "AppFace",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppFace.m",
  1 };

static emlrtBCInfo mf_emlrtBCI = { -1, -1, 21, 21, "wedges", "AppFace",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppFace.m",
  0 };

static emlrtDCInfo w_emlrtDCI = { 21, 29, "AppFace",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppFace.m",
  1 };

static emlrtBCInfo nf_emlrtBCI = { 1, 6, 21, 29, "wedges", "AppFace",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/AppFace.m",
  0 };

/* Function Declarations */

/* Function Definitions */
real_T AppFace(const real_T point_re[3], const real_T face[2])
{
  real_T appface;
  real_T point[3];
  int32_T k;
  int32_T i8;
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

  /*  Calculates if the point belongs to the face */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History:  2011.9.19 */
  for (k = 0; k < 3; k++) {
    point[k] = point_re[k];
  }

  /* p1(:,1) = wedges(face(1),face(2),1,:); */
  /* p2(:,1) = wedges(face(1),face(2),2,:); */
  /* p3(:,1) = wedges(face(1),face(2),4,:); */
  k = wedges->size[0];
  i8 = (int32_T)emlrtIntegerCheckFastR2012b(face[0], &r_emlrtDCI,
    emlrtRootTLSGlobal);
  emlrtDynamicBoundsCheckFastR2012b(i8, 1, k, &if_emlrtBCI, emlrtRootTLSGlobal);
  k = (int32_T)emlrtIntegerCheckFastR2012b(face[1], &s_emlrtDCI,
    emlrtRootTLSGlobal);
  emlrtDynamicBoundsCheckFastR2012b(k, 1, 6, &jf_emlrtBCI, emlrtRootTLSGlobal);
  for (k = 0; k < 3; k++) {
    p1[k] = wedges->data[(((int32_T)face[0] + wedges->size[0] * ((int32_T)face[1]
      - 1)) + wedges->size[0] * wedges->size[1] * wedges->size[2] * k) - 1];
  }

  k = wedges->size[0];
  i8 = (int32_T)emlrtIntegerCheckFastR2012b(face[0], &t_emlrtDCI,
    emlrtRootTLSGlobal);
  emlrtDynamicBoundsCheckFastR2012b(i8, 1, k, &kf_emlrtBCI, emlrtRootTLSGlobal);
  k = (int32_T)emlrtIntegerCheckFastR2012b(face[1], &u_emlrtDCI,
    emlrtRootTLSGlobal);
  emlrtDynamicBoundsCheckFastR2012b(k, 1, 6, &lf_emlrtBCI, emlrtRootTLSGlobal);
  for (k = 0; k < 3; k++) {
    p2[k] = wedges->data[((((int32_T)face[0] + wedges->size[0] * ((int32_T)face
      [1] - 1)) + wedges->size[0] * wedges->size[1]) + wedges->size[0] *
                          wedges->size[1] * wedges->size[2] * k) - 1];
  }

  k = wedges->size[0];
  i8 = (int32_T)emlrtIntegerCheckFastR2012b(face[0], &v_emlrtDCI,
    emlrtRootTLSGlobal);
  emlrtDynamicBoundsCheckFastR2012b(i8, 1, k, &mf_emlrtBCI, emlrtRootTLSGlobal);
  k = (int32_T)emlrtIntegerCheckFastR2012b(face[1], &w_emlrtDCI,
    emlrtRootTLSGlobal);
  emlrtDynamicBoundsCheckFastR2012b(k, 1, 6, &nf_emlrtBCI, emlrtRootTLSGlobal);

  /* resu1 = dot(VectP1,u); */
  /* resu2 = dot(VectP2,u); */
  resu1 = 0.0;
  resu2 = 0.0;
  for (k = 0; k < 3; k++) {
    test1 = wedges->data[((((int32_T)face[0] + wedges->size[0] * ((int32_T)face
      [1] - 1)) + wedges->size[0] * wedges->size[1] * 3) + wedges->size[0] *
                          wedges->size[1] * wedges->size[2] * k) - 1];

    /* u(:,1) = wedges(face(1),face(2),2,:) - wedges(face(1),face(2),1,:); */
    /* v(:,1) = wedges(face(1),face(2),4,:) - wedges(face(1),face(2),1,:); */
    u = p2[k] - p1[k];
    v[k] = test1 - p1[k];
    VectP1 = p1[k] - point[k];
    VectP4[k] = test1 - point[k];
    resu1 += VectP1 * u;
    resu2 += (p2[k] - point[k]) * u;
    b_VectP1[k] = VectP1;
    p3[k] = test1;
  }

  test1 = resu1 * resu2;

  /* resu1 = dot(VectP1,v); */
  /* resu2 = dot(VectP4,v); */
  resu1 = 0.0;
  resu2 = 0.0;
  for (k = 0; k < 3; k++) {
    resu1 += b_VectP1[k] * v[k];
    resu2 += VectP4[k] * v[k];
  }

  if ((test1 <= 1.0E-10) && (resu1 * resu2 <= 1.0E-10) && (muDoubleScalarAbs
       ((((p2[1] - p1[1]) * (p3[2] - p1[2]) - (p3[1] - p1[1]) * (p2[2] - p1[2]))
         * (point[0] - p1[0]) + ((p2[2] - p1[2]) * (p3[0] - p1[0]) - (p3[2] -
           p1[2]) * (p2[0] - p1[0])) * (point[1] - p1[1])) + ((p2[0] - p1[0]) *
         (p3[1] - p1[1]) - (p3[0] - p1[0]) * (p2[1] - p1[1])) * (point[2] - p1[2]))
       <= 1.0E-8)) {
    appface = 1.0;
  } else {
    appface = 0.0;
  }

  return appface;
}

/* End of code generation (AppFace.c) */
