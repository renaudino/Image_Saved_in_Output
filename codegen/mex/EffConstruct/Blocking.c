/*
 * Blocking.c
 *
 * Code generation for function 'Blocking'
 *
 * C source code generated on: Fri Dec 20 16:15:35 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct.h"
#include "Blocking.h"
#include "EffConstruct_mexutil.h"
#include "AppFace.h"
#include "EffConstruct_data.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo s_emlrtRSI = { 46, "Blocking",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Blocking.m"
};

static emlrtRSInfo t_emlrtRSI = { 47, "Blocking",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Blocking.m"
};

static emlrtRSInfo u_emlrtRSI = { 55, "Blocking",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Blocking.m"
};

static emlrtMCInfo emlrtMCI = { 46, 17, "Blocking",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Blocking.m"
};

static emlrtMCInfo b_emlrtMCI = { 47, 17, "Blocking",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Blocking.m"
};

static emlrtBCInfo of_emlrtBCI = { -1, -1, 41, 25, "wedges", "Blocking",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Blocking.m",
  0 };

static emlrtBCInfo pf_emlrtBCI = { -1, -1, 40, 25, "wedges", "Blocking",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Blocking.m",
  0 };

static emlrtBCInfo qf_emlrtBCI = { -1, -1, 39, 25, "wedges", "Blocking",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Blocking.m",
  0 };

static emlrtBCInfo rf_emlrtBCI = { -1, -1, 38, 25, "wedges", "Blocking",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Blocking.m",
  0 };

static emlrtBCInfo sf_emlrtBCI = { -1, -1, 37, 25, "wedges", "Blocking",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Blocking.m",
  0 };

static emlrtBCInfo tf_emlrtBCI = { -1, -1, 36, 25, "wedges", "Blocking",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Blocking.m",
  0 };

static emlrtBCInfo uf_emlrtBCI = { -1, -1, 35, 25, "wedges", "Blocking",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Blocking.m",
  0 };

static emlrtBCInfo vf_emlrtBCI = { -1, -1, 34, 25, "wedges", "Blocking",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Blocking.m",
  0 };

static emlrtBCInfo wf_emlrtBCI = { -1, -1, 33, 25, "wedges", "Blocking",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Blocking.m",
  0 };

static emlrtBCInfo xf_emlrtBCI = { -1, -1, 30, 26, "vnfaces", "Blocking",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Blocking.m",
  0 };

static emlrtBCInfo yf_emlrtBCI = { -1, -1, 57, 29, "MSKFlag", "Blocking",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Blocking.m",
  0 };

static emlrtBCInfo ag_emlrtBCI = { -1, -1, 57, 50, "CEP", "Blocking",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Blocking.m",
  0 };

/* Function Declarations */
static void b_exit(emlrtMCInfo *location);
static void disp(const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void b_exit(emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 0, NULL, "exit", TRUE,
                        location);
}

static void disp(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "disp", TRUE,
                        location);
}

