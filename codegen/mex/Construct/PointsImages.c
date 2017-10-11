/*
 * PointsImages.c
 *
 * Code generation for function 'PointsImages'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Construct.h"
#include "PointsImages.h"
#include "norm.h"
#include "Construct_data.h"

/* Variable Definitions */
static emlrtRSInfo b_emlrtRSI = { 73,  /* lineNo */
  "PointsImages",                      /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m"/* pathName */
};

static emlrtBCInfo o_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  28,                                  /* lineNo */
  37,                                  /* colNo */
  "wedges",                            /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 28,  /* lineNo */
  37,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  29,                                  /* colNo */
  "wedges",                            /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 28,  /* lineNo */
  29,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  27,                                  /* lineNo */
  30,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 27,  /* lineNo */
  30,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  22,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 27,  /* lineNo */
  22,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  79,                                  /* lineNo */
  75,                                  /* colNo */
  "wedges",                            /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 79,  /* lineNo */
  75,                                  /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  62,                                  /* colNo */
  "wedges",                            /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 79,  /* lineNo */
  62,                                  /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  71,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  69,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  56,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  54,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  25,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  23,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  33,                                  /* colNo */
  "wedges",                            /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  35,                                  /* colNo */
  "vnfaces",                           /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  25,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  23,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  25,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 62,  /* lineNo */
  25,                                  /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  23,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  43,                                  /* colNo */
  "vnfaces",                           /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  41,                                  /* colNo */
  "wedges",                            /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo i_emlrtRTEI = { 37,/* lineNo */
  9,                                   /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m"/* pName */
};

