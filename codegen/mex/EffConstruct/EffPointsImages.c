/*
 * EffPointsImages.c
 *
 * Code generation for function 'EffPointsImages'
 *
 * C source code generated on: Fri Dec 20 16:15:35 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct.h"
#include "EffPointsImages.h"
#include "EffConstruct_data.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtBCInfo le_emlrtBCI = { -1, -1, 23, 16, "Mpath", "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  0 };

static emlrtBCInfo me_emlrtBCI = { -1, -1, 23, 20, "Mpath", "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  0 };

static emlrtBCInfo ne_emlrtBCI = { -1, -1, 24, 14, "Mpath", "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  0 };

static emlrtBCInfo oe_emlrtBCI = { -1, -1, 24, 18, "Mpath", "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  0 };

static emlrtDCInfo l_emlrtDCI = { 30, 31, "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  1 };

static emlrtBCInfo pe_emlrtBCI = { -1, -1, 30, 31, "wedges", "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  0 };

static emlrtDCInfo m_emlrtDCI = { 30, 39, "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  1 };

static emlrtBCInfo qe_emlrtBCI = { 1, 6, 30, 39, "wedges", "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  0 };

static emlrtRTEInfo y_emlrtRTEI = { 35, 1, "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m"
};

static emlrtBCInfo re_emlrtBCI = { -1, -1, 39, 41, "wedges", "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  0 };

static emlrtBCInfo se_emlrtBCI = { -1, -1, 50, 43, "vnfaces", "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  0 };

static emlrtBCInfo te_emlrtBCI = { -1, -1, 56, 23, "Mpath", "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  0 };

static emlrtBCInfo ue_emlrtBCI = { -1, -1, 56, 25, "Mpath", "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  0 };

static emlrtBCInfo ve_emlrtBCI = { -1, -1, 57, 35, "vnfaces", "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  0 };

static emlrtBCInfo we_emlrtBCI = { -1, -1, 58, 33, "wedges", "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  0 };

static emlrtBCInfo xe_emlrtBCI = { -1, -1, 60, 23, "Mpath", "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  0 };

static emlrtBCInfo ye_emlrtBCI = { -1, -1, 60, 25, "Mpath", "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  0 };

static emlrtBCInfo af_emlrtBCI = { -1, -1, 75, 11, "Mpath", "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  0 };

static emlrtBCInfo bf_emlrtBCI = { -1, -1, 75, 13, "Mpath", "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  0 };

static emlrtBCInfo cf_emlrtBCI = { -1, -1, 76, 11, "Mpath", "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  0 };

static emlrtBCInfo df_emlrtBCI = { -1, -1, 76, 13, "Mpath", "EffPointsImages",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffPointsImages.m",
  0 };

/* Function Declarations */