real_T Blocking(const real_T P1_re[3], const real_T P2_re[3])
{
  real_T blk;
  real_T i;
  real_T P1[3];
  real_T P2[3];
  real_T dp[3];
  int32_T b_i;
  int32_T j;
  real_T face[2];
  int32_T i9;
  real_T cdpr;
  const mxArray *y;
  static const int32_T iv4[2] = { 1, 60 };

  const mxArray *m0;
  static const char_T cv0[60] = { 'E', 'r', 'r', 'o', 'r', ':', ' ', 't', 'h',
    'e', ' ', 'd', 'e', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'n', 't', ' ', 'i',
    's', ' ', 'e', 'q', 'u', 'a', 'l', ' ', 't', 'o', ' ', 'z', 'e', 'r', 'o',
    ' ', 'i', 'n', ' ', 'b', 'l', 'o', 'k', 'i', 'n', 'g', ' ', 'f', 'u', 'n',
    'c', 't', 'i', 'o', 'n', '!' };

  real_T b_P1[3];
  real_T af;
  boolean_T guard1 = FALSE;

  /*  Check if the two points are blocked */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History:  2011.9.20 */
  /*  Updated by: Xuhong Li <xuhong@ftw.at> */
  /*  History: 2013.08.01 */
  blk = 0.0;
  i = 1.0;
  for (b_i = 0; b_i < 3; b_i++) {
    dp[b_i] = P2_re[b_i] - P1_re[b_i];
    P2[b_i] = P2_re[b_i];
    P1[b_i] = P1_re[b_i];
  }

  while ((i <= Nblock) && (blk != 1.0)) {
    j = 0;
    while ((j + 1 <= 6) && (blk != 1.0)) {
      face[0] = i;
      face[1] = (real_T)(j + 1);
      b_i = vnfaces.size[0];
      i9 = (int32_T)i;
      emlrtDynamicBoundsCheckFastR2012b(i9, 1, b_i, &xf_emlrtBCI,
        emlrtRootTLSGlobal);
      cdpr = 0.0;
      for (b_i = 0; b_i < 3; b_i++) {
        cdpr += dp[b_i] * vnfaces.data[(((int32_T)i + vnfaces.size[0] * j) +
          vnfaces.size[0] * vnfaces.size[1] * b_i) - 1];
      }

      if (muDoubleScalarAbs(cdpr) > 0.001) {
        b_i = wedges->size[0];
        i9 = (int32_T)i;
        emlrtDynamicBoundsCheckFastR2012b(i9, 1, b_i, &wf_emlrtBCI,
          emlrtRootTLSGlobal);
        b_i = wedges->size[0];
        i9 = (int32_T)i;
        emlrtDynamicBoundsCheckFastR2012b(i9, 1, b_i, &vf_emlrtBCI,
          emlrtRootTLSGlobal);
        b_i = wedges->size[0];
        i9 = (int32_T)i;
        emlrtDynamicBoundsCheckFastR2012b(i9, 1, b_i, &uf_emlrtBCI,
          emlrtRootTLSGlobal);
        b_i = wedges->size[0];
        i9 = (int32_T)i;
        emlrtDynamicBoundsCheckFastR2012b(i9, 1, b_i, &tf_emlrtBCI,
          emlrtRootTLSGlobal);
        b_i = wedges->size[0];
        i9 = (int32_T)i;
        emlrtDynamicBoundsCheckFastR2012b(i9, 1, b_i, &sf_emlrtBCI,
          emlrtRootTLSGlobal);
        b_i = wedges->size[0];
        i9 = (int32_T)i;
        emlrtDynamicBoundsCheckFastR2012b(i9, 1, b_i, &rf_emlrtBCI,
          emlrtRootTLSGlobal);
        b_i = wedges->size[0];
        i9 = (int32_T)i;
        emlrtDynamicBoundsCheckFastR2012b(i9, 1, b_i, &qf_emlrtBCI,
          emlrtRootTLSGlobal);
        b_i = wedges->size[0];
        i9 = (int32_T)i;
        emlrtDynamicBoundsCheckFastR2012b(i9, 1, b_i, &pf_emlrtBCI,
          emlrtRootTLSGlobal);
        b_i = wedges->size[0];
        i9 = (int32_T)i;
        emlrtDynamicBoundsCheckFastR2012b(i9, 1, b_i, &of_emlrtBCI,
          emlrtRootTLSGlobal);
        cdpr = ((P1[0] - P2[0]) * ((wedges->data[(((int32_T)i + wedges->size[0] *
                    j) + wedges->size[0] * wedges->size[1] * wedges->size[2]) -
                  1] - wedges->data[((((int32_T)i + wedges->size[0] * j) +
                    (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
                   wedges->size[1] * wedges->size[2]) - 1]) * (wedges->data
                  [((((int32_T)i + wedges->size[0] * j) + wedges->size[0] *
                     wedges->size[1]) + (wedges->size[0] * wedges->size[1] *
                    wedges->size[2] << 1)) - 1] - wedges->data[((((int32_T)i +
          wedges->size[0] * j) + (wedges->size[0] * wedges->size[1] << 1)) +
                   (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1)) -
                  1]) - (wedges->data[((((int32_T)i + wedges->size[0] * j) +
                    wedges->size[0] * wedges->size[1]) + wedges->size[0] *
                   wedges->size[1] * wedges->size[2]) - 1] - wedges->data
                         [((((int32_T)i + wedges->size[0] * j) + (wedges->size[0]
          * wedges->size[1] << 1)) + wedges->size[0] * wedges->size[1] *
                           wedges->size[2]) - 1]) * (wedges->data[(((int32_T)i +
                    wedges->size[0] * j) + (wedges->size[0] * wedges->size[1] *
                    wedges->size[2] << 1)) - 1] - wedges->data[((((int32_T)i +
          wedges->size[0] * j) + (wedges->size[0] * wedges->size[1] << 1)) +
                   (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1)) -
                  1])) - (P1[1] - P2[1]) * ((wedges->data[((int32_T)i +
                   wedges->size[0] * j) - 1] - wedges->data[(((int32_T)i +
                    wedges->size[0] * j) + (wedges->size[0] * wedges->size[1] <<
                    1)) - 1]) * (wedges->data[((((int32_T)i + wedges->size[0] *
          j) + wedges->size[0] * wedges->size[1]) + (wedges->size[0] *
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
                    * wedges->size[1] * wedges->size[2] << 1)) - 1]))) + (P1[2]
          - P2[2]) * ((wedges->data[((int32_T)i + wedges->size[0] * j) - 1] -
                       wedges->data[(((int32_T)i + wedges->size[0] * j) +
          (wedges->size[0] * wedges->size[1] << 1)) - 1]) * (wedges->data
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
          emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
          emlrt_synchGlobalsToML();
          y = NULL;
          m0 = mxCreateCharArray(2, iv4);
          emlrtInitCharArray(60, m0, cv0);
          emlrtAssign(&y, m0);
          disp(y, &emlrtMCI);
          emlrt_synchGlobalsFromML();
          emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
          emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
          emlrt_synchGlobalsToML();
          b_exit(&b_emlrtMCI);
          emlrt_synchGlobalsFromML();
          emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
        } else {
          cdpr = (((P1[0] - wedges->data[(((int32_T)i + wedges->size[0] * j) +
                     (wedges->size[0] * wedges->size[1] << 1)) - 1]) *
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
                       (wedges->size[0] * wedges->size[1] << 1)) + (wedges->
            size[0] * wedges->size[1] * wedges->size[2] << 1)) - 1])) + (P1[1] -
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
                       (wedges->size[0] * wedges->size[1] << 1)) + (wedges->
            size[0] * wedges->size[1] * wedges->size[2] << 1)) - 1]))) + (P1[2]
                   - wedges->data[((((int32_T)i + wedges->size[0] * j) +
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
            emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
            for (b_i = 0; b_i < 3; b_i++) {
              b_P1[b_i] = P1[b_i] + cdpr * (P2[b_i] - P1[b_i]);
            }

            af = AppFace(b_P1, face);
            emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
            if (af == 1.0) {
              b_i = MSKFlag.size[0];
              i9 = (int32_T)i;
              guard1 = FALSE;
              if (MSKFlag.data[emlrtDynamicBoundsCheckFastR2012b(i9, 1, b_i,
                   &yf_emlrtBCI, emlrtRootTLSGlobal) - 1] == 1.0) {
                guard1 = TRUE;
              } else {
                b_i = CEP.size[0];
                i9 = (int32_T)i;
                if (CEP.data[emlrtDynamicBoundsCheckFastR2012b(i9, 1, b_i,
                     &ag_emlrtBCI, emlrtRootTLSGlobal) - 1] == 1.0) {
                  guard1 = TRUE;
                }
              }

              if (guard1 == TRUE) {
                /*  masking if the block does not allow penetration or if it is a PEC */
                if ((muDoubleScalarAbs(cdpr) > 1.0E-6) && (muDoubleScalarAbs
                     (cdpr - 1.0) > 1.0E-6)) {
                  blk = 1.0;
                }
              }
            }
          }
        }
      }

      j++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  return blk;
}

/* End of code generation (Blocking.c) */
