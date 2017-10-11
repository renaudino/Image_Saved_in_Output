/*
 * Blocking.c
 *
 * Code generation for function 'Blocking'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct_Image.h"
#include "Blocking.h"
#include "EffConstruct_Image_mexutil.h"
#include "AppFace2.h"
#include "EffConstruct_Image_data.h"

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 46,    /* lineNo */
  17,                                  /* colNo */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 47,  /* lineNo */
  17,                                  /* colNo */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m"/* pName */
};

static emlrtBCInfo fg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  53,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ig_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ng_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo og_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  26,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  37,                                  /* colNo */
  "MSKFlag",                           /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  54,                                  /* colNo */
  "CEP",                               /* aName */
  "Blocking",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo j_emlrtRSI = { 46,  /* lineNo */
  "Blocking",                          /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 47,  /* lineNo */
  "Blocking",                          /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Blocking.m"/* pathName */
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
  int32_T i8;
  real_T cdpr;
  int32_T k;
  real_T n;
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv1[2] = { 1, 60 };

  static const char_T u[60] = { 'E', 'r', 'r', 'o', 'r', ':', ' ', 't', 'h', 'e',
    ' ', 'd', 'e', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'n', 't', ' ', 'i', 's',
    ' ', 'e', 'q', 'u', 'a', 'l', ' ', 't', 'o', ' ', 'z', 'e', 'r', 'o', ' ',
    'i', 'n', ' ', 'b', 'l', 'o', 'k', 'i', 'n', 'g', ' ', 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n', '!' };

  real_T b_P1_re[3];
  real_T dv3[12];
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
      i8 = vnfaces->size[0];
      b_i = (int32_T)i;
      if (!((b_i >= 1) && (b_i <= i8))) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, i8, &pg_emlrtBCI, sp);
      }

      cdpr = 0.0;
      for (k = 0; k < 3; k++) {
        n = vnfaces->data[((b_i + vnfaces->size[0] * j) + vnfaces->size[0] *
                           vnfaces->size[1] * k) - 1];
        cdpr += dp[k] * n;
      }

      if (muDoubleScalarAbs(cdpr) > 0.001) {
        i8 = wedges->size[0];
        k = (int32_T)i;
        if (!((k >= 1) && (k <= i8))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i8, &og_emlrtBCI, sp);
        }

        i8 = wedges->size[0];
        k = (int32_T)i;
        if (!((k >= 1) && (k <= i8))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i8, &ng_emlrtBCI, sp);
        }

        i8 = wedges->size[0];
        k = (int32_T)i;
        if (!((k >= 1) && (k <= i8))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i8, &mg_emlrtBCI, sp);
        }

        i8 = wedges->size[0];
        k = (int32_T)i;
        if (!((k >= 1) && (k <= i8))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i8, &lg_emlrtBCI, sp);
        }

        i8 = wedges->size[0];
        k = (int32_T)i;
        if (!((k >= 1) && (k <= i8))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i8, &kg_emlrtBCI, sp);
        }

        i8 = wedges->size[0];
        k = (int32_T)i;
        if (!((k >= 1) && (k <= i8))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i8, &jg_emlrtBCI, sp);
        }

        i8 = wedges->size[0];
        k = (int32_T)i;
        if (!((k >= 1) && (k <= i8))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i8, &ig_emlrtBCI, sp);
        }

        i8 = wedges->size[0];
        k = (int32_T)i;
        if (!((k >= 1) && (k <= i8))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i8, &hg_emlrtBCI, sp);
        }

        i8 = wedges->size[0];
        k = (int32_T)i;
        if (!((k >= 1) && (k <= i8))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i8, &gg_emlrtBCI, sp);
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
          m0 = emlrtCreateCharArray(2, iv1);
          emlrtInitCharArrayR2013a(sp, 60, m0, &u[0]);
          emlrtAssign(&y, m0);
          st.site = &j_emlrtRSI;
          disp(&st, y, &emlrtMCI);
          emlrt_synchGlobalsFromML(sp);
          emlrt_synchGlobalsToML();
          st.site = &k_emlrtRSI;
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
            i8 = wedges->size[0];
            k = (int32_T)i;
            if (!((k >= 1) && (k <= i8))) {
              emlrtDynamicBoundsCheckR2012b(k, 1, i8, &fg_emlrtBCI, sp);
            }

            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
            for (b_i = 0; b_i < 3; b_i++) {
              b_P1_re[b_i] = P1_re[b_i] + cdpr * (P2_re[b_i] - P1_re[b_i]);
            }

            for (i8 = 0; i8 < 4; i8++) {
              for (k = 0; k < 3; k++) {
                dv3[k + 3 * i8] = wedges->data[((((int32_T)i + wedges->size[0] *
                  j) + wedges->size[0] * wedges->size[1] * i8) + wedges->size[0]
                  * wedges->size[1] * wedges->size[2] * k) - 1];
              }
            }

            if (AppFace2(b_P1_re, dv3) == 1.0) {
              i8 = MSKFlag->size[0];
              k = (int32_T)i;
              if (!((k >= 1) && (k <= i8))) {
                emlrtDynamicBoundsCheckR2012b(k, 1, i8, &qg_emlrtBCI, sp);
              }

              if (MSKFlag->data[k - 1] == 1.0) {
                /*  masking if the block does not allow penetration or if it is a PEC */
                /*                              if (abs(t)>1.0e-6) && (abs(t-1)>1.0e-6) */
                blk = 1.0;

                /*                              end */
              } else {
                i8 = CEP->size[0];
                k = (int32_T)i;
                if (!((k >= 1) && (k <= i8))) {
                  emlrtDynamicBoundsCheckR2012b(k, 1, i8, &rg_emlrtBCI, sp);
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
