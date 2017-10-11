/*
 * EffConstruct.c
 *
 * Code generation for function 'EffConstruct'
 *
 * C source code generated on: Fri Dec 20 16:15:35 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct.h"
#include "EffPointsImages.h"
#include "Blocking.h"
#include "norm.h"
#include "AppFace.h"
#include "AppGround.h"
#include "Breakthrough.h"
#include "EffConstruct_emxutil.h"
#include "EffConstruct_data.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 408, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRSInfo b_emlrtRSI = { 379, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRSInfo c_emlrtRSI = { 368, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRSInfo d_emlrtRSI = { 363, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRSInfo e_emlrtRSI = { 359, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRSInfo f_emlrtRSI = { 342, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRSInfo g_emlrtRSI = { 252, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRSInfo h_emlrtRSI = { 250, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRSInfo i_emlrtRSI = { 247, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRSInfo j_emlrtRSI = { 169, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRSInfo k_emlrtRSI = { 138, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRSInfo l_emlrtRSI = { 125, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRSInfo m_emlrtRSI = { 121, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRSInfo n_emlrtRSI = { 117, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRSInfo o_emlrtRSI = { 101, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRSInfo p_emlrtRSI = { 82, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRSInfo q_emlrtRSI = { 48, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 1, 10, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRTEInfo m_emlrtRTEI = { 25, 1, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRTEInfo n_emlrtRTEI = { 26, 1, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 33, 1, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRTEInfo p_emlrtRTEI = { 34, 1, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRTEInfo q_emlrtRTEI = { 41, 1, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRTEInfo r_emlrtRTEI = { 42, 1, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 446, 1, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 430, 44, "RF", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 430, 31, "RF", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 430, 20, "RF", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 430, 61, "trackface", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 429, 44, "RP", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 429, 31, "RP", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 429, 20, "RP", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 429, 57, "track", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 421, 42, "FSLN", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 421, 29, "FSLN", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 421, 22, "FSLN", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 421, 59, "trackface", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 420, 42, "PSLN", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 420, 29, "PSLN", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 420, 22, "PSLN", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 420, 55, "track", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 400, 24, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 400, 22, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo s_emlrtBCI = { 1, 6, 350, 54, "vnfaces", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtDCInfo emlrtDCI = { 350, 54, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  1 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 350, 39, "vnfaces", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtDCInfo b_emlrtDCI = { 350, 39, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  1 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 346, 19, "trackface", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtECInfo c_emlrtECI = { -1, 346, 26, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtBCInfo v_emlrtBCI = { -1, -1, 345, 15, "track", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtECInfo d_emlrtECI = { -1, 340, 22, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtECInfo e_emlrtECI = { -1, 339, 22, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtBCInfo w_emlrtBCI = { -1, -1, 334, 31, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 334, 22, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtECInfo f_emlrtECI = { -1, 283, 12, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtBCInfo y_emlrtBCI = { -1, -1, 283, 26, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 283, 18, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 283, 47, "leveltemp", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 282, 18, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 279, 28, "leveltemp", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 279, 49, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 279, 41, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 245, 44, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 245, 36, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 244, 43, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 244, 35, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtRTEInfo u_emlrtRTEI = { 243, 8, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 243, 19, "loopdomain", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 193, 40, "RF", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 193, 30, "RF", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 193, 28, "RF", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 193, 57, "trackface", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 192, 40, "RP", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 192, 30, "RP", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 192, 28, "RP", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 192, 53, "track", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 182, 44, "FSLN", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 182, 34, "FSLN", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 182, 30, "FSLN", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 182, 61, "trackface", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 181, 44, "PSLN", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 181, 34, "PSLN", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 181, 30, "PSLN", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 181, 57, "track", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 103, 23, "track", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 161, 32, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 161, 30, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo fc_emlrtBCI = { 1, 6, 108, 62, "vnfaces", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtDCInfo c_emlrtDCI = { 108, 62, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  1 };

static emlrtBCInfo gc_emlrtBCI = { -1, -1, 108, 47, "vnfaces", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtDCInfo d_emlrtDCI = { 108, 47, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  1 };

static emlrtBCInfo hc_emlrtBCI = { -1, -1, 104, 27, "trackface", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtECInfo g_emlrtECI = { -1, 104, 34, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtECInfo h_emlrtECI = { -1, 99, 31, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtECInfo i_emlrtECI = { -1, 98, 31, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 93, 28, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 93, 26, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtRTEInfo v_emlrtRTEI = { 90, 9, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 79, 13, "loopdomain", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtRTEInfo w_emlrtRTEI = { 81, 13, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 78, 19, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtECInfo j_emlrtECI = { -1, 76, 13, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 76, 27, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtDCInfo e_emlrtDCI = { 76, 27, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  1 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 76, 19, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 75, 19, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 74, 39, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 74, 31, "Mpath", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtRTEInfo x_emlrtRTEI = { 47, 1, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m"
};

static emlrtDCInfo f_emlrtDCI = { 26, 21, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  1 };

static emlrtDCInfo g_emlrtDCI = { 26, 21, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  4 };

static emlrtDCInfo h_emlrtDCI = { 41, 21, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  1 };

static emlrtDCInfo i_emlrtDCI = { 41, 21, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  4 };

static emlrtDCInfo j_emlrtDCI = { 25, 14, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  1 };

static emlrtDCInfo k_emlrtDCI = { 25, 14, "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  4 };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 451, 9, "NbrDSSlns", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo sc_emlrtBCI = { -1, -1, 449, 9, "NbrSlns", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo tc_emlrtBCI = { -1, -1, 460, 9, "NbrDSSlns", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo uc_emlrtBCI = { -1, -1, 458, 9, "NbrSlns", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo vc_emlrtBCI = { -1, -1, 318, 1, "loopdomain", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo wc_emlrtBCI = { -1, -1, 331, 17, "loopdomain", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo xc_emlrtBCI = { -1, -1, 350, 49, "trackface", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo yc_emlrtBCI = { -1, -1, 350, 64, "trackface", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo ad_emlrtBCI = { -1, -1, 426, 13, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo bd_emlrtBCI = { -1, -1, 426, 28, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo cd_emlrtBCI = { -1, -1, 427, 13, "NbrDSSlns", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo dd_emlrtBCI = { -1, -1, 427, 37, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo ed_emlrtBCI = { -1, -1, 429, 31, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo fd_emlrtBCI = { -1, -1, 430, 31, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo gd_emlrtBCI = { -1, -1, 417, 13, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo hd_emlrtBCI = { -1, -1, 417, 28, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo id_emlrtBCI = { -1, -1, 418, 13, "NbrSlns", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo jd_emlrtBCI = { -1, -1, 418, 31, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo kd_emlrtBCI = { -1, -1, 420, 29, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo ld_emlrtBCI = { -1, -1, 421, 29, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo md_emlrtBCI = { -1, -1, 276, 28, "loopdomain", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo nd_emlrtBCI = { -1, -1, 297, 20, "loopdomain", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo od_emlrtBCI = { -1, -1, 279, 49, "numberuse", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo pd_emlrtBCI = { -1, -1, 257, 16, "numberuse", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo qd_emlrtBCI = { -1, -1, 85, 13, "loopdomain", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo rd_emlrtBCI = { -1, -1, 85, 35, "loopdomain", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo sd_emlrtBCI = { -1, -1, 211, 16, "loopdomain", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo td_emlrtBCI = { -1, -1, 218, 22, "loopdomain", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo ud_emlrtBCI = { -1, -1, 108, 57, "trackface", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo vd_emlrtBCI = { -1, -1, 108, 72, "trackface", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo wd_emlrtBCI = { -1, -1, 187, 21, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo xd_emlrtBCI = { -1, -1, 187, 33, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo yd_emlrtBCI = { -1, -1, 188, 21, "NbrDSSlns", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo ae_emlrtBCI = { -1, -1, 188, 36, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo be_emlrtBCI = { -1, -1, 192, 30, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo ce_emlrtBCI = { -1, -1, 193, 30, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo de_emlrtBCI = { -1, -1, 178, 21, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo ee_emlrtBCI = { -1, -1, 178, 33, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo fe_emlrtBCI = { -1, -1, 179, 21, "NbrSlns", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo ge_emlrtBCI = { -1, -1, 179, 36, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo he_emlrtBCI = { -1, -1, 181, 34, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo ie_emlrtBCI = { -1, -1, 182, 34, "pass", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo je_emlrtBCI = { -1, -1, 82, 17, "loopdomain", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

static emlrtBCInfo ke_emlrtBCI = { -1, -1, 48, 5, "loopdomain", "EffConstruct",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/EffConstruct.m",
  0 };

/* Function Declarations */

