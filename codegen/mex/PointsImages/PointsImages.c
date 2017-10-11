/*
 * PointsImages.c
 *
 * Code generation for function 'PointsImages'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PointsImages.h"
#include "norm.h"
#include "PointsImages_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 73,    /* lineNo */
  "PointsImages",                      /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m"/* pathName */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  6,                                   /* iLast */
  28,                                  /* lineNo */
  37,                                  /* colNo */
  "wedges",                            /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 28,    /* lineNo */
  37,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  29,                                  /* colNo */
  "wedges",                            /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 28,  /* lineNo */
  29,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  27,                                  /* lineNo */
  30,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 27,  /* lineNo */
  30,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  22,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 27,  /* lineNo */
  22,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  79,                                  /* lineNo */
  75,                                  /* colNo */
  "wedges",                            /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 79,  /* lineNo */
  75,                                  /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  62,                                  /* colNo */
  "wedges",                            /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 79,  /* lineNo */
  62,                                  /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  71,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  69,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  56,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  54,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  25,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  23,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  33,                                  /* colNo */
  "wedges",                            /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  35,                                  /* colNo */
  "vnfaces",                           /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  25,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  23,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  25,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 62,  /* lineNo */
  25,                                  /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  23,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  43,                                  /* colNo */
  "vnfaces",                           /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  41,                                  /* colNo */
  "wedges",                            /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo e_emlrtRTEI = { 37,/* lineNo */
  9,                                   /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m"/* pName */
};

static emlrtBCInfo u_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  32,                                  /* lineNo */
  39,                                  /* colNo */
  "wedges",                            /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 32,  /* lineNo */
  39,                                  /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  31,                                  /* colNo */
  "wedges",                            /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 32,  /* lineNo */
  31,                                  /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  21,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 25,  /* lineNo */
  21,                                  /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  14,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 25,  /* lineNo */
  14,                                  /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  23,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 24,  /* lineNo */
  23,                                  /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  16,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 24,  /* lineNo */
  16,                                  /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  12,                                  /* colNo */
  "Nbrimg",                            /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 13,  /* lineNo */
  12,                                  /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  107,                                 /* lineNo */
  17,                                  /* colNo */
  "Nbrimg",                            /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  68,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  70,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  81,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  83,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