/* Function Definitions */
real_T EffPointsImages(real_T mid)
{
  int32_T n;
  real_T v[3];
  real_T cnt[3];
  int32_T i;
  int32_T i4;
  int32_T i5;
  int32_T ixstart;
  real_T E[3];
  real_T face[2];
  real_T s;
  real_T y[3];
  int32_T ix;
  int32_T iy;
  int32_T b_ixstart;
  int32_T b_ix;
  real_T vnfaces_re[3];
  real_T dv0[2];
  real_T no[3];
  real_T b_vnfaces_re;

  /*  In order to find the coordinates of the image points in the same order */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History:  2011.9.21 */
  /*  Updated by: Xuhong Li <xuhong@ftw.at> */
  /*  History: 2013.08.01 */
  /*  Using Mpath, remove previous level, Nbfaces, flag  */
  /*  corresponding imagepoints are stored in the next level */
  n = 0;
  for (i = 0; i < 3; i++) {
    v[i] = 0.0;
    cnt[i] = 0.0;
  }

  i4 = Mpath->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i4, &me_emlrtBCI, emlrtRootTLSGlobal);
  i4 = Mpath->size[0];
  i5 = (int32_T)mid;
  ixstart = emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &le_emlrtBCI,
    emlrtRootTLSGlobal);
  for (i4 = 0; i4 < 3; i4++) {
    E[i4] = Mpath->data[(ixstart + Mpath->size[0] * Mpath->size[1] * (2 + i4)) -
      1];
  }

  /*  point */
  i4 = Mpath->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i4, &oe_emlrtBCI, emlrtRootTLSGlobal);
  i4 = Mpath->size[0];
  i5 = (int32_T)mid;
  ixstart = emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &ne_emlrtBCI,
    emlrtRootTLSGlobal);
  for (i4 = 0; i4 < 2; i4++) {
    face[i4] = Mpath->data[(ixstart + Mpath->size[0] * Mpath->size[1] * i4) - 1];
  }

  /*  face */
  if (Mpath->data[(int32_T)mid - 1] == -1.0) {
    /*    if this is Tx */
    for (i = 0; i < 3; i++) {
      cnt[i] = E[i];
    }
  } else {
    if (Mpath->data[(int32_T)mid - 1] != 0.0) {
      /*   if this is not ground */
      s = Mpath->data[(int32_T)mid - 1];
      i4 = wedges->size[0];
      i5 = (int32_T)emlrtIntegerCheckFastR2012b(s, &l_emlrtDCI,
        emlrtRootTLSGlobal);
      emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &pe_emlrtBCI,
        emlrtRootTLSGlobal);
      s = Mpath->data[((int32_T)mid + Mpath->size[0] * Mpath->size[1]) - 1];
      i4 = (int32_T)emlrtIntegerCheckFastR2012b(s, &m_emlrtDCI,
        emlrtRootTLSGlobal);
      emlrtDynamicBoundsCheckFastR2012b(i4, 1, 6, &qe_emlrtBCI,
        emlrtRootTLSGlobal);
      ix = -1;
      iy = -1;
      for (i = 0; i < 3; i++) {
        ixstart = ix + 1;
        ix++;
        i4 = (int32_T)Mpath->data[((int32_T)mid + Mpath->size[0] * Mpath->size[1])
          - 1];
        i5 = (int32_T)Mpath->data[(int32_T)mid - 1];
        if (ixstart >= 0) {
          b_ixstart = (int32_T)((uint32_T)ixstart >> 2);
        } else {
          b_ixstart = ~(int32_T)((uint32_T)~ixstart >> 2);
        }

        s = wedges->data[(((i5 + wedges->size[0] * (i4 - 1)) + wedges->size[0] *
                           wedges->size[1] * (ixstart % 4)) + wedges->size[0] *
                          wedges->size[1] * wedges->size[2] * b_ixstart) - 1];
        for (ixstart = 0; ixstart < 3; ixstart++) {
          ix++;
          i4 = (int32_T)Mpath->data[((int32_T)mid + Mpath->size[0] * Mpath->
            size[1]) - 1];
          i5 = (int32_T)Mpath->data[(int32_T)mid - 1];
          if (ix >= 0) {
            b_ix = (int32_T)((uint32_T)ix >> 2);
          } else {
            b_ix = ~(int32_T)((uint32_T)~ix >> 2);
          }

          s += wedges->data[(((i5 + wedges->size[0] * (i4 - 1)) + wedges->size[0]
                              * wedges->size[1] * (ix % 4)) + wedges->size[0] *
                             wedges->size[1] * wedges->size[2] * b_ix) - 1];
        }

        iy++;
        y[iy] = s;
      }

      for (i4 = 0; i4 < 3; i4++) {
        cnt[i4] = y[i4] / 4.0;
      }

      /*  the coordinates of the center point of the surface realted to the image */
    }
  }

  i4 = (int32_T)Nblock;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, Nblock, mxDOUBLE_CLASS, (int32_T)
    Nblock, &y_emlrtRTEI, emlrtRootTLSGlobal);
  i = 0;
  while (i <= i4 - 1) {
    if (1.0 + (real_T)i != face[0]) {
      /*  make sure that the next reflection is not in the same surface as the previous one */
      for (iy = 0; iy < 6; iy++) {
        for (ixstart = 0; ixstart < 4; ixstart++) {
          i5 = wedges->size[0];
          ix = (int32_T)(1.0 + (real_T)i);
          i5 = emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &re_emlrtBCI,
            emlrtRootTLSGlobal);
          for (ix = 0; ix < 3; ix++) {
            vnfaces_re[ix] = wedges->data[(((i5 + wedges->size[0] * iy) +
              wedges->size[0] * wedges->size[1] * ixstart) + wedges->size[0] *
              wedges->size[1] * wedges->size[2] * ix) - 1];
          }

          if (face[0] != 0.0) {
            for (i5 = 0; i5 < 3; i5++) {
              v[i5] = (v[i5] + (vnfaces_re[i5] - cnt[i5])) / 4.0;
            }
          } else {
            for (i5 = 0; i5 < 3; i5++) {
              v[i5] = (v[i5] + (vnfaces_re[i5] - E[i5])) / 4.0;
            }
          }

          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
            emlrtRootTLSGlobal);
        }

        if (face[0] == 0.0) {
          /*  the privoius relection from ground */
          s = -1.0;
        } else {
          i5 = vnfaces.size[0];
          ix = (int32_T)(1.0 + (real_T)i);
          emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &se_emlrtBCI,
            emlrtRootTLSGlobal);
          s = 0.0;
          for (i5 = 0; i5 < 3; i5++) {
            s += v[i5] * vnfaces.data[(((int32_T)(1.0 + (real_T)i) +
              vnfaces.size[0] * iy) + vnfaces.size[0] * vnfaces.size[1] * i5) -
              1];
            vnfaces_re[i5] = vnfaces.data[(((int32_T)(1.0 + (real_T)i) +
              vnfaces.size[0] * iy) + vnfaces.size[0] * vnfaces.size[1] * i5) -
              1];
          }
        }

        if (s < 0.0) {
          n++;
          i5 = Mpath->size[0];
          ix = Mpath->size[1];
          emlrtDynamicBoundsCheckFastR2012b(n, 1, ix, &ue_emlrtBCI,
            emlrtRootTLSGlobal);
          ix = (int32_T)mid + 1;
          ixstart = emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &te_emlrtBCI,
            emlrtRootTLSGlobal);
          dv0[0] = 1.0 + (real_T)i;
          dv0[1] = 1.0 + (real_T)iy;
          for (i5 = 0; i5 < 2; i5++) {
            Mpath->data[((ixstart + Mpath->size[0] * (n - 1)) + Mpath->size[0] *
                         Mpath->size[1] * i5) - 1] = dv0[i5];
          }

          Mpath_dirty |= 1U;

          /*  face */
          i5 = vnfaces.size[0];
          ix = (int32_T)(1.0 + (real_T)i);
          emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &ve_emlrtBCI,
            emlrtRootTLSGlobal);
          for (i5 = 0; i5 < 3; i5++) {
            no[i5] = vnfaces.data[(((int32_T)(1.0 + (real_T)i) + vnfaces.size[0]
              * iy) + vnfaces.size[0] * vnfaces.size[1] * i5) - 1];
          }

          i5 = wedges->size[0];
          ix = (int32_T)(1.0 + (real_T)i);
          i5 = emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &we_emlrtBCI,
            emlrtRootTLSGlobal);
          s = 0.0;
          for (ix = 0; ix < 3; ix++) {
            b_vnfaces_re = wedges->data[((i5 + wedges->size[0] * iy) +
              wedges->size[0] * wedges->size[1] * wedges->size[2] * ix) - 1];
            b_vnfaces_re -= E[ix];
            s += no[ix] * b_vnfaces_re;
            vnfaces_re[ix] = b_vnfaces_re;
          }

          s *= 2.0;
          i5 = Mpath->size[0];
          ix = Mpath->size[1];
          emlrtDynamicBoundsCheckFastR2012b(n, 1, ix, &ye_emlrtBCI,
            emlrtRootTLSGlobal);
          ix = (int32_T)mid + 1;
          ixstart = emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &xe_emlrtBCI,
            emlrtRootTLSGlobal);
          for (i5 = 0; i5 < 3; i5++) {
            Mpath->data[((ixstart + Mpath->size[0] * (n - 1)) + Mpath->size[0] *
                         Mpath->size[1] * (2 + i5)) - 1] = E[i5] + s * no[i5];
          }

          Mpath_dirty |= 1U;
        }

        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
          emlrtRootTLSGlobal);
      }
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  no[0] = 0.0;

  /*  ground case */
  no[1] = 0.0;
  no[2] = 1.0;
  for (i = 0; i < 3; i++) {
    vnfaces_re[i] = -E[i];
  }

  if ((face[0] != 0.0) && (cnt[2] > 0.0)) {
    n++;
    i4 = Mpath->size[0];
    i5 = Mpath->size[1];
    emlrtDynamicBoundsCheckFastR2012b(n, 1, i5, &bf_emlrtBCI, emlrtRootTLSGlobal);
    i5 = (int32_T)mid + 1;
    ixstart = emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &af_emlrtBCI,
      emlrtRootTLSGlobal);
    for (i4 = 0; i4 < 2; i4++) {
      Mpath->data[((ixstart + Mpath->size[0] * (n - 1)) + Mpath->size[0] *
                   Mpath->size[1] * i4) - 1] = 0.0;
    }

    Mpath_dirty |= 1U;
    s = 0.0;
    for (ixstart = 0; ixstart < 3; ixstart++) {
      s += no[ixstart] * vnfaces_re[ixstart];
    }

    s *= 2.0;
    i4 = Mpath->size[0];
    i5 = Mpath->size[1];
    emlrtDynamicBoundsCheckFastR2012b(n, 1, i5, &df_emlrtBCI, emlrtRootTLSGlobal);
    i5 = (int32_T)mid + 1;
    ixstart = emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &cf_emlrtBCI,
      emlrtRootTLSGlobal);
    for (i4 = 0; i4 < 3; i4++) {
      Mpath->data[((ixstart + Mpath->size[0] * (n - 1)) + Mpath->size[0] *
                   Mpath->size[1] * (2 + i4)) - 1] = E[i4] + s * no[i4];
    }

    Mpath_dirty |= 1U;
  }

  return (real_T)n;
}

/* End of code generation (EffPointsImages.c) */