/* Function Definitions */
void EffConstruct(real_T OrdRef, const real_T tx[3], real_T rvsds)
{
  emxArray_real_T *pass;
  uint32_T x;
  real_T count;
  int32_T i0;
  real_T app;
  int32_T loop_ub;
  emxArray_real_T *leveltemp;
  real_T y;
  emxArray_real_T *track;
  emxArray_real_T *trackface;
  real_T pointV[3];
  int32_T i;
  emxArray_real_T *numberuse;
  emxArray_real_T *loopdomain;
  int32_T i1;
  int32_T b;
  real_T golevel;
  int32_T goflag;
  real_T jumplevel;
  int32_T order;
  emxArray_int32_T *r0;
  emxArray_int32_T *r1;
  emxArray_real_T *b_leveltemp;
  int32_T p;
  int32_T i2;
  int32_T i3;
  int32_T glob;
  int32_T tmp_data[900];
  int32_T iv0[3];
  int32_T pp;
  real_T m;
  int32_T n;
  real_T b_n;
  real_T j;
  int32_T back_size[3];
  real_T back_data[5];
  real_T extrem[3];
  boolean_T exitg4;
  int32_T iv1[2];
  real_T bt1[2];
  real_T bt2[3];
  real_T bt3[3];
  boolean_T guard4 = FALSE;
  boolean_T guard5 = FALSE;
  real_T fface[2];
  boolean_T exitg5;
  boolean_T guard6 = FALSE;
  real_T b_extrem[3];
  int32_T iv2[3];
  int32_T c_leveltemp[3];
  int32_T exitg1;
  boolean_T exitg2;
  boolean_T guard1 = FALSE;
  boolean_T guard2 = FALSE;
  boolean_T exitg3;
  boolean_T guard3 = FALSE;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  c_emxInit_real_T(&pass, 1, &m_emlrtRTEI, TRUE);

  /*  Data construction */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History: 2011.9.21 */
  /*  Updated by: Xuhong Li <xuhong@ftw.at> */
  /*  History: 2013.08.01 */
  /*  Combine Construct and CalcPath, calculate valid reflection path without */
  /*  build whole image tree and using recursion: EffConstruct, EffPointsImages */
  /*  Mpath: 1~2 ----- face,  3~5 ----- point */
  x = 0U;
  count = 0.0;
  oldReflex = Reflex;
  oldReflex_dirty |= 1U;

  /* --------------- unify variable size for code convertion -----------------% */
  /*  pass = ones(OrdRef,1); */
  i0 = pass->size[0];
  app = emlrtNonNegativeCheckFastR2012b(OrdRef, &k_emlrtDCI, emlrtRootTLSGlobal);
  pass->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(app, &j_emlrtDCI,
    emlrtRootTLSGlobal);
  emxEnsureCapacity((emxArray__common *)pass, i0, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  app = emlrtNonNegativeCheckFastR2012b(OrdRef, &k_emlrtDCI, emlrtRootTLSGlobal);
  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(app, &j_emlrtDCI,
    emlrtRootTLSGlobal);
  for (i0 = 0; i0 < loop_ub; i0++) {
    pass->data[i0] = 0.0;
  }

  emxInit_real_T(&leveltemp, 3, &n_emlrtRTEI, TRUE);
  y = Nblock * 6.0;
  i0 = leveltemp->size[0] * leveltemp->size[1] * leveltemp->size[2];
  leveltemp->size[0] = 1;
  app = emlrtNonNegativeCheckFastR2012b(y, &g_emlrtDCI, emlrtRootTLSGlobal);
  leveltemp->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(app, &f_emlrtDCI,
    emlrtRootTLSGlobal);
  leveltemp->size[2] = 5;
  emxEnsureCapacity((emxArray__common *)leveltemp, i0, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  app = emlrtNonNegativeCheckFastR2012b(y, &g_emlrtDCI, emlrtRootTLSGlobal);
  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(app, &f_emlrtDCI,
    emlrtRootTLSGlobal) * 5;
  for (i0 = 0; i0 < loop_ub; i0++) {
    leveltemp->data[i0] = 0.0;
  }

  d_emxInit_real_T(&track, 2, &o_emlrtRTEI, TRUE);
  i0 = track->size[0] * track->size[1];
  track->size[0] = (int32_T)(OrdRef + 1.0);
  track->size[1] = 3;
  emxEnsureCapacity((emxArray__common *)track, i0, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  loop_ub = (int32_T)(OrdRef + 1.0) * 3;
  for (i0 = 0; i0 < loop_ub; i0++) {
    track->data[i0] = 0.0;
  }

  d_emxInit_real_T(&trackface, 2, &p_emlrtRTEI, TRUE);
  i0 = trackface->size[0] * trackface->size[1];
  trackface->size[0] = (int32_T)(OrdRef + 1.0);
  trackface->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)trackface, i0, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  loop_ub = (int32_T)(OrdRef + 1.0) << 1;
  for (i0 = 0; i0 < loop_ub; i0++) {
    trackface->data[i0] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    pointV[i] = 0.0;
  }

  d_emxInit_real_T(&numberuse, 2, &q_emlrtRTEI, TRUE);
  y = Nblock * 6.0;
  i0 = numberuse->size[0] * numberuse->size[1];
  numberuse->size[0] = 1;
  app = emlrtNonNegativeCheckFastR2012b(y, &i_emlrtDCI, emlrtRootTLSGlobal);
  numberuse->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(app, &h_emlrtDCI,
    emlrtRootTLSGlobal);
  emxEnsureCapacity((emxArray__common *)numberuse, i0, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  app = emlrtNonNegativeCheckFastR2012b(y, &i_emlrtDCI, emlrtRootTLSGlobal);
  loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(app, &h_emlrtDCI,
    emlrtRootTLSGlobal);
  for (i0 = 0; i0 < loop_ub; i0++) {
    numberuse->data[i0] = 0.0;
  }

  c_emxInit_real_T(&loopdomain, 1, &r_emlrtRTEI, TRUE);
  i0 = loopdomain->size[0];
  loopdomain->size[0] = (int32_T)(OrdRef + 1.0);
  emxEnsureCapacity((emxArray__common *)loopdomain, i0, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  loop_ub = (int32_T)(OrdRef + 1.0);
  for (i0 = 0; i0 < loop_ub; i0++) {
    loopdomain->data[i0] = 0.0;
  }

  /* -------------------------------------------------------------------------% */
  loopdomain->data[0] = 1.0;

  /*  only Tx in the first level */
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, OrdRef, mxDOUBLE_CLASS, (int32_T)
    OrdRef, &x_emlrtRTEI, emlrtRootTLSGlobal);
  i = 0;
  while (i <= (int32_T)OrdRef - 1) {
    /*  build up the original image tree */
    emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
    i0 = loopdomain->size[0];
    i1 = (int32_T)((1.0 + (real_T)i) + 1.0);
    loopdomain->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ke_emlrtBCI,
      emlrtRootTLSGlobal) - 1] = EffPointsImages(1.0 + (real_T)i);
    emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  b = 1;

  /*  flag */
  golevel = 2.0;
  goflag = 0;

  /*  original image tree: 0    updated image tree: 1 */
  jumplevel = OrdRef + 1.0;

  /*  pointer. from which point to update the image tree */
  order = 1;
  emxInit_int32_T(&r0, 2, &l_emlrtRTEI, TRUE);
  b_emxInit_int32_T(&r1, 1, &l_emlrtRTEI, TRUE);
  emxInit_real_T(&b_leveltemp, 3, &l_emlrtRTEI, TRUE);
  while ((jumplevel > 1.0) && (order == 1)) {
    /*  update the image tree until go back to Tx */
    /* % part 1 */
    /*  1. Update the image tree until there are useful imagepoints in the last */
    /*     level, then go to part 2 */
    /*  2. Calculate valid lower order (smaller than 'OrdRef') reflection path after updating image tree */
    if (OrdRef == 1.0) {
      /*  if reflection order is 1, set order to 0, in order to jump out the loop */
      order = 0;
    }

    while (b == 1) {
      p = 0;
      while ((golevel != OrdRef + 1.0) && (golevel > 1.0)) {
        if (goflag == 1) {
          if (2 > Mpath->size[1]) {
            i0 = 0;
            i1 = 0;
          } else {
            i0 = Mpath->size[1];
            emlrtDynamicBoundsCheckFastR2012b(2, 1, i0, &pc_emlrtBCI,
              emlrtRootTLSGlobal);
            i0 = 1;
            i1 = Mpath->size[1];
            i2 = Mpath->size[1];
            i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &pc_emlrtBCI,
              emlrtRootTLSGlobal);
          }

          i2 = Mpath->size[0];
          i3 = (int32_T)golevel;
          glob = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &qc_emlrtBCI,
            emlrtRootTLSGlobal);
          i2 = leveltemp->size[0] * leveltemp->size[1] * leveltemp->size[2];
          leveltemp->size[0] = 1;
          leveltemp->size[1] = i1 - i0;
          leveltemp->size[2] = 5;
          emxEnsureCapacity((emxArray__common *)leveltemp, i2, (int32_T)sizeof
                            (real_T), &l_emlrtRTEI);
          for (i2 = 0; i2 < 5; i2++) {
            loop_ub = i1 - i0;
            for (i3 = 0; i3 < loop_ub; i3++) {
              leveltemp->data[leveltemp->size[0] * i3 + leveltemp->size[0] *
                leveltemp->size[1] * i2] = Mpath->data[((glob + Mpath->size[0] *
                (i0 + i3)) + Mpath->size[0] * Mpath->size[1] * i2) - 1];
            }
          }

          /*  remove the first used point, renew the tree from the second point on this level */
          i0 = Mpath->size[0];
          i1 = (int32_T)golevel;
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &oc_emlrtBCI,
            emlrtRootTLSGlobal);
          loop_ub = Mpath->size[1];
          for (i0 = 0; i0 < 5; i0++) {
            for (i1 = 0; i1 < loop_ub; i1++) {
              Mpath->data[(((int32_T)golevel + Mpath->size[0] * i1) +
                           Mpath->size[0] * Mpath->size[1] * i0) - 1] = 0.0;
            }
          }

          Mpath_dirty |= 1U;
          y = Nblock * 6.0;
          if (1.0 > y - 1.0) {
            loop_ub = 0;
          } else {
            i0 = Mpath->size[1];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &mc_emlrtBCI,
              emlrtRootTLSGlobal);
            i0 = Mpath->size[1];
            app = y - 1.0;
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(app, &e_emlrtDCI,
              emlrtRootTLSGlobal);
            loop_ub = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &mc_emlrtBCI,
              emlrtRootTLSGlobal);
          }

          i0 = Mpath->size[0];
          i1 = (int32_T)golevel;
          i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &nc_emlrtBCI,
            emlrtRootTLSGlobal) - 1;
          for (i1 = 0; i1 < loop_ub; i1++) {
            tmp_data[i1] = i1;
          }

          iv0[0] = 1;
          iv0[1] = loop_ub;
          iv0[2] = 5;
          emlrtSubAssignSizeCheckR2012b(iv0, 3, *(int32_T (*)[3])leveltemp->size,
            3, &j_emlrtECI, emlrtRootTLSGlobal);
          for (i1 = 0; i1 < 5; i1++) {
            loop_ub = leveltemp->size[1];
            for (i2 = 0; i2 < loop_ub; i2++) {
              Mpath->data[(i0 + Mpath->size[0] * tmp_data[i2]) + Mpath->size[0] *
                Mpath->size[1] * i1] = leveltemp->data[leveltemp->size[0] * i2 +
                leveltemp->size[0] * leveltemp->size[1] * i1];
            }
          }

          Mpath_dirty |= 1U;
          if ((int32_T)golevel + 1 > Mpath->size[0]) {
            i0 = 1;
            i1 = 0;
          } else {
            i0 = Mpath->size[0];
            i1 = (int32_T)golevel + 1;
            i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &lc_emlrtBCI,
              emlrtRootTLSGlobal);
            i1 = Mpath->size[0];
            i2 = Mpath->size[0];
            i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &lc_emlrtBCI,
              emlrtRootTLSGlobal);
          }

          pp = (i1 - i0) + 1;
          loop_ub = Mpath->size[1];
          for (i1 = 0; i1 < 5; i1++) {
            for (i2 = 0; i2 < loop_ub; i2++) {
              for (i3 = 0; i3 < pp; i3++) {
                Mpath->data[(((i0 + i3) + Mpath->size[0] * i2) + Mpath->size[0] *
                             Mpath->size[1] * i1) - 1] = 0.0;
              }
            }
          }

          Mpath_dirty |= 1U;

          /*  clear the last few levels for new imagepoints */
          if ((int32_T)golevel + 1 > loopdomain->size[0]) {
            i0 = 1;
            i1 = 0;
          } else {
            i0 = loopdomain->size[0];
            i1 = (int32_T)golevel + 1;
            i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &kc_emlrtBCI,
              emlrtRootTLSGlobal);
            i1 = loopdomain->size[0];
            i2 = loopdomain->size[0];
            i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &kc_emlrtBCI,
              emlrtRootTLSGlobal);
          }

          i2 = r1->size[0];
          r1->size[0] = (i1 - i0) + 1;
          emxEnsureCapacity((emxArray__common *)r1, i2, (int32_T)sizeof(int32_T),
                            &l_emlrtRTEI);
          loop_ub = i1 - i0;
          for (i1 = 0; i1 <= loop_ub; i1++) {
            r1->data[i1] = i0 + i1;
          }

          i0 = r0->size[0] * r0->size[1];
          r0->size[0] = 1;
          emxEnsureCapacity((emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                            &l_emlrtRTEI);
          pp = r1->size[0];
          i0 = r0->size[0] * r0->size[1];
          r0->size[1] = pp;
          emxEnsureCapacity((emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                            &l_emlrtRTEI);
          loop_ub = r1->size[0];
          for (i0 = 0; i0 < loop_ub; i0++) {
            r0->data[i0] = r1->data[i0];
          }

          loop_ub = r0->size[0] * r0->size[1];
          for (i0 = 0; i0 < loop_ub; i0++) {
            loopdomain->data[r0->data[i0] - 1] = 0.0;
          }

          i0 = (int32_T)((OrdRef + 1.0) + (1.0 - (golevel + 1.0)));
          emlrtForLoopVectorCheckR2012b(golevel + 1.0, 1.0, OrdRef + 1.0,
            mxDOUBLE_CLASS, i0, &w_emlrtRTEI, emlrtRootTLSGlobal);
          glob = 0;
          while (glob <= i0 - 1) {
            m = (golevel + 1.0) + (real_T)glob;
            emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
            i1 = loopdomain->size[0];
            i2 = (int32_T)m;
            loopdomain->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
              &je_emlrtBCI, emlrtRootTLSGlobal) - 1] = EffPointsImages(m - 1.0);
            emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
            glob++;
            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
              emlrtRootTLSGlobal);
          }

          i0 = loopdomain->size[0];
          i1 = (int32_T)golevel;
          i2 = loopdomain->size[0];
          i3 = (int32_T)golevel;
          loopdomain->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
            &qd_emlrtBCI, emlrtRootTLSGlobal) - 1] = loopdomain->
            data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &rd_emlrtBCI,
            emlrtRootTLSGlobal) - 1] - 1.0;
        }

        i0 = (int32_T)(OrdRef + (1.0 - golevel));
        emlrtForLoopVectorCheckR2012b(golevel, 1.0, OrdRef, mxDOUBLE_CLASS, i0,
          &v_emlrtRTEI, emlrtRootTLSGlobal);
        n = 0;
        while (n <= i0 - 1) {
          b_n = golevel + (real_T)n;

          /*  backtrack from the new point */
          glob = 1;
          j = b_n;
          i1 = Mpath->size[1];
          emlrtDynamicBoundsCheckFastR2012b(1, 1, i1, &ic_emlrtBCI,
            emlrtRootTLSGlobal);
          i1 = Mpath->size[0];
          i2 = (int32_T)b_n;
          pp = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &jc_emlrtBCI,
            emlrtRootTLSGlobal);
          back_size[0] = 1;
          back_size[1] = 1;
          back_size[2] = 5;
          for (i1 = 0; i1 < 5; i1++) {
            back_data[i1] = Mpath->data[(pp + Mpath->size[0] * Mpath->size[1] *
              i1) - 1];
          }

          for (i = 0; i < 3; i++) {
            extrem[i] = recept[i];
          }

          m = 1.0;
          exitg4 = FALSE;
          while ((exitg4 == FALSE) && ((j != 1.0) && (glob == 1))) {
            for (i1 = 0; i1 < 2; i1++) {
              iv1[i1] = 1 + i1;
            }

            emlrtMatrixMatrixIndexCheckR2012b(back_size, 3, iv1, 2, &i_emlrtECI,
              emlrtRootTLSGlobal);

            /*   face */
            for (pp = 0; pp < 2; pp++) {
              bt1[pp] = back_data[pp];
              iv1[pp] = 1 + (pp << 1);
            }

            emlrtMatrixMatrixIndexCheckR2012b(back_size, 3, iv1, 2, &h_emlrtECI,
              emlrtRootTLSGlobal);

            /*  point */
            for (pp = 0; pp < 3; pp++) {
              bt2[pp] = back_data[pp + 2];
              bt3[pp] = extrem[pp];
            }

            emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
            Breakthrough(bt1, bt2, bt3, pointV);
            emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
            pp = track->size[0];
            i1 = (int32_T)m;
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, pp, &cc_emlrtBCI,
              emlrtRootTLSGlobal);
            for (i1 = 0; i1 < 3; i1++) {
              track->data[((int32_T)m + track->size[0] * i1) - 1] = pointV[i1];
            }

            /*  coordinates of reflection point */
            for (i1 = 0; i1 < 2; i1++) {
              iv1[i1] = 1 + i1;
            }

            emlrtMatrixMatrixIndexCheckR2012b(back_size, 3, iv1, 2, &g_emlrtECI,
              emlrtRootTLSGlobal);
            loop_ub = trackface->size[0];
            i1 = (int32_T)m;
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, loop_ub, &hc_emlrtBCI,
              emlrtRootTLSGlobal);
            for (i1 = 0; i1 < 2; i1++) {
              trackface->data[((int32_T)m + trackface->size[0] * i1) - 1] =
                back_data[i1];
            }

            /*  face */
            for (i = 0; i < 3; i++) {
              bt2[i] = extrem[i] - pointV[i];
            }

            guard4 = FALSE;
            guard5 = FALSE;
            if (back_data[0] != 0.0) {
              i1 = trackface->size[0];
              i2 = (int32_T)m;
              app = trackface->data[(emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                &vd_emlrtBCI, emlrtRootTLSGlobal) + trackface->size[0]) - 1];
              i1 = (int32_T)emlrtIntegerCheckFastR2012b(app, &c_emlrtDCI,
                emlrtRootTLSGlobal);
              loop_ub = emlrtDynamicBoundsCheckFastR2012b(i1, 1, 6, &fc_emlrtBCI,
                emlrtRootTLSGlobal);
              i1 = vnfaces.size[0];
              i2 = trackface->size[0];
              i3 = (int32_T)m;
              app = trackface->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                &ud_emlrtBCI, emlrtRootTLSGlobal) - 1];
              i2 = (int32_T)emlrtIntegerCheckFastR2012b(app, &d_emlrtDCI,
                emlrtRootTLSGlobal);
              pp = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &gc_emlrtBCI,
                emlrtRootTLSGlobal);
              y = 0.0;
              for (i1 = 0; i1 < 3; i1++) {
                y += vnfaces.data[((pp + vnfaces.size[0] * (loop_ub - 1)) +
                                   vnfaces.size[0] * vnfaces.size[1] * i1) - 1] *
                  bt2[i1];
              }

              if (y <= 0.0) {
                glob = 0;
                exitg4 = TRUE;
              } else {
                guard5 = TRUE;
              }
            } else {
              guard5 = TRUE;
            }

            if (guard5 == TRUE) {
              if (back_data[0] == 0.0) {
                emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
                app = AppGround(pointV);
                emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
              } else {
                emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
                for (i1 = 0; i1 < 2; i1++) {
                  bt1[i1] = back_data[i1];
                }

                app = AppFace(pointV, bt1);
                emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);

                /*  Attention AppFace input dimension match */
              }

              if (app == 1.0) {
                emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
                app = Blocking(extrem, pointV);
                emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
                if (app == 1.0) {
                  glob = 0;
                  exitg4 = TRUE;
                } else {
                  fface[0] = back_data[0];

                  /*  index of the current block */
                  if (back_data[0] > 0.0) {
                    pp = 0;
                    exitg5 = FALSE;
                    while ((exitg5 == FALSE) && (pp < 6)) {
                      guard6 = FALSE;
                      if (1.0 + (real_T)pp != back_data[1]) {
                        fface[1] = 1.0 + (real_T)pp;
                        emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
                        app = AppFace(pointV, fface);
                        emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
                        if (app == 1.0) {
                          glob = 0;
                          exitg5 = TRUE;
                        } else {
                          guard6 = TRUE;
                        }
                      } else {
                        guard6 = TRUE;
                      }

                      if (guard6 == TRUE) {
                        pp++;
                        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
                          emlrtRootTLSGlobal);
                      }
                    }

                    /*  test */
                    for (i = 0; i < 3; i++) {
                      b_extrem[i] = extrem[i] - pointV[i];
                    }

                    if (norm(b_extrem) < 1.0E-12) {
                      glob = 0;
                      exitg4 = TRUE;
                    } else {
                      guard4 = TRUE;
                    }
                  } else {
                    guard4 = TRUE;
                  }
                }
              } else {
                glob = 0;
                exitg4 = TRUE;
              }
            }

            if (guard4 == TRUE) {
              for (i = 0; i < 3; i++) {
                extrem[i] = pointV[i];
              }

              j--;
              i1 = Mpath->size[1];
              emlrtDynamicBoundsCheckFastR2012b(1, 1, i1, &dc_emlrtBCI,
                emlrtRootTLSGlobal);
              i1 = Mpath->size[0];
              i2 = (int32_T)j;
              pp = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &ec_emlrtBCI,
                emlrtRootTLSGlobal);
              back_size[0] = 1;
              back_size[1] = 1;
              back_size[2] = 5;
              for (i1 = 0; i1 < 5; i1++) {
                back_data[i1] = Mpath->data[(pp + Mpath->size[0] * Mpath->size[1]
                  * i1) - 1];
              }

              /*  the first point of upper level */
              m++;

              /*   the reflection point is okay, go to the upper level */
              emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
                emlrtRootTLSGlobal);
            }
          }

          /*  while (j ~=0) */
          if (glob == 1) {
            for (i = 0; i < 3; i++) {
              bt2[i] = tx[i];
            }

            emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
            app = Blocking(bt2, pointV);
            emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);

            /*   input of Blocking should be 3*1, so use tx' */
            if (app == 1.0) {
              glob = 0;
            }
          }

          if (glob == 1) {
            Reflex = 1.0;
            Reflex_dirty |= 1U;
            if (rvsds == 0.0) {
              i1 = pass->size[0];
              i2 = (int32_T)b_n - 1;
              i3 = pass->size[0];
              pp = (int32_T)b_n - 1;
              pass->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                &de_emlrtBCI, emlrtRootTLSGlobal) - 1] = pass->
                data[emlrtDynamicBoundsCheckFastR2012b(pp, 1, i3, &ee_emlrtBCI,
                emlrtRootTLSGlobal) - 1] + 1.0;

              /*  test */
              i1 = NbrSlns.size[0];
              i2 = (int32_T)b_n - 1;
              i3 = pass->size[0];
              pp = (int32_T)b_n - 1;
              NbrSlns.data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                &fe_emlrtBCI, emlrtRootTLSGlobal) - 1] = pass->
                data[emlrtDynamicBoundsCheckFastR2012b(pp, 1, i3, &ge_emlrtBCI,
                emlrtRootTLSGlobal) - 1];
              NbrSlns_dirty |= 1U;
              i = 0;
              while (i <= (int32_T)(uint32_T)m - 2) {
                i1 = PSLN->size[0];
                i2 = PSLN->size[1];
                i3 = PSLN->size[2];
                pp = 1 + i;
                emlrtDynamicBoundsCheckFastR2012b(pp, 1, i3, &xb_emlrtBCI,
                  emlrtRootTLSGlobal);
                i3 = pass->size[0];
                pp = (int32_T)b_n - 1;
                i3 = (int32_T)pass->data[emlrtDynamicBoundsCheckFastR2012b(pp, 1,
                  i3, &he_emlrtBCI, emlrtRootTLSGlobal) - 1];
                loop_ub = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                  &yb_emlrtBCI, emlrtRootTLSGlobal);
                i2 = (int32_T)b_n - 1;
                pp = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &ac_emlrtBCI,
                  emlrtRootTLSGlobal);
                i1 = track->size[0];
                i2 = (int32_T)(m - (1.0 + (real_T)i));
                glob = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &bc_emlrtBCI,
                  emlrtRootTLSGlobal);
                for (i1 = 0; i1 < 3; i1++) {
                  PSLN->data[(((pp + PSLN->size[0] * (loop_ub - 1)) + PSLN->
                               size[0] * PSLN->size[1] * i) + PSLN->size[0] *
                              PSLN->size[1] * PSLN->size[2] * i1) - 1] =
                    track->data[(glob + track->size[0] * i1) - 1];
                }

                PSLN_dirty |= 1U;
                i1 = FSLN->size[0];
                i2 = FSLN->size[1];
                i3 = FSLN->size[2];
                pp = 1 + i;
                emlrtDynamicBoundsCheckFastR2012b(pp, 1, i3, &tb_emlrtBCI,
                  emlrtRootTLSGlobal);
                i3 = pass->size[0];
                pp = (int32_T)b_n - 1;
                i3 = (int32_T)pass->data[emlrtDynamicBoundsCheckFastR2012b(pp, 1,
                  i3, &ie_emlrtBCI, emlrtRootTLSGlobal) - 1];
                loop_ub = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                  &ub_emlrtBCI, emlrtRootTLSGlobal);
                i2 = (int32_T)b_n - 1;
                pp = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &vb_emlrtBCI,
                  emlrtRootTLSGlobal);
                i1 = trackface->size[0];
                i2 = (int32_T)(m - (1.0 + (real_T)i));
                glob = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &wb_emlrtBCI,
                  emlrtRootTLSGlobal);
                for (i1 = 0; i1 < 2; i1++) {
                  FSLN->data[(((pp + FSLN->size[0] * (loop_ub - 1)) + FSLN->
                               size[0] * FSLN->size[1] * i) + FSLN->size[0] *
                              FSLN->size[1] * FSLN->size[2] * i1) - 1] =
                    trackface->data[(glob + trackface->size[0] * i1) - 1];
                }

                FSLN_dirty |= 1U;
                i++;
                emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
                  emlrtRootTLSGlobal);
              }

              /*                      pass(n-1) = pass(n-1) + 1; */
              count++;
            } else {
              i1 = pass->size[0];
              i2 = (int32_T)b_n - 1;
              i3 = pass->size[0];
              pp = (int32_T)b_n - 1;
              pass->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                &wd_emlrtBCI, emlrtRootTLSGlobal) - 1] = pass->
                data[emlrtDynamicBoundsCheckFastR2012b(pp, 1, i3, &xd_emlrtBCI,
                emlrtRootTLSGlobal) - 1] + 1.0;

              /*  test */
              i1 = NbrDSSlns.size[0];
              i2 = (int32_T)b_n;
              i3 = pass->size[0];
              pp = (int32_T)b_n - 1;
              NbrDSSlns.data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                &yd_emlrtBCI, emlrtRootTLSGlobal) - 1] = pass->
                data[emlrtDynamicBoundsCheckFastR2012b(pp, 1, i3, &ae_emlrtBCI,
                emlrtRootTLSGlobal) - 1];
              NbrDSSlns_dirty |= 1U;
              i = 0;
              while (i <= (int32_T)(uint32_T)m - 2) {
                i1 = RP->size[0];
                i2 = RP->size[1];
                i3 = RP->size[2];
                pp = 1 + i;
                emlrtDynamicBoundsCheckFastR2012b(pp, 1, i3, &pb_emlrtBCI,
                  emlrtRootTLSGlobal);
                i3 = pass->size[0];
                pp = (int32_T)b_n - 1;
                i3 = (int32_T)pass->data[emlrtDynamicBoundsCheckFastR2012b(pp, 1,
                  i3, &be_emlrtBCI, emlrtRootTLSGlobal) - 1];
                loop_ub = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                  &qb_emlrtBCI, emlrtRootTLSGlobal);
                i2 = (int32_T)b_n;
                emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &rb_emlrtBCI,
                  emlrtRootTLSGlobal);
                i1 = track->size[0];
                i2 = (int32_T)(m - (1.0 + (real_T)i));
                glob = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &sb_emlrtBCI,
                  emlrtRootTLSGlobal);
                for (i1 = 0; i1 < 3; i1++) {
                  RP->data[((((int32_T)b_n + RP->size[0] * (loop_ub - 1)) +
                             RP->size[0] * RP->size[1] * i) + RP->size[0] *
                            RP->size[1] * RP->size[2] * i1) - 1] = track->data
                    [(glob + track->size[0] * i1) - 1];
                }

                RP_dirty |= 1U;
                i1 = RF->size[0];
                i2 = RF->size[1];
                i3 = RF->size[2];
                pp = 1 + i;
                emlrtDynamicBoundsCheckFastR2012b(pp, 1, i3, &lb_emlrtBCI,
                  emlrtRootTLSGlobal);
                i3 = pass->size[0];
                pp = (int32_T)b_n - 1;
                i3 = (int32_T)pass->data[emlrtDynamicBoundsCheckFastR2012b(pp, 1,
                  i3, &ce_emlrtBCI, emlrtRootTLSGlobal) - 1];
                loop_ub = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
                  &mb_emlrtBCI, emlrtRootTLSGlobal);
                i2 = (int32_T)b_n;
                emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &nb_emlrtBCI,
                  emlrtRootTLSGlobal);
                i1 = trackface->size[0];
                i2 = (int32_T)(m - (1.0 + (real_T)i));
                glob = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &ob_emlrtBCI,
                  emlrtRootTLSGlobal);
                for (i1 = 0; i1 < 2; i1++) {
                  RF->data[((((int32_T)b_n + RF->size[0] * (loop_ub - 1)) +
                             RF->size[0] * RF->size[1] * i) + RF->size[0] *
                            RF->size[1] * RF->size[2] * i1) - 1] =
                    trackface->data[(glob + trackface->size[0] * i1) - 1];
                }

                RF_dirty |= 1U;
                i++;
                emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
                  emlrtRootTLSGlobal);
              }

              /*                      pass(n-1) = pass(n-1) + 1; */
              count++;
            }
          }

          n++;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
            emlrtRootTLSGlobal);
        }

        if (goflag == 0) {
          golevel = OrdRef + 1.0;
          goflag = 1;
        } else {
          i0 = loopdomain->size[0];
          i1 = (int32_T)OrdRef;
          if (loopdomain->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
               &sd_emlrtBCI, emlrtRootTLSGlobal) - 1] == 1.0) {
            /*  special case: only one point left on the last second level */
            p = 1;

            /*  flag */
            jumplevel = OrdRef - 1.0;
            pp = 0;
            while ((jumplevel >= 1.0) && (pp == 0)) {
              /*   backtrack until there is more than one valid point on that level,  */
              i0 = loopdomain->size[0];
              i1 = (int32_T)jumplevel;
              if (loopdomain->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
                   &td_emlrtBCI, emlrtRootTLSGlobal) - 1] == 1.0) {
                /*  important for the next start point */
                jumplevel--;
              } else {
                pp = 1;
              }

              emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
                emlrtRootTLSGlobal);
            }

            golevel = OrdRef + 1.0;
          } else {
            p = 0;
            golevel = OrdRef + 1.0;
          }
        }

        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
          emlrtRootTLSGlobal);
      }

      /* ------check if the point on the last level is useful------%  */
      if (golevel == OrdRef + 1.0) {
        x = 0U;
        i0 = loopdomain->size[0];
        i1 = (int32_T)golevel;
        emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &kb_emlrtBCI,
          emlrtRootTLSGlobal);
        emlrtForLoopVectorCheckR2012b(1.0, 1.0, loopdomain->data[(int32_T)
          golevel - 1], mxDOUBLE_CLASS, (int32_T)loopdomain->data[(int32_T)
          golevel - 1], &u_emlrtRTEI, emlrtRootTLSGlobal);
        pp = 0;
        while (pp <= (int32_T)loopdomain->data[(int32_T)golevel - 1] - 1) {
          i0 = Mpath->size[1];
          i1 = (int32_T)(1.0 + (real_T)pp);
          i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ib_emlrtBCI,
            emlrtRootTLSGlobal);
          i1 = Mpath->size[0];
          i2 = (int32_T)golevel;
          glob = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &jb_emlrtBCI,
            emlrtRootTLSGlobal);
          for (i1 = 0; i1 < 2; i1++) {
            bt1[i1] = Mpath->data[((glob + Mpath->size[0] * (i0 - 1)) +
              Mpath->size[0] * Mpath->size[1] * i1) - 1];
          }

          /*  1*2 */
          i0 = Mpath->size[1];
          i1 = (int32_T)(1.0 + (real_T)pp);
          i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &gb_emlrtBCI,
            emlrtRootTLSGlobal);
          i1 = Mpath->size[0];
          i2 = (int32_T)golevel;
          glob = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &hb_emlrtBCI,
            emlrtRootTLSGlobal);

          /*  3*1 */
          for (i1 = 0; i1 < 3; i1++) {
            bt2[i1] = Mpath->data[((glob + Mpath->size[0] * (i0 - 1)) +
              Mpath->size[0] * Mpath->size[1] * (2 + i1)) - 1];
            bt3[i1] = recept[i1];
          }

          /* 3*1 */
          emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
          for (i = 0; i < 3; i++) {
            b_extrem[i] = bt2[i];
          }

          Breakthrough(bt1, b_extrem, bt3, bt2);
          emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
          if (bt1[0] == 0.0) {
            /*  if ground */
            emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
            app = AppGround(bt2);
            emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
          } else {
            emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
            app = AppFace(bt2, bt1);
            emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);

            /*  Attention AppFace input dimension match */
          }

          if (app == 1.0) {
            x++;
            i0 = numberuse->size[1];
            i1 = (int32_T)x;
            numberuse->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
              &pd_emlrtBCI, emlrtRootTLSGlobal) - 1] = 1.0 + (real_T)pp;

            /*   the useful imagepoints index on the last level */
          }

          pp++;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
            emlrtRootTLSGlobal);
        }

        if ((int32_T)x == 0) {
          /*   if no useful imagepoints */
          if (p == 1) {
            /*  update the image tree from the 1st point on jumplevel */
            golevel = jumplevel;
          } else {
            golevel--;
          }

          /*  there is no valid point on the last level, continue part 1 */
        } else {
          i0 = loopdomain->size[0];
          i1 = (int32_T)golevel;
          if ((real_T)x < loopdomain->data[emlrtDynamicBoundsCheckFastR2012b(i1,
               1, i0, &md_emlrtBCI, emlrtRootTLSGlobal) - 1]) {
            /*    renew the OrdRef+1 level */
            loop_ub = 1;
            while (loop_ub - 1 <= (int32_T)x - 1) {
              pp = leveltemp->size[1];
              emlrtDynamicBoundsCheckFastR2012b(loop_ub, 1, pp, &db_emlrtBCI,
                emlrtRootTLSGlobal);
              i0 = Mpath->size[1];
              i1 = numberuse->size[1];
              i1 = (int32_T)numberuse->data[emlrtDynamicBoundsCheckFastR2012b
                (loop_ub, 1, i1, &od_emlrtBCI, emlrtRootTLSGlobal) - 1];
              pp = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &eb_emlrtBCI,
                emlrtRootTLSGlobal);
              i0 = Mpath->size[0];
              i1 = (int32_T)golevel;
              glob = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &fb_emlrtBCI,
                emlrtRootTLSGlobal);
              for (i0 = 0; i0 < 5; i0++) {
                leveltemp->data[leveltemp->size[0] * (loop_ub - 1) +
                  leveltemp->size[0] * leveltemp->size[1] * i0] = Mpath->data
                  [((glob + Mpath->size[0] * (pp - 1)) + Mpath->size[0] *
                    Mpath->size[1] * i0) - 1];
              }

              loop_ub++;
              emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
                emlrtRootTLSGlobal);
            }

            i0 = Mpath->size[0];
            i1 = (int32_T)golevel;
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &cb_emlrtBCI,
              emlrtRootTLSGlobal);
            loop_ub = Mpath->size[1];
            for (i0 = 0; i0 < 5; i0++) {
              for (i1 = 0; i1 < loop_ub; i1++) {
                Mpath->data[(((int32_T)golevel + Mpath->size[0] * i1) +
                             Mpath->size[0] * Mpath->size[1] * i0) - 1] = 0.0;
              }
            }

            Mpath_dirty |= 1U;
            i0 = leveltemp->size[1];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &bb_emlrtBCI,
              emlrtRootTLSGlobal);
            i0 = leveltemp->size[1];
            i1 = (int32_T)x;
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &bb_emlrtBCI,
              emlrtRootTLSGlobal);
            i0 = Mpath->size[1];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &y_emlrtBCI,
              emlrtRootTLSGlobal);
            i0 = Mpath->size[1];
            i1 = (int32_T)x;
            emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &y_emlrtBCI,
              emlrtRootTLSGlobal);
            i0 = Mpath->size[0];
            i1 = (int32_T)golevel;
            i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ab_emlrtBCI,
              emlrtRootTLSGlobal) - 1;
            loop_ub = (int32_T)x;
            for (i1 = 0; i1 < loop_ub; i1++) {
              tmp_data[i1] = i1;
            }

            iv2[0] = 1;
            iv2[1] = (int32_T)x;
            iv2[2] = 5;
            i1 = b_leveltemp->size[0] * b_leveltemp->size[1] * b_leveltemp->
              size[2];
            b_leveltemp->size[0] = 1;
            b_leveltemp->size[1] = (int32_T)x;
            b_leveltemp->size[2] = 5;
            emxEnsureCapacity((emxArray__common *)b_leveltemp, i1, (int32_T)
                              sizeof(real_T), &l_emlrtRTEI);
            for (i1 = 0; i1 < 5; i1++) {
              loop_ub = (int32_T)x;
              for (i2 = 0; i2 < loop_ub; i2++) {
                b_leveltemp->data[b_leveltemp->size[0] * i2 + b_leveltemp->size
                  [0] * b_leveltemp->size[1] * i1] = leveltemp->data
                  [leveltemp->size[0] * i2 + leveltemp->size[0] *
                  leveltemp->size[1] * i1];
              }
            }

            for (i1 = 0; i1 < 3; i1++) {
              c_leveltemp[i1] = b_leveltemp->size[i1];
            }

            emlrtSubAssignSizeCheckR2012b(iv2, 3, c_leveltemp, 3, &f_emlrtECI,
              emlrtRootTLSGlobal);
            for (i1 = 0; i1 < 5; i1++) {
              loop_ub = (int32_T)x;
              for (i2 = 0; i2 < loop_ub; i2++) {
                Mpath->data[(i0 + Mpath->size[0] * tmp_data[i2]) + Mpath->size[0]
                  * Mpath->size[1] * i1] = leveltemp->data[leveltemp->size[0] *
                  i2 + leveltemp->size[0] * leveltemp->size[1] * i1];
              }
            }

            Mpath_dirty |= 1U;
            if (p == 1) {
              /*  update the image tree from the 1st point on jumplevel */
              golevel = jumplevel;
            } else {
              golevel--;
            }

            b = 0;

            /*  there are valid points on the last level, go to part 2 */
          } else {
            i0 = loopdomain->size[0];
            i1 = (int32_T)golevel;
            if ((real_T)x == loopdomain->data[emlrtDynamicBoundsCheckFastR2012b
                (i1, 1, i0, &nd_emlrtBCI, emlrtRootTLSGlobal) - 1]) {
              /*   all imagepoints can be used */
              if (p == 1) {
                /*  update the image tree from the 1st point on jumplevel */
                golevel = jumplevel;
              } else {
                golevel--;
              }

              b = 0;

              /*  there are valid points on the last level, go to part 2 */
            }
          }
        }
      }

      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
    }

    i0 = loopdomain->size[0];
    i1 = (int32_T)(OrdRef + 1.0);
    loopdomain->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &vc_emlrtBCI,
      emlrtRootTLSGlobal) - 1] = (real_T)x;

    /*   # valid points on the last level  */
    /* % part 2  */
    /*  Backtrack from the points on the last level, calculate full order ('OrdRef') reflection path  */
    b_n = 1.0;
    do {
      exitg1 = 0;
      i0 = loopdomain->size[0];
      i1 = (int32_T)(OrdRef + 1.0);
      if (b_n <= loopdomain->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
           &wc_emlrtBCI, emlrtRootTLSGlobal) - 1]) {
        /*  loop for useful image points in the last level */
        glob = 1;
        j = OrdRef + 1.0;
        i0 = Mpath->size[1];
        i1 = (int32_T)b_n;
        n = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &w_emlrtBCI,
          emlrtRootTLSGlobal);
        i0 = Mpath->size[0];
        i1 = (int32_T)(OrdRef + 1.0);
        pp = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &x_emlrtBCI,
          emlrtRootTLSGlobal);
        back_size[0] = 1;
        back_size[1] = 1;
        back_size[2] = 5;
        for (i0 = 0; i0 < 5; i0++) {
          back_data[i0] = Mpath->data[((pp + Mpath->size[0] * (n - 1)) +
            Mpath->size[0] * Mpath->size[1] * i0) - 1];
        }

        m = 1.0;
        for (i = 0; i < 3; i++) {
          extrem[i] = recept[i];
        }

        exitg2 = FALSE;
        while ((exitg2 == FALSE) && ((j != 1.0) && (glob == 1))) {
          for (i0 = 0; i0 < 2; i0++) {
            iv1[i0] = 1 + i0;
          }

          emlrtMatrixMatrixIndexCheckR2012b(back_size, 3, iv1, 2, &e_emlrtECI,
            emlrtRootTLSGlobal);

          /*   face */
          for (pp = 0; pp < 2; pp++) {
            bt1[pp] = back_data[pp];
            iv1[pp] = 1 + (pp << 1);
          }

          emlrtMatrixMatrixIndexCheckR2012b(back_size, 3, iv1, 2, &d_emlrtECI,
            emlrtRootTLSGlobal);

          /*  point */
          for (pp = 0; pp < 3; pp++) {
            bt2[pp] = back_data[pp + 2];
            bt3[pp] = extrem[pp];
          }

          emlrtPushRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
          Breakthrough(bt1, bt2, bt3, pointV);
          emlrtPopRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
          pp = track->size[0];
          i0 = (int32_T)m;
          emlrtDynamicBoundsCheckFastR2012b(i0, 1, pp, &v_emlrtBCI,
            emlrtRootTLSGlobal);
          for (i0 = 0; i0 < 3; i0++) {
            track->data[((int32_T)m + track->size[0] * i0) - 1] = pointV[i0];
          }

          /*  coordinates of reflection point */
          for (i0 = 0; i0 < 2; i0++) {
            iv1[i0] = 1 + i0;
          }

          emlrtMatrixMatrixIndexCheckR2012b(back_size, 3, iv1, 2, &c_emlrtECI,
            emlrtRootTLSGlobal);
          loop_ub = trackface->size[0];
          i0 = (int32_T)m;
          emlrtDynamicBoundsCheckFastR2012b(i0, 1, loop_ub, &u_emlrtBCI,
            emlrtRootTLSGlobal);
          for (i0 = 0; i0 < 2; i0++) {
            trackface->data[((int32_T)m + trackface->size[0] * i0) - 1] =
              back_data[i0];
          }

          /*  face */
          for (i = 0; i < 3; i++) {
            bt2[i] = extrem[i] - pointV[i];
          }

          guard1 = FALSE;
          guard2 = FALSE;
          if (back_data[0] != 0.0) {
            i0 = trackface->size[0];
            i1 = (int32_T)m;
            app = trackface->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
              &yc_emlrtBCI, emlrtRootTLSGlobal) + trackface->size[0]) - 1];
            i0 = (int32_T)emlrtIntegerCheckFastR2012b(app, &emlrtDCI,
              emlrtRootTLSGlobal);
            loop_ub = emlrtDynamicBoundsCheckFastR2012b(i0, 1, 6, &s_emlrtBCI,
              emlrtRootTLSGlobal);
            i0 = vnfaces.size[0];
            i1 = trackface->size[0];
            i2 = (int32_T)m;
            app = trackface->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
              &xc_emlrtBCI, emlrtRootTLSGlobal) - 1];
            i1 = (int32_T)emlrtIntegerCheckFastR2012b(app, &b_emlrtDCI,
              emlrtRootTLSGlobal);
            pp = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &t_emlrtBCI,
              emlrtRootTLSGlobal);
            y = 0.0;
            for (i0 = 0; i0 < 3; i0++) {
              y += vnfaces.data[((pp + vnfaces.size[0] * (loop_ub - 1)) +
                                 vnfaces.size[0] * vnfaces.size[1] * i0) - 1] *
                bt2[i0];
            }

            if (y <= 0.0) {
              glob = 0;
              exitg2 = TRUE;
            } else {
              guard2 = TRUE;
            }
          } else {
            guard2 = TRUE;
          }

          if (guard2 == TRUE) {
            if (back_data[0] == 0.0) {
              emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
              app = AppGround(pointV);
              emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
            } else {
              emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
              for (i0 = 0; i0 < 2; i0++) {
                bt1[i0] = back_data[i0];
              }

              app = AppFace(pointV, bt1);
              emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);

              /*  Attention AppFace input dimension match */
            }

            if (app == 1.0) {
              emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
              app = Blocking(extrem, pointV);
              emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
              if (app == 1.0) {
                glob = 0;
                exitg2 = TRUE;
              } else {
                fface[0] = back_data[0];

                /*  index of the current block */
                if (back_data[0] > 0.0) {
                  pp = 0;
                  exitg3 = FALSE;
                  while ((exitg3 == FALSE) && (pp < 6)) {
                    guard3 = FALSE;
                    if (1.0 + (real_T)pp != back_data[1]) {
                      fface[1] = 1.0 + (real_T)pp;
                      emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
                      app = AppFace(pointV, fface);
                      emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
                      if (app == 1.0) {
                        glob = 0;
                        exitg3 = TRUE;
                      } else {
                        guard3 = TRUE;
                      }
                    } else {
                      guard3 = TRUE;
                    }

                    if (guard3 == TRUE) {
                      pp++;
                      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
                        emlrtRootTLSGlobal);
                    }
                  }

                  for (i = 0; i < 3; i++) {
                    b_extrem[i] = extrem[i] - pointV[i];
                  }

                  if (norm(b_extrem) < 1.0E-12) {
                    glob = 0;
                    exitg2 = TRUE;
                  } else {
                    guard1 = TRUE;
                  }
                } else {
                  guard1 = TRUE;
                }
              }
            } else {
              glob = 0;
              exitg2 = TRUE;
            }
          }

          if (guard1 == TRUE) {
            for (i = 0; i < 3; i++) {
              extrem[i] = pointV[i];
            }

            j--;
            i0 = Mpath->size[1];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &q_emlrtBCI,
              emlrtRootTLSGlobal);
            i0 = Mpath->size[0];
            i1 = (int32_T)j;
            pp = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &r_emlrtBCI,
              emlrtRootTLSGlobal);
            back_size[0] = 1;
            back_size[1] = 1;
            back_size[2] = 5;
            for (i0 = 0; i0 < 5; i0++) {
              back_data[i0] = Mpath->data[(pp + Mpath->size[0] * Mpath->size[1] *
                i0) - 1];
            }

            m++;
            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
              emlrtRootTLSGlobal);
          }
        }

        if (glob == 1) {
          for (i = 0; i < 3; i++) {
            bt2[i] = tx[i];
          }

          emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
          app = Blocking(bt2, pointV);
          emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
          if (app == 1.0) {
            glob = 0;
          }
        }

        if (glob == 1) {
          Reflex = 1.0;
          Reflex_dirty |= 1U;
          if (rvsds == 0.0) {
            i0 = pass->size[0];
            i1 = (int32_T)OrdRef;
            i2 = pass->size[0];
            i3 = (int32_T)OrdRef;
            pass->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &gd_emlrtBCI,
              emlrtRootTLSGlobal) - 1] = pass->
              data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &hd_emlrtBCI,
              emlrtRootTLSGlobal) - 1] + 1.0;

            /*  test */
            i0 = NbrSlns.size[0];
            i1 = (int32_T)OrdRef;
            i2 = pass->size[0];
            i3 = (int32_T)OrdRef;
            NbrSlns.data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
              &id_emlrtBCI, emlrtRootTLSGlobal) - 1] = pass->
              data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &jd_emlrtBCI,
              emlrtRootTLSGlobal) - 1];
            NbrSlns_dirty |= 1U;
            i = 0;
            while (i <= (int32_T)(uint32_T)m - 2) {
              i0 = PSLN->size[0];
              i1 = PSLN->size[1];
              i2 = PSLN->size[2];
              i3 = 1 + i;
              emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &m_emlrtBCI,
                emlrtRootTLSGlobal);
              i2 = pass->size[0];
              i3 = (int32_T)OrdRef;
              i2 = (int32_T)pass->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1,
                i2, &kd_emlrtBCI, emlrtRootTLSGlobal) - 1];
              loop_ub = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &n_emlrtBCI,
                emlrtRootTLSGlobal);
              i1 = (int32_T)OrdRef;
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &o_emlrtBCI,
                emlrtRootTLSGlobal);
              i0 = track->size[0];
              i1 = (int32_T)(m - (1.0 + (real_T)i));
              glob = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &p_emlrtBCI,
                emlrtRootTLSGlobal);
              for (i0 = 0; i0 < 3; i0++) {
                PSLN->data[((((int32_T)OrdRef + PSLN->size[0] * (loop_ub - 1)) +
                             PSLN->size[0] * PSLN->size[1] * i) + PSLN->size[0] *
                            PSLN->size[1] * PSLN->size[2] * i0) - 1] =
                  track->data[(glob + track->size[0] * i0) - 1];
              }

              PSLN_dirty |= 1U;
              i0 = FSLN->size[0];
              i1 = FSLN->size[1];
              i2 = FSLN->size[2];
              i3 = 1 + i;
              emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &i_emlrtBCI,
                emlrtRootTLSGlobal);
              i2 = pass->size[0];
              i3 = (int32_T)OrdRef;
              i2 = (int32_T)pass->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1,
                i2, &ld_emlrtBCI, emlrtRootTLSGlobal) - 1];
              loop_ub = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &j_emlrtBCI,
                emlrtRootTLSGlobal);
              i1 = (int32_T)OrdRef;
              emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &k_emlrtBCI,
                emlrtRootTLSGlobal);
              i0 = trackface->size[0];
              i1 = (int32_T)(m - (1.0 + (real_T)i));
              glob = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &l_emlrtBCI,
                emlrtRootTLSGlobal);
              for (i0 = 0; i0 < 2; i0++) {
                FSLN->data[((((int32_T)OrdRef + FSLN->size[0] * (loop_ub - 1)) +
                             FSLN->size[0] * FSLN->size[1] * i) + FSLN->size[0] *
                            FSLN->size[1] * FSLN->size[2] * i0) - 1] =
                  trackface->data[(glob + trackface->size[0] * i0) - 1];
              }

              FSLN_dirty |= 1U;
              i++;
              emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
                emlrtRootTLSGlobal);
            }

            /*              pass(OrdRef) = pass(OrdRef) + 1; */
            count++;
          } else {
            i0 = pass->size[0];
            i1 = (int32_T)OrdRef;
            i2 = pass->size[0];
            i3 = (int32_T)OrdRef;
            pass->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &ad_emlrtBCI,
              emlrtRootTLSGlobal) - 1] = pass->
              data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &bd_emlrtBCI,
              emlrtRootTLSGlobal) - 1] + 1.0;

            /* test */
            i0 = NbrDSSlns.size[0];
            i1 = (int32_T)((uint32_T)OrdRef + 2U);
            i2 = pass->size[0];
            i3 = (int32_T)OrdRef;
            NbrDSSlns.data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
              &cd_emlrtBCI, emlrtRootTLSGlobal) - 1] = pass->
              data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &dd_emlrtBCI,
              emlrtRootTLSGlobal) - 1];
            NbrDSSlns_dirty |= 1U;
            i = 0;
            while (i <= (int32_T)(uint32_T)m - 2) {
              i0 = RP->size[0];
              i1 = RP->size[1];
              i2 = RP->size[2];
              i3 = 1 + i;
              emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &e_emlrtBCI,
                emlrtRootTLSGlobal);
              i2 = pass->size[0];
              i3 = (int32_T)OrdRef;
              i2 = (int32_T)pass->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1,
                i2, &ed_emlrtBCI, emlrtRootTLSGlobal) - 1];
              loop_ub = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &f_emlrtBCI,
                emlrtRootTLSGlobal);
              i1 = (int32_T)((uint32_T)OrdRef + 2U);
              pp = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &g_emlrtBCI,
                emlrtRootTLSGlobal);
              i0 = track->size[0];
              i1 = (int32_T)(m - (1.0 + (real_T)i));
              glob = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &h_emlrtBCI,
                emlrtRootTLSGlobal);
              for (i0 = 0; i0 < 3; i0++) {
                RP->data[(((pp + RP->size[0] * (loop_ub - 1)) + RP->size[0] *
                           RP->size[1] * i) + RP->size[0] * RP->size[1] *
                          RP->size[2] * i0) - 1] = track->data[(glob +
                  track->size[0] * i0) - 1];
              }

              RP_dirty |= 1U;
              i0 = RF->size[0];
              i1 = RF->size[1];
              i2 = RF->size[2];
              i3 = 1 + i;
              emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &emlrtBCI,
                emlrtRootTLSGlobal);
              i2 = pass->size[0];
              i3 = (int32_T)OrdRef;
              i2 = (int32_T)pass->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1,
                i2, &fd_emlrtBCI, emlrtRootTLSGlobal) - 1];
              loop_ub = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &b_emlrtBCI,
                emlrtRootTLSGlobal);
              i1 = (int32_T)((uint32_T)OrdRef + 2U);
              pp = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &c_emlrtBCI,
                emlrtRootTLSGlobal);
              i0 = trackface->size[0];
              i1 = (int32_T)(m - (1.0 + (real_T)i));
              glob = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &d_emlrtBCI,
                emlrtRootTLSGlobal);
              for (i0 = 0; i0 < 2; i0++) {
                RF->data[(((pp + RF->size[0] * (loop_ub - 1)) + RF->size[0] *
                           RF->size[1] * i) + RF->size[0] * RF->size[1] *
                          RF->size[2] * i0) - 1] = trackface->data[(glob +
                  trackface->size[0] * i0) - 1];
              }

              RF_dirty |= 1U;
              i++;
              emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
                emlrtRootTLSGlobal);
            }

            /*              pass(OrdRef) = pass(OrdRef) + 1; */
            count++;
          }
        }

        b_n++;

        /*  path calculation of current point end,  go to next point on the same level */
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
          emlrtRootTLSGlobal);
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    b = 1;

    /*  go back to part 1 */
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emxFree_real_T(&b_leveltemp);
  emxFree_int32_T(&r1);
  emxFree_int32_T(&r0);
  emxFree_real_T(&loopdomain);
  emxFree_real_T(&numberuse);
  emxFree_real_T(&trackface);
  emxFree_real_T(&track);
  emxFree_real_T(&leveltemp);
  emxFree_real_T(&pass);
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, OrdRef, mxDOUBLE_CLASS, (int32_T)
    OrdRef, &t_emlrtRTEI, emlrtRootTLSGlobal);
  i = 0;
  while (i <= (int32_T)OrdRef - 1) {
    if (Reflex == 0.0) {
      if (rvsds == 0.0) {
        i0 = NbrSlns.size[0];
        i1 = (int32_T)(1.0 + (real_T)i);
        NbrSlns.data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &sc_emlrtBCI,
          emlrtRootTLSGlobal) - 1] = 0.0;
        NbrSlns_dirty |= 1U;
      } else {
        i0 = NbrDSSlns.size[0];
        i1 = (int32_T)(1.0 + (real_T)i);
        NbrDSSlns.data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &rc_emlrtBCI,
          emlrtRootTLSGlobal) - 1] = 0.0;
        NbrDSSlns_dirty |= 1U;
      }
    }

    if ((count != 0.0) || (oldReflex == 1.0) || (Reflex == 1.0)) {
      Reflex = 1.0;
      Reflex_dirty |= 1U;
    } else if (rvsds == 0.0) {
      i0 = NbrSlns.size[0];
      i1 = (int32_T)(1.0 + (real_T)i);
      NbrSlns.data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &uc_emlrtBCI,
        emlrtRootTLSGlobal) - 1] = 0.0;
      NbrSlns_dirty |= 1U;
    } else {
      i0 = NbrDSSlns.size[0];
      i1 = (int32_T)(1.0 + (real_T)i);
      NbrDSSlns.data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &tc_emlrtBCI,
        emlrtRootTLSGlobal) - 1] = 0.0;
      NbrDSSlns_dirty |= 1U;
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (EffConstruct.c) */