real_T PointsImages(const emlrtStack *sp, const real_T mid[2])
{
  real_T m;
  int32_T i0;
  real_T s;
  int32_T i1;
  real_T n;
  int32_T i;
  real_T v[3];
  int32_T app;
  int32_T xoffset;
  real_T E[3];
  real_T face[2];
  real_T cnt[3];
  int32_T j;
  int32_T i2;
  int32_T k;
  real_T vnfaces_re;
  int32_T i3;
  real_T dv0[2];
  real_T b_vnfaces_re[3];
  real_T den;
  real_T b_n[3];
  real_T num;
  real_T ri;
  real_T b_ri[3];
  real_T pmat0[12];
  real_T p_mat[12];
  real_T p21[3];
  real_T p[3];
  real_T b_p21[9];
  real_T c_p21[9];
  real_T c_ri[3];
  real_T pmat0e[10];
  real_T d_p21[12];
  boolean_T angle_sign[4];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  In order to find the coordinates of the image points in the same order */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History:  2011.9.21 */
  /*  Updated by: Xuhong Li <xuhong@ftw.at> */
  /*  History: 2013.08.01 */
  m = mid[0] + 1.0;
  i0 = Nbrimg->size[0];
  s = mid[0] + 1.0;
  if (s != (int32_T)muDoubleScalarFloor(s)) {
    emlrtIntegerCheckR2012b(s, &n_emlrtDCI, sp);
  }

  i1 = (int32_T)s;
  if (!((i1 >= 1) && (i1 <= i0))) {
    emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &bb_emlrtBCI, sp);
  }

  n = Nbrimg->data[i1 - 1];
  for (i = 0; i < 3; i++) {
    v[i] = 0.0;
  }

  i0 = Mtrun->size[1];
  if (mid[1] != (int32_T)muDoubleScalarFloor(mid[1])) {
    emlrtIntegerCheckR2012b(mid[1], &l_emlrtDCI, sp);
  }

  app = (int32_T)mid[1];
  if (!((app >= 1) && (app <= i0))) {
    emlrtDynamicBoundsCheckR2012b(app, 1, i0, &y_emlrtBCI, sp);
  }

  i0 = Mtrun->size[0];
  if (mid[0] != (int32_T)muDoubleScalarFloor(mid[0])) {
    emlrtIntegerCheckR2012b(mid[0], &m_emlrtDCI, sp);
  }

  xoffset = (int32_T)mid[0];
  if (!((xoffset >= 1) && (xoffset <= i0))) {
    emlrtDynamicBoundsCheckR2012b(xoffset, 1, i0, &ab_emlrtBCI, sp);
  }

  for (i0 = 0; i0 < 3; i0++) {
    E[i0] = Mtrun->data[((xoffset + Mtrun->size[0] * (app - 1)) + Mtrun->size[0]
                         * Mtrun->size[1] * (3 + i0)) - 1];
  }

  /*  point */
  i0 = Mtrun->size[1];
  if (mid[1] != (int32_T)muDoubleScalarFloor(mid[1])) {
    emlrtIntegerCheckR2012b(mid[1], &j_emlrtDCI, sp);
  }

  app = (int32_T)mid[1];
  if (!((app >= 1) && (app <= i0))) {
    emlrtDynamicBoundsCheckR2012b(app, 1, i0, &w_emlrtBCI, sp);
  }

  i0 = Mtrun->size[0];
  if (mid[0] != (int32_T)muDoubleScalarFloor(mid[0])) {
    emlrtIntegerCheckR2012b(mid[0], &k_emlrtDCI, sp);
  }

  xoffset = (int32_T)mid[0];
  if (!((xoffset >= 1) && (xoffset <= i0))) {
    emlrtDynamicBoundsCheckR2012b(xoffset, 1, i0, &x_emlrtBCI, sp);
  }

  for (i0 = 0; i0 < 2; i0++) {
    face[i0] = Mtrun->data[((xoffset + Mtrun->size[0] * (app - 1)) + Mtrun->
      size[0] * Mtrun->size[1] * (1 + i0)) - 1];
  }

  /*  face */
  if (Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)mid[1] - 1)) +
                   Mtrun->size[0] * Mtrun->size[1]) - 1] == -1.0) {
    /*    if this is Tx */
    for (i = 0; i < 3; i++) {
      cnt[i] = E[i];
    }
  } else {
    /*      if(face(1) ~= 0)  %  if this is not ground */
    i0 = wedges->size[0];
    s = Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)mid[1] - 1))
                     + Mtrun->size[0] * Mtrun->size[1]) - 1];
    if (s != (int32_T)muDoubleScalarFloor(s)) {
      emlrtIntegerCheckR2012b(s, &i_emlrtDCI, sp);
    }

    i1 = (int32_T)s;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &v_emlrtBCI, sp);
    }

    s = Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)mid[1] - 1))
                     + (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
    if (s != (int32_T)muDoubleScalarFloor(s)) {
      emlrtIntegerCheckR2012b(s, &h_emlrtDCI, sp);
    }

    i0 = (int32_T)s;
    if (!((i0 >= 1) && (i0 <= 6))) {
      emlrtDynamicBoundsCheckR2012b(i0, 1, 6, &u_emlrtBCI, sp);
    }

    i0 = (int32_T)Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)
      mid[1] - 1)) + (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
    i1 = (int32_T)Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)
      mid[1] - 1)) + Mtrun->size[0] * Mtrun->size[1]) - 1];
    app = (int32_T)Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)
      mid[1] - 1)) + (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
    i2 = (int32_T)Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)
      mid[1] - 1)) + Mtrun->size[0] * Mtrun->size[1]) - 1];
    for (i = 0; i < 3; i++) {
      xoffset = i << 2;
      s = wedges->data[(((i1 + wedges->size[0] * (i0 - 1)) + wedges->size[0] *
                         wedges->size[1] * (xoffset % 4)) + wedges->size[0] *
                        wedges->size[1] * wedges->size[2] * (xoffset / 4)) - 1];
      for (k = 0; k < 3; k++) {
        i3 = (xoffset + k) + 1;
        s += wedges->data[(((i2 + wedges->size[0] * (app - 1)) + wedges->size[0]
                            * wedges->size[1] * (i3 % 4)) + wedges->size[0] *
                           wedges->size[1] * wedges->size[2] * (i3 / 4)) - 1];
      }

      cnt[i] = s / 4.0;
    }

    /*  the coordinates of the center point of the surface realted to the image */
    /*      end */
  }

  i0 = (int32_T)Nblock;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, Nblock, mxDOUBLE_CLASS, (int32_T)
    Nblock, &e_emlrtRTEI, sp);
  i = 1;
  while (i - 1 <= i0 - 1) {
    if (1.0 + (real_T)(i - 1) != face[0]) {
      /*  make sure that the next reflection is not in the same surface as the previous one */
      j = 0;
      while (j < 6) {
        xoffset = 0;
        while (xoffset < 4) {
          i1 = wedges->size[0];
          if (!((i >= 1) && (i <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i1, &t_emlrtBCI, sp);
          }

          /*                  if (face(1) ~= 0) */
          for (i1 = 0; i1 < 3; i1++) {
            vnfaces_re = wedges->data[(((i + wedges->size[0] * j) + wedges->
              size[0] * wedges->size[1] * xoffset) + wedges->size[0] *
              wedges->size[1] * wedges->size[2] * i1) - 1];
            v[i1] += vnfaces_re - cnt[i1];
          }

          /*                  else */
          /*                      v = (v + (wedges_re - E)); */
          /*                  end  */
          xoffset++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        for (i1 = 0; i1 < 3; i1++) {
          v[i1] /= 4.0;
        }

        /*              if(face(1) == 0)    % the privoius relection from ground */
        /*                  resu1 = -1; */
        /*                   */
        /*              else */
        i1 = vnfaces->size[0];
        if (!((i >= 1) && (i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i1, &s_emlrtBCI, sp);
        }

        s = 0.0;
        for (k = 0; k < 3; k++) {
          vnfaces_re = vnfaces->data[((i + vnfaces->size[0] * j) + vnfaces->
            size[0] * vnfaces->size[1] * k) - 1];
          s += v[k] * vnfaces_re;
        }

        /*                   */
        /*              end */
        if (s < 0.0) {
          n++;
          i1 = Mtrun->size[0];
          app = Mtrun->size[1];
          if (n != (int32_T)muDoubleScalarFloor(n)) {
            emlrtIntegerCheckR2012b(n, &g_emlrtDCI, sp);
          }

          i2 = (int32_T)n;
          if (!((i2 >= 1) && (i2 <= app))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, app, &q_emlrtBCI, sp);
          }

          app = (int32_T)m;
          if (!((app >= 1) && (app <= i1))) {
            emlrtDynamicBoundsCheckR2012b(app, 1, i1, &r_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < 9; i1++) {
            Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                         Mtrun->size[0] * Mtrun->size[1] * i1) - 1] =
              DBIMAGES[i1];
          }

          dv0[0] = 1.0 + (real_T)(i - 1);
          dv0[1] = 1.0 + (real_T)j;
          i1 = Mtrun->size[0];
          app = Mtrun->size[1];
          i2 = (int32_T)n;
          if (!((i2 >= 1) && (i2 <= app))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, app, &o_emlrtBCI, sp);
          }

          app = (int32_T)m;
          if (!((app >= 1) && (app <= i1))) {
            emlrtDynamicBoundsCheckR2012b(app, 1, i1, &p_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < 2; i1++) {
            Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                         Mtrun->size[0] * Mtrun->size[1] * (1 + i1)) - 1] =
              dv0[i1];
          }

          i1 = vnfaces->size[0];
          if (!((i >= 1) && (i <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i1, &n_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            b_vnfaces_re[i1] = vnfaces->data[((i + vnfaces->size[0] * j) +
              vnfaces->size[0] * vnfaces->size[1] * i1) - 1];
          }

          i1 = wedges->size[0];
          if (!((i >= 1) && (i <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i1, &m_emlrtBCI, sp);
          }

          den = 0.0;
          for (k = 0; k < 3; k++) {
            s = wedges->data[((i + wedges->size[0] * j) + wedges->size[0] *
                              wedges->size[1] * wedges->size[2] * k) - 1];
            s -= E[k];
            den += b_vnfaces_re[k] * s;
          }

          s = 2.0 * den;
          i1 = Mtrun->size[0];
          app = Mtrun->size[1];
          i2 = (int32_T)n;
          if (!((i2 >= 1) && (i2 <= app))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, app, &k_emlrtBCI, sp);
          }

          app = (int32_T)m;
          if (!((app >= 1) && (app <= i1))) {
            emlrtDynamicBoundsCheckR2012b(app, 1, i1, &l_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                         Mtrun->size[0] * Mtrun->size[1] * (3 + i1)) - 1] = E[i1]
              + s * b_vnfaces_re[i1];
          }

          /*  -------------- remove useless points on the last level ---------------- %                 */
          if (m == Nreflx + 1.0) {
            /*  the highest order of reflection */
            st.site = &emlrtRSI;
            i1 = Mtrun->size[0];
            app = (int32_T)m;
            if (!((app >= 1) && (app <= i1))) {
              emlrtDynamicBoundsCheckR2012b(app, 1, i1, &j_emlrtBCI, &st);
            }

            i1 = Mtrun->size[1];
            app = (int32_T)n;
            if (!((app >= 1) && (app <= i1))) {
              emlrtDynamicBoundsCheckR2012b(app, 1, i1, &i_emlrtBCI, &st);
            }

            i1 = Mtrun->size[0];
            app = (int32_T)m;
            if (!((app >= 1) && (app <= i1))) {
              emlrtDynamicBoundsCheckR2012b(app, 1, i1, &h_emlrtBCI, &st);
            }

            i1 = Mtrun->size[1];
            app = (int32_T)n;
            if (!((app >= 1) && (app <= i1))) {
              emlrtDynamicBoundsCheckR2012b(app, 1, i1, &g_emlrtBCI, &st);
            }

            /*  Calculates the breakthrough point in the face                                 */
            /*  Pneg : point on the negative normal vector side                           */
            /*  Ppos : point on the positive normal vector side  */
            /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
            /*  History:  2011.9.19 */
            /*  Updated by: Xuhong Li <xuhong@ftw.at> */
            /*  History: 2013.08.01 */
            /*  if(face(1) == 0) */
            /*  if(face(1) == 0 && face(2) == 0) */
            /*      n = [0;0;1]; */
            /*      rp(:,1) = -Pnpos(:,1); */
            /*      ri(:,1) = Pnneg(:,1) - Pnpos(:,1); */
            /*  else */
            s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                             (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
            if (s != (int32_T)muDoubleScalarFloor(s)) {
              emlrtIntegerCheckR2012b(s, &c_emlrtDCI, &st);
            }

            i1 = (int32_T)s;
            if (!((i1 >= 1) && (i1 <= 6))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &c_emlrtBCI, &st);
            }

            app = vnfaces->size[0];
            s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                             Mtrun->size[0] * Mtrun->size[1]) - 1];
            if (s != (int32_T)muDoubleScalarFloor(s)) {
              emlrtIntegerCheckR2012b(s, &d_emlrtDCI, &st);
            }

            i2 = (int32_T)s;
            if (!((i2 >= 1) && (i2 <= app))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, app, &d_emlrtBCI, &st);
            }

            for (app = 0; app < 3; app++) {
              b_n[app] = vnfaces->data[((i2 + vnfaces->size[0] * (i1 - 1)) +
                vnfaces->size[0] * vnfaces->size[1] * app) - 1];
            }

            s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                             (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
            if (s != (int32_T)muDoubleScalarFloor(s)) {
              emlrtIntegerCheckR2012b(s, &emlrtDCI, &st);
            }

            i1 = (int32_T)s;
            if (!((i1 >= 1) && (i1 <= 6))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &emlrtBCI, &st);
            }

            app = wedges->size[0];
            s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                             Mtrun->size[0] * Mtrun->size[1]) - 1];
            if (s != (int32_T)muDoubleScalarFloor(s)) {
              emlrtIntegerCheckR2012b(s, &b_emlrtDCI, &st);
            }

            i2 = (int32_T)s;
            if (!((i2 >= 1) && (i2 <= app))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, app, &b_emlrtBCI, &st);
            }

            s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                             Mtrun->size[0] * Mtrun->size[1] * 3) - 1];

            /*  end */
            num = 0.0;
            den = 0.0;
            for (k = 0; k < 3; k++) {
              vnfaces_re = wedges->data[(((i2 + wedges->size[0] * (i1 - 1)) +
                (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
                wedges->size[1] * wedges->size[2] * k) - 1];
              vnfaces_re -= recept[k];
              ri = s - recept[k];
              num += b_n[k] * vnfaces_re;
              den += b_n[k] * ri;
              b_ri[k] = ri;
            }

            den = num / den;
            for (i1 = 0; i1 < 3; i1++) {
              b_ri[i1] = recept[i1] + den * b_ri[i1];
            }

            /*  the coordinates of the reflection point        */
            /*                      if (Mtrun(m,n,2) == 0) */
            /*                          app = AppGround(pointV);   % check the relection point belongs to ground or not */
            /*                      else */
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
            /*                          app = AppFace(pointV,Mtrun(m,n,2:3));    % check the relection point belongs to surface or not */
            i1 = wedges->size[0];
            app = Mtrun->size[0];
            i2 = (int32_T)m;
            if (!((i2 >= 1) && (i2 <= app))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, app, &db_emlrtBCI, sp);
            }

            app = Mtrun->size[1];
            i3 = (int32_T)n;
            if (!((i3 >= 1) && (i3 <= app))) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, app, &eb_emlrtBCI, sp);
            }

            s = Mtrun->data[((i2 + Mtrun->size[0] * (i3 - 1)) + Mtrun->size[0] *
                             Mtrun->size[1]) - 1];
            if (s != (int32_T)muDoubleScalarFloor(s)) {
              emlrtIntegerCheckR2012b(s, &f_emlrtDCI, sp);
            }

            app = (int32_T)s;
            if (!((app >= 1) && (app <= i1))) {
              emlrtDynamicBoundsCheckR2012b(app, 1, i1, &f_emlrtBCI, sp);
            }

            i1 = Mtrun->size[0];
            app = (int32_T)m;
            if (!((app >= 1) && (app <= i1))) {
              emlrtDynamicBoundsCheckR2012b(app, 1, i1, &fb_emlrtBCI, sp);
            }

            i1 = Mtrun->size[1];
            i2 = (int32_T)n;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &gb_emlrtBCI, sp);
            }

            s = Mtrun->data[((app + Mtrun->size[0] * (i2 - 1)) + (Mtrun->size[0]
              * Mtrun->size[1] << 1)) - 1];
            if (s != (int32_T)muDoubleScalarFloor(s)) {
              emlrtIntegerCheckR2012b(s, &e_emlrtDCI, sp);
            }

            i1 = (int32_T)s;
            if (!((i1 >= 1) && (i1 <= 6))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &e_emlrtBCI, sp);
            }

            i1 = (int32_T)Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)
              n - 1)) + (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
            app = (int32_T)Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)
              n - 1)) + Mtrun->size[0] * Mtrun->size[1]) - 1];
            for (k = 0; k < 12; k++) {
              pmat0[k] = wedges->data[(((app + wedges->size[0] * (i1 - 1)) +
                wedges->size[0] * wedges->size[1] * (k % 4)) + wedges->size[0] *
                wedges->size[1] * wedges->size[2] * (k / 4)) - 1];
            }

            for (i1 = 0; i1 < 4; i1++) {
              for (app = 0; app < 3; app++) {
                p_mat[app + 3 * i1] = pmat0[i1 + (app << 2)];
              }
            }

            /*  Function APPFACE checks if the point POINT_RE lies in the four-sided polygon which is defined by four points  */
            /*  in the matrix P_MAT. Logical 1 is returned if the query point lies in the same plane as the four polygon  */
            /*  points and if it is inside the polygon, logical 0 is returned otherwise. The algorithm for checking if the query  */
            /*  point is in a polygon (in 2D space) can be found at: */
            /*   */
            /*  "An Efficient Test for a Point to Be in a Convex Polygon" from the Wolfram Demonstrations Project */
            /*   http://demonstrations.wolfram.com/AnEfficientTestForAPointToBeInAConvexPolygon/ */
            /*  Define vectors spanning the plane in which the polygon lives */
            for (i1 = 0; i1 < 3; i1++) {
              p21[i1] = p_mat[3 + i1] - p_mat[i1];
              b_vnfaces_re[i1] = p_mat[9 + i1] - p_mat[i1];
            }

            /*  Calculating the planes normal vector and normalizing it */
            b_n[0] = p21[1] * b_vnfaces_re[2] - p21[2] * b_vnfaces_re[1];
            b_n[1] = p21[2] * b_vnfaces_re[0] - p21[0] * b_vnfaces_re[2];
            b_n[2] = p21[0] * b_vnfaces_re[1] - p21[1] * b_vnfaces_re[0];
            den = norm(b_n);

            /*  If the vector to the query point and the normal vector are not othogonal, the query point is not within  */
            /*  the plane or the polygon */
            s = 0.0;
            for (k = 0; k < 3; k++) {
              num = b_n[k] / den;
              s += num * (b_ri[k] - p_mat[k]);
              b_n[k] = num;
            }

            if (muDoubleScalarAbs(s) > 1.0E-6) {
              app = 0;
            } else {
              /*  Calculate the center of mass for the polygon */
              /*  Calculate the orthogonal basis vectors for the new coordinate system */
              den = norm(p21);
              for (xoffset = 0; xoffset < 3; xoffset++) {
                s = p_mat[xoffset];
                for (k = 0; k < 3; k++) {
                  s += p_mat[xoffset + (k + 1) * 3];
                }

                b_vnfaces_re[xoffset] = s / 4.0;
                p21[xoffset] /= den;
              }

              p[0] = p21[1] * b_n[2] - p21[2] * b_n[1];
              p[1] = p21[2] * b_n[0] - p21[0] * b_n[2];
              p[2] = p21[0] * b_n[1] - p21[1] * b_n[0];

              /*  Transform the shifted polygon with new basis vectors */
              /*  Actual algorithm checking if the query point lies within the polygon, first shift the coordinate system such that  */
              /*  the query point coincides with the coordinate origin */
              for (i1 = 0; i1 < 3; i1++) {
                b_p21[3 * i1] = p21[i1];
                b_p21[1 + 3 * i1] = p[i1];
                b_p21[2 + 3 * i1] = b_n[i1];
                for (app = 0; app < 4; app++) {
                  pmat0[i1 + 3 * app] = p_mat[i1 + 3 * app] - b_vnfaces_re[i1];
                }

                c_p21[3 * i1] = p21[i1];
                c_p21[1 + 3 * i1] = p[i1];
                c_p21[2 + 3 * i1] = b_n[i1];
                c_ri[i1] = b_ri[i1] - b_vnfaces_re[i1];
              }

              for (i1 = 0; i1 < 3; i1++) {
                p21[i1] = 0.0;
                for (app = 0; app < 3; app++) {
                  p21[i1] += c_p21[i1 + 3 * app] * c_ri[app];
                }

                for (app = 0; app < 4; app++) {
                  p_mat[i1 + 3 * app] = 0.0;
                  for (i2 = 0; i2 < 3; i2++) {
                    p_mat[i1 + 3 * app] += b_p21[i1 + 3 * i2] * pmat0[i2 + 3 *
                      app];
                  }

                  d_p21[i1 + 3 * app] = p21[i1];
                }
              }

              /*  Only consider two dimensions and add the first point as last point */
              for (i1 = 0; i1 < 4; i1++) {
                for (app = 0; app < 3; app++) {
                  pmat0[app + 3 * i1] = p_mat[app + 3 * i1] - d_p21[app + 3 * i1];
                }

                for (app = 0; app < 2; app++) {
                  pmat0e[app + (i1 << 1)] = pmat0[app + 3 * i1];
                }
              }

              for (i1 = 0; i1 < 2; i1++) {
                pmat0e[8 + i1] = pmat0[i1];
              }

              /*  Check if the angles between two vertices of the polygon (has to be counterclockwisely defined!) change sign */
              for (i1 = 0; i1 < 4; i1++) {
                angle_sign[i1] = (pmat0e[(1 + i1) << 1] * pmat0e[1 + (i1 << 1)]
                                  - pmat0e[i1 << 1] * pmat0e[1 + ((1 + i1) << 1)]
                                  >= 0.0);
              }

              /*  If no angle sign change occured, query point is within polygon */
              den = angle_sign[0];
              for (k = 0; k < 3; k++) {
                den += (real_T)angle_sign[k + 1];
              }

              if (den == 4.0) {
                app = 1;

                /*  If angle sign change occured, query point is not within polygon */
              } else {
                app = 0;
              }
            }

            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
            /*                      end   */
            if (app != 1) {
              /*  the point does not belongs to ground/surface */
              n--;
            }
          }

          /*  ----------------------------------------------------------------------- %                 */
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

  /*  no(1) = 0;    % ground case */
  /*  no(2) = 0; */
  /*  no(3) = 1; */
  /*   */
  /*  pt = -E; */
  /*   */
  /*  if (face(1) ~= 0) && (cnt(3)> 0) */
  /*      n = n + 1; */
  /*   */
  /*      Mtrun(m,n,:)=DBIMAGES; */
  /*      Mtrun(m,n,2:3)=[0;0]; */
  /*      Mtrun(m,n,4:6)=E + 2*(no'*pt).*no; */
  /*   */
  /*  end  */
  i0 = Nbrimg->size[0];
  i1 = (int32_T)(mid[0] + 1.0);
  if (!((i1 >= 1) && (i1 <= i0))) {
    emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &cb_emlrtBCI, sp);
  }

  return n - Nbrimg->data[i1 - 1];
}

/* End of code generation (PointsImages.c) */