static emlrtBCInfo jb_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  32,                                  /* lineNo */
  39,                                  /* colNo */
  "wedges",                            /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 32,  /* lineNo */
  39,                                  /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  31,                                  /* colNo */
  "wedges",                            /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 32,  /* lineNo */
  31,                                  /* colNo */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  21,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  14,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  23,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  16,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  12,                                  /* colNo */
  "Nbrimg",                            /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  107,                                 /* lineNo */
  17,                                  /* colNo */
  "Nbrimg",                            /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  68,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  70,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  81,                                  /* colNo */
  "Mtrun",                             /* aName */
  "PointsImages",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\PointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
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
  int32_T i3;
  int32_T i4;
  real_T n;
  int32_T i;
  real_T v[3];
  int32_T app;
  int32_T xoffset;
  real_T E[3];
  real_T face[2];
  real_T s;
  real_T cnt[3];
  int32_T j;
  int32_T i5;
  int32_T k;
  real_T vnfaces_re;
  int32_T i6;
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
  i3 = Nbrimg->size[0];
  i4 = (int32_T)(mid[0] + 1.0);
  if (!((i4 >= 1) && (i4 <= i3))) {
    emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &pb_emlrtBCI, sp);
  }

  n = Nbrimg->data[i4 - 1];
  for (i = 0; i < 3; i++) {
    v[i] = 0.0;
  }

  i3 = Mtrun->size[1];
  app = (int32_T)mid[1];
  if (!((app >= 1) && (app <= i3))) {
    emlrtDynamicBoundsCheckR2012b(app, 1, i3, &nb_emlrtBCI, sp);
  }

  i3 = Mtrun->size[0];
  xoffset = (int32_T)mid[0];
  if (!((xoffset >= 1) && (xoffset <= i3))) {
    emlrtDynamicBoundsCheckR2012b(xoffset, 1, i3, &ob_emlrtBCI, sp);
  }

  for (i3 = 0; i3 < 3; i3++) {
    E[i3] = Mtrun->data[((xoffset + Mtrun->size[0] * (app - 1)) + Mtrun->size[0]
                         * Mtrun->size[1] * (3 + i3)) - 1];
  }

  /*  point */
  i3 = Mtrun->size[1];
  app = (int32_T)mid[1];
  if (!((app >= 1) && (app <= i3))) {
    emlrtDynamicBoundsCheckR2012b(app, 1, i3, &lb_emlrtBCI, sp);
  }

  i3 = Mtrun->size[0];
  xoffset = (int32_T)mid[0];
  if (!((xoffset >= 1) && (xoffset <= i3))) {
    emlrtDynamicBoundsCheckR2012b(xoffset, 1, i3, &mb_emlrtBCI, sp);
  }

  for (i3 = 0; i3 < 2; i3++) {
    face[i3] = Mtrun->data[((xoffset + Mtrun->size[0] * (app - 1)) + Mtrun->
      size[0] * Mtrun->size[1] * (1 + i3)) - 1];
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
    i3 = wedges->size[0];
    s = Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)mid[1] - 1))
                     + Mtrun->size[0] * Mtrun->size[1]) - 1];
    if (s != (int32_T)muDoubleScalarFloor(s)) {
      emlrtIntegerCheckR2012b(s, &o_emlrtDCI, sp);
    }

    i4 = (int32_T)s;
    if (!((i4 >= 1) && (i4 <= i3))) {
      emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &kb_emlrtBCI, sp);
    }

    s = Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)mid[1] - 1))
                     + (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
    if (s != (int32_T)muDoubleScalarFloor(s)) {
      emlrtIntegerCheckR2012b(s, &n_emlrtDCI, sp);
    }

    i3 = (int32_T)s;
    if (!((i3 >= 1) && (i3 <= 6))) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, 6, &jb_emlrtBCI, sp);
    }

    i3 = (int32_T)Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)
      mid[1] - 1)) + (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
    i4 = (int32_T)Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)
      mid[1] - 1)) + Mtrun->size[0] * Mtrun->size[1]) - 1];
    app = (int32_T)Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)
      mid[1] - 1)) + (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
    i5 = (int32_T)Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)
      mid[1] - 1)) + Mtrun->size[0] * Mtrun->size[1]) - 1];
    for (i = 0; i < 3; i++) {
      xoffset = i << 2;
      s = wedges->data[(((i4 + wedges->size[0] * (i3 - 1)) + wedges->size[0] *
                         wedges->size[1] * (xoffset % 4)) + wedges->size[0] *
                        wedges->size[1] * wedges->size[2] * (xoffset / 4)) - 1];
      for (k = 0; k < 3; k++) {
        i6 = (xoffset + k) + 1;
        s += wedges->data[(((i5 + wedges->size[0] * (app - 1)) + wedges->size[0]
                            * wedges->size[1] * (i6 % 4)) + wedges->size[0] *
                           wedges->size[1] * wedges->size[2] * (i6 / 4)) - 1];
      }

      cnt[i] = s / 4.0;
    }

    /*  the coordinates of the center point of the surface realted to the image */
    /*      end */
  }

  i3 = (int32_T)Nblock;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, Nblock, mxDOUBLE_CLASS, (int32_T)
    Nblock, &i_emlrtRTEI, sp);
  i = 1;
  while (i - 1 <= i3 - 1) {
    if (1.0 + (real_T)(i - 1) != face[0]) {
      /*  make sure that the next reflection is not in the same surface as the previous one */
      j = 0;
      while (j < 6) {
        xoffset = 0;
        while (xoffset < 4) {
          i4 = wedges->size[0];
          if (!((i >= 1) && (i <= i4))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i4, &ib_emlrtBCI, sp);
          }

          /*                  if (face(1) ~= 0) */
          for (i4 = 0; i4 < 3; i4++) {
            vnfaces_re = wedges->data[(((i + wedges->size[0] * j) + wedges->
              size[0] * wedges->size[1] * xoffset) + wedges->size[0] *
              wedges->size[1] * wedges->size[2] * i4) - 1];
            v[i4] += vnfaces_re - cnt[i4];
          }

          /*                  else */
          /*                      v = (v + (wedges_re - E)); */
          /*                  end  */
          xoffset++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        for (i4 = 0; i4 < 3; i4++) {
          v[i4] /= 4.0;
        }

        /*              if(face(1) == 0)    % the privoius relection from ground */
        /*                  resu1 = -1; */
        /*                   */
        /*              else */
        i4 = vnfaces->size[0];
        if (!((i >= 1) && (i <= i4))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i4, &hb_emlrtBCI, sp);
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
          i4 = Mtrun->size[0];
          app = Mtrun->size[1];
          if (n != (int32_T)muDoubleScalarFloor(n)) {
            emlrtIntegerCheckR2012b(n, &m_emlrtDCI, sp);
          }

          i5 = (int32_T)n;
          if (!((i5 >= 1) && (i5 <= app))) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, app, &fb_emlrtBCI, sp);
          }

          app = (int32_T)m;
          if (!((app >= 1) && (app <= i4))) {
            emlrtDynamicBoundsCheckR2012b(app, 1, i4, &gb_emlrtBCI, sp);
          }

          for (i4 = 0; i4 < 9; i4++) {
            Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                         Mtrun->size[0] * Mtrun->size[1] * i4) - 1] =
              DBIMAGES[i4];
          }

          dv0[0] = 1.0 + (real_T)(i - 1);
          dv0[1] = 1.0 + (real_T)j;
          i4 = Mtrun->size[0];
          app = Mtrun->size[1];
          i5 = (int32_T)n;
          if (!((i5 >= 1) && (i5 <= app))) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, app, &db_emlrtBCI, sp);
          }

          app = (int32_T)m;
          if (!((app >= 1) && (app <= i4))) {
            emlrtDynamicBoundsCheckR2012b(app, 1, i4, &eb_emlrtBCI, sp);
          }

          for (i4 = 0; i4 < 2; i4++) {
            Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                         Mtrun->size[0] * Mtrun->size[1] * (1 + i4)) - 1] =
              dv0[i4];
          }

          i4 = vnfaces->size[0];
          if (!((i >= 1) && (i <= i4))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i4, &cb_emlrtBCI, sp);
          }

          for (i4 = 0; i4 < 3; i4++) {
            b_vnfaces_re[i4] = vnfaces->data[((i + vnfaces->size[0] * j) +
              vnfaces->size[0] * vnfaces->size[1] * i4) - 1];
          }

          i4 = wedges->size[0];
          if (!((i >= 1) && (i <= i4))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i4, &bb_emlrtBCI, sp);
          }

          den = 0.0;
          for (k = 0; k < 3; k++) {
            s = wedges->data[((i + wedges->size[0] * j) + wedges->size[0] *
                              wedges->size[1] * wedges->size[2] * k) - 1];
            s -= E[k];
            den += b_vnfaces_re[k] * s;
          }

          s = 2.0 * den;
          i4 = Mtrun->size[0];
          app = Mtrun->size[1];
          i5 = (int32_T)n;
          if (!((i5 >= 1) && (i5 <= app))) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, app, &y_emlrtBCI, sp);
          }

          app = (int32_T)m;
          if (!((app >= 1) && (app <= i4))) {
            emlrtDynamicBoundsCheckR2012b(app, 1, i4, &ab_emlrtBCI, sp);
          }

          for (i4 = 0; i4 < 3; i4++) {
            Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                         Mtrun->size[0] * Mtrun->size[1] * (3 + i4)) - 1] = E[i4]
              + s * b_vnfaces_re[i4];
          }

          /*  -------------- remove useless points on the last level ---------------- %                 */
          if (m == Nreflx + 1.0) {
            /*  the highest order of reflection */
            st.site = &b_emlrtRSI;
            i4 = Mtrun->size[0];
            app = (int32_T)m;
            if (!((app >= 1) && (app <= i4))) {
              emlrtDynamicBoundsCheckR2012b(app, 1, i4, &x_emlrtBCI, &st);
            }

            i4 = Mtrun->size[1];
            app = (int32_T)n;
            if (!((app >= 1) && (app <= i4))) {
              emlrtDynamicBoundsCheckR2012b(app, 1, i4, &w_emlrtBCI, &st);
            }

            i4 = Mtrun->size[0];
            app = (int32_T)m;
            if (!((app >= 1) && (app <= i4))) {
              emlrtDynamicBoundsCheckR2012b(app, 1, i4, &v_emlrtBCI, &st);
            }

            i4 = Mtrun->size[1];
            app = (int32_T)n;
            if (!((app >= 1) && (app <= i4))) {
              emlrtDynamicBoundsCheckR2012b(app, 1, i4, &u_emlrtBCI, &st);
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
              emlrtIntegerCheckR2012b(s, &i_emlrtDCI, &st);
            }

            i4 = (int32_T)s;
            if (!((i4 >= 1) && (i4 <= 6))) {
              emlrtDynamicBoundsCheckR2012b(i4, 1, 6, &q_emlrtBCI, &st);
            }

            app = vnfaces->size[0];
            s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                             Mtrun->size[0] * Mtrun->size[1]) - 1];
            if (s != (int32_T)muDoubleScalarFloor(s)) {
              emlrtIntegerCheckR2012b(s, &j_emlrtDCI, &st);
            }

            i5 = (int32_T)s;
            if (!((i5 >= 1) && (i5 <= app))) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, app, &r_emlrtBCI, &st);
            }

            for (app = 0; app < 3; app++) {
              b_n[app] = vnfaces->data[((i5 + vnfaces->size[0] * (i4 - 1)) +
                vnfaces->size[0] * vnfaces->size[1] * app) - 1];
            }

            s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                             (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
            if (s != (int32_T)muDoubleScalarFloor(s)) {
              emlrtIntegerCheckR2012b(s, &g_emlrtDCI, &st);
            }

            i4 = (int32_T)s;
            if (!((i4 >= 1) && (i4 <= 6))) {
              emlrtDynamicBoundsCheckR2012b(i4, 1, 6, &o_emlrtBCI, &st);
            }

            app = wedges->size[0];
            s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                             Mtrun->size[0] * Mtrun->size[1]) - 1];
            if (s != (int32_T)muDoubleScalarFloor(s)) {
              emlrtIntegerCheckR2012b(s, &h_emlrtDCI, &st);
            }

            i5 = (int32_T)s;
            if (!((i5 >= 1) && (i5 <= app))) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, app, &p_emlrtBCI, &st);
            }

            s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                             Mtrun->size[0] * Mtrun->size[1] * 3) - 1];

            /*  end */
            num = 0.0;
            den = 0.0;
            for (k = 0; k < 3; k++) {
              vnfaces_re = wedges->data[(((i5 + wedges->size[0] * (i4 - 1)) +
                (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
                wedges->size[1] * wedges->size[2] * k) - 1];
              vnfaces_re -= recept[k];
              ri = s - recept[k];
              num += b_n[k] * vnfaces_re;
              den += b_n[k] * ri;
              b_ri[k] = ri;
            }

            den = num / den;
            for (i4 = 0; i4 < 3; i4++) {
              b_ri[i4] = recept[i4] + den * b_ri[i4];
            }

            /*  the coordinates of the reflection point        */
            /*                      if (Mtrun(m,n,2) == 0) */
            /*                          app = AppGround(pointV);   % check the relection point belongs to ground or not */
            /*                      else */
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
            /*                          app = AppFace(pointV,Mtrun(m,n,2:3));    % check the relection point belongs to surface or not */
            i4 = wedges->size[0];
            app = Mtrun->size[0];
            i5 = (int32_T)m;
            if (!((i5 >= 1) && (i5 <= app))) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, app, &rb_emlrtBCI, sp);
            }

            app = Mtrun->size[1];
            i6 = (int32_T)n;
            if (!((i6 >= 1) && (i6 <= app))) {
              emlrtDynamicBoundsCheckR2012b(i6, 1, app, &sb_emlrtBCI, sp);
            }

            s = Mtrun->data[((i5 + Mtrun->size[0] * (i6 - 1)) + Mtrun->size[0] *
                             Mtrun->size[1]) - 1];
            if (s != (int32_T)muDoubleScalarFloor(s)) {
              emlrtIntegerCheckR2012b(s, &l_emlrtDCI, sp);
            }

            app = (int32_T)s;
            if (!((app >= 1) && (app <= i4))) {
              emlrtDynamicBoundsCheckR2012b(app, 1, i4, &t_emlrtBCI, sp);
            }

            i4 = Mtrun->size[0];
            app = (int32_T)m;
            if (!((app >= 1) && (app <= i4))) {
              emlrtDynamicBoundsCheckR2012b(app, 1, i4, &tb_emlrtBCI, sp);
            }

            i4 = Mtrun->size[1];
            i5 = (int32_T)n;
            if (!((i5 >= 1) && (i5 <= i4))) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &ub_emlrtBCI, sp);
            }

            s = Mtrun->data[((app + Mtrun->size[0] * (i5 - 1)) + (Mtrun->size[0]
              * Mtrun->size[1] << 1)) - 1];
            if (s != (int32_T)muDoubleScalarFloor(s)) {
              emlrtIntegerCheckR2012b(s, &k_emlrtDCI, sp);
            }

            i4 = (int32_T)s;
            if (!((i4 >= 1) && (i4 <= 6))) {
              emlrtDynamicBoundsCheckR2012b(i4, 1, 6, &s_emlrtBCI, sp);
            }

            i4 = (int32_T)Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)
              n - 1)) + (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
            app = (int32_T)Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)
              n - 1)) + Mtrun->size[0] * Mtrun->size[1]) - 1];
            for (k = 0; k < 12; k++) {
              pmat0[k] = wedges->data[(((app + wedges->size[0] * (i4 - 1)) +
                wedges->size[0] * wedges->size[1] * (k % 4)) + wedges->size[0] *
                wedges->size[1] * wedges->size[2] * (k / 4)) - 1];
            }

            for (i4 = 0; i4 < 4; i4++) {
              for (app = 0; app < 3; app++) {
                p_mat[app + 3 * i4] = pmat0[i4 + (app << 2)];
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
            for (i4 = 0; i4 < 3; i4++) {
              p21[i4] = p_mat[3 + i4] - p_mat[i4];
              b_vnfaces_re[i4] = p_mat[9 + i4] - p_mat[i4];
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
              for (i4 = 0; i4 < 3; i4++) {
                b_p21[3 * i4] = p21[i4];
                b_p21[1 + 3 * i4] = p[i4];
                b_p21[2 + 3 * i4] = b_n[i4];
                for (app = 0; app < 4; app++) {
                  pmat0[i4 + 3 * app] = p_mat[i4 + 3 * app] - b_vnfaces_re[i4];
                }

                c_p21[3 * i4] = p21[i4];
                c_p21[1 + 3 * i4] = p[i4];
                c_p21[2 + 3 * i4] = b_n[i4];
                c_ri[i4] = b_ri[i4] - b_vnfaces_re[i4];
              }

              for (i4 = 0; i4 < 3; i4++) {
                p21[i4] = 0.0;
                for (app = 0; app < 3; app++) {
                  p21[i4] += c_p21[i4 + 3 * app] * c_ri[app];
                }

                for (app = 0; app < 4; app++) {
                  p_mat[i4 + 3 * app] = 0.0;
                  for (i5 = 0; i5 < 3; i5++) {
                    p_mat[i4 + 3 * app] += b_p21[i4 + 3 * i5] * pmat0[i5 + 3 *
                      app];
                  }

                  d_p21[i4 + 3 * app] = p21[i4];
                }
              }

              /*  Only consider two dimensions and add the first point as last point */
              for (i4 = 0; i4 < 4; i4++) {
                for (app = 0; app < 3; app++) {
                  pmat0[app + 3 * i4] = p_mat[app + 3 * i4] - d_p21[app + 3 * i4];
                }

                for (app = 0; app < 2; app++) {
                  pmat0e[app + (i4 << 1)] = pmat0[app + 3 * i4];
                }
              }

              for (i4 = 0; i4 < 2; i4++) {
                pmat0e[8 + i4] = pmat0[i4];
              }

              /*  Check if the angles between two vertices of the polygon (has to be counterclockwisely defined!) change sign */
              for (i4 = 0; i4 < 4; i4++) {
                angle_sign[i4] = (pmat0e[(1 + i4) << 1] * pmat0e[1 + (i4 << 1)]
                                  - pmat0e[i4 << 1] * pmat0e[1 + ((1 + i4) << 1)]
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
  i3 = Nbrimg->size[0];
  i4 = (int32_T)(mid[0] + 1.0);
  if (!((i4 >= 1) && (i4 <= i3))) {
    emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &qb_emlrtBCI, sp);
  }

  return n - Nbrimg->data[i4 - 1];
}

/* End of code generation (PointsImages.c) */
