/*
 * Blocking.c
 *
 * Code generation for function 'Blocking'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CalcPath.h"
#include "Blocking.h"
#include "CalcPath_mexutil.h"
#include "AppFace2.h"
#include "CalcPath_data.h"

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

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  53,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  26,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  37,                                  /* colNo */
  "MSKFlag",                           /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  54,                                  /* colNo */
  "CEP",                               /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo k_emlrtRSI = { 46,  /* lineNo */
  "Blocking",                          /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Blocking.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 47,  /* lineNo */
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
  int32_T i4;
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

  real_T b_P1_re[3];
  real_T dv0[12];
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
      i4 = vnfaces->size[0];
      b_i = (int32_T)i;
      if (!((b_i >= 1) && (b_i <= i4))) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, i4, &bc_emlrtBCI, sp);
      }

      cdpr = 0.0;
      for (k = 0; k < 3; k++) {
        n = vnfaces->data[((b_i + vnfaces->size[0] * j) + vnfaces->size[0] *
                           vnfaces->size[1] * k) - 1];
        cdpr += dp[k] * n;
      }

      if (muDoubleScalarAbs(cdpr) > 0.001) {
        i4 = wedges->size[0];
        k = (int32_T)i;
        if (!((k >= 1) && (k <= i4))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i4, &ac_emlrtBCI, sp);
        }

        i4 = wedges->size[0];
        k = (int32_T)i;
        if (!((k >= 1) && (k <= i4))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i4, &yb_emlrtBCI, sp);
        }

        i4 = wedges->size[0];
        k = (int32_T)i;
        if (!((k >= 1) && (k <= i4))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i4, &xb_emlrtBCI, sp);
        }

        i4 = wedges->size[0];
        k = (int32_T)i;
        if (!((k >= 1) && (k <= i4))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i4, &wb_emlrtBCI, sp);
        }

        i4 = wedges->size[0];
        k = (int32_T)i;
        if (!((k >= 1) && (k <= i4))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i4, &vb_emlrtBCI, sp);
        }

        i4 = wedges->size[0];
        k = (int32_T)i;
        if (!((k >= 1) && (k <= i4))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i4, &ub_emlrtBCI, sp);
        }

        i4 = wedges->size[0];
        k = (int32_T)i;
        if (!((k >= 1) && (k <= i4))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i4, &tb_emlrtBCI, sp);
        }

        i4 = wedges->size[0];
        k = (int32_T)i;
        if (!((k >= 1) && (k <= i4))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i4, &sb_emlrtBCI, sp);
        }

        i4 = wedges->size[0];
        k = (int32_T)i;
        if (!((k >= 1) && (k <= i4))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i4, &rb_emlrtBCI, sp);
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
          st.site = &k_emlrtRSI;
          disp(&st, y, &emlrtMCI);
          emlrt_synchGlobalsFromML(sp);
          emlrt_synchGlobalsToML();
          st.site = &l_emlrtRSI;
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
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
            /*                      af = AppFace(ip,face); */
            i4 = wedges->size[0];
            k = (int32_T)i;
            if (!((k >= 1) && (k <= i4))) {
              emlrtDynamicBoundsCheckR2012b(k, 1, i4, &qb_emlrtBCI, sp);
            }

            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
            for (b_i = 0; b_i < 3; b_i++) {
              b_P1_re[b_i] = P1_re[b_i] + cdpr * (P2_re[b_i] - P1_re[b_i]);
            }

            for (i4 = 0; i4 < 4; i4++) {
              for (k = 0; k < 3; k++) {
                dv0[k + 3 * i4] = wedges->data[((((int32_T)i + wedges->size[0] *
                  j) + wedges->size[0] * wedges->size[1] * i4) + wedges->size[0]
                  * wedges->size[1] * wedges->size[2] * k) - 1];
              }
            }

            if (AppFace2(b_P1_re, dv0) == 1.0) {
              i4 = MSKFlag->size[0];
              k = (int32_T)i;
              if (!((k >= 1) && (k <= i4))) {
                emlrtDynamicBoundsCheckR2012b(k, 1, i4, &cc_emlrtBCI, sp);
              }

              if (MSKFlag->data[k - 1] == 1.0) {
                /*  masking if the block does not allow penetration or if it is a PEC */
                /*                              if (abs(t)>1.0e-6) && (abs(t-1)>1.0e-6) */
                blk = 1.0;

                /*                              end */
              } else {
                i4 = CEP->size[0];
                k = (int32_T)i;
                if (!((k >= 1) && (k <= i4))) {
                  emlrtDynamicBoundsCheckR2012b(k, 1, i4, &dc_emlrtBCI, sp);
                }

                if (CEP->data[k - 1] == 1.0) {
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
