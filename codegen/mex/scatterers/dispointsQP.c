/*
 * dispointsQP.c
 *
 * Code generation for function 'dispointsQP'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "scatterers.h"
#include "dispointsQP.h"
#include "scatterers_emxutil.h"
#include "error.h"
#include "norm.h"
#include "nullAssignment.h"
#include "scatterers_data.h"

/* Variable Definitions */
static emlrtRSInfo b_emlrtRSI = { 18,  /* lineNo */
  "dispointsQP",                       /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 21,  /* lineNo */
  "dispointsQP",                       /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 22,  /* lineNo */
  "dispointsQP",                       /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 43,  /* lineNo */
  "dispointsQP",                       /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 65,  /* lineNo */
  "dispointsQP",                       /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 66,  /* lineNo */
  "dispointsQP",                       /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 105, /* lineNo */
  "dispointsQP",                       /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 12,  /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRTEInfo e_emlrtRTEI = { 1, /* lineNo */
  36,                                  /* colNo */
  "dispointsQP",                       /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  30,                                  /* colNo */
  "wedges",                            /* aName */
  "dispointsQP",                       /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  23,                                  /* colNo */
  "vnfaces",                           /* aName */
  "dispointsQP",                       /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  21,                                  /* colNo */
  "wedges",                            /* aName */
  "dispointsQP",                       /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  21,                                  /* colNo */
  "wedges",                            /* aName */
  "dispointsQP",                       /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  21,                                  /* colNo */
  "wedges",                            /* aName */
  "dispointsQP",                       /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  21,                                  /* colNo */
  "wedges",                            /* aName */
  "dispointsQP",                       /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "dispointsQP",                       /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  41,                                  /* colNo */
  "wedges",                            /* aName */
  "dispointsQP",                       /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  57,                                  /* colNo */
  "wedges",                            /* aName */
  "dispointsQP",                       /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  73,                                  /* colNo */
  "wedges",                            /* aName */
  "dispointsQP",                       /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo i_emlrtRTEI = { 70,/* lineNo */
  17,                                  /* colNo */
  "dispointsQP",                       /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m"/* pName */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  24,                                  /* colNo */
  "points",                            /* aName */
  "dispointsQP",                       /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  12,                                  /* colNo */
  "points",                            /* aName */
  "dispointsQP",                       /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dispointsQP.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void dispointsQP(const emlrtStack *sp, real_T b, real_T f, const real_T op[3],
                 emxArray_real_T *points, real_T *number, emxArray_real_T *space)
{
  real_T area_temp;
  int32_T aa;
  int32_T i;
  int32_T ixstart;
  real_T x;
  real_T v[3];
  real_T y;
  real_T area;
  real_T radi;
  int32_T number_sub;
  real_T normal[3];
  real_T b_x[3];
  real_T c_x[3];
  real_T d_x[3];
  real_T e_x[3];
  real_T varargin_1[12];
  boolean_T exitg1;
  real_T center[3];
  real_T r;
  real_T k[3];
  real_T spacelimit[6];
  real_T b_center[3];
  real_T b_varargin_1[4];
  real_T c_center[3];
  real_T n;
  real_T b_i;
  real_T theta;
  real_T angle;
  int32_T tmp_size[2];
  real_T d0;
  int32_T tmp_data[10000];
  real_T vrot[3];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*  Generates quasi randomly distributed scattering tiles without overlapping on each surface */
  /*   */
  /*  Authors: Xuhong Li <xuhong@ftw.at> */
  /*   */
  /*  History: 2013.10.01 */
  area_temp = 0.0;

  /*  Based on far-field condition, decide a proper tile size */
  aa = 0;
  while (aa < 4) {
    i = wedges->size[0];
    ixstart = (int32_T)b;
    if (!((ixstart >= 1) && (ixstart <= i))) {
      emlrtDynamicBoundsCheckR2012b(ixstart, 1, i, &emlrtBCI, sp);
    }

    for (i = 0; i < 3; i++) {
      y = wedges->data[(((ixstart + wedges->size[0] * ((int32_T)f - 1)) +
                         wedges->size[0] * wedges->size[1] * aa) + wedges->size
                        [0] * wedges->size[1] * wedges->size[2] * i) - 1];
      v[i] = op[i] - y;
    }

    x = norm(v) * lambda / 2.0;
    st.site = &b_emlrtRSI;
    if (x < 0.0) {
      b_st.site = &i_emlrtRSI;
      error(&b_st);
    }

    area_temp += muDoubleScalarSqrt(x);
    aa++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  area_temp /= 8.0;
  st.site = &c_emlrtRSI;
  area = 3.1415926535897931 * (area_temp * area_temp);
  x = area / 3.1415926535897931;
  st.site = &d_emlrtRSI;
  radi = 2.0 * muDoubleScalarSqrt(x);

  /*  assume the area is circular */
  number_sub = 0;

  /*  number of scatterers on this surface */
  i = vnfaces->size[0];
  ixstart = (int32_T)b;
  if (!((ixstart >= 1) && (ixstart <= i))) {
    emlrtDynamicBoundsCheckR2012b(ixstart, 1, i, &b_emlrtBCI, sp);
  }

  for (i = 0; i < 3; i++) {
    normal[i] = vnfaces->data[((ixstart + vnfaces->size[0] * ((int32_T)f - 1)) +
      vnfaces->size[0] * vnfaces->size[1] * i) - 1];
  }

  i = points->size[0] * points->size[1];
  points->size[0] = 10000;
  points->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)points, i, sizeof(real_T),
                    &e_emlrtRTEI);
  for (i = 0; i < 30000; i++) {
    points->data[i] = 0.0;
  }

  i = space->size[0];
  space->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)space, i, sizeof(real_T),
                    &e_emlrtRTEI);
  space->data[0] = 0.0;
  i = wedges->size[0];
  ixstart = (int32_T)b;
  if (!((ixstart >= 1) && (ixstart <= i))) {
    emlrtDynamicBoundsCheckR2012b(ixstart, 1, i, &c_emlrtBCI, sp);
  }

  for (i = 0; i < 3; i++) {
    b_x[i] = wedges->data[((ixstart + wedges->size[0] * ((int32_T)f - 1)) +
      wedges->size[0] * wedges->size[1] * wedges->size[2] * i) - 1];
  }

  i = wedges->size[0];
  ixstart = (int32_T)b;
  if (!((ixstart >= 1) && (ixstart <= i))) {
    emlrtDynamicBoundsCheckR2012b(ixstart, 1, i, &d_emlrtBCI, sp);
  }

  for (i = 0; i < 3; i++) {
    c_x[i] = wedges->data[(((ixstart + wedges->size[0] * ((int32_T)f - 1)) +
      wedges->size[0] * wedges->size[1]) + wedges->size[0] * wedges->size[1] *
      wedges->size[2] * i) - 1];
  }

  i = wedges->size[0];
  ixstart = (int32_T)b;
  if (!((ixstart >= 1) && (ixstart <= i))) {
    emlrtDynamicBoundsCheckR2012b(ixstart, 1, i, &e_emlrtBCI, sp);
  }

  for (i = 0; i < 3; i++) {
    d_x[i] = wedges->data[(((ixstart + wedges->size[0] * ((int32_T)f - 1)) +
      (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] * wedges->
      size[1] * wedges->size[2] * i) - 1];
  }

  i = wedges->size[0];
  ixstart = (int32_T)b;
  if (!((ixstart >= 1) && (ixstart <= i))) {
    emlrtDynamicBoundsCheckR2012b(ixstart, 1, i, &f_emlrtBCI, sp);
  }

  for (i = 0; i < 3; i++) {
    e_x[i] = wedges->data[(((ixstart + wedges->size[0] * ((int32_T)f - 1)) +
      wedges->size[0] * wedges->size[1] * 3) + wedges->size[0] * wedges->size[1]
      * wedges->size[2] * i) - 1];
    varargin_1[i] = wedges->data[(((int32_T)b + wedges->size[0] * ((int32_T)f -
      1)) + wedges->size[0] * wedges->size[1] * wedges->size[2] * i) - 1];
    varargin_1[3 + i] = wedges->data[((((int32_T)b + wedges->size[0] * ((int32_T)
      f - 1)) + wedges->size[0] * wedges->size[1]) + wedges->size[0] *
      wedges->size[1] * wedges->size[2] * i) - 1];
    varargin_1[6 + i] = wedges->data[((((int32_T)b + wedges->size[0] * ((int32_T)
      f - 1)) + (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
      wedges->size[1] * wedges->size[2] * i) - 1];
    varargin_1[9 + i] = wedges->data[((((int32_T)b + wedges->size[0] * ((int32_T)
      f - 1)) + wedges->size[0] * wedges->size[1] * 3) + wedges->size[0] *
      wedges->size[1] * wedges->size[2] * i) - 1];
  }

  for (aa = 0; aa < 3; aa++) {
    ixstart = aa;
    area_temp = varargin_1[aa];
    if (muDoubleScalarIsNaN(varargin_1[aa])) {
      i = aa + 3;
      exitg1 = false;
      while ((!exitg1) && (i + 1 <= aa + 10)) {
        ixstart = i;
        if (!muDoubleScalarIsNaN(varargin_1[i])) {
          area_temp = varargin_1[i];
          exitg1 = true;
        } else {
          i += 3;
        }
      }
    }

    if (ixstart + 1 < aa + 10) {
      for (i = ixstart + 3; i + 1 <= aa + 10; i += 3) {
        if (varargin_1[i] < area_temp) {
          area_temp = varargin_1[i];
        }
      }
    }

    center[aa] = area_temp;
  }

  for (i = 0; i < 3; i++) {
    varargin_1[i] = wedges->data[(((int32_T)b + wedges->size[0] * ((int32_T)f -
      1)) + wedges->size[0] * wedges->size[1] * wedges->size[2] * i) - 1];
    varargin_1[3 + i] = wedges->data[((((int32_T)b + wedges->size[0] * ((int32_T)
      f - 1)) + wedges->size[0] * wedges->size[1]) + wedges->size[0] *
      wedges->size[1] * wedges->size[2] * i) - 1];
    varargin_1[6 + i] = wedges->data[((((int32_T)b + wedges->size[0] * ((int32_T)
      f - 1)) + (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
      wedges->size[1] * wedges->size[2] * i) - 1];
    varargin_1[9 + i] = wedges->data[((((int32_T)b + wedges->size[0] * ((int32_T)
      f - 1)) + wedges->size[0] * wedges->size[1] * 3) + wedges->size[0] *
      wedges->size[1] * wedges->size[2] * i) - 1];
  }

  for (aa = 0; aa < 3; aa++) {
    ixstart = aa;
    area_temp = varargin_1[aa];
    if (muDoubleScalarIsNaN(varargin_1[aa])) {
      i = aa + 3;
      exitg1 = false;
      while ((!exitg1) && (i + 1 <= aa + 10)) {
        ixstart = i;
        if (!muDoubleScalarIsNaN(varargin_1[i])) {
          area_temp = varargin_1[i];
          exitg1 = true;
        } else {
          i += 3;
        }
      }
    }

    if (ixstart + 1 < aa + 10) {
      for (i = ixstart + 3; i + 1 <= aa + 10; i += 3) {
        if (varargin_1[i] > area_temp) {
          area_temp = varargin_1[i];
        }
      }
    }

    k[aa] = area_temp;
    spacelimit[aa] = center[aa];
    spacelimit[3 + aa] = k[aa];
  }

  /*  center = op; */
  /*  a = 1; */
  /*  while (center == op) */
  /*      fprintf('   [%d %d %d] \n',b,f,a); */
  st.site = &e_emlrtRSI;
  emlrtRandu(&r, 1);
  st.site = &e_emlrtRSI;
  emlrtRandu(&area_temp, 1);

  /*      a = a+1; [op center] */
  /*  end */
  for (i = 0; i < 3; i++) {
    y = (wedges->data[(((int32_T)b + wedges->size[0] * ((int32_T)f - 1)) +
                       wedges->size[0] * wedges->size[1] * wedges->size[2] * i)
         - 1] + (wedges->data[((((int32_T)b + wedges->size[0] * ((int32_T)f - 1))
            + wedges->size[0] * wedges->size[1]) + wedges->size[0] *
           wedges->size[1] * wedges->size[2] * i) - 1] - wedges->data[(((int32_T)
            b + wedges->size[0] * ((int32_T)f - 1)) + wedges->size[0] *
           wedges->size[1] * wedges->size[2] * i) - 1]) * r) + (wedges->data
      [((((int32_T)b + wedges->size[0] * ((int32_T)f - 1)) + wedges->size[0] *
         wedges->size[1] * 3) + wedges->size[0] * wedges->size[1] * wedges->
        size[2] * i) - 1] - wedges->data[(((int32_T)b + wedges->size[0] *
      ((int32_T)f - 1)) + wedges->size[0] * wedges->size[1] * wedges->size[2] *
      i) - 1]) * area_temp;
    b_center[i] = y - wedges->data[(((int32_T)b + wedges->size[0] * ((int32_T)f
      - 1)) + wedges->size[0] * wedges->size[1] * wedges->size[2] * i) - 1];
    v[i] = y - wedges->data[((((int32_T)b + wedges->size[0] * ((int32_T)f - 1))
      + wedges->size[0] * wedges->size[1]) + wedges->size[0] * wedges->size[1] *
      wedges->size[2] * i) - 1];
    k[i] = y - wedges->data[((((int32_T)b + wedges->size[0] * ((int32_T)f - 1))
      + (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
      wedges->size[1] * wedges->size[2] * i) - 1];
    c_center[i] = y - wedges->data[((((int32_T)b + wedges->size[0] * ((int32_T)f
      - 1)) + wedges->size[0] * wedges->size[1] * 3) + wedges->size[0] *
      wedges->size[1] * wedges->size[2] * i) - 1];
    center[i] = y;
  }

  area_temp = norm(b_center);
  b_varargin_1[0] = norm(b_center);
  b_varargin_1[1] = norm(v);
  b_varargin_1[2] = norm(k);
  b_varargin_1[3] = norm(c_center);
  ixstart = 1;
  if (muDoubleScalarIsNaN(area_temp)) {
    i = 2;
    exitg1 = false;
    while ((!exitg1) && (i < 5)) {
      ixstart = i;
      if (!muDoubleScalarIsNaN(b_varargin_1[i - 1])) {
        area_temp = b_varargin_1[i - 1];
        exitg1 = true;
      } else {
        i++;
      }
    }
  }

  if (ixstart < 4) {
    while (ixstart + 1 < 5) {
      if (b_varargin_1[ixstart] > area_temp) {
        area_temp = b_varargin_1[ixstart];
      }

      ixstart++;
    }
  }

  n = muDoubleScalarFloor(area_temp / radi);

  /*  number of number of concentric circles */
  if ((n == 0.0) || (n == 1.0)) {
    i = wedges->size[0];
    aa = (int32_T)b;
    if (!((aa >= 1) && (aa <= i))) {
      emlrtDynamicBoundsCheckR2012b(aa, 1, i, &g_emlrtBCI, sp);
    }

    i = wedges->size[0];
    aa = (int32_T)b;
    if (!((aa >= 1) && (aa <= i))) {
      emlrtDynamicBoundsCheckR2012b(aa, 1, i, &h_emlrtBCI, sp);
    }

    i = wedges->size[0];
    aa = (int32_T)b;
    if (!((aa >= 1) && (aa <= i))) {
      emlrtDynamicBoundsCheckR2012b(aa, 1, i, &i_emlrtBCI, sp);
    }

    i = wedges->size[0];
    aa = (int32_T)b;
    if (!((aa >= 1) && (aa <= i))) {
      emlrtDynamicBoundsCheckR2012b(aa, 1, i, &j_emlrtBCI, sp);
    }

    i = points->size[0] * points->size[1];
    points->size[0] = 1;
    points->size[1] = 3;
    emxEnsureCapacity(sp, (emxArray__common *)points, i, sizeof(real_T),
                      &e_emlrtRTEI);
    for (i = 0; i < 3; i++) {
      points->data[points->size[0] * i] = (((wedges->data[(((int32_T)b +
        wedges->size[0] * ((int32_T)f - 1)) + wedges->size[0] * wedges->size[1] *
        wedges->size[2] * i) - 1] + wedges->data[((((int32_T)b + wedges->size[0]
        * ((int32_T)f - 1)) + wedges->size[0] * wedges->size[1]) + wedges->size
        [0] * wedges->size[1] * wedges->size[2] * i) - 1]) + wedges->data
        [((((int32_T)b + wedges->size[0] * ((int32_T)f - 1)) + (wedges->size[0] *
        wedges->size[1] << 1)) + wedges->size[0] * wedges->size[1] *
          wedges->size[2] * i) - 1]) + wedges->data[((((int32_T)b + wedges->
        size[0] * ((int32_T)f - 1)) + wedges->size[0] * wedges->size[1] * 3) +
        wedges->size[0] * wedges->size[1] * wedges->size[2] * i) - 1]) / 4.0;
    }

    number_sub = 1;
  } else {
    if (n > 1.0) {
      number_sub = 1;
      b_i = 1.0;
      while (b_i <= n) {
        /*  loop for each circle */
        st.site = &f_emlrtRSI;
        emlrtRandu(&r, 1);
        theta = r * 2.0 * 3.1415926535897931;

        /*  random start angle */
        st.site = &g_emlrtRSI;
        angle = 2.0 * muDoubleScalarAsin(1.0 / (2.0 * b_i));

        /*  angle resolution */
        y = 6.2831853071795862 / angle;
        d0 = muDoubleScalarCeil(y) - 1.0;
        emlrtForLoopVectorCheckR2012b(0.0, 1.0, muDoubleScalarCeil(y) - 1.0,
          mxDOUBLE_CLASS, (int32_T)(d0 + 1.0), &i_emlrtRTEI, sp);
        aa = 0;
        while (aa <= (int32_T)(d0 + 1.0) - 1) {
          area_temp = theta + (real_T)aa * angle;
          y = norm(normal);
          for (i = 0; i < 3; i++) {
            k[i] = normal[i] / y;
            v[i] = b_x[i] - center[i];
          }

          y = norm(v);
          x = muDoubleScalarCos(area_temp);
          for (i = 0; i < 3; i++) {
            r = center[i] + (b_x[i] - center[i]) / y * radi * b_i;
            c_center[i] = r - center[i];
            v[i] = r;
          }

          area_temp = muDoubleScalarSin(area_temp);
          vrot[0] = (center[0] + (v[0] - center[0]) * x) + (k[1] * c_center[2] -
            k[2] * c_center[1]) * area_temp;
          vrot[1] = (center[1] + (v[1] - center[1]) * x) + (k[2] * c_center[0] -
            k[0] * c_center[2]) * area_temp;
          vrot[2] = (center[2] + (v[2] - center[2]) * x) + (k[0] * c_center[1] -
            k[1] * c_center[0]) * area_temp;

          /*  Rodrigues' rotation formula */
          if ((vrot[0] < spacelimit[3]) && (vrot[0] > spacelimit[0]) && (vrot[1]
               < spacelimit[4]) && (vrot[1] > spacelimit[1]) && (vrot[2] <
               spacelimit[5]) && (vrot[2] > spacelimit[2])) {
            number_sub++;
            i = number_sub - 1;
            if (!((i >= 1) && (i <= 10000))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, 10000, &k_emlrtBCI, sp);
            }

            for (i = 0; i < 3; i++) {
              points->data[(number_sub + points->size[0] * i) - 2] = vrot[i];
            }
          }

          aa++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        b_i++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      if (!((number_sub >= 1) && (number_sub <= 10000))) {
        emlrtDynamicBoundsCheckR2012b(number_sub, 1, 10000, &l_emlrtBCI, sp);
      }

      for (i = 0; i < 3; i++) {
        points->data[(number_sub + points->size[0] * i) - 1] = center[i];
      }

      /*  add 'center' as a scatterer */
    }
  }

  for (i = 0; i < 3; i++) {
    center[i] = d_x[i] - b_x[i];
    c_center[i] = e_x[i] - c_x[i];
  }

  b_center[0] = center[1] * c_center[2] - center[2] * c_center[1];
  b_center[1] = center[2] * c_center[0] - center[0] * c_center[2];
  b_center[2] = center[0] * c_center[1] - center[1] * c_center[0];
  area_temp = (real_T)number_sub * area / norm(b_center) * 2.0;

  /* (sqrt(line(1)^2+line(2)^2)*line(3));%(line(1)*line(2)); % compare the sum of tile size with the surface area */
  if (area_temp <= 1.0) {
    /*   if the ratio 'temp <= 1', then use default area size */
    i = space->size[0];
    space->size[0] = number_sub;
    emxEnsureCapacity(sp, (emxArray__common *)space, i, sizeof(real_T),
                      &e_emlrtRTEI);
    for (i = 0; i < number_sub; i++) {
      space->data[i] = area;
    }

    /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
    /* %%%%%  force the area ratio = 1  %%%%%%% */
    /*      Npe_area = Npe_area+1;            % */
    /*      pe_area(Npe_area) = 1;            % */
    /*      Area = line(1)*line(2)/number;    % */
    /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  } else {
    if (area_temp > 1.0) {
      /*   otherwise, use averaged area size */
      for (i = 0; i < 3; i++) {
        center[i] = d_x[i] - b_x[i];
        c_center[i] = e_x[i] - c_x[i];
      }

      b_center[0] = center[1] * c_center[2] - center[2] * c_center[1];
      b_center[1] = center[2] * c_center[0] - center[0] * c_center[2];
      b_center[2] = center[0] * c_center[1] - center[1] * c_center[0];
      y = norm(b_center) / 2.0 / (real_T)number_sub;
      i = space->size[0];
      space->size[0] = number_sub;
      emxEnsureCapacity(sp, (emxArray__common *)space, i, sizeof(real_T),
                        &e_emlrtRTEI);
      for (i = 0; i < number_sub; i++) {
        space->data[i] = y;
      }

      /* (line(1)*line(2)/number); */
    }
  }

  i = points->size[0];
  tmp_size[0] = 1;
  tmp_size[1] = i - number_sub;
  aa = i - number_sub;
  for (i = 0; i < aa; i++) {
    tmp_data[i] = (number_sub + i) + 1;
  }

  st.site = &h_emlrtRSI;
  nullAssignment(&st, points, tmp_data, tmp_size);
  *number = number_sub;
}

/* End of code generation (dispointsQP.c) */
