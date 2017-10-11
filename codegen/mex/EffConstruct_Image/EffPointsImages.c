/*
 * EffPointsImages.c
 *
 * Code generation for function 'EffPointsImages'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct_Image.h"
#include "EffPointsImages.h"
#include "EffConstruct_Image_data.h"

/* Variable Definitions */
static emlrtBCInfo mf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  25,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffPointsImages",                   /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\EffPointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  23,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffPointsImages",                   /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\EffPointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo of_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  33,                                  /* colNo */
  "wedges",                            /* aName */
  "EffPointsImages",                   /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\EffPointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  35,                                  /* colNo */
  "vnfaces",                           /* aName */
  "EffPointsImages",                   /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\EffPointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  25,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffPointsImages",                   /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\EffPointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  23,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffPointsImages",                   /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\EffPointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  43,                                  /* colNo */
  "vnfaces",                           /* aName */
  "EffPointsImages",                   /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\EffPointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  41,                                  /* colNo */
  "wedges",                            /* aName */
  "EffPointsImages",                   /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\EffPointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ab_emlrtRTEI = { 35,/* lineNo */
  9,                                   /* colNo */
  "EffPointsImages",                   /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\EffPointsImages.m"/* pName */
};

static emlrtBCInfo uf_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  30,                                  /* lineNo */
  39,                                  /* colNo */
  "wedges",                            /* aName */
  "EffPointsImages",                   /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\EffPointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 30,  /* lineNo */
  39,                                  /* colNo */
  "EffPointsImages",                   /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\EffPointsImages.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  31,                                  /* colNo */
  "wedges",                            /* aName */
  "EffPointsImages",                   /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\EffPointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 30,  /* lineNo */
  31,                                  /* colNo */
  "EffPointsImages",                   /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\EffPointsImages.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  18,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffPointsImages",                   /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\EffPointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  14,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffPointsImages",                   /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\EffPointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  20,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffPointsImages",                   /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\EffPointsImages.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ag_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  16,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffPointsImages",                   /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\EffPointsImages.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
