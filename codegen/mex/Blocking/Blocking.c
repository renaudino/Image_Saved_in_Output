/*
 * Blocking.c
 *
 * Code generation for function 'Blocking'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Blocking.h"
#include "Blocking_mexutil.h"
#include "norm.h"
#include "Blocking_data.h"

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 46,    /* lineNo */
  17,                                  /* colNo */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 47,  /* lineNo */
  17,                                  /* colNo */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  53,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  26,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  37,                                  /* colNo */
  "MSKFlag",                           /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  54,                                  /* colNo */
  "CEP",                               /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo emlrtRSI = { 46,    /* lineNo */
  "Blocking",                          /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 47,  /* lineNo */
  "Blocking",                          /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m"/* pathName */
};

/* Function Declarations */
static void b_exit(const emlrtStack *sp, emlrtMCInfo *location);
static void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void b_exit(const emlrtStack *sp, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b(sp, 0, NULL, 0, NULL, "exit", true, location);
}

static void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "disp", true, location);
}

real_T Blocking(const emlrtStack *sp, const real_T P1_re[3], const real_T P2_re
                [3])
{
  real_T blk;
  real_T i;
  int32_T b_i;
  real_T dp[3];
  int32_T j;
  int32_T i1;
  real_T cdpr;
  int32_T k;
  real_T n;
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 60 };

  static const char_T u[60] = { 'E', 'r', 'r', 'o', 'r', ':', ' ', 't', 'h', 'e',
    ' ', 'd', 'e', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'n', 't', ' ', 'i', 's',
    ' ', 'e', 'q', 'u', 'a', 'l', ' ', 't', 'o', ' ', 'z', 'e', 'r', 'o', ' ',
    'i', 'n', ' ', 'b', 'l', 'o', 'k', 'i', 'n', 'g', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n', '!' };

  real_T ip[3];
  real_T pmat0[12];
  real_T p21[3];
  real_T b_n[3];
  real_T p41[3];
  real_T b_y;
  real_T b2[3];
  real_T b_p21[9];
  real_T c_p21[9];
  real_T b_ip[3];
  real_T p_mat[12];
  real_T pmat0e[10];
  real_T d_p21[12];
  real_T e_p21[12];
  boolean_T angle_sign[4];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Check if the two points are blocked */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History:  2011.9.20 */
  /*  Updated by: Xuhong Li <xuhong@ftw.at> */
  /*  History: 2013.08.01 */
  blk = 0.0;
  i = 1.0;
  for (b_i = 0; b_i < 3; b_i++) {
    dp[b_i] = P2_re[b_i] - P1_re[b_i];
  }

  while ((i <= Nblock) && (blk != 1.0)) {
    j = 0;
    while ((j + 1 <= 6) && (blk != 1.0)) {
      i1 = vnfaces->size[0];
      b_i = (int32_T)i;
      if (!((b_i >= 1) && (b_i <= i1))) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, i1, &k_emlrtBCI, sp);
      }

      cdpr = 0.0;
      for (k = 0; k < 3; k++) {
        n = vnfaces->data[((b_i + vnfaces->size[0] * j) + vnfaces->size[0] *
                           vnfaces->size[1] * k) - 1];
        cdpr += dp[k] * n;
      }

      if (muDoubleScalarAbs(cdpr) > 0.001) {
        i1 = wedges->size[0];
        b_i = (int32_T)i;
        if (!((b_i >= 1) && (b_i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, i1, &j_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        b_i = (int32_T)i;
        if (!((b_i >= 1) && (b_i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, i1, &i_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        b_i = (int32_T)i;
        if (!((b_i >= 1) && (b_i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, i1, &h_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        b_i = (int32_T)i;
        if (!((b_i >= 1) && (b_i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, i1, &g_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        b_i = (int32_T)i;
        if (!((b_i >= 1) && (b_i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, i1, &f_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        b_i = (int32_T)i;
        if (!((b_i >= 1) && (b_i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, i1, &e_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        b_i = (int32_T)i;
        if (!((b_i >= 1) && (b_i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, i1, &d_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        b_i = (int32_T)i;
        if (!((b_i >= 1) && (b_i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, i1, &c_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        b_i = (int32_T)i;
        if (!((b_i >= 1) && (b_i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, i1, &b_emlrtBCI, sp);
        }

        cdpr = ((P1_re[0] - P2_re[0]) * ((wedges->data[(((int32_T)i +
                    wedges->size[0] * j) + wedges->size[0] * wedges->size[1] *
                   wedges->size[2]) - 1] - wedges->data[((((int32_T)i +
          wedges->size[0] * j) + (wedges->size[0] * wedges->size[1] << 1)) +
                   wedges->size[0] * wedges->size[1] * wedges->size[2]) - 1]) *
                 (wedges->data[((((int32_T)i + wedges->size[0] * j) +
                    wedges->size[0] * wedges->size[1]) + (wedges->size[0] *
                    wedges->size[1] * wedges->size[2] << 1)) - 1] - wedges->
                  data[((((int32_T)i + wedges->size[0] * j) + (wedges->size[0] *
          wedges->size[1] << 1)) + (wedges->size[0] * wedges->size[1] *
                    wedges->size[2] << 1)) - 1]) - (wedges->data[((((int32_T)i +
          wedges->size[0] * j) + wedges->size[0] * wedges->size[1]) +
                   wedges->size[0] * wedges->size[1] * wedges->size[2]) - 1] -
                  wedges->data[((((int32_T)i + wedges->size[0] * j) +
                    (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
                   wedges->size[1] * wedges->size[2]) - 1]) * (wedges->data
                  [(((int32_T)i + wedges->size[0] * j) + (wedges->size[0] *
                    wedges->size[1] * wedges->size[2] << 1)) - 1] - wedges->
                  data[((((int32_T)i + wedges->size[0] * j) + (wedges->size[0] *
          wedges->size[1] << 1)) + (wedges->size[0] * wedges->size[1] *
                    wedges->size[2] << 1)) - 1])) - (P1_re[1] - P2_re[1]) *
                ((wedges->data[((int32_T)i + wedges->size[0] * j) - 1] -
                  wedges->data[(((int32_T)i + wedges->size[0] * j) +
                   (wedges->size[0] * wedges->size[1] << 1)) - 1]) *
                 (wedges->data[((((int32_T)i + wedges->size[0] * j) +
                    wedges->size[0] * wedges->size[1]) + (wedges->size[0] *
                    wedges->size[1] * wedges->size[2] << 1)) - 1] - wedges->
                  data[((((int32_T)i + wedges->size[0] * j) + (wedges->size[0] *
          wedges->size[1] << 1)) + (wedges->size[0] * wedges->size[1] *
                    wedges->size[2] << 1)) - 1]) - (wedges->data[(((int32_T)i +
                    wedges->size[0] * j) + wedges->size[0] * wedges->size[1]) -
                  1] - wedges->data[(((int32_T)i + wedges->size[0] * j) +
                   (wedges->size[0] * wedges->size[1] << 1)) - 1]) *
                 (wedges->data[(((int32_T)i + wedges->size[0] * j) +
                   (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1)) -
                  1] - wedges->data[((((int32_T)i + wedges->size[0] * j) +
                    (wedges->size[0] * wedges->size[1] << 1)) + (wedges->size[0]
                    * wedges->size[1] * wedges->size[2] << 1)) - 1]))) + (P1_re
          [2] - P2_re[2]) * ((wedges->data[((int32_T)i + wedges->size[0] * j) -
                              1] - wedges->data[(((int32_T)i + wedges->size[0] *
          j) + (wedges->size[0] * wedges->size[1] << 1)) - 1]) * (wedges->data
          [((((int32_T)i + wedges->size[0] * j) + wedges->size[0] * wedges->
             size[1]) + wedges->size[0] * wedges->size[1] * wedges->size[2]) - 1]
          - wedges->data[((((int32_T)i + wedges->size[0] * j) + (wedges->size[0]
          * wedges->size[1] << 1)) + wedges->size[0] * wedges->size[1] *
                          wedges->size[2]) - 1]) - (wedges->data[(((int32_T)i +
          wedges->size[0] * j) + wedges->size[0] * wedges->size[1]) - 1] -
          wedges->data[(((int32_T)i + wedges->size[0] * j) + (wedges->size[0] *
          wedges->size[1] << 1)) - 1]) * (wedges->data[(((int32_T)i +
          wedges->size[0] * j) + wedges->size[0] * wedges->size[1] *
          wedges->size[2]) - 1] - wedges->data[((((int32_T)i + wedges->size[0] *
          j) + (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
          wedges->size[1] * wedges->size[2]) - 1]));
        if (cdpr == 0.0) {
          emlrt_synchGlobalsToML();
          y = NULL;
          m0 = emlrtCreateCharArray(2, iv0);
          emlrtInitCharArrayR2013a(sp, 60, m0, &u[0]);
          emlrtAssign(&y, m0);
          st.site = &emlrtRSI;
          disp(&st, y, &emlrtMCI);
          emlrt_synchGlobalsFromML(sp);
          emlrt_synchGlobalsToML();
          st.site = &b_emlrtRSI;
          b_exit(&st, &b_emlrtMCI);
          emlrt_synchGlobalsFromML(sp);
        } else {
          cdpr = (((P1_re[0] - wedges->data[(((int32_T)i + wedges->size[0] * j)
                     + (wedges->size[0] * wedges->size[1] << 1)) - 1]) *
                   ((wedges->data[(((int32_T)i + wedges->size[0] * j) +
                      wedges->size[0] * wedges->size[1] * wedges->size[2]) - 1]
                     - wedges->data[((((int32_T)i + wedges->size[0] * j) +
            (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
                      wedges->size[1] * wedges->size[2]) - 1]) * (wedges->data
                     [((((int32_T)i + wedges->size[0] * j) + wedges->size[0] *
                        wedges->size[1]) + (wedges->size[0] * wedges->size[1] *
            wedges->size[2] << 1)) - 1] - wedges->data[((((int32_T)i +
            wedges->size[0] * j) + (wedges->size[0] * wedges->size[1] << 1)) +
                      (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1))
                     - 1]) - (wedges->data[((((int32_T)i + wedges->size[0] * j)
            + wedges->size[0] * wedges->size[1]) + wedges->size[0] *
                      wedges->size[1] * wedges->size[2]) - 1] - wedges->data
                              [((((int32_T)i + wedges->size[0] * j) +
            (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
                                wedges->size[1] * wedges->size[2]) - 1]) *
                    (wedges->data[(((int32_T)i + wedges->size[0] * j) +
                      (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1))
                     - 1] - wedges->data[((((int32_T)i + wedges->size[0] * j) +
            (wedges->size[0] * wedges->size[1] << 1)) + (wedges->size[0] *
            wedges->size[1] * wedges->size[2] << 1)) - 1])) + (P1_re[1] -
                    wedges->data[((((int32_T)i + wedges->size[0] * j) +
                      (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0]
                     * wedges->size[1] * wedges->size[2]) - 1]) * ((wedges->
                     data[(((int32_T)i + wedges->size[0] * j) + wedges->size[0] *
                           wedges->size[1]) - 1] - wedges->data[(((int32_T)i +
            wedges->size[0] * j) + (wedges->size[0] * wedges->size[1] << 1)) - 1])
                    * (wedges->data[(((int32_T)i + wedges->size[0] * j) +
                      (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1))
                       - 1] - wedges->data[((((int32_T)i + wedges->size[0] * j)
            + (wedges->size[0] * wedges->size[1] << 1)) + (wedges->size[0] *
            wedges->size[1] * wedges->size[2] << 1)) - 1]) - (wedges->data
                     [((int32_T)i + wedges->size[0] * j) - 1] - wedges->data
                     [(((int32_T)i + wedges->size[0] * j) + (wedges->size[0] *
            wedges->size[1] << 1)) - 1]) * (wedges->data[((((int32_T)i +
            wedges->size[0] * j) + wedges->size[0] * wedges->size[1]) +
                      (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1))
                     - 1] - wedges->data[((((int32_T)i + wedges->size[0] * j) +
            (wedges->size[0] * wedges->size[1] << 1)) + (wedges->size[0] *
            wedges->size[1] * wedges->size[2] << 1)) - 1]))) + (P1_re[2] -
                   wedges->data[((((int32_T)i + wedges->size[0] * j) +
                     (wedges->size[0] * wedges->size[1] << 1)) + (wedges->size[0]
                     * wedges->size[1] * wedges->size[2] << 1)) - 1]) *
                  ((wedges->data[((int32_T)i + wedges->size[0] * j) - 1] -
                    wedges->data[(((int32_T)i + wedges->size[0] * j) +
                     (wedges->size[0] * wedges->size[1] << 1)) - 1]) *
                   (wedges->data[((((int32_T)i + wedges->size[0] * j) +
                      wedges->size[0] * wedges->size[1]) + wedges->size[0] *
                     wedges->size[1] * wedges->size[2]) - 1] - wedges->data
                    [((((int32_T)i + wedges->size[0] * j) + (wedges->size[0] *
            wedges->size[1] << 1)) + wedges->size[0] * wedges->size[1] *
                      wedges->size[2]) - 1]) - (wedges->data[(((int32_T)i +
                      wedges->size[0] * j) + wedges->size[0] * wedges->size[1])
                    - 1] - wedges->data[(((int32_T)i + wedges->size[0] * j) +
                     (wedges->size[0] * wedges->size[1] << 1)) - 1]) *
                   (wedges->data[(((int32_T)i + wedges->size[0] * j) +
                     wedges->size[0] * wedges->size[1] * wedges->size[2]) - 1] -
                    wedges->data[((((int32_T)i + wedges->size[0] * j) +
                      (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0]
                     * wedges->size[1] * wedges->size[2]) - 1]))) / cdpr;
          if ((cdpr > -1.0E-6) && (cdpr < 1.000001)) {
            for (b_i = 0; b_i < 3; b_i++) {
              ip[b_i] = P1_re[b_i] + cdpr * (P2_re[b_i] - P1_re[b_i]);
            }

            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
            /*                      af = AppFace(ip,face); */
            i1 = wedges->size[0];
            b_i = (int32_T)i;
            if (!((b_i >= 1) && (b_i <= i1))) {
              emlrtDynamicBoundsCheckR2012b(b_i, 1, i1, &emlrtBCI, sp);
            }

            for (i1 = 0; i1 < 4; i1++) {
              for (b_i = 0; b_i < 3; b_i++) {
                pmat0[b_i + 3 * i1] = wedges->data[((((int32_T)i + wedges->size
                  [0] * j) + wedges->size[0] * wedges->size[1] * i1) +
                  wedges->size[0] * wedges->size[1] * wedges->size[2] * b_i) - 1];
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
              p21[i1] = pmat0[3 + i1] - pmat0[i1];
              p41[i1] = pmat0[9 + i1] - pmat0[i1];
            }

            /*  Calculating the planes normal vector and normalizing it */
            b_n[0] = p21[1] * p41[2] - p21[2] * p41[1];
            b_n[1] = p21[2] * p41[0] - p21[0] * p41[2];
            b_n[2] = p21[0] * p41[1] - p21[1] * p41[0];
            b_y = norm(b_n);

            /*  If the vector to the query point and the normal vector are not othogonal, the query point is not within  */
            /*  the plane or the polygon */
            cdpr = 0.0;
            for (k = 0; k < 3; k++) {
              n = b_n[k] / b_y;
              cdpr += n * (ip[k] - pmat0[k]);
              b_n[k] = n;
            }

            if (muDoubleScalarAbs(cdpr) > 1.0E-6) {
              b_i = 0;
            } else {
              /*  Calculate the center of mass for the polygon */
              /*  Calculate the orthogonal basis vectors for the new coordinate system */
              b_y = norm(p21);
              for (b_i = 0; b_i < 3; b_i++) {
                cdpr = pmat0[b_i];
                for (k = 0; k < 3; k++) {
                  cdpr += pmat0[b_i + (k + 1) * 3];
                }

                p41[b_i] = cdpr / 4.0;
                p21[b_i] /= b_y;
              }

              b2[0] = p21[1] * b_n[2] - p21[2] * b_n[1];
              b2[1] = p21[2] * b_n[0] - p21[0] * b_n[2];
              b2[2] = p21[0] * b_n[1] - p21[1] * b_n[0];

              /*  Transform the shifted polygon with new basis vectors */
              /*  Actual algorithm checking if the query point lies within the polygon, first shift the coordinate system such that  */
              /*  the query point coincides with the coordinate origin */
              for (i1 = 0; i1 < 3; i1++) {
                b_p21[3 * i1] = p21[i1];
                b_p21[1 + 3 * i1] = b2[i1];
                b_p21[2 + 3 * i1] = b_n[i1];
                for (b_i = 0; b_i < 4; b_i++) {
                  p_mat[i1 + 3 * b_i] = pmat0[i1 + 3 * b_i] - p41[i1];
                }

                c_p21[3 * i1] = p21[i1];
                c_p21[1 + 3 * i1] = b2[i1];
                c_p21[2 + 3 * i1] = b_n[i1];
                b_ip[i1] = ip[i1] - p41[i1];
              }

              for (i1 = 0; i1 < 3; i1++) {
                p21[i1] = 0.0;
                for (b_i = 0; b_i < 3; b_i++) {
                  p21[i1] += c_p21[i1 + 3 * b_i] * b_ip[b_i];
                }

                for (b_i = 0; b_i < 4; b_i++) {
                  d_p21[i1 + 3 * b_i] = 0.0;
                  for (k = 0; k < 3; k++) {
                    d_p21[i1 + 3 * b_i] += b_p21[i1 + 3 * k] * p_mat[k + 3 * b_i];
                  }

                  e_p21[i1 + 3 * b_i] = p21[i1];
                }
              }

              /*  Only consider two dimensions and add the first point as last point */
              for (i1 = 0; i1 < 4; i1++) {
                for (b_i = 0; b_i < 3; b_i++) {
                  pmat0[b_i + 3 * i1] = d_p21[b_i + 3 * i1] - e_p21[b_i + 3 * i1];
                }

                for (b_i = 0; b_i < 2; b_i++) {
                  pmat0e[b_i + (i1 << 1)] = pmat0[b_i + 3 * i1];
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
              b_y = angle_sign[0];
              for (k = 0; k < 3; k++) {
                b_y += (real_T)angle_sign[k + 1];
              }

              if (b_y == 4.0) {
                b_i = 1;

                /*  If angle sign change occured, query point is not within polygon */
              } else {
                b_i = 0;
              }
            }

            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
            if (b_i == 1) {
              i1 = MSKFlag->size[0];
              b_i = (int32_T)i;
              if (!((b_i >= 1) && (b_i <= i1))) {
                emlrtDynamicBoundsCheckR2012b(b_i, 1, i1, &l_emlrtBCI, sp);
              }

              if (MSKFlag->data[b_i - 1] == 1.0) {
                /*  masking if the block does not allow penetration or if it is a PEC */
                /*                              if (abs(t)>1.0e-6) && (abs(t-1)>1.0e-6) */
                blk = 1.0;

                /*                              end */
              } else {
                i1 = CEP->size[0];
                b_i = (int32_T)i;
                if (!((b_i >= 1) && (b_i <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(b_i, 1, i1, &m_emlrtBCI, sp);
                }

                if (CEP->data[b_i - 1] == 1.0) {
                  /*  masking if the block does not allow penetration or if it is a PEC */
                  /*                              if (abs(t)>1.0e-6) && (abs(t-1)>1.0e-6) */
                  blk = 1.0;

                  /*                              end */
                }
              }
            }
          }
        }
      }

      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  return blk;
}

/* End of code generation (Blocking.c) */
