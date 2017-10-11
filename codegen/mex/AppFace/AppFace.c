/*
 * AppFace.c
 *
 * Code generation for function 'AppFace'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "AppFace.h"
#include "AppFace_data.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  6,                                   /* iLast */
  21,                                  /* lineNo */
  29,                                  /* colNo */
  "wedges",                            /* aName */
  "AppFace",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Start_RT_2\\AppFace.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 21,    /* lineNo */
  29,                                  /* colNo */
  "AppFace",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Start_RT_2\\AppFace.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  21,                                  /* colNo */
  "wedges",                            /* aName */
  "AppFace",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Start_RT_2\\AppFace.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 21,  /* lineNo */
  21,                                  /* colNo */
  "AppFace",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Start_RT_2\\AppFace.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  20,                                  /* lineNo */
  29,                                  /* colNo */
  "wedges",                            /* aName */
  "AppFace",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Start_RT_2\\AppFace.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 20,  /* lineNo */
  29,                                  /* colNo */
  "AppFace",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Start_RT_2\\AppFace.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  21,                                  /* colNo */
  "wedges",                            /* aName */
  "AppFace",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Start_RT_2\\AppFace.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 20,  /* lineNo */
  21,                                  /* colNo */
  "AppFace",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Start_RT_2\\AppFace.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  19,                                  /* lineNo */
  29,                                  /* colNo */
  "wedges",                            /* aName */
  "AppFace",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Start_RT_2\\AppFace.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 19,  /* lineNo */
  29,                                  /* colNo */
  "AppFace",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Start_RT_2\\AppFace.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  21,                                  /* colNo */
  "wedges",                            /* aName */
  "AppFace",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Start_RT_2\\AppFace.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 19,  /* lineNo */
  21,                                  /* colNo */
  "AppFace",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Start_RT_2\\AppFace.m",/* pName */
  1                                    /* checkKind */
};