real_T EffPointsImages(const emlrtStack *sp, real_T mid)
{
  uint32_T n;
  int32_T i;
  int32_T i3;
  real_T v[3];
  int32_T xoffset;
  real_T E[3];
  real_T face[2];
  real_T s;
  real_T cnt[3];
  int32_T i4;
  int32_T j;
  int32_T i5;
  int32_T i6;
  int32_T k;
  real_T p;
  real_T dv2[2];
  real_T vnfaces_re[3];

  /*  In order to find the coordinates of the image points in the same order */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History:  2011.9.21 */
  /*  Updated by: Xuhong Li <xuhong@ftw.at> */
  /*  History: 2013.08.01 */
  /*  Using Mpath, remove previous level, Nbfaces, flag  */
  /*  corresponding imagepoints are stored in the next level */
  n = 0U;
  for (i = 0; i < 3; i++) {
    v[i] = 0.0;
  }

  i3 = Mpath->size[1];
  if (!(1 <= i3)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i3, &yf_emlrtBCI, sp);
  }

  i3 = Mpath->size[0];
  xoffset = (int32_T)mid;
  if (!((xoffset >= 1) && (xoffset <= i3))) {
    emlrtDynamicBoundsCheckR2012b(xoffset, 1, i3, &ag_emlrtBCI, sp);
  }

  for (i3 = 0; i3 < 3; i3++) {
    E[i3] = Mpath->data[(xoffset + Mpath->size[0] * Mpath->size[1] * (2 + i3)) -
      1];
  }

  /*  point */
  i3 = Mpath->size[1];
  if (!(1 <= i3)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i3, &wf_emlrtBCI, sp);
  }

  i3 = Mpath->size[0];
  xoffset = (int32_T)mid;
  if (!((xoffset >= 1) && (xoffset <= i3))) {
    emlrtDynamicBoundsCheckR2012b(xoffset, 1, i3, &xf_emlrtBCI, sp);
  }

  for (i3 = 0; i3 < 2; i3++) {
    face[i3] = Mpath->data[(xoffset + Mpath->size[0] * Mpath->size[1] * i3) - 1];
  }

  /*  face */
  if (Mpath->data[(int32_T)mid - 1] == -1.0) {
    /*    if this is Tx */
    for (i = 0; i < 3; i++) {
      cnt[i] = E[i];
    }
  } else {
    /*      if(face(1) ~= 0)  %  if this is not ground */
    i3 = wedges->size[0];
    s = Mpath->data[(int32_T)mid - 1];
    if (s != (int32_T)muDoubleScalarFloor(s)) {
      emlrtIntegerCheckR2012b(s, &y_emlrtDCI, sp);
    }

    i4 = (int32_T)s;
    if (!((i4 >= 1) && (i4 <= i3))) {
      emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &vf_emlrtBCI, sp);
    }

    s = Mpath->data[((int32_T)mid + Mpath->size[0] * Mpath->size[1]) - 1];
    if (s != (int32_T)muDoubleScalarFloor(s)) {
      emlrtIntegerCheckR2012b(s, &x_emlrtDCI, sp);
    }

    i3 = (int32_T)s;
    if (!((i3 >= 1) && (i3 <= 6))) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, 6, &uf_emlrtBCI, sp);
    }

    i3 = (int32_T)Mpath->data[((int32_T)mid + Mpath->size[0] * Mpath->size[1]) -
      1];
    i4 = (int32_T)Mpath->data[(int32_T)mid - 1];
    i5 = (int32_T)Mpath->data[((int32_T)mid + Mpath->size[0] * Mpath->size[1]) -
      1];
    i6 = (int32_T)Mpath->data[(int32_T)mid - 1];
    for (i = 0; i < 3; i++) {
      xoffset = i << 2;
      s = wedges->data[(((i4 + wedges->size[0] * (i3 - 1)) + wedges->size[0] *
                         wedges->size[1] * (xoffset % 4)) + wedges->size[0] *
                        wedges->size[1] * wedges->size[2] * (xoffset / 4)) - 1];
      for (k = 0; k < 3; k++) {
        j = (xoffset + k) + 1;
        s += wedges->data[(((i6 + wedges->size[0] * (i5 - 1)) + wedges->size[0] *
                            wedges->size[1] * (j % 4)) + wedges->size[0] *
                           wedges->size[1] * wedges->size[2] * (j / 4)) - 1];
      }

      cnt[i] = s / 4.0;
    }

    /*  the coordinates of the center point of the surface realted to the image */
    /*      end */
  }

  i3 = (int32_T)Nblock;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, Nblock, mxDOUBLE_CLASS, (int32_T)
    Nblock, &ab_emlrtRTEI, sp);
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
            emlrtDynamicBoundsCheckR2012b(i, 1, i4, &tf_emlrtBCI, sp);
          }

          /*                  if (face(1) ~= 0) */
          for (i4 = 0; i4 < 3; i4++) {
            p = wedges->data[(((i + wedges->size[0] * j) + wedges->size[0] *
                               wedges->size[1] * xoffset) + wedges->size[0] *
                              wedges->size[1] * wedges->size[2] * i4) - 1];
            v[i4] = (v[i4] + (p - cnt[i4])) / 4.0;
          }

          /*                  else */
          /*                      v = (v + (wedges_re - E))/4; */
          /*                  end  */
          xoffset++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        /*              if(face(1) == 0)    % the privoius relection from ground */
        /*                  resu1 = -1; */
        /*              else */
        i4 = vnfaces->size[0];
        if (!((i >= 1) && (i <= i4))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i4, &sf_emlrtBCI, sp);
        }

        s = 0.0;
        for (k = 0; k < 3; k++) {
          p = vnfaces->data[((i + vnfaces->size[0] * j) + vnfaces->size[0] *
                             vnfaces->size[1] * k) - 1];
          s += v[k] * p;
        }

        /*              end */
        if (s < 0.0) {
          n++;
          dv2[0] = 1.0 + (real_T)(i - 1);
          dv2[1] = 1.0 + (real_T)j;
          i4 = Mpath->size[0];
          i5 = Mpath->size[1];
          i6 = (int32_T)n;
          if (!((i6 >= 1) && (i6 <= i5))) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &qf_emlrtBCI, sp);
          }

          i5 = (int32_T)(mid + 1.0);
          if (!((i5 >= 1) && (i5 <= i4))) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &rf_emlrtBCI, sp);
          }

          for (i4 = 0; i4 < 2; i4++) {
            Mpath->data[(((int32_T)(mid + 1.0) + Mpath->size[0] * ((int32_T)n -
              1)) + Mpath->size[0] * Mpath->size[1] * i4) - 1] = dv2[i4];
          }

          Mpath_dirty |= 1U;

          /*  face */
          i4 = vnfaces->size[0];
          if (!((i >= 1) && (i <= i4))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i4, &pf_emlrtBCI, sp);
          }

          for (i4 = 0; i4 < 3; i4++) {
            vnfaces_re[i4] = vnfaces->data[((i + vnfaces->size[0] * j) +
              vnfaces->size[0] * vnfaces->size[1] * i4) - 1];
          }

          i4 = wedges->size[0];
          if (!((i >= 1) && (i <= i4))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i4, &of_emlrtBCI, sp);
          }

          s = 0.0;
          for (k = 0; k < 3; k++) {
            p = wedges->data[((i + wedges->size[0] * j) + wedges->size[0] *
                              wedges->size[1] * wedges->size[2] * k) - 1];
            p -= E[k];
            s += vnfaces_re[k] * p;
          }

          s *= 2.0;
          i4 = Mpath->size[0];
          i5 = Mpath->size[1];
          i6 = (int32_T)n;
          if (!((i6 >= 1) && (i6 <= i5))) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &mf_emlrtBCI, sp);
          }

          i5 = (int32_T)(mid + 1.0);
          if (!((i5 >= 1) && (i5 <= i4))) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &nf_emlrtBCI, sp);
          }

          for (i4 = 0; i4 < 3; i4++) {
            Mpath->data[(((int32_T)(mid + 1.0) + Mpath->size[0] * ((int32_T)n -
              1)) + Mpath->size[0] * Mpath->size[1] * (2 + i4)) - 1] = E[i4] + s
              * vnfaces_re[i4];
          }

          Mpath_dirty |= 1U;
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
  /*      Mpath(m,n,1:2)=[0;0]; */
  /*      Mpath(m,n,3:5)=E + 2*(no'*pt).*no; */
  /*   */
  /*  end  */
  return n;
}

/* End of code generation (EffPointsImages.c) */
