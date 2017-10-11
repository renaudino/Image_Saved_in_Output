/*
 * PointsImagesm.c
 *
 * Code generation for function 'PointsImagesm'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PointsImagesm.h"
#include "AppGround.h"
#include "PointsImagesm_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 73, "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m"
};

static emlrtRSInfo b_emlrtRSI = { 75, "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m"
};

static emlrtRSInfo c_emlrtRSI = { 77, "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m"
};

static emlrtBCInfo emlrtBCI = { 1, 6, 21, 29, "wedges", "AppFace",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\AppFace.m",
  0 };

static emlrtDCInfo emlrtDCI = { 21, 29, "AppFace",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\AppFace.m",
  1 };

static emlrtDCInfo b_emlrtDCI = { 21, 21, "AppFace",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\AppFace.m",
  1 };

static emlrtBCInfo c_emlrtBCI = { 1, 6, 20, 29, "wedges", "AppFace",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\AppFace.m",
  0 };

static emlrtDCInfo c_emlrtDCI = { 20, 29, "AppFace",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\AppFace.m",
  1 };

static emlrtDCInfo d_emlrtDCI = { 20, 21, "AppFace",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\AppFace.m",
  1 };

static emlrtBCInfo e_emlrtBCI = { 1, 6, 19, 29, "wedges", "AppFace",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\AppFace.m",
  0 };

static emlrtDCInfo e_emlrtDCI = { 19, 29, "AppFace",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\AppFace.m",
  1 };

static emlrtDCInfo f_emlrtDCI = { 19, 21, "AppFace",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\AppFace.m",
  1 };

static emlrtBCInfo g_emlrtBCI = { 1, 6, 28, 37, "wedges", "Breakthrough",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\Breakthrough.m",
  0 };

static emlrtDCInfo g_emlrtDCI = { 28, 37, "Breakthrough",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\Breakthrough.m",
  1 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 28, 29, "wedges", "Breakthrough",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\Breakthrough.m",
  0 };

static emlrtDCInfo h_emlrtDCI = { 28, 29, "Breakthrough",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\Breakthrough.m",
  1 };

static emlrtBCInfo i_emlrtBCI = { 1, 6, 27, 30, "vnfaces", "Breakthrough",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\Breakthrough.m",
  0 };

static emlrtDCInfo i_emlrtDCI = { 27, 30, "Breakthrough",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\Breakthrough.m",
  1 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 27, 22, "vnfaces", "Breakthrough",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\Breakthrough.m",
  0 };

static emlrtDCInfo j_emlrtDCI = { 27, 22, "Breakthrough",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\Breakthrough.m",
  1 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 101, 13, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 101, 11, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 100, 13, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 100, 11, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 99, 13, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtDCInfo k_emlrtDCI = { 99, 13, "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  1 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 99, 11, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 77, 54, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 77, 52, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 73, 71, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 73, 69, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 73, 56, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 73, 54, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 68, 25, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 68, 23, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 66, 33, "wedges", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 65, 35, "vnfaces", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 63, 25, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 63, 23, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 62, 25, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtDCInfo l_emlrtDCI = { 62, 25, "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  1 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 62, 23, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 55, 43, "vnfaces", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 41, 41, "wedges", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtRTEInfo c_emlrtRTEI = { 37, 1, "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m"
};

static emlrtBCInfo hb_emlrtBCI = { 1, 6, 32, 39, "wedges", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtDCInfo m_emlrtDCI = { 32, 39, "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  1 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 32, 31, "wedges", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtDCInfo n_emlrtDCI = { 32, 31, "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  1 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 25, 21, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtDCInfo o_emlrtDCI = { 25, 21, "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  1 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 25, 14, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtDCInfo p_emlrtDCI = { 25, 14, "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  1 };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 24, 23, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtDCInfo q_emlrtDCI = { 24, 23, "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  1 };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 24, 16, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtDCInfo r_emlrtDCI = { 24, 16, "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  1 };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 13, 5, "Nbrimg", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtDCInfo s_emlrtDCI = { 13, 5, "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  1 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 104, 10, "Nbrimg", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 74, 31, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 74, 33, "Mtrun", "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m",
  0 };

/* Function Definitions */
real_T PointsImagesm(const emlrtStack *sp, const real_T mid[2])
{
  real_T m;
  int32_T i0;
  real_T s;
  int32_T i1;
  real_T n;
  real_T v[3];
  real_T cnt[3];
  int32_T i;
  int32_T k;
  int32_T xoffset;
  real_T E[3];
  real_T face[2];
  real_T no[3];
  int32_T j;
  real_T vnfaces_re[3];
  int32_T l;
  real_T y[3];
  real_T wedges_re[3];
  real_T resu1;
  int32_T i2;
  real_T dv0[2];
  static const int8_T iv0[3] = { 0, 0, 1 };

  real_T b_vnfaces_re;
  real_T ri[3];
  real_T num;
  real_T den;
  real_T app;
  real_T b_wedges_re;
  real_T point[3];
  real_T resu2;
  real_T b_v[3];
  real_T VectP1[3];
  real_T VectP4[3];
  real_T test1;
  real_T b_ri;
  real_T u;
  real_T b_VectP1;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  In order to find the coordinates of the image points in the same order */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History:  2011.9.21 */
  /*  Updated by: Xuhong Li <xuhong@ftw.at> */
  /*  History: 2013.08.01 */
  m = mid[0] + 1.0;
  i0 = Nbrimg.size[0];
  s = mid[0] + 1.0;
  if (s != (int32_T)muDoubleScalarFloor(s)) {
    emlrtIntegerCheckR2012b(s, &s_emlrtDCI, sp);
  }

  i1 = (int32_T)s;
  if (!((i1 >= 1) && (i1 <= i0))) {
    emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &nb_emlrtBCI, sp);
  }

  n = Nbrimg.data[i1 - 1];
  for (i = 0; i < 3; i++) {
    v[i] = 0.0;
    cnt[i] = 0.0;
  }

  i0 = Mtrun->size[1];
  if (mid[1] != (int32_T)muDoubleScalarFloor(mid[1])) {
    emlrtIntegerCheckR2012b(mid[1], &q_emlrtDCI, sp);
  }

  k = (int32_T)mid[1];
  if (!((k >= 1) && (k <= i0))) {
    emlrtDynamicBoundsCheckR2012b(k, 1, i0, &lb_emlrtBCI, sp);
  }

  i0 = Mtrun->size[0];
  if (mid[0] != (int32_T)muDoubleScalarFloor(mid[0])) {
    emlrtIntegerCheckR2012b(mid[0], &r_emlrtDCI, sp);
  }

  xoffset = (int32_T)mid[0];
  if (!((xoffset >= 1) && (xoffset <= i0))) {
    emlrtDynamicBoundsCheckR2012b(xoffset, 1, i0, &mb_emlrtBCI, sp);
  }

  for (i0 = 0; i0 < 3; i0++) {
    E[i0] = Mtrun->data[((xoffset + Mtrun->size[0] * (k - 1)) + Mtrun->size[0] *
                         Mtrun->size[1] * (3 + i0)) - 1];
  }

  /*  point */
  i0 = Mtrun->size[1];
  if (mid[1] != (int32_T)muDoubleScalarFloor(mid[1])) {
    emlrtIntegerCheckR2012b(mid[1], &o_emlrtDCI, sp);
  }

  k = (int32_T)mid[1];
  if (!((k >= 1) && (k <= i0))) {
    emlrtDynamicBoundsCheckR2012b(k, 1, i0, &jb_emlrtBCI, sp);
  }

  i0 = Mtrun->size[0];
  if (mid[0] != (int32_T)muDoubleScalarFloor(mid[0])) {
    emlrtIntegerCheckR2012b(mid[0], &p_emlrtDCI, sp);
  }

  xoffset = (int32_T)mid[0];
  if (!((xoffset >= 1) && (xoffset <= i0))) {
    emlrtDynamicBoundsCheckR2012b(xoffset, 1, i0, &kb_emlrtBCI, sp);
  }

  for (i0 = 0; i0 < 2; i0++) {
    face[i0] = Mtrun->data[((xoffset + Mtrun->size[0] * (k - 1)) + Mtrun->size[0]
      * Mtrun->size[1] * (1 + i0)) - 1];
  }

  /*  face */
  if (Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)mid[1] - 1)) +
                   Mtrun->size[0] * Mtrun->size[1]) - 1] == -1.0) {
    /*    if this is Tx */
    for (i = 0; i < 3; i++) {
      cnt[i] = E[i];
    }
  } else {
    if (Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)mid[1] - 1))
                     + Mtrun->size[0] * Mtrun->size[1]) - 1] != 0.0) {
      /*   if this is not ground */
      i0 = wedges->size[0];
      s = Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)mid[1] - 1))
                       + Mtrun->size[0] * Mtrun->size[1]) - 1];
      if (s != (int32_T)muDoubleScalarFloor(s)) {
        emlrtIntegerCheckR2012b(s, &n_emlrtDCI, sp);
      }

      i1 = (int32_T)s;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &ib_emlrtBCI, sp);
      }

      s = Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)mid[1] - 1))
                       + (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
      if (s != (int32_T)muDoubleScalarFloor(s)) {
        emlrtIntegerCheckR2012b(s, &m_emlrtDCI, sp);
      }

      i0 = (int32_T)s;
      if (!((i0 >= 1) && (i0 <= 6))) {
        emlrtDynamicBoundsCheckR2012b(i0, 1, 6, &hb_emlrtBCI, sp);
      }

      for (i = 0; i < 3; i++) {
        xoffset = i << 2;
        i0 = (int32_T)Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)
          mid[1] - 1)) + (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
        i1 = (int32_T)Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] * ((int32_T)
          mid[1] - 1)) + Mtrun->size[0] * Mtrun->size[1]) - 1];
        s = wedges->data[(((i1 + wedges->size[0] * (i0 - 1)) + wedges->size[0] *
                           wedges->size[1] * (xoffset % 4)) + wedges->size[0] *
                          wedges->size[1] * wedges->size[2] * (xoffset / 4)) - 1];
        for (k = 0; k < 3; k++) {
          i0 = (xoffset + k) + 1;
          i1 = (int32_T)Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] *
            ((int32_T)mid[1] - 1)) + (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
          i2 = (int32_T)Mtrun->data[(((int32_T)mid[0] + Mtrun->size[0] *
            ((int32_T)mid[1] - 1)) + Mtrun->size[0] * Mtrun->size[1]) - 1];
          s += wedges->data[(((i2 + wedges->size[0] * (i1 - 1)) + wedges->size[0]
                              * wedges->size[1] * (i0 % 4)) + wedges->size[0] *
                             wedges->size[1] * wedges->size[2] * (i0 / 4)) - 1];
        }

        y[i] = s;
        cnt[i] = y[i] / 4.0;
      }

      /*  the coordinates of the center point of the surface realted to the image */
    }
  }

  i0 = (int32_T)Nblock;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, Nblock, mxDOUBLE_CLASS, (int32_T)
    Nblock, &c_emlrtRTEI, sp);
  i = 1;
  while (i - 1 <= i0 - 1) {
    if (1.0 + (real_T)(i - 1) != face[0]) {
      /*  make sure that the next reflection is not in the same surface as the previous one */
      j = 0;
      while (j < 6) {
        l = 0;
        while (l < 4) {
          i1 = wedges->size[0];
          if (!((i >= 1) && (i <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i1, &gb_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            wedges_re[i1] = wedges->data[(((i + wedges->size[0] * j) +
              wedges->size[0] * wedges->size[1] * l) + wedges->size[0] *
              wedges->size[1] * wedges->size[2] * i1) - 1];
          }

          if (face[0] != 0.0) {
            for (i1 = 0; i1 < 3; i1++) {
              v[i1] += wedges_re[i1] - cnt[i1];
            }
          } else {
            for (i1 = 0; i1 < 3; i1++) {
              v[i1] += wedges_re[i1] - E[i1];
            }
          }

          l++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        for (i1 = 0; i1 < 3; i1++) {
          v[i1] /= 4.0;
        }

        if (face[0] == 0.0) {
          /*  the privoius relection from ground */
          resu1 = -1.0;
        } else {
          i1 = vnfaces.size[0];
          if (!((i >= 1) && (i <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i1, &fb_emlrtBCI, sp);
          }

          resu1 = 0.0;
          for (k = 0; k < 3; k++) {
            resu1 += v[k] * vnfaces.data[((i + vnfaces.size[0] * j) +
              vnfaces.size[0] * vnfaces.size[1] * k) - 1];
          }
        }

        if (resu1 < 0.0) {
          n++;
          i1 = Mtrun->size[0];
          i2 = Mtrun->size[1];
          if (n != (int32_T)muDoubleScalarFloor(n)) {
            emlrtIntegerCheckR2012b(n, &l_emlrtDCI, sp);
          }

          k = (int32_T)n;
          if (!((k >= 1) && (k <= i2))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i2, &db_emlrtBCI, sp);
          }

          i2 = (int32_T)m;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &eb_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < 9; i1++) {
            Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                         Mtrun->size[0] * Mtrun->size[1] * i1) - 1] =
              DBIMAGES[i1];
          }

          dv0[0] = 1.0 + (real_T)(i - 1);
          dv0[1] = 1.0 + (real_T)j;
          i1 = Mtrun->size[0];
          i2 = Mtrun->size[1];
          k = (int32_T)n;
          if (!((k >= 1) && (k <= i2))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i2, &bb_emlrtBCI, sp);
          }

          i2 = (int32_T)m;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &cb_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < 2; i1++) {
            Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                         Mtrun->size[0] * Mtrun->size[1] * (1 + i1)) - 1] =
              dv0[i1];
          }

          i1 = vnfaces.size[0];
          if (!((i >= 1) && (i <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i1, &ab_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            no[i1] = vnfaces.data[((i + vnfaces.size[0] * j) + vnfaces.size[0] *
              vnfaces.size[1] * i1) - 1];
          }

          i1 = wedges->size[0];
          if (!((i >= 1) && (i <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i1, &y_emlrtBCI, sp);
          }

          s = 0.0;
          for (k = 0; k < 3; k++) {
            b_vnfaces_re = wedges->data[((i + wedges->size[0] * j) +
              wedges->size[0] * wedges->size[1] * wedges->size[2] * k) - 1];
            b_vnfaces_re -= E[k];
            s += no[k] * b_vnfaces_re;
          }

          s *= 2.0;
          i1 = Mtrun->size[0];
          i2 = Mtrun->size[1];
          k = (int32_T)n;
          if (!((k >= 1) && (k <= i2))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i2, &w_emlrtBCI, sp);
          }

          i2 = (int32_T)m;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &x_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                         Mtrun->size[0] * Mtrun->size[1] * (3 + i1)) - 1] = E[i1]
              + s * no[i1];
          }

          /*  -------------- remove useless points on the last level ---------------- %                 */
          if (m == Nreflx + 1.0) {
            /*  the highest order of reflection */
            st.site = &emlrtRSI;
            i1 = Mtrun->size[0];
            i2 = (int32_T)m;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &v_emlrtBCI, &st);
            }

            i1 = Mtrun->size[1];
            i2 = (int32_T)n;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &u_emlrtBCI, &st);
            }

            i1 = Mtrun->size[0];
            i2 = (int32_T)m;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &t_emlrtBCI, &st);
            }

            i1 = Mtrun->size[1];
            i2 = (int32_T)n;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &s_emlrtBCI, &st);
            }

            /*  Calculates the breakthrough point in the face                                 */
            /*  Pneg : point on the negative normal vector side                           */
            /*  Ppos : point on the positive normal vector side  */
            /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
            /*  History:  2011.9.19 */
            /*  Updated by: Xuhong Li <xuhong@ftw.at> */
            /*  History: 2013.08.01 */
            /*  if(face(1) == 0) */
            if ((Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                              Mtrun->size[0] * Mtrun->size[1]) - 1] == 0.0) &&
                (Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1)) +
                              (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1] ==
                 0.0)) {
              s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1))
                               + Mtrun->size[0] * Mtrun->size[1] * 3) - 1];
              for (k = 0; k < 3; k++) {
                vnfaces_re[k] = iv0[k];
                wedges_re[k] = -recept[k];
                ri[k] = s - recept[k];
              }
            } else {
              s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1))
                               + (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
              if (s != (int32_T)muDoubleScalarFloor(s)) {
                emlrtIntegerCheckR2012b(s, &i_emlrtDCI, &st);
              }

              i1 = (int32_T)s;
              if (!((i1 >= 1) && (i1 <= 6))) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &i_emlrtBCI, &st);
              }

              i2 = vnfaces.size[0];
              s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1))
                               + Mtrun->size[0] * Mtrun->size[1]) - 1];
              if (s != (int32_T)muDoubleScalarFloor(s)) {
                emlrtIntegerCheckR2012b(s, &j_emlrtDCI, &st);
              }

              k = (int32_T)s;
              if (!((k >= 1) && (k <= i2))) {
                emlrtDynamicBoundsCheckR2012b(k, 1, i2, &j_emlrtBCI, &st);
              }

              for (i2 = 0; i2 < 3; i2++) {
                vnfaces_re[i2] = vnfaces.data[((k + vnfaces.size[0] * (i1 - 1))
                  + vnfaces.size[0] * vnfaces.size[1] * i2) - 1];
              }

              s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1))
                               + (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
              if (s != (int32_T)muDoubleScalarFloor(s)) {
                emlrtIntegerCheckR2012b(s, &g_emlrtDCI, &st);
              }

              i1 = (int32_T)s;
              if (!((i1 >= 1) && (i1 <= 6))) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &g_emlrtBCI, &st);
              }

              i2 = wedges->size[0];
              s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1))
                               + Mtrun->size[0] * Mtrun->size[1]) - 1];
              if (s != (int32_T)muDoubleScalarFloor(s)) {
                emlrtIntegerCheckR2012b(s, &h_emlrtDCI, &st);
              }

              k = (int32_T)s;
              if (!((k >= 1) && (k <= i2))) {
                emlrtDynamicBoundsCheckR2012b(k, 1, i2, &h_emlrtBCI, &st);
              }

              s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1))
                               + Mtrun->size[0] * Mtrun->size[1] * 3) - 1];
              for (i2 = 0; i2 < 3; i2++) {
                b_wedges_re = wedges->data[(((k + wedges->size[0] * (i1 - 1)) +
                  (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
                  wedges->size[1] * wedges->size[2] * i2) - 1];
                b_wedges_re -= recept[i2];
                ri[i2] = s - recept[i2];
                wedges_re[i2] = b_wedges_re;
              }
            }

            /* num = dot(n,rp); */
            /* den = dot(n,ri); */
            num = 0.0;
            den = 0.0;
            for (k = 0; k < 3; k++) {
              num += vnfaces_re[k] * wedges_re[k];
              den += vnfaces_re[k] * ri[k];
            }

            s = num / den;
            for (i1 = 0; i1 < 3; i1++) {
              ri[i1] = recept[i1] + s * ri[i1];
            }

            /*  the coordinates of the reflection point        */
            i1 = Mtrun->size[0];
            i2 = (int32_T)m;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &pb_emlrtBCI, sp);
            }

            i1 = Mtrun->size[1];
            k = (int32_T)n;
            if (!((k >= 1) && (k <= i1))) {
              emlrtDynamicBoundsCheckR2012b(k, 1, i1, &qb_emlrtBCI, sp);
            }

            if (Mtrun->data[((i2 + Mtrun->size[0] * (k - 1)) + Mtrun->size[0] *
                             Mtrun->size[1]) - 1] == 0.0) {
              st.site = &b_emlrtRSI;
              app = AppGround(&st, ri);

              /*  check the relection point belongs to ground or not */
            } else {
              st.site = &c_emlrtRSI;
              i1 = Mtrun->size[0];
              i2 = (int32_T)m;
              if (!((i2 >= 1) && (i2 <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &r_emlrtBCI, &st);
              }

              i1 = Mtrun->size[1];
              i2 = (int32_T)n;
              if (!((i2 >= 1) && (i2 <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &q_emlrtBCI, &st);
              }

              /*  Calculates if the point belongs to the face */
              /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
              /*  History:  2011.9.19 */
              for (k = 0; k < 3; k++) {
                point[k] = ri[k];
              }

              /* p1(:,1) = wedges(face(1),face(2),1,:); */
              /* p2(:,1) = wedges(face(1),face(2),2,:); */
              /* p3(:,1) = wedges(face(1),face(2),4,:); */
              i1 = wedges->size[0];
              s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1))
                               + Mtrun->size[0] * Mtrun->size[1]) - 1];
              if (s != (int32_T)muDoubleScalarFloor(s)) {
                emlrtIntegerCheckR2012b(s, &f_emlrtDCI, &st);
              }

              i2 = (int32_T)s;
              if (!((i2 >= 1) && (i2 <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &f_emlrtBCI, &st);
              }

              s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1))
                               + (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
              if (s != (int32_T)muDoubleScalarFloor(s)) {
                emlrtIntegerCheckR2012b(s, &e_emlrtDCI, &st);
              }

              i1 = (int32_T)s;
              if (!((i1 >= 1) && (i1 <= 6))) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &e_emlrtBCI, &st);
              }

              for (k = 0; k < 3; k++) {
                i1 = (int32_T)Mtrun->data[(((int32_T)m + Mtrun->size[0] *
                  ((int32_T)n - 1)) + (Mtrun->size[0] * Mtrun->size[1] << 1)) -
                  1];
                i2 = (int32_T)Mtrun->data[(((int32_T)m + Mtrun->size[0] *
                  ((int32_T)n - 1)) + Mtrun->size[0] * Mtrun->size[1]) - 1];
                vnfaces_re[k] = wedges->data[((i2 + wedges->size[0] * (i1 - 1))
                  + wedges->size[0] * wedges->size[1] * wedges->size[2] * k) - 1];
              }

              i1 = wedges->size[0];
              s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1))
                               + Mtrun->size[0] * Mtrun->size[1]) - 1];
              if (s != (int32_T)muDoubleScalarFloor(s)) {
                emlrtIntegerCheckR2012b(s, &d_emlrtDCI, &st);
              }

              i2 = (int32_T)s;
              if (!((i2 >= 1) && (i2 <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &d_emlrtBCI, &st);
              }

              s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1))
                               + (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
              if (s != (int32_T)muDoubleScalarFloor(s)) {
                emlrtIntegerCheckR2012b(s, &c_emlrtDCI, &st);
              }

              i1 = (int32_T)s;
              if (!((i1 >= 1) && (i1 <= 6))) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &c_emlrtBCI, &st);
              }

              for (k = 0; k < 3; k++) {
                i1 = (int32_T)Mtrun->data[(((int32_T)m + Mtrun->size[0] *
                  ((int32_T)n - 1)) + (Mtrun->size[0] * Mtrun->size[1] << 1)) -
                  1];
                i2 = (int32_T)Mtrun->data[(((int32_T)m + Mtrun->size[0] *
                  ((int32_T)n - 1)) + Mtrun->size[0] * Mtrun->size[1]) - 1];
                wedges_re[k] = wedges->data[(((i2 + wedges->size[0] * (i1 - 1))
                  + wedges->size[0] * wedges->size[1]) + wedges->size[0] *
                  wedges->size[1] * wedges->size[2] * k) - 1];
              }

              i1 = wedges->size[0];
              s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1))
                               + Mtrun->size[0] * Mtrun->size[1]) - 1];
              if (s != (int32_T)muDoubleScalarFloor(s)) {
                emlrtIntegerCheckR2012b(s, &b_emlrtDCI, &st);
              }

              i2 = (int32_T)s;
              if (!((i2 >= 1) && (i2 <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &b_emlrtBCI, &st);
              }

              s = Mtrun->data[(((int32_T)m + Mtrun->size[0] * ((int32_T)n - 1))
                               + (Mtrun->size[0] * Mtrun->size[1] << 1)) - 1];
              if (s != (int32_T)muDoubleScalarFloor(s)) {
                emlrtIntegerCheckR2012b(s, &emlrtDCI, &st);
              }

              i1 = (int32_T)s;
              if (!((i1 >= 1) && (i1 <= 6))) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &emlrtBCI, &st);
              }

              /* u(:,1) = wedges(face(1),face(2),2,:) - wedges(face(1),face(2),1,:); */
              /* v(:,1) = wedges(face(1),face(2),4,:) - wedges(face(1),face(2),1,:); */
              /* resu1 = dot(VectP1,u); */
              /* resu2 = dot(VectP2,u); */
              resu1 = 0.0;
              resu2 = 0.0;
              for (k = 0; k < 3; k++) {
                i1 = (int32_T)Mtrun->data[(((int32_T)m + Mtrun->size[0] *
                  ((int32_T)n - 1)) + (Mtrun->size[0] * Mtrun->size[1] << 1)) -
                  1];
                i2 = (int32_T)Mtrun->data[(((int32_T)m + Mtrun->size[0] *
                  ((int32_T)n - 1)) + Mtrun->size[0] * Mtrun->size[1]) - 1];
                b_ri = wedges->data[(((i2 + wedges->size[0] * (i1 - 1)) +
                                      wedges->size[0] * wedges->size[1] * 3) +
                                     wedges->size[0] * wedges->size[1] *
                                     wedges->size[2] * k) - 1];
                u = wedges_re[k] - vnfaces_re[k];
                b_v[k] = b_ri - vnfaces_re[k];
                b_VectP1 = vnfaces_re[k] - point[k];
                VectP4[k] = b_ri - point[k];
                resu1 += b_VectP1 * u;
                resu2 += (wedges_re[k] - point[k]) * u;
                ri[k] = b_ri;
                VectP1[k] = b_VectP1;
              }

              test1 = resu1 * resu2;

              /* resu1 = dot(VectP1,v); */
              /* resu2 = dot(VectP4,v); */
              resu1 = 0.0;
              resu2 = 0.0;
              for (k = 0; k < 3; k++) {
                resu1 += VectP1[k] * b_v[k];
                resu2 += VectP4[k] * b_v[k];
              }

              if ((test1 <= 1.0E-10) && (resu1 * resu2 <= 1.0E-10) &&
                  (muDoubleScalarAbs((((wedges_re[1] - vnfaces_re[1]) * (ri[2] -
                       vnfaces_re[2]) - (ri[1] - vnfaces_re[1]) * (wedges_re[2]
                       - vnfaces_re[2])) * (point[0] - vnfaces_re[0]) +
                                      ((wedges_re[2] - vnfaces_re[2]) * (ri[0] -
                       vnfaces_re[0]) - (ri[2] - vnfaces_re[2]) * (wedges_re[0]
                       - vnfaces_re[0])) * (point[1] - vnfaces_re[1])) +
                                     ((wedges_re[0] - vnfaces_re[0]) * (ri[1] -
                      vnfaces_re[1]) - (ri[0] - vnfaces_re[0]) * (wedges_re[1] -
                      vnfaces_re[1])) * (point[2] - vnfaces_re[2])) <= 1.0E-8))
              {
                app = 1.0;
              } else {
                app = 0.0;
              }

              /*  check the relection point belongs to surface or not */
            }

            if (app != 1.0) {
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

  no[0] = 0.0;

  /*  ground case */
  no[1] = 0.0;
  no[2] = 1.0;
  for (i = 0; i < 3; i++) {
    vnfaces_re[i] = -E[i];
  }

  if ((face[0] != 0.0) && (cnt[2] > 0.0)) {
    n++;
    i0 = Mtrun->size[0];
    i1 = Mtrun->size[1];
    if (n != (int32_T)muDoubleScalarFloor(n)) {
      emlrtIntegerCheckR2012b(n, &k_emlrtDCI, sp);
    }

    i2 = (int32_T)n;
    if (!((i2 >= 1) && (i2 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &o_emlrtBCI, sp);
    }

    i1 = (int32_T)(mid[0] + 1.0);
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &p_emlrtBCI, sp);
    }

    for (i0 = 0; i0 < 9; i0++) {
      Mtrun->data[(((int32_T)(mid[0] + 1.0) + Mtrun->size[0] * ((int32_T)n - 1))
                   + Mtrun->size[0] * Mtrun->size[1] * i0) - 1] = DBIMAGES[i0];
    }

    i0 = Mtrun->size[0];
    i1 = Mtrun->size[1];
    i2 = (int32_T)n;
    if (!((i2 >= 1) && (i2 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &m_emlrtBCI, sp);
    }

    i1 = (int32_T)(mid[0] + 1.0);
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &n_emlrtBCI, sp);
    }

    for (i0 = 0; i0 < 2; i0++) {
      Mtrun->data[(((int32_T)(mid[0] + 1.0) + Mtrun->size[0] * ((int32_T)n - 1))
                   + Mtrun->size[0] * Mtrun->size[1] * (1 + i0)) - 1] = 0.0;
    }

    s = 0.0;
    for (k = 0; k < 3; k++) {
      s += (real_T)iv0[k] * vnfaces_re[k];
    }

    s *= 2.0;
    i0 = Mtrun->size[0];
    i1 = Mtrun->size[1];
    i2 = (int32_T)n;
    if (!((i2 >= 1) && (i2 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &k_emlrtBCI, sp);
    }

    i1 = (int32_T)(mid[0] + 1.0);
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &l_emlrtBCI, sp);
    }

    for (i0 = 0; i0 < 3; i0++) {
      Mtrun->data[(((int32_T)(mid[0] + 1.0) + Mtrun->size[0] * ((int32_T)n - 1))
                   + Mtrun->size[0] * Mtrun->size[1] * (3 + i0)) - 1] = E[i0] +
        s * no[i0];
    }
  }

  i0 = Nbrimg.size[0];
  i1 = (int32_T)(mid[0] + 1.0);
  if (!((i1 >= 1) && (i1 <= i0))) {
    emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &ob_emlrtBCI, sp);
  }

  return n - Nbrimg.data[i1 - 1];
}

/* End of code generation (PointsImagesm.c) */