/* Function Definitions */
real_T AppFace(const emlrtStack *sp, const real_T point_re[3], const real_T
               face[2])
{
  real_T appface;
  int32_T k;
  int32_T i1;
  real_T resu1;
  real_T resu2;
  real_T test1;
  real_T v[3];
  real_T VectP1;
  real_T VectP2;
  real_T VectP4[3];
  real_T b_VectP1[3];

  /*  Calculates if the point belongs to the face */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History:  2011.9.19 */
  /* p1(:,1) = wedges(face(1),face(2),1,:); */
  /* p2(:,1) = wedges(face(1),face(2),2,:); */
  /* p3(:,1) = wedges(face(1),face(2),4,:); */
  k = wedges->size[0];
  if (face[0] != (int32_T)muDoubleScalarFloor(face[0])) {
    emlrtIntegerCheckR2012b(face[0], &f_emlrtDCI, sp);
  }

  i1 = (int32_T)face[0];
  if (!((i1 >= 1) && (i1 <= k))) {
    emlrtDynamicBoundsCheckR2012b(i1, 1, k, &f_emlrtBCI, sp);
  }

  if (face[1] != (int32_T)muDoubleScalarFloor(face[1])) {
    emlrtIntegerCheckR2012b(face[1], &e_emlrtDCI, sp);
  }

  k = (int32_T)face[1];
  if (!((k >= 1) && (k <= 6))) {
    emlrtDynamicBoundsCheckR2012b(k, 1, 6, &e_emlrtBCI, sp);
  }

  k = wedges->size[0];
  if (face[0] != (int32_T)muDoubleScalarFloor(face[0])) {
    emlrtIntegerCheckR2012b(face[0], &d_emlrtDCI, sp);
  }

  i1 = (int32_T)face[0];
  if (!((i1 >= 1) && (i1 <= k))) {
    emlrtDynamicBoundsCheckR2012b(i1, 1, k, &d_emlrtBCI, sp);
  }

  if (face[1] != (int32_T)muDoubleScalarFloor(face[1])) {
    emlrtIntegerCheckR2012b(face[1], &c_emlrtDCI, sp);
  }

  k = (int32_T)face[1];
  if (!((k >= 1) && (k <= 6))) {
    emlrtDynamicBoundsCheckR2012b(k, 1, 6, &c_emlrtBCI, sp);
  }

  k = wedges->size[0];
  if (face[0] != (int32_T)muDoubleScalarFloor(face[0])) {
    emlrtIntegerCheckR2012b(face[0], &b_emlrtDCI, sp);
  }

  i1 = (int32_T)face[0];
  if (!((i1 >= 1) && (i1 <= k))) {
    emlrtDynamicBoundsCheckR2012b(i1, 1, k, &b_emlrtBCI, sp);
  }

  if (face[1] != (int32_T)muDoubleScalarFloor(face[1])) {
    emlrtIntegerCheckR2012b(face[1], &emlrtDCI, sp);
  }

  k = (int32_T)face[1];
  if (!((k >= 1) && (k <= 6))) {
    emlrtDynamicBoundsCheckR2012b(k, 1, 6, &emlrtBCI, sp);
  }

  /* u(:,1) = wedges(face(1),face(2),2,:) - wedges(face(1),face(2),1,:); */
  /* v(:,1) = wedges(face(1),face(2),4,:) - wedges(face(1),face(2),1,:); */
  /* resu1 = dot(VectP1,u); */
  /* resu2 = dot(VectP2,u); */
  resu1 = 0.0;
  resu2 = 0.0;
  for (k = 0; k < 3; k++) {
    test1 = wedges->data[((((int32_T)face[0] + wedges->size[0] * ((int32_T)face
      [1] - 1)) + wedges->size[0] * wedges->size[1]) + wedges->size[0] *
                          wedges->size[1] * wedges->size[2] * k) - 1] -
      wedges->data[(((int32_T)face[0] + wedges->size[0] * ((int32_T)face[1] - 1))
                    + wedges->size[0] * wedges->size[1] * wedges->size[2] * k) -
      1];
    v[k] = wedges->data[((((int32_T)face[0] + wedges->size[0] * ((int32_T)face[1]
      - 1)) + wedges->size[0] * wedges->size[1] * 3) + wedges->size[0] *
                         wedges->size[1] * wedges->size[2] * k) - 1] -
      wedges->data[(((int32_T)face[0] + wedges->size[0] * ((int32_T)face[1] - 1))
                    + wedges->size[0] * wedges->size[1] * wedges->size[2] * k) -
      1];
    VectP1 = wedges->data[(((int32_T)face[0] + wedges->size[0] * ((int32_T)face
      [1] - 1)) + wedges->size[0] * wedges->size[1] * wedges->size[2] * k) - 1]
      - point_re[k];
    VectP2 = wedges->data[((((int32_T)face[0] + wedges->size[0] * ((int32_T)
      face[1] - 1)) + wedges->size[0] * wedges->size[1]) + wedges->size[0] *
      wedges->size[1] * wedges->size[2] * k) - 1] - point_re[k];
    VectP4[k] = wedges->data[((((int32_T)face[0] + wedges->size[0] * ((int32_T)
      face[1] - 1)) + wedges->size[0] * wedges->size[1] * 3) + wedges->size[0] *
      wedges->size[1] * wedges->size[2] * k) - 1] - point_re[k];
    resu1 += VectP1 * test1;
    resu2 += VectP2 * test1;
    b_VectP1[k] = VectP1;
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
       ((((wedges->data[((((int32_T)face[0] + wedges->size[0] * ((int32_T)face[1]
    - 1)) + wedges->size[0] * wedges->size[1]) + wedges->size[0] * wedges->size
                         [1] * wedges->size[2]) - 1] - wedges->data[(((int32_T)
             face[0] + wedges->size[0] * ((int32_T)face[1] - 1)) + wedges->size
            [0] * wedges->size[1] * wedges->size[2]) - 1]) * (wedges->data
           [((((int32_T)face[0] + wedges->size[0] * ((int32_T)face[1] - 1)) +
              wedges->size[0] * wedges->size[1] * 3) + (wedges->size[0] *
             wedges->size[1] * wedges->size[2] << 1)) - 1] - wedges->data
           [(((int32_T)face[0] + wedges->size[0] * ((int32_T)face[1] - 1)) +
             (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1)) - 1]) -
          (wedges->data[((((int32_T)face[0] + wedges->size[0] * ((int32_T)face[1]
    - 1)) + wedges->size[0] * wedges->size[1] * 3) + wedges->size[0] *
                         wedges->size[1] * wedges->size[2]) - 1] - wedges->data
           [(((int32_T)face[0] + wedges->size[0] * ((int32_T)face[1] - 1)) +
             wedges->size[0] * wedges->size[1] * wedges->size[2]) - 1]) *
          (wedges->data[((((int32_T)face[0] + wedges->size[0] * ((int32_T)face[1]
    - 1)) + wedges->size[0] * wedges->size[1]) + (wedges->size[0] * wedges->
             size[1] * wedges->size[2] << 1)) - 1] - wedges->data[(((int32_T)
             face[0] + wedges->size[0] * ((int32_T)face[1] - 1)) + (wedges->
             size[0] * wedges->size[1] * wedges->size[2] << 1)) - 1])) *
         (point_re[0] - wedges->data[((int32_T)face[0] + wedges->size[0] *
           ((int32_T)face[1] - 1)) - 1]) + ((wedges->data[((((int32_T)face[0] +
              wedges->size[0] * ((int32_T)face[1] - 1)) + wedges->size[0] *
             wedges->size[1]) + (wedges->size[0] * wedges->size[1] *
             wedges->size[2] << 1)) - 1] - wedges->data[(((int32_T)face[0] +
             wedges->size[0] * ((int32_T)face[1] - 1)) + (wedges->size[0] *
             wedges->size[1] * wedges->size[2] << 1)) - 1]) * (wedges->data
           [(((int32_T)face[0] + wedges->size[0] * ((int32_T)face[1] - 1)) +
             wedges->size[0] * wedges->size[1] * 3) - 1] - wedges->data
           [((int32_T)face[0] + wedges->size[0] * ((int32_T)face[1] - 1)) - 1])
          - (wedges->data[((((int32_T)face[0] + wedges->size[0] * ((int32_T)
               face[1] - 1)) + wedges->size[0] * wedges->size[1] * 3) +
            (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1)) - 1] -
             wedges->data[(((int32_T)face[0] + wedges->size[0] * ((int32_T)face
              [1] - 1)) + (wedges->size[0] * wedges->size[1] * wedges->size[2] <<
             1)) - 1]) * (wedges->data[(((int32_T)face[0] + wedges->size[0] *
             ((int32_T)face[1] - 1)) + wedges->size[0] * wedges->size[1]) - 1] -
           wedges->data[((int32_T)face[0] + wedges->size[0] * ((int32_T)face[1]
             - 1)) - 1])) * (point_re[1] - wedges->data[(((int32_T)face[0] +
            wedges->size[0] * ((int32_T)face[1] - 1)) + wedges->size[0] *
           wedges->size[1] * wedges->size[2]) - 1])) + ((wedges->data[(((int32_T)
            face[0] + wedges->size[0] * ((int32_T)face[1] - 1)) + wedges->size[0]
           * wedges->size[1]) - 1] - wedges->data[((int32_T)face[0] +
           wedges->size[0] * ((int32_T)face[1] - 1)) - 1]) * (wedges->data
          [((((int32_T)face[0] + wedges->size[0] * ((int32_T)face[1] - 1)) +
             wedges->size[0] * wedges->size[1] * 3) + wedges->size[0] *
            wedges->size[1] * wedges->size[2]) - 1] - wedges->data[(((int32_T)
            face[0] + wedges->size[0] * ((int32_T)face[1] - 1)) + wedges->size[0]
           * wedges->size[1] * wedges->size[2]) - 1]) - (wedges->data[(((int32_T)
            face[0] + wedges->size[0] * ((int32_T)face[1] - 1)) + wedges->size[0]
           * wedges->size[1] * 3) - 1] - wedges->data[((int32_T)face[0] +
           wedges->size[0] * ((int32_T)face[1] - 1)) - 1]) * (wedges->data
          [((((int32_T)face[0] + wedges->size[0] * ((int32_T)face[1] - 1)) +
             wedges->size[0] * wedges->size[1]) + wedges->size[0] * wedges->
            size[1] * wedges->size[2]) - 1] - wedges->data[(((int32_T)face[0] +
            wedges->size[0] * ((int32_T)face[1] - 1)) + wedges->size[0] *
           wedges->size[1] * wedges->size[2]) - 1])) * (point_re[2] -
         wedges->data[(((int32_T)face[0] + wedges->size[0] * ((int32_T)face[1] -
            1)) + (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1)) -
         1])) <= 1.0E-8)) {
    appface = 1.0;
  } else {
    appface = 0.0;
  }

  return appface;
}

/* End of code generation (AppFace.c) */
