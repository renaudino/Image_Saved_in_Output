/*
 * Construct2.c
 *
 * Code generation for function 'Construct2'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Construct2.h"
#include "Construct2_data.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  82,                                  /* lineNo */
  27,                                  /* colNo */
  "trun2",                             /* aName */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  78,                                  /* lineNo */
  38,                                  /* colNo */
  "wedges",                            /* aName */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  39,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  27,                                  /* colNo */
  "trun2",                             /* aName */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  47,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  40,                                  /* colNo */
  "wedges",                            /* aName */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = { 53,/* lineNo */
  13,                                  /* colNo */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m"/* pName */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  46,                                  /* lineNo */
  43,                                  /* colNo */
  "wedges",                            /* aName */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 46,    /* lineNo */
  43,                                  /* colNo */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  35,                                  /* colNo */
  "wedges",                            /* aName */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 46,  /* lineNo */
  35,                                  /* colNo */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  18,                                  /* colNo */
  "trun2",                             /* aName */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  18,                                  /* colNo */
  "trun2",                             /* aName */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  14,                                  /* colNo */
  "trun2",                             /* aName */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  7,                                   /* colNo */
  "trun2",                             /* aName */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  7,                                   /* colNo */
  "trun2",                             /* aName */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  7,                                   /* colNo */
  "trun2",                             /* aName */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  7,                                   /* colNo */
  "trun2",                             /* aName */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  16,                                  /* colNo */
  "trun2",                             /* aName */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  83,                                  /* lineNo */
  27,                                  /* colNo */
  "trun2",                             /* aName */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  84,                                  /* lineNo */
  27,                                  /* colNo */
  "trun2",                             /* aName */
  "Construct2",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Construct2.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void Construct2(const emlrtStack *sp, real_T OrdRef)
{
  int32_T i0;
  uint32_T cind;
  uint32_T oind;
  real_T ii;
  int32_T b_oind;
  real_T E[3];
  real_T face[2];
  real_T s;
  real_T cnt[3];
  int32_T i1;
  int32_T i;
  int32_T xoffset;
  int32_T i2;
  int32_T k;
  int32_T i3;
  real_T x[12];
  real_T v[3];
  real_T vnfaces_re;

  /*  #codegen */
  /*  switch (OrdRef) % (OR): commented on 07.11.2017 */
  /*      case 1 */
  /*  %         trun2 = zeros(1e3,7); */
  /*          trun2 = zeros(1e8,7); */
  /*      case 2 */
  /*  %         trun2 = zeros(1e6,7); */
  /*          trun2 = zeros(1e8,7); */
  /*      otherwise */
  /*          trun2 = zeros(1e8,7); */
  /*  end */
  /*  trun2         = zeros(1e6,7); */
  /*  trun2         = zeros(1e6,7); */
  i0 = trun2->size[0];
  if (!(1 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &o_emlrtBCI, sp);
  }

  trun2->data[0] = 0.0;

  /*  (OR): index of the predecessor */
  i0 = trun2->size[0];
  if (!(1 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &n_emlrtBCI, sp);
  }

  for (i0 = 0; i0 < 2; i0++) {
    trun2->data[trun2->size[0] * (1 + i0)] = -1.0 + (real_T)i0;
  }

  /*  (OR): [block face] */
  i0 = trun2->size[0];
  if (!(1 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &m_emlrtBCI, sp);
  }

  for (i0 = 0; i0 < 3; i0++) {
    trun2->data[trun2->size[0] * (3 + i0)] = emett[i0];
  }

  /*  (OR): 'x', 'y' and 'z' coordinates of the point */
  i0 = trun2->size[0];
  if (!(1 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &l_emlrtBCI, sp);
  }

  trun2->data[trun2->size[0] * 6] = 0.0;

  /*  (OR): level */
  cind = 1U;
  oind = 1U;
  i0 = trun2->size[0];
  if (!(1 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &k_emlrtBCI, sp);
  }

  ii = trun2->data[trun2->size[0] * 6];
  while (ii < OrdRef) {
    /*      v    = zeros(3,1); */
    i0 = trun2->size[0];
    b_oind = (int32_T)oind;
    if (!((b_oind >= 1) && (b_oind <= i0))) {
      emlrtDynamicBoundsCheckR2012b(b_oind, 1, i0, &j_emlrtBCI, sp);
    }

    for (i0 = 0; i0 < 3; i0++) {
      E[i0] = trun2->data[(b_oind + trun2->size[0] * (3 + i0)) - 1];
    }

    i0 = trun2->size[0];
    b_oind = (int32_T)oind;
    if (!((b_oind >= 1) && (b_oind <= i0))) {
      emlrtDynamicBoundsCheckR2012b(b_oind, 1, i0, &i_emlrtBCI, sp);
    }

    for (i0 = 0; i0 < 2; i0++) {
      face[i0] = trun2->data[(b_oind + trun2->size[0] * (1 + i0)) - 1];
    }

    if (trun2->data[((int32_T)oind + trun2->size[0]) - 1] == -1.0) {
      /*  (OR): if  */
      for (i0 = 0; i0 < 3; i0++) {
        cnt[i0] = trun2->data[((int32_T)oind + trun2->size[0] * (3 + i0)) - 1];
      }
    } else {
      /*          if (face(1) ~= 0) */
      /*  coordinates of the center point of the surface related to the image */
      i0 = wedges->size[0];
      s = trun2->data[((int32_T)oind + trun2->size[0]) - 1];
      if (s != (int32_T)muDoubleScalarFloor(s)) {
        emlrtIntegerCheckR2012b(s, &b_emlrtDCI, sp);
      }

      i1 = (int32_T)s;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &h_emlrtBCI, sp);
      }

      s = trun2->data[((int32_T)oind + (trun2->size[0] << 1)) - 1];
      if (s != (int32_T)muDoubleScalarFloor(s)) {
        emlrtIntegerCheckR2012b(s, &emlrtDCI, sp);
      }

      i0 = (int32_T)s;
      if (!((i0 >= 1) && (i0 <= 6))) {
        emlrtDynamicBoundsCheckR2012b(i0, 1, 6, &g_emlrtBCI, sp);
      }

      i0 = (int32_T)trun2->data[((int32_T)oind + (trun2->size[0] << 1)) - 1];
      i1 = (int32_T)trun2->data[((int32_T)oind + trun2->size[0]) - 1];
      i2 = (int32_T)trun2->data[((int32_T)oind + (trun2->size[0] << 1)) - 1];
      b_oind = (int32_T)trun2->data[((int32_T)oind + trun2->size[0]) - 1];
      for (i = 0; i < 3; i++) {
        xoffset = i << 2;
        s = wedges->data[(((i1 + wedges->size[0] * (i0 - 1)) + wedges->size[0] *
                           wedges->size[1] * (xoffset % 4)) + wedges->size[0] *
                          wedges->size[1] * wedges->size[2] * (xoffset / 4)) - 1];
        for (k = 0; k < 3; k++) {
          i3 = (xoffset + k) + 1;
          s += wedges->data[(((b_oind + wedges->size[0] * (i2 - 1)) +
                              wedges->size[0] * wedges->size[1] * (i3 % 4)) +
                             wedges->size[0] * wedges->size[1] * wedges->size[2]
                             * (i3 / 4)) - 1];
        }

        cnt[i] = s / 4.0;
      }

      /*          end */
    }

    /*      wedges_re = zeros(3,1); */
    i0 = (int32_T)Nblock;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, Nblock, mxDOUBLE_CLASS, (int32_T)
      Nblock, &d_emlrtRTEI, sp);
    i = 0;
    while (i <= i0 - 1) {
      if (1.0 + (real_T)i != face[0]) {
        /*  make sure that the next reflection is not in the same surface as the previous one */
        xoffset = 0;
        while (xoffset < 6) {
          i1 = wedges->size[0];
          i2 = i + 1;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &f_emlrtBCI, sp);
          }

          /*                  if (face(1) == 0) % the previous reflection from ground */
          /*                      v = sum(wedges_tmp-E*ones(1,4),2)/4; */
          /*                  else */
          for (i1 = 0; i1 < 3; i1++) {
            for (i2 = 0; i2 < 4; i2++) {
              x[i1 + 3 * i2] = wedges->data[((i + wedges->size[0] * xoffset) +
                wedges->size[0] * wedges->size[1] * i2) + wedges->size[0] *
                wedges->size[1] * wedges->size[2] * i1] - cnt[i1];
            }
          }

          for (b_oind = 0; b_oind < 3; b_oind++) {
            s = x[b_oind];
            for (k = 0; k < 3; k++) {
              s += x[b_oind + (k + 1) * 3];
            }

            v[b_oind] = s / 4.0;
          }

          /*                  end */
          /*                  if (face(1) == 0) % the previous reflection from ground */
          /*                      resu1 = -1; */
          /*                  else */
          i1 = vnfaces->size[0];
          if (!((i + 1 >= 1) && (i + 1 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i + 1, 1, i1, &e_emlrtBCI, sp);
          }

          b_oind = i + 1;
          s = 0.0;
          for (k = 0; k < 3; k++) {
            vnfaces_re = vnfaces->data[((b_oind + vnfaces->size[0] * xoffset) +
              vnfaces->size[0] * vnfaces->size[1] * k) - 1];
            s += v[k] * vnfaces_re;
          }

          /* dot(v,vnfaces_re); */
          /*                  end */
          if (s < 0.0) {
            cind++;
            i1 = trun2->size[0];
            i2 = (int32_T)cind;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &d_emlrtBCI, sp);
            }

            trun2->data[((int32_T)cind + trun2->size[0]) - 1] = 1.0 + (real_T)i;
            trun2->data[((int32_T)cind + (trun2->size[0] << 1)) - 1] = 1.0 +
              (real_T)xoffset;
            i1 = vnfaces->size[0];
            if (!((i + 1 >= 1) && (i + 1 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i + 1, 1, i1, &c_emlrtBCI, sp);
            }

            b_oind = i + 1;
            for (i1 = 0; i1 < 3; i1++) {
              v[i1] = vnfaces->data[((b_oind + vnfaces->size[0] * xoffset) +
                vnfaces->size[0] * vnfaces->size[1] * i1) - 1];
            }

            i1 = wedges->size[0];
            if (!((i + 1 >= 1) && (i + 1 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i + 1, 1, i1, &b_emlrtBCI, sp);
            }

            b_oind = i + 1;
            s = 0.0;
            for (k = 0; k < 3; k++) {
              vnfaces_re = wedges->data[((b_oind + wedges->size[0] * xoffset) +
                wedges->size[0] * wedges->size[1] * wedges->size[2] * k) - 1];
              vnfaces_re -= E[k];
              s += v[k] * vnfaces_re;
            }

            s *= 2.0;
            i1 = trun2->size[0];
            i2 = (int32_T)cind;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &emlrtBCI, sp);
            }

            for (i1 = 0; i1 < 3; i1++) {
              trun2->data[((int32_T)cind + trun2->size[0] * (3 + i1)) - 1] =
                E[i1] + s * v[i1];
            }

            /*  the coordinates of the image point */
            i1 = trun2->size[0];
            i2 = (int32_T)cind;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &q_emlrtBCI, sp);
            }

            trun2->data[i2 - 1] = oind;
            i1 = trun2->size[0];
            i2 = (int32_T)cind;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &r_emlrtBCI, sp);
            }

            trun2->data[(i2 + trun2->size[0] * 6) - 1] = ii + 1.0;
          }

          xoffset++;
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

    /*      no(1) = 0; % ground case */
    /*      no(2) = 0; */
    /*      no(3) = 1; */
    /*       */
    /*      pt = -E; */
    /*       */
    /*      if (face(1) ~= 0) && (cnt(3) > 0) */
    /*          cind            = cind+1; */
    /*          trun2(cind,2:3) = [0 0]; */
    /*          trun2(cind,4:6) = (E+2*(no'*pt).*no).'; */
    /*          trun2(cind,1)   = oind; */
    /*          trun2(cind,7)   = ii+1; */
    /*      end */
    oind++;
    i0 = trun2->size[0];
    i1 = (int32_T)oind;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &p_emlrtBCI, sp);
    }

    ii = trun2->data[(i1 + trun2->size[0] * 6) - 1];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

/* End of code generation (Construct2.c) */
