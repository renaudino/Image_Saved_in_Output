/*
 * Masking.c
 *
 * Code generation for function 'Masking'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Masking.h"
#include "mpower.h"
#include "Masking_mexutil.h"
#include "norm.h"
#include "AppFace2.h"
#include "sqrt.h"
#include "exp.h"
#include "cross.h"
#include "BlockCheck.h"
#include "Masking_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 191,   /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 205, /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 249, /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 263, /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 287, /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 294, /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 326, /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 327, /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 367, /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 373, /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 404, /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 193,   /* lineNo */
  9,                                   /* colNo */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 194, /* lineNo */
  9,                                   /* colNo */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 197, /* lineNo */
  9,                                   /* colNo */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 198, /* lineNo */
  9,                                   /* colNo */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 108, /* lineNo */
  17,                                  /* colNo */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 201, /* lineNo */
  9,                                   /* colNo */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 109, /* lineNo */
  17,                                  /* colNo */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 212, /* lineNo */
  4,                                   /* colNo */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  449,                                 /* lineNo */
  50,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  449,                                 /* lineNo */
  34,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  448,                                 /* lineNo */
  45,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  448,                                 /* lineNo */
  37,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  440,                                 /* lineNo */
  35,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  432,                                 /* lineNo */
  42,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  432,                                 /* lineNo */
  34,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  431,                                 /* lineNo */
  53,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  431,                                 /* lineNo */
  37,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  425,                                 /* lineNo */
  32,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  397,                                 /* lineNo */
  21,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  382,                                 /* lineNo */
  39,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  382,                                 /* lineNo */
  28,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  374,                                 /* lineNo */
  54,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  374,                                 /* lineNo */
  43,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  349,                                 /* lineNo */
  50,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  349,                                 /* lineNo */
  39,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  335,                                 /* lineNo */
  21,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  332,                                 /* lineNo */
  40,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  332,                                 /* lineNo */
  32,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  324,                                 /* lineNo */
  33,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  324,                                 /* lineNo */
  22,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  295,                                 /* lineNo */
  50,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  295,                                 /* lineNo */
  39,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  274,                                 /* lineNo */
  21,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  254,                                 /* lineNo */
  40,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  254,                                 /* lineNo */
  24,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  247,                                 /* lineNo */
  46,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  247,                                 /* lineNo */
  35,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { 1,  /* iFirst */
  1000,                                /* iLast */
  143,                                 /* lineNo */
  25,                                  /* colNo */
  "tpp",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { 1,  /* iFirst */
  1000,                                /* iLast */
  138,                                 /* lineNo */
  25,                                  /* colNo */
  "tpp",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  119,                                 /* lineNo */
  53,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  102,                                 /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  101,                                 /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  100,                                 /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  99,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  98,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  97,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  96,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  25,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  91,                                  /* lineNo */
  26,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  229,                                 /* lineNo */
  35,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  229,                                 /* lineNo */
  62,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  35,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  62,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  309,                                 /* lineNo */
  29,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  309,                                 /* lineNo */
  56,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  317,                                 /* lineNo */
  32,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  317,                                 /* lineNo */
  59,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  404,                                 /* lineNo */
  38,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  424,                                 /* lineNo */
  33,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  441,                                 /* lineNo */
  30,                                  /* colNo */
  "eta",                               /* aName */
  "Masking",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo o_emlrtRSI = { 108, /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 201, /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 212, /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 197, /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 193, /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 109, /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 198, /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 194, /* lineNo */
  "Masking",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking.m"/* pathName */
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

void Masking(MaskingStackData *SD, const emlrtStack *sp, const real_T P1_re[3],
             const real_T P2_re[3], real_T *mmask, struct0_T *b_m)
{
  int32_T i;
  real_T ehi[3];
  int8_T mpflag[20000];
  real_T eti[3];
  real_T ett[3];
  real_T eht[3];
  real_T eho[3];
  real_T eto[3];
  real_T ehr[3];
  real_T tpp[6000];
  real_T tff[4000];
  real_T si[3];
  real_T st[3];
  int32_T fe;
  creal_T teps;
  real_T mnbpen[10000];
  real_T sti2_re;
  real_T cti_re;
  real_T str2_re;
  real_T ctr_re;
  int32_T i1;
  real_T P1[3];
  real_T P2[3];
  real_T ppt[6];
  int32_T msk;
  real_T nb[4];
  real_T kn;
  real_T dP[3];
  int32_T cnt;
  real_T sdp[3];
  real_T b_i;
  int32_T k;
  int32_T l;
  int32_T j;
  real_T tpp_re[3];
  boolean_T exitg1;
  int8_T mflag[2];
  real_T inveta_re;
  real_T b_f1;
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 36 };

  real_T et[3];
  static const char_T u[36] = { 'E', 'r', 'r', 'o', 'r', ':', ' ', 'N', 'o', ' ',
    'i', 'n', 'p', 'u', 't', ' ', 'f', 'o', 'r', ' ', 'p', 'r', 'e', 'v', 'i',
    'o', 'u', 's', ' ', 'o', 'u', 't', 'p', 'u', 't', '!' };

  static const int32_T iv1[2] = { 1, 41 };

  static const char_T b_u[41] = { 'E', 'r', 'r', 'o', 'r', ':', ' ', 'N', 'o',
    ' ', 'p', 'r', 'e', 'v', 'i', 'o', 'u', 's', ' ', 'o', 'u', 't', 'p', 'u',
    't', ' ', 'f', 'o', 'r', ' ', 't', 'h', 'i', 's', ' ', 'i', 'n', 'p', 'u',
    't', '!' };

  real_T b_tff[2];
  real_T f2;
  static const int32_T iv2[2] = { 1, 33 };

  static const char_T c_u[33] = { 'E', 'r', 'r', 'o', 'r', ':', ' ', 'C', 'a',
    'n', 'n', 'o', 't', ' ', 'b', 'e', ' ', '1', 's', 't', ' ', 'p', 'e', 'n',
    'e', 't', 'r', 'a', 't', 'i', 'o', 'n', '!' };

  boolean_T guard1 = false;
  real_T c_tff[2];
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T guard5 = false;
  boolean_T guard6 = false;
  boolean_T guard7 = false;
  boolean_T guard8 = false;
  static const int32_T iv3[2] = { 1, 34 };

  static const char_T d_u[34] = { 'E', 'r', 'r', 'o', 'r', ':', ' ', 'C', 'a',
    'n', 'n', 'o', 't', ' ', 'b', 'e', ' ', 'l', 'a', 's', 't', ' ', 'p', 'e',
    'n', 'e', 't', 'r', 'a', 't', 'i', 'o', 'n', '!' };

  real_T dp;
  static const int8_T iv4[3] = { 0, 0, 1 };

  creal_T eoe;
  creal_T b_stt;
  static const int32_T iv5[2] = { 1, 60 };

  real_T br;
  static const char_T e_u[60] = { 'E', 'r', 'r', 'o', 'r', ':', ' ', 't', 'h',
    'e', ' ', 'd', 'e', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'n', 't', ' ', 'i',
    's', ' ', 'e', 'q', 'u', 'a', 'l', ' ', 't', 'o', ' ', 'z', 'e', 'r', 'o',
    ' ', 'i', 'n', ' ', 'b', 'l', 'o', 'k', 'i', 'n', 'g', ' ', 'f', 'u', 'n',
    'c', 't', 'i', 'o', 'n', '!' };

  real_T bi;
  real_T brm;
  real_T s;
  real_T re;
  real_T dv0[12];
  real_T ar;
  creal_T dc0;
  emlrtStack b_st;
  b_st.prev = sp;
  b_st.tls = sp->tls;

  /*  Checks if it is blocked between P1 and P2 */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History:  2011.9.28 */
  /*  Updated by: Xuhong Li <xuhong@ftw.at> */
  /*  History: 2013.08.01 */
  /*  Unify the output size of 'm', adding 'mmask' as the second output */
  /*  for code conversion */
  for (i = 0; i < 3; i++) {
    ehi[i] = 0.0;
    eti[i] = 0.0;
    ett[i] = 0.0;
    eht[i] = 0.0;
    eho[i] = 0.0;
    eto[i] = 0.0;
    ehr[i] = 0.0;
  }

  /* --memory space assigned before being used,important for code conversion--% */
  memset(&mpflag[0], 0, 20000U * sizeof(int8_T));
  memset(&SD->f0.mploss[0], 0, 10000U * sizeof(creal_T));
  memset(&SD->f0.mpd[0], 0, 10000U * sizeof(real_T));
  memset(&SD->f0.mepd[0], 0, 10000U * sizeof(real_T));
  memset(&SD->f0.msti[0], 0, 30000U * sizeof(real_T));
  memset(&SD->f0.mstt[0], 0, 30000U * sizeof(real_T));
  memset(&tpp[0], 0, 6000U * sizeof(real_T));
  memset(&tff[0], 0, 4000U * sizeof(real_T));
  memset(&SD->f0.dist[0], 0, 10000U * sizeof(real_T));
  for (i = 0; i < 3; i++) {
    si[i] = 0.0;
    st[i] = 0.0;
  }

  memset(&SD->f0.mshi[0], 0, 30000U * sizeof(real_T));
  memset(&SD->f0.msht[0], 0, 30000U * sizeof(real_T));
  memset(&SD->f0.mstr[0], 0, 30000U * sizeof(real_T));
  memset(&SD->f0.msto[0], 0, 30000U * sizeof(real_T));
  memset(&SD->f0.mshr[0], 0, 30000U * sizeof(real_T));
  memset(&SD->f0.msho[0], 0, 30000U * sizeof(real_T));
  fe = 0;
  teps.re = 0.0;
  teps.im = 0.0;
  memset(&mnbpen[0], 0, 10000U * sizeof(real_T));
  memset(&SD->f0.mTti[0], 0, 10000U * sizeof(creal_T));
  memset(&SD->f0.mThi[0], 0, 10000U * sizeof(creal_T));
  memset(&SD->f0.mTtt[0], 0, 10000U * sizeof(creal_T));
  memset(&SD->f0.mTht[0], 0, 10000U * sizeof(creal_T));
  sti2_re = 0.0;
  cti_re = 0.0;
  str2_re = 0.0;
  ctr_re = 0.0;

  /* -------------------------------------------------------------------------% */
  for (i = 0; i < 3; i++) {
    P1[i] = P1_re[i];
    P2[i] = P2_re[i];
  }

  for (i1 = 0; i1 < 6; i1++) {
    ppt[i1] = 0.0;
  }

  for (i1 = 0; i1 < 4; i1++) {
    nb[i1] = 0.0;
  }

  msk = 0;

  /*  no masking */
  for (i = 0; i < 3; i++) {
    dP[i] = P2[i] - P1[i];
  }

  kn = 1.0 / norm(dP);
  for (i = 0; i < 3; i++) {
    sdp[i] = kn * dP[i];
  }

  cnt = 0;

  /*  count the number of penertration per path */
  b_i = 1.0;
  while (b_i <= Nblock) {
    /*  continue until the end of the blocks or until it is masked */
    l = -1;

    /*  count the number of intersection point */
    j = 0;
    while ((j + 1 <= 6) && (l + 1 < 2)) {
      /*  for each block continue until the end of the faces or until it is masked or both the input and output point are found */
      i1 = vnfaces->size[0];
      i = (int32_T)b_i;
      if (!((i >= 1) && (i <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i1, &qb_emlrtBCI, sp);
      }

      /* c = dot(dP,n); */
      kn = 0.0;
      for (k = 0; k < 3; k++) {
        inveta_re = vnfaces->data[((i + vnfaces->size[0] * j) + vnfaces->size[0]
          * vnfaces->size[1] * k) - 1];
        kn += dP[k] * inveta_re;
      }

      if (muDoubleScalarAbs(kn) > 0.001) {
        /*  if the path is not parallel to the face look for the intersections */
        i1 = wedges->size[0];
        i = (int32_T)b_i;
        if (!((i >= 1) && (i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i1, &pb_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        i = (int32_T)b_i;
        if (!((i >= 1) && (i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i1, &ob_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        i = (int32_T)b_i;
        if (!((i >= 1) && (i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i1, &nb_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        i = (int32_T)b_i;
        if (!((i >= 1) && (i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i1, &mb_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        i = (int32_T)b_i;
        if (!((i >= 1) && (i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i1, &lb_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        i = (int32_T)b_i;
        if (!((i >= 1) && (i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i1, &kb_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        i = (int32_T)b_i;
        if (!((i >= 1) && (i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i1, &jb_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        i = (int32_T)b_i;
        if (!((i >= 1) && (i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i1, &ib_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        i = (int32_T)b_i;
        if (!((i >= 1) && (i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i1, &hb_emlrtBCI, sp);
        }

        kn = ((P1[0] - P2[0]) * ((wedges->data[(((int32_T)b_i + wedges->size[0] *
                  j) + wedges->size[0] * wedges->size[1] * wedges->size[2]) - 1]
                - wedges->data[((((int32_T)b_i + wedges->size[0] * j) +
                  (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
                 wedges->size[1] * wedges->size[2]) - 1]) * (wedges->data
                [((((int32_T)b_i + wedges->size[0] * j) + wedges->size[0] *
                   wedges->size[1]) + (wedges->size[0] * wedges->size[1] *
                  wedges->size[2] << 1)) - 1] - wedges->data[((((int32_T)b_i +
                   wedges->size[0] * j) + (wedges->size[0] * wedges->size[1] <<
                   1)) + (wedges->size[0] * wedges->size[1] * wedges->size[2] <<
                          1)) - 1]) - (wedges->data[((((int32_T)b_i +
                   wedges->size[0] * j) + wedges->size[0] * wedges->size[1]) +
                 wedges->size[0] * wedges->size[1] * wedges->size[2]) - 1] -
                wedges->data[((((int32_T)b_i + wedges->size[0] * j) +
                  (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
                              wedges->size[1] * wedges->size[2]) - 1]) *
               (wedges->data[(((int32_T)b_i + wedges->size[0] * j) +
                              (wedges->size[0] * wedges->size[1] * wedges->size
                  [2] << 1)) - 1] - wedges->data[((((int32_T)b_i + wedges->size
                   [0] * j) + (wedges->size[0] * wedges->size[1] << 1)) +
                 (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1)) - 1]))
              - (P1[1] - P2[1]) * ((wedges->data[((int32_T)b_i + wedges->size[0]
                 * j) - 1] - wedges->data[(((int32_T)b_i + wedges->size[0] * j)
                 + (wedges->size[0] * wedges->size[1] << 1)) - 1]) *
               (wedges->data[((((int32_T)b_i + wedges->size[0] * j) +
                  wedges->size[0] * wedges->size[1]) + (wedges->size[0] *
                  wedges->size[1] * wedges->size[2] << 1)) - 1] - wedges->data
                [((((int32_T)b_i + wedges->size[0] * j) + (wedges->size[0] *
                   wedges->size[1] << 1)) + (wedges->size[0] * wedges->size[1] *
                  wedges->size[2] << 1)) - 1]) - (wedges->data[(((int32_T)b_i +
                  wedges->size[0] * j) + wedges->size[0] * wedges->size[1]) - 1]
                - wedges->data[(((int32_T)b_i + wedges->size[0] * j) +
                 (wedges->size[0] * wedges->size[1] << 1)) - 1]) * (wedges->
                data[(((int32_T)b_i + wedges->size[0] * j) + (wedges->size[0] *
                  wedges->size[1] * wedges->size[2] << 1)) - 1] - wedges->data
                [((((int32_T)b_i + wedges->size[0] * j) + (wedges->size[0] *
                   wedges->size[1] << 1)) + (wedges->size[0] * wedges->size[1] *
                  wedges->size[2] << 1)) - 1]))) + (P1[2] - P2[2]) *
          ((wedges->data[((int32_T)b_i + wedges->size[0] * j) - 1] -
            wedges->data[(((int32_T)b_i + wedges->size[0] * j) + (wedges->size[0]
              * wedges->size[1] << 1)) - 1]) * (wedges->data[((((int32_T)b_i +
               wedges->size[0] * j) + wedges->size[0] * wedges->size[1]) +
             wedges->size[0] * wedges->size[1] * wedges->size[2]) - 1] -
            wedges->data[((((int32_T)b_i + wedges->size[0] * j) + (wedges->size
               [0] * wedges->size[1] << 1)) + wedges->size[0] * wedges->size[1] *
                          wedges->size[2]) - 1]) - (wedges->data[(((int32_T)b_i
              + wedges->size[0] * j) + wedges->size[0] * wedges->size[1]) - 1] -
            wedges->data[(((int32_T)b_i + wedges->size[0] * j) + (wedges->size[0]
              * wedges->size[1] << 1)) - 1]) * (wedges->data[(((int32_T)b_i +
              wedges->size[0] * j) + wedges->size[0] * wedges->size[1] *
             wedges->size[2]) - 1] - wedges->data[((((int32_T)b_i + wedges->
               size[0] * j) + (wedges->size[0] * wedges->size[1] << 1)) +
             wedges->size[0] * wedges->size[1] * wedges->size[2]) - 1]));
        if (kn == 0.0) {
          emlrt_synchGlobalsToML(sp);
          y = NULL;
          m0 = emlrtCreateCharArray(2, iv5);
          emlrtInitCharArrayR2013a(sp, 60, m0, &e_u[0]);
          emlrtAssign(&y, m0);
          b_st.site = &o_emlrtRSI;
          disp(&b_st, y, &e_emlrtMCI);
          emlrt_synchGlobalsFromML(sp);
          emlrt_synchGlobalsToML(sp);
          b_st.site = &t_emlrtRSI;
          b_exit(&b_st, &g_emlrtMCI);
          emlrt_synchGlobalsFromML(sp);
        } else {
          kn = (((P1[0] - wedges->data[(((int32_T)b_i + wedges->size[0] * j) +
                   (wedges->size[0] * wedges->size[1] << 1)) - 1]) *
                 ((wedges->data[(((int32_T)b_i + wedges->size[0] * j) +
                    wedges->size[0] * wedges->size[1] * wedges->size[2]) - 1] -
                   wedges->data[((((int32_T)b_i + wedges->size[0] * j) +
                     (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0]
                    * wedges->size[1] * wedges->size[2]) - 1]) * (wedges->data
                   [((((int32_T)b_i + wedges->size[0] * j) + wedges->size[0] *
                      wedges->size[1]) + (wedges->size[0] * wedges->size[1] *
                     wedges->size[2] << 1)) - 1] - wedges->data[((((int32_T)b_i
                      + wedges->size[0] * j) + (wedges->size[0] * wedges->size[1]
                      << 1)) + (wedges->size[0] * wedges->size[1] * wedges->
                                size[2] << 1)) - 1]) - (wedges->data[((((int32_T)
                      b_i + wedges->size[0] * j) + wedges->size[0] *
                     wedges->size[1]) + wedges->size[0] * wedges->size[1] *
                    wedges->size[2]) - 1] - wedges->data[((((int32_T)b_i +
                      wedges->size[0] * j) + (wedges->size[0] * wedges->size[1] <<
                      1)) + wedges->size[0] * wedges->size[1] * wedges->size[2])
                   - 1]) * (wedges->data[(((int32_T)b_i + wedges->size[0] * j) +
                    (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1))
                            - 1] - wedges->data[((((int32_T)b_i + wedges->size[0]
                      * j) + (wedges->size[0] * wedges->size[1] << 1)) +
                    (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1))
                            - 1])) + (P1[1] - wedges->data[((((int32_T)b_i +
                     wedges->size[0] * j) + (wedges->size[0] * wedges->size[1] <<
                     1)) + wedges->size[0] * wedges->size[1] * wedges->size[2])
                  - 1]) * ((wedges->data[(((int32_T)b_i + wedges->size[0] * j) +
                    wedges->size[0] * wedges->size[1]) - 1] - wedges->data
                            [(((int32_T)b_i + wedges->size[0] * j) +
                              (wedges->size[0] * wedges->size[1] << 1)) - 1]) *
                           (wedges->data[(((int32_T)b_i + wedges->size[0] * j) +
                    (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1))
                            - 1] - wedges->data[((((int32_T)b_i + wedges->size[0]
                      * j) + (wedges->size[0] * wedges->size[1] << 1)) +
                    (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1))
                            - 1]) - (wedges->data[((int32_T)b_i + wedges->size[0]
                    * j) - 1] - wedges->data[(((int32_T)b_i + wedges->size[0] *
                     j) + (wedges->size[0] * wedges->size[1] << 1)) - 1]) *
                           (wedges->data[((((int32_T)b_i + wedges->size[0] * j)
                     + wedges->size[0] * wedges->size[1]) + (wedges->size[0] *
                     wedges->size[1] * wedges->size[2] << 1)) - 1] -
                            wedges->data[((((int32_T)b_i + wedges->size[0] * j)
                     + (wedges->size[0] * wedges->size[1] << 1)) + (wedges->
                     size[0] * wedges->size[1] * wedges->size[2] << 1)) - 1])))
                + (P1[2] - wedges->data[((((int32_T)b_i + wedges->size[0] * j) +
                   (wedges->size[0] * wedges->size[1] << 1)) + (wedges->size[0] *
                   wedges->size[1] * wedges->size[2] << 1)) - 1]) *
                ((wedges->data[((int32_T)b_i + wedges->size[0] * j) - 1] -
                  wedges->data[(((int32_T)b_i + wedges->size[0] * j) +
                                (wedges->size[0] * wedges->size[1] << 1)) - 1]) *
                 (wedges->data[((((int32_T)b_i + wedges->size[0] * j) +
                    wedges->size[0] * wedges->size[1]) + wedges->size[0] *
                                wedges->size[1] * wedges->size[2]) - 1] -
                  wedges->data[((((int32_T)b_i + wedges->size[0] * j) +
                    (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
                                wedges->size[1] * wedges->size[2]) - 1]) -
                 (wedges->data[(((int32_T)b_i + wedges->size[0] * j) +
                                wedges->size[0] * wedges->size[1]) - 1] -
                  wedges->data[(((int32_T)b_i + wedges->size[0] * j) +
                                (wedges->size[0] * wedges->size[1] << 1)) - 1]) *
                 (wedges->data[(((int32_T)b_i + wedges->size[0] * j) +
                                wedges->size[0] * wedges->size[1] * wedges->
                                size[2]) - 1] - wedges->data[((((int32_T)b_i +
                     wedges->size[0] * j) + (wedges->size[0] * wedges->size[1] <<
                     1)) + wedges->size[0] * wedges->size[1] * wedges->size[2])
                  - 1]))) / kn;
          if ((kn > -1.0E-6) && (kn < 1.000001)) {
            /*  if t>0 && t<1 intersection point is in between P1 and P2 */
            for (i = 0; i < 3; i++) {
              tpp_re[i] = P1[i] + kn * (P2[i] - P1[i]);
            }

            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
            /*                      af = AppFace(ip,face); */
            i1 = wedges->size[0];
            i = (int32_T)b_i;
            if (!((i >= 1) && (i <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, i1, &gb_emlrtBCI, sp);
            }

            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
            for (i1 = 0; i1 < 4; i1++) {
              for (i = 0; i < 3; i++) {
                dv0[i + 3 * i1] = wedges->data[((((int32_T)b_i + wedges->size[0]
                  * j) + wedges->size[0] * wedges->size[1] * i1) + wedges->size
                  [0] * wedges->size[1] * wedges->size[2] * i) - 1];
              }
            }

            if (AppFace2(tpp_re, dv0) == 1.0) {
              /*  intersection point is found */
              l++;
              for (i1 = 0; i1 < 3; i1++) {
                ppt[i1 + 3 * l] = tpp_re[i1];
              }

              /*  coordinates of the intersection point */
              nb[l << 1] = b_i;
              nb[1 + (l << 1)] = j + 1;
            }
          }
        }
      }

      if (l + 1 == 2) {
        /*  if the two intersection points are found and there is no masking */
        for (i1 = 0; i1 < 3; i1++) {
          tpp_re[i1] = P1[i1] - ppt[i1];
        }

        SD->f0.dist[0] = norm(tpp_re);
        for (i1 = 0; i1 < 3; i1++) {
          tpp_re[i1] = P1[i1] - ppt[3 + i1];
        }

        SD->f0.dist[1] = norm(tpp_re);
        if (muDoubleScalarAbs(SD->f0.dist[0] - SD->f0.dist[1]) > 1.0E-8) {
          cnt++;
          if (SD->f0.dist[1] < SD->f0.dist[0]) {
            /*  order the intersection points from the closer to the virtual transmitter */
            if (!((cnt >= 1) && (cnt <= 1000))) {
              emlrtDynamicBoundsCheckR2012b(cnt, 1, 1000, &fb_emlrtBCI, sp);
            }

            for (i1 = 0; i1 < 3; i1++) {
              tpp[(cnt + 2000 * i1) - 1] = ppt[3 + i1];
              tpp[(cnt + 2000 * i1) + 999] = ppt[i1];
            }

            for (i1 = 0; i1 < 2; i1++) {
              tff[(cnt + 2000 * i1) - 1] = nb[2 + i1];
              tff[(cnt + 2000 * i1) + 999] = nb[i1];
            }
          } else {
            if (!((cnt >= 1) && (cnt <= 1000))) {
              emlrtDynamicBoundsCheckR2012b(cnt, 1, 1000, &eb_emlrtBCI, sp);
            }

            for (i1 = 0; i1 < 3; i1++) {
              tpp[(cnt + 2000 * i1) - 1] = ppt[i1];
              tpp[(cnt + 2000 * i1) + 999] = ppt[3 + i1];
            }

            for (i1 = 0; i1 < 2; i1++) {
              tff[(cnt + 2000 * i1) - 1] = nb[i1];
              tff[(cnt + 2000 * i1) + 999] = nb[2 + i1];
            }
          }
        }
      }

      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    b_i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  k = 0;
  while (k <= cnt - 1) {
    for (i1 = 0; i1 < 3; i1++) {
      tpp_re[i1] = P1[i1] - tpp[k + 2000 * i1];
    }

    SD->f0.dist[k] = norm(tpp_re);
    k++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /*  if more than one penetration is found during the path they are ordered from beginning from the closest to P1 - insertion sort */
  if (cnt > 1) {
    k = 1;
    while (k - 1 <= cnt - 2) {
      for (i1 = 0; i1 < 3; i1++) {
        ppt[i1 << 1] = tpp[k + 2000 * i1];
        ppt[1 + (i1 << 1)] = tpp[1000 + (k + 2000 * i1)];
      }

      for (i1 = 0; i1 < 2; i1++) {
        nb[i1 << 1] = tff[k + 2000 * i1];
        nb[1 + (i1 << 1)] = tff[1000 + (k + 2000 * i1)];
      }

      kn = SD->f0.dist[k];
      l = k;
      while ((l + 1 > 1) && (SD->f0.dist[l - 1] > kn)) {
        for (i1 = 0; i1 < 3; i1++) {
          tpp_re[i1] = tpp[(l + 2000 * i1) - 1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          tpp[l + 2000 * i1] = tpp_re[i1];
          et[i1] = tpp[(l + 2000 * i1) + 999];
        }

        for (i1 = 0; i1 < 3; i1++) {
          tpp[1000 + (l + 2000 * i1)] = et[i1];
        }

        for (i1 = 0; i1 < 2; i1++) {
          b_tff[i1] = tff[(l + 2000 * i1) - 1];
        }

        for (i1 = 0; i1 < 2; i1++) {
          tff[l + 2000 * i1] = b_tff[i1];
          c_tff[i1] = tff[(l + 2000 * i1) + 999];
        }

        for (i1 = 0; i1 < 2; i1++) {
          tff[1000 + (l + 2000 * i1)] = c_tff[i1];
        }

        SD->f0.dist[l] = SD->f0.dist[l - 1];
        l--;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      for (i1 = 0; i1 < 3; i1++) {
        tpp[l + 2000 * i1] = ppt[i1 << 1];
        tpp[1000 + (l + 2000 * i1)] = ppt[1 + (i1 << 1)];
      }

      for (i1 = 0; i1 < 2; i1++) {
        tff[l + 2000 * i1] = nb[i1 << 1];
        tff[1000 + (l + 2000 * i1)] = nb[1 + (i1 << 1)];
      }

      SD->f0.dist[l] = kn;
      k++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }
  }

  l = 0;

  /*  computing the parameters of penetration */
  exitg1 = false;
  while ((!exitg1) && ((l + 1 <= cnt) && (msk != 1))) {
    for (i = 0; i < 2; i++) {
      mflag[i] = 0;
    }

    /*  the value of mflag(1,1) could be 1,2,3; the value of mflag(2,1) could be 4,5,6 */
    for (i1 = 0; i1 < 3; i1++) {
      tpp_re[i1] = tpp[l + 2000 * i1];
    }

    b_st.site = &emlrtRSI;
    b_f1 = BlockCheck(&b_st, tff[l], tpp_re);

    /*  it checks if the 1st penetration point belongs to some other block (-1 if not) */
    if ((l + 1 > 1) && (b_f1 == -1.0) && (fe == 1)) {
      emlrt_synchGlobalsToML(sp);
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv0);
      emlrtInitCharArrayR2013a(sp, 36, m0, &u[0]);
      emlrtAssign(&y, m0);
      b_st.site = &s_emlrtRSI;
      disp(&b_st, y, &emlrtMCI);
      emlrt_synchGlobalsFromML(sp);
      emlrt_synchGlobalsToML(sp);
      b_st.site = &v_emlrtRSI;
      b_exit(&b_st, &b_emlrtMCI);
      emlrt_synchGlobalsFromML(sp);
    }

    if ((l + 1 > 1) && (fe == 0) && (b_f1 != -1.0)) {
      emlrt_synchGlobalsToML(sp);
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(sp, 41, m0, &b_u[0]);
      emlrtAssign(&y, m0);
      b_st.site = &r_emlrtRSI;
      disp(&b_st, y, &c_emlrtMCI);
      emlrt_synchGlobalsFromML(sp);
      emlrt_synchGlobalsToML(sp);
      b_st.site = &u_emlrtRSI;
      b_exit(&b_st, &d_emlrtMCI);
      emlrt_synchGlobalsFromML(sp);
    }

    if ((b_f1 != -1.0) && (l + 1 == 1) && (SD->f0.dist[0] > 0.005)) {
      emlrt_synchGlobalsToML(sp);
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(sp, 33, m0, &c_u[0]);
      emlrtAssign(&y, m0);
      b_st.site = &p_emlrtRSI;
      disp(&b_st, y, &f_emlrtMCI);
      emlrt_synchGlobalsFromML(sp);
      msk = 1;
      exitg1 = true;
    } else {
      for (i1 = 0; i1 < 3; i1++) {
        tpp_re[i1] = tpp[1000 + (l + 2000 * i1)];
      }

      b_st.site = &b_emlrtRSI;
      f2 = BlockCheck(&b_st, tff[1000 + l], tpp_re);

      /*  it checks if the 2nd penetration point belongs to some other block (-1 if not) */
      guard1 = false;
      guard2 = false;
      guard3 = false;
      guard4 = false;
      guard5 = false;
      guard6 = false;
      guard7 = false;
      guard8 = false;
      if ((f2 != -1.0) && (l + 1 == cnt)) {
        for (i = 0; i < 3; i++) {
          tpp_re[i] = P2[i] - tpp[1000 + (l + 2000 * i)];
        }

        if (norm(tpp_re) > 0.005) {
          emlrt_synchGlobalsToML(sp);
          y = NULL;
          m0 = emlrtCreateCharArray(2, iv3);
          emlrtInitCharArrayR2013a(sp, 34, m0, &d_u[0]);
          emlrtAssign(&y, m0);
          b_st.site = &q_emlrtRSI;
          disp(&b_st, y, &h_emlrtMCI);
          emlrt_synchGlobalsFromML(sp);
          msk = 1;
          exitg1 = true;
        } else {
          guard8 = true;
        }
      } else {
        guard8 = true;
      }

      if (guard8) {
        if (f2 != -1.0) {
          /*  fe==1 means that the output penetration point belongs to another block -> to be used in next loop execution */
          fe = 1;
        } else {
          fe = 0;
        }

        for (i = 0; i < 3; i++) {
          tpp_re[i] = P1[i] - tpp[1000 + (l + 2000 * i)];
        }

        dp = muDoubleScalarAbs(SD->f0.dist[l] - norm(tpp_re));
        if ((b_f1 != -1.0) && (l + 1 == 1)) {
          if (b_f1 != 0.0) {
            i1 = eta->size[0];
            i = (int32_T)tff[0];
            if (!((i >= 1) && (i <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, i1, &rb_emlrtBCI, sp);
            }

            i1 = eta->size[0];
            k = (int32_T)b_f1;
            if (!((k >= 1) && (k <= i1))) {
              emlrtDynamicBoundsCheckR2012b(k, 1, i1, &sb_emlrtBCI, sp);
            }

            if (eta->data[i - 1].re == eta->data[k - 1].re) {
              /* || ((f1==0) && ((real(eta(tff(l,1,1)))) == (real(Geta))))  */
              msk = 1;
              exitg1 = true;
            } else {
              guard7 = true;
            }
          } else {
            guard7 = true;
          }
        } else {
          guard6 = true;
        }
      }

      if (guard7) {
        /*  mflag(1) to distinguish different possibilities when f1 ~= -1 */
        mflag[0] = 1;

        /*  1st penetration point is P1 */
        guard6 = true;
      }

      if (guard6) {
        if ((b_f1 != -1.0) && (l + 1 > 1) && (fe == 1)) {
          if (b_f1 != 0.0) {
            i1 = eta->size[0];
            i = (int32_T)tff[l];
            if (!((i >= 1) && (i <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, i1, &tb_emlrtBCI, sp);
            }

            i1 = eta->size[0];
            k = (int32_T)b_f1;
            if (!((k >= 1) && (k <= i1))) {
              emlrtDynamicBoundsCheckR2012b(k, 1, i1, &ub_emlrtBCI, sp);
            }

            if (eta->data[i - 1].re == eta->data[k - 1].re) {
              /* || ((f1==0) && ((real(eta(tff(l,1,1)))) == (real(Geta)))) % should update here */
              mflag[0] = 2;

              /*  input penetration point is an output penetration point of a previous penetration in the same path - same epsilon */
            } else {
              mflag[0] = 3;

              /*  as above but different epsilon */
            }
          } else {
            mflag[0] = 3;

            /*  as above but different epsilon */
          }
        }

        if ((mflag[0] == 0) || (mflag[0] == 3)) {
          if (mflag[0] == 0) {
            for (i = 0; i < 3; i++) {
              si[i] = sdp[i];
            }
          }

          i1 = (int32_T)tff[2000 + l];
          if (!((i1 >= 1) && (i1 <= 6))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &cb_emlrtBCI, sp);
          }

          i1 = vnfaces->size[0];
          k = (int32_T)tff[l];
          if (!((k >= 1) && (k <= i1))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i1, &db_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            tpp_re[i1] = vnfaces->data[((k + vnfaces->size[0] * ((int32_T)tff
              [2000 + l] - 1)) + vnfaces->size[0] * vnfaces->size[1] * i1) - 1];
          }

          cross(si, tpp_re, et);
          b_st.site = &c_emlrtRSI;
          sti2_re = mpower(norm(et));
          if (mflag[0] == 3) {
            /*              if f1 == 0 */
            /*                  teps = sqrt(eta(tff(l,1,1))/Geta); */
            /*              else  */
            i1 = eta->size[0];
            i = (int32_T)tff[l];
            if (!((i >= 1) && (i <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, i1, &bb_emlrtBCI, sp);
            }

            i1 = eta->size[0];
            i = (int32_T)b_f1;
            if (!((i >= 1) && (i <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, i1, &ab_emlrtBCI, sp);
            }

            ar = eta->data[(int32_T)tff[l] - 1].re;
            kn = eta->data[(int32_T)tff[l] - 1].im;
            br = eta->data[(int32_T)b_f1 - 1].re;
            bi = eta->data[(int32_T)b_f1 - 1].im;
            if (bi == 0.0) {
              if (kn == 0.0) {
                teps.re = ar / br;
                teps.im = 0.0;
              } else if (ar == 0.0) {
                teps.re = 0.0;
                teps.im = kn / br;
              } else {
                teps.re = ar / br;
                teps.im = kn / br;
              }
            } else if (br == 0.0) {
              if (ar == 0.0) {
                teps.re = kn / bi;
                teps.im = 0.0;
              } else if (kn == 0.0) {
                teps.re = 0.0;
                teps.im = -(ar / bi);
              } else {
                teps.re = kn / bi;
                teps.im = -(ar / bi);
              }
            } else {
              brm = muDoubleScalarAbs(br);
              b_i = muDoubleScalarAbs(bi);
              if (brm > b_i) {
                s = bi / br;
                b_i = br + s * bi;
                teps.re = (ar + s * kn) / b_i;
                teps.im = (kn - s * ar) / b_i;
              } else if (b_i == brm) {
                if (br > 0.0) {
                  s = 0.5;
                } else {
                  s = -0.5;
                }

                if (bi > 0.0) {
                  b_i = 0.5;
                } else {
                  b_i = -0.5;
                }

                teps.re = (ar * s + kn * b_i) / brm;
                teps.im = (kn * s - ar * b_i) / brm;
              } else {
                s = br / bi;
                b_i = bi + s * br;
                teps.re = (s * ar + kn) / b_i;
                teps.im = (s * kn - ar) / b_i;
              }
            }

            c_sqrt(&teps);

            /*              end */
            if (norm(et) > teps.re) {
              /*  total internal reflection */
              msk = 1;
              exitg1 = true;
            } else {
              guard5 = true;
            }
          } else {
            guard5 = true;
          }
        } else {
          guard4 = true;
        }
      }

      if (guard5) {
        cti_re = 1.0 - sti2_re;
        b_st.site = &d_emlrtRSI;
        d_sqrt(&b_st, &cti_re);
        if (norm(et) <= 1.0E-6) {
          for (i = 0; i < 3; i++) {
            eti[i] = iv4[i];
          }
        } else {
          kn = 1.0 / norm(et);
          for (i = 0; i < 3; i++) {
            eti[i] = kn * et[i];
          }

          /*  'eti' is the unitary vector of perpendicular vector (incident field)--- 1st interface */
        }

        cross(eti, si, ehi);

        /*  'ehi' is the unitary vector of parallel vector (incident field) --- 1st interface */
        if (mflag[0] == 0) {
          i1 = eta->size[0];
          i = (int32_T)tff[l];
          if (!((i >= 1) && (i <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i1, &y_emlrtBCI, sp);
          }

          br = eta->data[(int32_T)tff[l] - 1].re;
          bi = eta->data[(int32_T)tff[l] - 1].im;
          if (bi == 0.0) {
            eoe.re = 1.0 / br;
            eoe.im = 0.0;
          } else if (br == 0.0) {
            eoe.re = 0.0;
            eoe.im = -(1.0 / bi);
          } else {
            brm = muDoubleScalarAbs(br);
            b_i = muDoubleScalarAbs(bi);
            if (brm > b_i) {
              s = bi / br;
              b_i = br + s * bi;
              eoe.re = (1.0 + s * 0.0) / b_i;
              eoe.im = (0.0 - s) / b_i;
            } else if (b_i == brm) {
              if (br > 0.0) {
                s = 0.5;
              } else {
                s = -0.5;
              }

              if (bi > 0.0) {
                b_i = 0.5;
              } else {
                b_i = -0.5;
              }

              eoe.re = (s + 0.0 * b_i) / brm;
              eoe.im = (0.0 * s - b_i) / brm;
            } else {
              s = br / bi;
              b_i = bi + s * br;
              eoe.re = s / b_i;
              eoe.im = (s * 0.0 - 1.0) / b_i;
            }
          }

          c_sqrt(&eoe);
        } else {
          eoe = teps;
        }

        b_stt.re = norm(et) * eoe.re;
        if (b_stt.re > 1.0) {
          msk = 1;
          exitg1 = true;
        } else {
          b_st.site = &e_emlrtRSI;
          kn = mpower(b_stt.re);
          b_st.site = &e_emlrtRSI;
          b_sqrt(&b_st, 1.0 - kn);
          if (norm(et) <= 1.0E-6) {
            for (i = 0; i < 3; i++) {
              st[i] = si[i];
              ett[i] = eti[i];
            }

            /*  'ett' is the unitary vector of perpendicular vector (transmission field) --- 1st interface */
          } else {
            kn = sti2_re;
            b_st.site = &f_emlrtRSI;
            d_sqrt(&b_st, &kn);
            b_st.site = &f_emlrtRSI;
            kn = 1.0 - mpower(eoe.re * kn);
            b_st.site = &f_emlrtRSI;
            d_sqrt(&b_st, &kn);
            kn += eoe.re * cti_re;
            i1 = (int32_T)tff[2000 + l];
            if (!((i1 >= 1) && (i1 <= 6))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &w_emlrtBCI, sp);
            }

            i1 = vnfaces->size[0];
            k = (int32_T)tff[l];
            if (!((k >= 1) && (k <= i1))) {
              emlrtDynamicBoundsCheckR2012b(k, 1, i1, &x_emlrtBCI, sp);
            }

            for (i = 0; i < 3; i++) {
              inveta_re = vnfaces->data[((k + vnfaces->size[0] * ((int32_T)tff
                [2000 + l] - 1)) + vnfaces->size[0] * vnfaces->size[1] * i) - 1];
              st[i] = eoe.re * si[i] - kn * inveta_re;
              ett[i] = eti[i];
            }
          }

          kn = 1.0 / norm(st);
          for (i1 = 0; i1 < 3; i1++) {
            st[i1] *= kn;
          }

          cross(ett, st, eht);

          /*  'eht' is the unitary vector of parallel vector (transmission field) --- 1st interface */
          guard4 = true;
        }
      }

      if (guard4) {
        if (mflag[0] == 2) {
          for (i = 0; i < 3; i++) {
            st[i] = si[i];
          }
        }

        if (mflag[0] == 1) {
          for (i = 0; i < 3; i++) {
            st[i] = sdp[i];
          }
        }

        if ((f2 != -1.0) && (l + 1 == cnt)) {
          if (f2 != 0.0) {
            i1 = eta->size[0];
            i = (int32_T)tff[1000 + l];
            if (!((i >= 1) && (i <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, i1, &vb_emlrtBCI, sp);
            }

            i1 = eta->size[0];
            k = (int32_T)f2;
            if (!((k >= 1) && (k <= i1))) {
              emlrtDynamicBoundsCheckR2012b(k, 1, i1, &wb_emlrtBCI, sp);
            }

            if (eta->data[i - 1].re == eta->data[k - 1].re) {
              /* || ((f2==0) && ((real(eta(tff(l,2,1)))) == real(Geta))) */
              msk = 1;
              exitg1 = true;
            } else {
              guard3 = true;
            }
          } else {
            guard3 = true;
          }
        } else {
          guard2 = true;
        }
      }

      if (guard3) {
        /*  mflag(2) to distinguish different possibilities when f2 ~= -1 */
        mflag[1] = 4;

        /*  2nd penetration point is P2 */
        guard2 = true;
      }

      if (guard2) {
        if ((f2 != -1.0) && (l + 1 > 1) && (l + 1 != cnt)) {
          if (f2 != 0.0) {
            i1 = eta->size[0];
            i = (int32_T)tff[1000 + l];
            if (!((i >= 1) && (i <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, i1, &xb_emlrtBCI, sp);
            }

            i1 = eta->size[0];
            k = (int32_T)f2;
            if (!((k >= 1) && (k <= i1))) {
              emlrtDynamicBoundsCheckR2012b(k, 1, i1, &yb_emlrtBCI, sp);
            }

            if (eta->data[i - 1].re == eta->data[k - 1].re) {
              /* || ((f2==0) && ((real(eta(tff(l,2,1)))) == real(Geta))) */
              mflag[1] = 5;

              /*  output penetration point is an input penetration point of a following penetration in the same path -  same epsilon */
            } else {
              mflag[1] = 6;

              /*  as above but different epsilon */
            }
          } else {
            mflag[1] = 6;

            /*  as above but different epsilon */
          }
        }

        if ((mflag[1] == 0) || (mflag[1] == 6)) {
          i1 = (int32_T)tff[3000 + l];
          if (!((i1 >= 1) && (i1 <= 6))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &u_emlrtBCI, sp);
          }

          i1 = vnfaces->size[0];
          k = (int32_T)tff[1000 + l];
          if (!((k >= 1) && (k <= i1))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i1, &v_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            tpp_re[i1] = -vnfaces->data[((k + vnfaces->size[0] * ((int32_T)tff
              [3000 + l] - 1)) + vnfaces->size[0] * vnfaces->size[1] * i1) - 1];
          }

          cross(st, tpp_re, et);
          b_st.site = &g_emlrtRSI;
          str2_re = mpower(norm(et));
          ctr_re = 1.0 - str2_re;
          b_st.site = &h_emlrtRSI;
          d_sqrt(&b_st, &ctr_re);
          if (mflag[1] == 6) {
            /*              if f2 == 0 */
            /*                  eoe = sqrt(Geta/eta(tff(l,2,1))); */
            /*              else */
            i1 = eta->size[0];
            i = (int32_T)f2;
            if (!((i >= 1) && (i <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, i1, &t_emlrtBCI, sp);
            }

            i1 = eta->size[0];
            i = (int32_T)tff[1000 + l];
            if (!((i >= 1) && (i <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, i1, &s_emlrtBCI, sp);
            }

            ar = eta->data[(int32_T)f2 - 1].re;
            kn = eta->data[(int32_T)f2 - 1].im;
            br = eta->data[(int32_T)tff[1000 + l] - 1].re;
            bi = eta->data[(int32_T)tff[1000 + l] - 1].im;
            if (bi == 0.0) {
              if (kn == 0.0) {
                eoe.re = ar / br;
                eoe.im = 0.0;
              } else if (ar == 0.0) {
                eoe.re = 0.0;
                eoe.im = kn / br;
              } else {
                eoe.re = ar / br;
                eoe.im = kn / br;
              }
            } else if (br == 0.0) {
              if (ar == 0.0) {
                eoe.re = kn / bi;
                eoe.im = 0.0;
              } else if (kn == 0.0) {
                eoe.re = 0.0;
                eoe.im = -(ar / bi);
              } else {
                eoe.re = kn / bi;
                eoe.im = -(ar / bi);
              }
            } else {
              brm = muDoubleScalarAbs(br);
              b_i = muDoubleScalarAbs(bi);
              if (brm > b_i) {
                s = bi / br;
                b_i = br + s * bi;
                eoe.re = (ar + s * kn) / b_i;
                eoe.im = (kn - s * ar) / b_i;
              } else if (b_i == brm) {
                if (br > 0.0) {
                  s = 0.5;
                } else {
                  s = -0.5;
                }

                if (bi > 0.0) {
                  b_i = 0.5;
                } else {
                  b_i = -0.5;
                }

                eoe.re = (ar * s + kn * b_i) / brm;
                eoe.im = (kn * s - ar * b_i) / brm;
              } else {
                s = br / bi;
                b_i = bi + s * br;
                eoe.re = (s * ar + kn) / b_i;
                eoe.im = (s * kn - ar) / b_i;
              }
            }

            c_sqrt(&eoe);

            /*              end */
          } else {
            i1 = eta->size[0];
            i = (int32_T)tff[1000 + l];
            if (!((i >= 1) && (i <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, i1, &r_emlrtBCI, sp);
            }

            br = eta->data[(int32_T)tff[1000 + l] - 1].re;
            bi = eta->data[(int32_T)tff[1000 + l] - 1].im;
            if (bi == 0.0) {
              eoe.re = 1.0 / br;
              eoe.im = 0.0;
            } else if (br == 0.0) {
              eoe.re = 0.0;
              eoe.im = -(1.0 / bi);
            } else {
              brm = muDoubleScalarAbs(br);
              b_i = muDoubleScalarAbs(bi);
              if (brm > b_i) {
                s = bi / br;
                b_i = br + s * bi;
                eoe.re = (1.0 + s * 0.0) / b_i;
                eoe.im = (0.0 - s) / b_i;
              } else if (b_i == brm) {
                if (br > 0.0) {
                  s = 0.5;
                } else {
                  s = -0.5;
                }

                if (bi > 0.0) {
                  b_i = 0.5;
                } else {
                  b_i = -0.5;
                }

                eoe.re = (s + 0.0 * b_i) / brm;
                eoe.im = (0.0 * s - b_i) / brm;
              } else {
                s = br / bi;
                b_i = bi + s * br;
                eoe.re = s / b_i;
                eoe.im = (s * 0.0 - 1.0) / b_i;
              }
            }

            c_sqrt(&eoe);
          }

          if (norm(et) > eoe.re) {
            /*  total internal reflection */
            msk = 1;
            exitg1 = true;
          } else {
            if (norm(et) <= 1.0E-6) {
              for (i = 0; i < 3; i++) {
                dP[i] = iv4[i];
              }

              /*  'etr' is the unitary vector of perpendicular vector (incident field) --- 2nd interface */
            } else {
              kn = 1.0 / norm(et);
              for (i = 0; i < 3; i++) {
                dP[i] = kn * et[i];
              }

              cross(dP, st, ehr);

              /*  'ehr' is the unitary vector of parallel vector (incident field) --- 2nd interface */
            }

            if (mflag[1] == 0) {
              for (i = 0; i < 3; i++) {
                si[i] = sdp[i];
              }

              i1 = (int32_T)tff[3000 + l];
              if (!((i1 >= 1) && (i1 <= 6))) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &p_emlrtBCI, sp);
              }

              i1 = vnfaces->size[0];
              k = (int32_T)tff[1000 + l];
              if (!((k >= 1) && (k <= i1))) {
                emlrtDynamicBoundsCheckR2012b(k, 1, i1, &q_emlrtBCI, sp);
              }

              for (i1 = 0; i1 < 3; i1++) {
                tpp_re[i1] = vnfaces->data[((k + vnfaces->size[0] * ((int32_T)
                  tff[3000 + l] - 1)) + vnfaces->size[0] * vnfaces->size[1] * i1)
                  - 1];
              }

              cross(sdp, tpp_re, et);
              if (norm(et) <= 1.0E-6) {
                for (i = 0; i < 3; i++) {
                  eto[i] = iv4[i];
                }
              } else {
                kn = 1.0 / norm(et);
                for (i = 0; i < 3; i++) {
                  eto[i] = kn * et[i];
                }

                /*  'eto' is the unitary vector of perpendicular vector (transmission field) --- 2nd interface */
              }

              cross(eto, sdp, eho);

              /*  'eho' is the unitary vector of parallel vector (transmission field) --- 2nd interface */
            }

            if (mflag[1] == 6) {
              b_stt.re = norm(et) * eoe.re;
              if (b_stt.re > 1.0) {
                msk = 1;
                exitg1 = true;
              } else {
                b_st.site = &i_emlrtRSI;
                b_i = 1.0 - mpower(b_stt.re);
                b_st.site = &i_emlrtRSI;
                d_sqrt(&b_st, &b_i);
                if (norm(et) <= 1.0E-6) {
                  for (i = 0; i < 3; i++) {
                    si[i] = st[i];
                    eto[i] = dP[i];
                  }
                } else {
                  b_st.site = &j_emlrtRSI;
                  kn = 1.0 - mpower(eoe.re * b_stt.re);
                  b_st.site = &j_emlrtRSI;
                  d_sqrt(&b_st, &kn);
                  kn += eoe.re * b_i;
                  i1 = (int32_T)tff[2000 + l];
                  if (!((i1 >= 1) && (i1 <= 6))) {
                    emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &n_emlrtBCI, sp);
                  }

                  i1 = vnfaces->size[0];
                  k = (int32_T)tff[l];
                  if (!((k >= 1) && (k <= i1))) {
                    emlrtDynamicBoundsCheckR2012b(k, 1, i1, &o_emlrtBCI, sp);
                  }

                  for (i = 0; i < 3; i++) {
                    inveta_re = vnfaces->data[((k + vnfaces->size[0] * ((int32_T)
                      tff[2000 + l] - 1)) + vnfaces->size[0] * vnfaces->size[1] *
                      i) - 1];
                    st[i] = eoe.re * si[i] - kn * inveta_re;
                    eto[i] = dP[i];
                  }
                }

                kn = 1.0 / norm(si);
                for (i1 = 0; i1 < 3; i1++) {
                  si[i1] *= kn;
                }

                cross(eto, si, eho);
                guard1 = true;
              }
            } else {
              guard1 = true;
            }
          }
        } else {
          i1 = (int32_T)tff[3000 + l];
          if (!((i1 >= 1) && (i1 <= 6))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &l_emlrtBCI, sp);
          }

          i1 = vnfaces->size[0];
          k = (int32_T)tff[1000 + l];
          if (!((k >= 1) && (k <= i1))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i1, &m_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            tpp_re[i1] = -vnfaces->data[((k + vnfaces->size[0] * ((int32_T)tff
              [3000 + l] - 1)) + vnfaces->size[0] * vnfaces->size[1] * i1) - 1];
          }

          cross(st, tpp_re, et);
          if (norm(et) <= 1.0E-6) {
            for (i = 0; i < 3; i++) {
              dP[i] = iv4[i];
            }
          } else {
            kn = 1.0 / norm(et);
            for (i = 0; i < 3; i++) {
              dP[i] = kn * et[i];
            }
          }

          cross(dP, si, ehr);
          guard1 = true;
        }
      }

      if (guard1) {
        if (mflag[1] == 5) {
          for (i = 0; i < 3; i++) {
            si[i] = st[i];
          }
        }

        if (msk != 1) {
          i1 = eta->size[0];
          i = (int32_T)tff[l];
          if (!((i >= 1) && (i <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i1, &k_emlrtBCI, sp);
          }

          mnbpen[l] = tff[l];

          /*  block number */
          for (i1 = 0; i1 < 2; i1++) {
            mpflag[l + 10000 * i1] = mflag[i1];
          }

          /*  vector mflag  */
          b_stt = eta->data[(int32_T)tff[l] - 1];
          c_sqrt(&b_stt);
          inveta_re = K * dp;
          re = 1.0 - b_stt.re;
          b_i = 0.0 - b_stt.im;
          SD->f0.mploss[l].re = 0.0 * re - inveta_re * b_i;
          SD->f0.mploss[l].im = 0.0 * b_i + inveta_re * re;
          b_exp(&SD->f0.mploss[l]);

          /*  penetration loss */
          SD->f0.mpd[l] = dp;

          /*  lenght of the penetration path */
          i1 = eta->size[0];
          i = (int32_T)tff[l];
          if (!((i >= 1) && (i <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i1, &ac_emlrtBCI, sp);
          }

          kn = eta->data[i - 1].re;
          b_st.site = &k_emlrtRSI;
          d_sqrt(&b_st, &kn);
          SD->f0.mepd[l] = dp * kn;

          /*  effective lenght of the penetration path     */
          /*  perpendicular and parallel polarization vectors at each interface */
          for (i1 = 0; i1 < 3; i1++) {
            SD->f0.msti[l + 10000 * i1] = eti[i1];
            SD->f0.mstt[l + 10000 * i1] = ett[i1];
            SD->f0.mshi[l + 10000 * i1] = ehi[i1];
            SD->f0.msht[l + 10000 * i1] = eht[i1];
            SD->f0.mstr[l + 10000 * i1] = dP[i1];
            SD->f0.msto[l + 10000 * i1] = eto[i1];
            SD->f0.mshr[l + 10000 * i1] = ehr[i1];
            SD->f0.msho[l + 10000 * i1] = eho[i1];
          }

          if (mflag[0] == 1) {
            SD->f0.mTti[l].re = 0.0;
            SD->f0.mTti[l].im = 0.0;
            SD->f0.mThi[l].re = 0.0;
            SD->f0.mThi[l].im = 0.0;
          }

          if (mflag[1] == 4) {
            SD->f0.mTtt[l].re = 0.0;
            SD->f0.mTtt[l].im = 0.0;
            SD->f0.mTht[l].re = 0.0;
            SD->f0.mTht[l].im = 0.0;
          }

          if ((mflag[0] == 0) || (mflag[0] == 3)) {
            if (mflag[0] == 0) {
              i1 = eta->size[0];
              i = (int32_T)tff[l];
              if (!((i >= 1) && (i <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i, 1, i1, &bc_emlrtBCI, sp);
              }

              eoe.re = eta->data[i - 1].re - sti2_re;
              i1 = eta->size[0];
              i = (int32_T)tff[l];
              if (!((i >= 1) && (i <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i, 1, i1, &bc_emlrtBCI, sp);
              }

              eoe.im = eta->data[i - 1].im;
              c_sqrt(&eoe);
              i1 = eta->size[0];
              i = (int32_T)tff[l];
              if (!((i >= 1) && (i <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i, 1, i1, &j_emlrtBCI, sp);
              }

              br = eta->data[(int32_T)tff[l] - 1].re;
              bi = eta->data[(int32_T)tff[l] - 1].im;
              if (bi == 0.0) {
                inveta_re = 1.0 / br;
                kn = 0.0;
              } else if (br == 0.0) {
                inveta_re = 0.0;
                kn = -(1.0 / bi);
              } else {
                brm = muDoubleScalarAbs(br);
                b_i = muDoubleScalarAbs(bi);
                if (brm > b_i) {
                  s = bi / br;
                  b_i = br + s * bi;
                  inveta_re = (1.0 + s * 0.0) / b_i;
                  kn = (0.0 - s) / b_i;
                } else if (b_i == brm) {
                  if (br > 0.0) {
                    s = 0.5;
                  } else {
                    s = -0.5;
                  }

                  if (bi > 0.0) {
                    b_i = 0.5;
                  } else {
                    b_i = -0.5;
                  }

                  inveta_re = (s + 0.0 * b_i) / brm;
                  kn = (0.0 * s - b_i) / brm;
                } else {
                  s = br / bi;
                  b_i = bi + s * br;
                  inveta_re = s / b_i;
                  kn = (s * 0.0 - 1.0) / b_i;
                }
              }
            } else {
              /*                  if (f1 == 0) */
              /*                      sqes = sqrt(eta(tff(l,1,1))/Geta-sti2); */
              /*                      inveta = Geta/eta(tff(l,1,1)); */
              /*                  else */
              i1 = eta->size[0];
              i = (int32_T)tff[l];
              if (!((i >= 1) && (i <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i, 1, i1, &i_emlrtBCI, sp);
              }

              i1 = eta->size[0];
              i = (int32_T)b_f1;
              if (!((i >= 1) && (i <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i, 1, i1, &h_emlrtBCI, sp);
              }

              ar = eta->data[(int32_T)tff[l] - 1].re;
              kn = eta->data[(int32_T)tff[l] - 1].im;
              br = eta->data[(int32_T)b_f1 - 1].re;
              bi = eta->data[(int32_T)b_f1 - 1].im;
              if (bi == 0.0) {
                if (kn == 0.0) {
                  re = ar / br;
                  inveta_re = 0.0;
                } else if (ar == 0.0) {
                  re = 0.0;
                  inveta_re = kn / br;
                } else {
                  re = ar / br;
                  inveta_re = kn / br;
                }
              } else if (br == 0.0) {
                if (ar == 0.0) {
                  re = kn / bi;
                  inveta_re = 0.0;
                } else if (kn == 0.0) {
                  re = 0.0;
                  inveta_re = -(ar / bi);
                } else {
                  re = kn / bi;
                  inveta_re = -(ar / bi);
                }
              } else {
                brm = muDoubleScalarAbs(br);
                b_i = muDoubleScalarAbs(bi);
                if (brm > b_i) {
                  s = bi / br;
                  b_i = br + s * bi;
                  re = (ar + s * kn) / b_i;
                  inveta_re = (kn - s * ar) / b_i;
                } else if (b_i == brm) {
                  if (br > 0.0) {
                    s = 0.5;
                  } else {
                    s = -0.5;
                  }

                  if (bi > 0.0) {
                    b_i = 0.5;
                  } else {
                    b_i = -0.5;
                  }

                  re = (ar * s + kn * b_i) / brm;
                  inveta_re = (kn * s - ar * b_i) / brm;
                } else {
                  s = br / bi;
                  b_i = bi + s * br;
                  re = (s * ar + kn) / b_i;
                  inveta_re = (s * kn - ar) / b_i;
                }
              }

              eoe.re = re - sti2_re;
              eoe.im = inveta_re;
              c_sqrt(&eoe);
              i1 = eta->size[0];
              i = (int32_T)b_f1;
              if (!((i >= 1) && (i <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i, 1, i1, &g_emlrtBCI, sp);
              }

              i1 = eta->size[0];
              i = (int32_T)tff[l];
              if (!((i >= 1) && (i <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i, 1, i1, &f_emlrtBCI, sp);
              }

              ar = eta->data[(int32_T)b_f1 - 1].re;
              kn = eta->data[(int32_T)b_f1 - 1].im;
              br = eta->data[(int32_T)tff[l] - 1].re;
              bi = eta->data[(int32_T)tff[l] - 1].im;
              if (bi == 0.0) {
                if (kn == 0.0) {
                  inveta_re = ar / br;
                  kn = 0.0;
                } else if (ar == 0.0) {
                  inveta_re = 0.0;
                  kn /= br;
                } else {
                  inveta_re = ar / br;
                  kn /= br;
                }
              } else if (br == 0.0) {
                if (ar == 0.0) {
                  inveta_re = kn / bi;
                  kn = 0.0;
                } else if (kn == 0.0) {
                  inveta_re = 0.0;
                  kn = -(ar / bi);
                } else {
                  inveta_re = kn / bi;
                  kn = -(ar / bi);
                }
              } else {
                brm = muDoubleScalarAbs(br);
                b_i = muDoubleScalarAbs(bi);
                if (brm > b_i) {
                  s = bi / br;
                  b_i = br + s * bi;
                  inveta_re = (ar + s * kn) / b_i;
                  kn = (kn - s * ar) / b_i;
                } else if (b_i == brm) {
                  if (br > 0.0) {
                    s = 0.5;
                  } else {
                    s = -0.5;
                  }

                  if (bi > 0.0) {
                    b_i = 0.5;
                  } else {
                    b_i = -0.5;
                  }

                  inveta_re = (ar * s + kn * b_i) / brm;
                  kn = (kn * s - ar * b_i) / brm;
                } else {
                  s = br / bi;
                  b_i = bi + s * br;
                  inveta_re = (s * ar + kn) / b_i;
                  kn = (s * kn - ar) / b_i;
                }
              }

              /*                  end  */
            }

            ar = 2.0 * cti_re;
            br = cti_re + eoe.re;
            bi = eoe.im;
            if (bi == 0.0) {
              SD->f0.mTti[l].re = ar / br;
              SD->f0.mTti[l].im = 0.0;
            } else if (br == 0.0) {
              if (ar == 0.0) {
                SD->f0.mTti[l].re = 0.0 / bi;
                SD->f0.mTti[l].im = 0.0;
              } else {
                SD->f0.mTti[l].re = 0.0;
                SD->f0.mTti[l].im = -(ar / bi);
              }
            } else {
              brm = muDoubleScalarAbs(br);
              b_i = muDoubleScalarAbs(bi);
              if (brm > b_i) {
                s = bi / br;
                b_i = br + s * bi;
                SD->f0.mTti[l].re = (ar + s * 0.0) / b_i;
                SD->f0.mTti[l].im = (0.0 - s * ar) / b_i;
              } else if (b_i == brm) {
                if (br > 0.0) {
                  s = 0.5;
                } else {
                  s = -0.5;
                }

                if (bi > 0.0) {
                  b_i = 0.5;
                } else {
                  b_i = -0.5;
                }

                SD->f0.mTti[l].re = (ar * s + 0.0 * b_i) / brm;
                SD->f0.mTti[l].im = (0.0 * s - ar * b_i) / brm;
              } else {
                s = br / bi;
                b_i = bi + s * br;
                SD->f0.mTti[l].re = s * ar / b_i;
                SD->f0.mTti[l].im = (s * 0.0 - ar) / b_i;
              }
            }

            /*  parallel and perpendicular transmission coefficient at 1st interface */
            b_stt.re = inveta_re;
            b_stt.im = kn;
            c_sqrt(&b_stt);
            dc0.re = inveta_re;
            dc0.im = kn;
            c_sqrt(&dc0);
            eoe.re = 1.0 - (inveta_re * sti2_re - kn * 0.0);
            eoe.im = 0.0 - (inveta_re * 0.0 + kn * sti2_re);
            c_sqrt(&eoe);
            re = 2.0 * b_stt.re;
            inveta_re = 2.0 * b_stt.im;
            kn = re * cti_re - inveta_re * 0.0;
            inveta_re = re * 0.0 + inveta_re * cti_re;
            br = cti_re + (dc0.re * eoe.re - dc0.im * eoe.im);
            bi = dc0.re * eoe.im + dc0.im * eoe.re;
            if (bi == 0.0) {
              if (inveta_re == 0.0) {
                SD->f0.mThi[l].re = kn / br;
                SD->f0.mThi[l].im = 0.0;
              } else if (kn == 0.0) {
                SD->f0.mThi[l].re = 0.0;
                SD->f0.mThi[l].im = inveta_re / br;
              } else {
                SD->f0.mThi[l].re = kn / br;
                SD->f0.mThi[l].im = inveta_re / br;
              }
            } else if (br == 0.0) {
              if (kn == 0.0) {
                SD->f0.mThi[l].re = inveta_re / bi;
                SD->f0.mThi[l].im = 0.0;
              } else if (inveta_re == 0.0) {
                SD->f0.mThi[l].re = 0.0;
                SD->f0.mThi[l].im = -(kn / bi);
              } else {
                SD->f0.mThi[l].re = inveta_re / bi;
                SD->f0.mThi[l].im = -(kn / bi);
              }
            } else {
              brm = muDoubleScalarAbs(br);
              b_i = muDoubleScalarAbs(bi);
              if (brm > b_i) {
                s = bi / br;
                b_i = br + s * bi;
                SD->f0.mThi[l].re = (kn + s * inveta_re) / b_i;
                SD->f0.mThi[l].im = (inveta_re - s * kn) / b_i;
              } else if (b_i == brm) {
                if (br > 0.0) {
                  s = 0.5;
                } else {
                  s = -0.5;
                }

                if (bi > 0.0) {
                  b_i = 0.5;
                } else {
                  b_i = -0.5;
                }

                SD->f0.mThi[l].re = (kn * s + inveta_re * b_i) / brm;
                SD->f0.mThi[l].im = (inveta_re * s - kn * b_i) / brm;
              } else {
                s = br / bi;
                b_i = bi + s * br;
                SD->f0.mThi[l].re = (s * kn + inveta_re) / b_i;
                SD->f0.mThi[l].im = (s * inveta_re - kn) / b_i;
              }
            }
          }

          if ((mflag[1] == 0) || (mflag[1] == 6)) {
            if (mflag[1] == 0) {
              i1 = eta->size[0];
              i = (int32_T)tff[l];
              if (!((i >= 1) && (i <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i, 1, i1, &e_emlrtBCI, sp);
              }

              br = eta->data[(int32_T)tff[l] - 1].re;
              bi = eta->data[(int32_T)tff[l] - 1].im;
              if (bi == 0.0) {
                re = 1.0 / br;
                inveta_re = 0.0;
              } else if (br == 0.0) {
                re = 0.0;
                inveta_re = -(1.0 / bi);
              } else {
                brm = muDoubleScalarAbs(br);
                b_i = muDoubleScalarAbs(bi);
                if (brm > b_i) {
                  s = bi / br;
                  b_i = br + s * bi;
                  re = (1.0 + s * 0.0) / b_i;
                  inveta_re = (0.0 - s) / b_i;
                } else if (b_i == brm) {
                  if (br > 0.0) {
                    s = 0.5;
                  } else {
                    s = -0.5;
                  }

                  if (bi > 0.0) {
                    b_i = 0.5;
                  } else {
                    b_i = -0.5;
                  }

                  re = (s + 0.0 * b_i) / brm;
                  inveta_re = (0.0 * s - b_i) / brm;
                } else {
                  s = br / bi;
                  b_i = bi + s * br;
                  re = s / b_i;
                  inveta_re = (s * 0.0 - 1.0) / b_i;
                }
              }

              eoe.re = re - str2_re;
              eoe.im = inveta_re;
              c_sqrt(&eoe);
              i1 = eta->size[0];
              i = (int32_T)tff[l];
              if (!((i >= 1) && (i <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i, 1, i1, &cc_emlrtBCI, sp);
              }

              inveta_re = eta->data[i - 1].re;
              i1 = eta->size[0];
              i = (int32_T)tff[l];
              if (!((i >= 1) && (i <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i, 1, i1, &cc_emlrtBCI, sp);
              }

              kn = eta->data[i - 1].im;
            } else {
              /*                  if (f2 == 0) */
              /*                      sqes = sqrt(Geta/eta(tff(l,2,1))-str2); */
              /*                      inveta = eta(tff(l,2,1))/Geta; */
              /*                  else */
              i1 = eta->size[0];
              i = (int32_T)f2;
              if (!((i >= 1) && (i <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i, 1, i1, &d_emlrtBCI, sp);
              }

              i1 = eta->size[0];
              i = (int32_T)tff[1000 + l];
              if (!((i >= 1) && (i <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i, 1, i1, &c_emlrtBCI, sp);
              }

              ar = eta->data[(int32_T)f2 - 1].re;
              kn = eta->data[(int32_T)f2 - 1].im;
              br = eta->data[(int32_T)tff[1000 + l] - 1].re;
              bi = eta->data[(int32_T)tff[1000 + l] - 1].im;
              if (bi == 0.0) {
                if (kn == 0.0) {
                  re = ar / br;
                  inveta_re = 0.0;
                } else if (ar == 0.0) {
                  re = 0.0;
                  inveta_re = kn / br;
                } else {
                  re = ar / br;
                  inveta_re = kn / br;
                }
              } else if (br == 0.0) {
                if (ar == 0.0) {
                  re = kn / bi;
                  inveta_re = 0.0;
                } else if (kn == 0.0) {
                  re = 0.0;
                  inveta_re = -(ar / bi);
                } else {
                  re = kn / bi;
                  inveta_re = -(ar / bi);
                }
              } else {
                brm = muDoubleScalarAbs(br);
                b_i = muDoubleScalarAbs(bi);
                if (brm > b_i) {
                  s = bi / br;
                  b_i = br + s * bi;
                  re = (ar + s * kn) / b_i;
                  inveta_re = (kn - s * ar) / b_i;
                } else if (b_i == brm) {
                  if (br > 0.0) {
                    s = 0.5;
                  } else {
                    s = -0.5;
                  }

                  if (bi > 0.0) {
                    b_i = 0.5;
                  } else {
                    b_i = -0.5;
                  }

                  re = (ar * s + kn * b_i) / brm;
                  inveta_re = (kn * s - ar * b_i) / brm;
                } else {
                  s = br / bi;
                  b_i = bi + s * br;
                  re = (s * ar + kn) / b_i;
                  inveta_re = (s * kn - ar) / b_i;
                }
              }

              eoe.re = re - str2_re;
              eoe.im = inveta_re;
              c_sqrt(&eoe);
              i1 = eta->size[0];
              i = (int32_T)tff[1000 + l];
              if (!((i >= 1) && (i <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i, 1, i1, &b_emlrtBCI, sp);
              }

              i1 = eta->size[0];
              i = (int32_T)f2;
              if (!((i >= 1) && (i <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i, 1, i1, &emlrtBCI, sp);
              }

              ar = eta->data[(int32_T)tff[1000 + l] - 1].re;
              kn = eta->data[(int32_T)tff[1000 + l] - 1].im;
              br = eta->data[(int32_T)f2 - 1].re;
              bi = eta->data[(int32_T)f2 - 1].im;
              if (bi == 0.0) {
                if (kn == 0.0) {
                  inveta_re = ar / br;
                  kn = 0.0;
                } else if (ar == 0.0) {
                  inveta_re = 0.0;
                  kn /= br;
                } else {
                  inveta_re = ar / br;
                  kn /= br;
                }
              } else if (br == 0.0) {
                if (ar == 0.0) {
                  inveta_re = kn / bi;
                  kn = 0.0;
                } else if (kn == 0.0) {
                  inveta_re = 0.0;
                  kn = -(ar / bi);
                } else {
                  inveta_re = kn / bi;
                  kn = -(ar / bi);
                }
              } else {
                brm = muDoubleScalarAbs(br);
                b_i = muDoubleScalarAbs(bi);
                if (brm > b_i) {
                  s = bi / br;
                  b_i = br + s * bi;
                  inveta_re = (ar + s * kn) / b_i;
                  kn = (kn - s * ar) / b_i;
                } else if (b_i == brm) {
                  if (br > 0.0) {
                    s = 0.5;
                  } else {
                    s = -0.5;
                  }

                  if (bi > 0.0) {
                    b_i = 0.5;
                  } else {
                    b_i = -0.5;
                  }

                  inveta_re = (ar * s + kn * b_i) / brm;
                  kn = (kn * s - ar * b_i) / brm;
                } else {
                  s = br / bi;
                  b_i = bi + s * br;
                  inveta_re = (s * ar + kn) / b_i;
                  kn = (s * kn - ar) / b_i;
                }
              }

              /*                  end */
            }

            ar = 2.0 * ctr_re;
            br = ctr_re + eoe.re;
            bi = eoe.im;
            if (bi == 0.0) {
              SD->f0.mTtt[l].re = ar / br;
              SD->f0.mTtt[l].im = 0.0;
            } else if (br == 0.0) {
              if (ar == 0.0) {
                SD->f0.mTtt[l].re = 0.0 / bi;
                SD->f0.mTtt[l].im = 0.0;
              } else {
                SD->f0.mTtt[l].re = 0.0;
                SD->f0.mTtt[l].im = -(ar / bi);
              }
            } else {
              brm = muDoubleScalarAbs(br);
              b_i = muDoubleScalarAbs(bi);
              if (brm > b_i) {
                s = bi / br;
                b_i = br + s * bi;
                SD->f0.mTtt[l].re = (ar + s * 0.0) / b_i;
                SD->f0.mTtt[l].im = (0.0 - s * ar) / b_i;
              } else if (b_i == brm) {
                if (br > 0.0) {
                  s = 0.5;
                } else {
                  s = -0.5;
                }

                if (bi > 0.0) {
                  b_i = 0.5;
                } else {
                  b_i = -0.5;
                }

                SD->f0.mTtt[l].re = (ar * s + 0.0 * b_i) / brm;
                SD->f0.mTtt[l].im = (0.0 * s - ar * b_i) / brm;
              } else {
                s = br / bi;
                b_i = bi + s * br;
                SD->f0.mTtt[l].re = s * ar / b_i;
                SD->f0.mTtt[l].im = (s * 0.0 - ar) / b_i;
              }
            }

            /*  parallel and perpendicular transmission coefficient at 2nd interface */
            b_stt.re = inveta_re;
            b_stt.im = kn;
            c_sqrt(&b_stt);
            dc0.re = inveta_re;
            dc0.im = kn;
            c_sqrt(&dc0);
            eoe.re = 1.0 - (inveta_re * str2_re - kn * 0.0);
            eoe.im = 0.0 - (inveta_re * 0.0 + kn * str2_re);
            c_sqrt(&eoe);
            re = 2.0 * b_stt.re;
            inveta_re = 2.0 * b_stt.im;
            kn = re * ctr_re - inveta_re * 0.0;
            inveta_re = re * 0.0 + inveta_re * ctr_re;
            br = ctr_re + (dc0.re * eoe.re - dc0.im * eoe.im);
            bi = dc0.re * eoe.im + dc0.im * eoe.re;
            if (bi == 0.0) {
              if (inveta_re == 0.0) {
                SD->f0.mTht[l].re = kn / br;
                SD->f0.mTht[l].im = 0.0;
              } else if (kn == 0.0) {
                SD->f0.mTht[l].re = 0.0;
                SD->f0.mTht[l].im = inveta_re / br;
              } else {
                SD->f0.mTht[l].re = kn / br;
                SD->f0.mTht[l].im = inveta_re / br;
              }
            } else if (br == 0.0) {
              if (kn == 0.0) {
                SD->f0.mTht[l].re = inveta_re / bi;
                SD->f0.mTht[l].im = 0.0;
              } else if (inveta_re == 0.0) {
                SD->f0.mTht[l].re = 0.0;
                SD->f0.mTht[l].im = -(kn / bi);
              } else {
                SD->f0.mTht[l].re = inveta_re / bi;
                SD->f0.mTht[l].im = -(kn / bi);
              }
            } else {
              brm = muDoubleScalarAbs(br);
              b_i = muDoubleScalarAbs(bi);
              if (brm > b_i) {
                s = bi / br;
                b_i = br + s * bi;
                SD->f0.mTht[l].re = (kn + s * inveta_re) / b_i;
                SD->f0.mTht[l].im = (inveta_re - s * kn) / b_i;
              } else if (b_i == brm) {
                if (br > 0.0) {
                  s = 0.5;
                } else {
                  s = -0.5;
                }

                if (bi > 0.0) {
                  b_i = 0.5;
                } else {
                  b_i = -0.5;
                }

                SD->f0.mTht[l].re = (kn * s + inveta_re * b_i) / brm;
                SD->f0.mTht[l].im = (inveta_re * s - kn * b_i) / brm;
              } else {
                s = br / bi;
                b_i = bi + s * br;
                SD->f0.mTht[l].re = (s * kn + inveta_re) / b_i;
                SD->f0.mTht[l].im = (s * inveta_re - kn) / b_i;
              }
            }
          }

          msk = 2;
        }

        l++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }
    }
  }

  *mmask = msk;

  /*  1 means masking, 2 means penetration and 0 means nothing */
  /*  number of penetration per path */
  if (msk == 2) {
    memcpy(&b_m->shi[0], &SD->f0.mshi[0], 30000U * sizeof(real_T));
    memcpy(&b_m->sti[0], &SD->f0.msti[0], 30000U * sizeof(real_T));
    memcpy(&b_m->stt[0], &SD->f0.mstt[0], 30000U * sizeof(real_T));
    memcpy(&b_m->sht[0], &SD->f0.msht[0], 30000U * sizeof(real_T));
    memcpy(&b_m->sho[0], &SD->f0.msho[0], 30000U * sizeof(real_T));
    memcpy(&b_m->sto[0], &SD->f0.msto[0], 30000U * sizeof(real_T));
    memcpy(&b_m->str[0], &SD->f0.mstr[0], 30000U * sizeof(real_T));
    memcpy(&b_m->shr[0], &SD->f0.mshr[0], 30000U * sizeof(real_T));
    memcpy(&b_m->Tti[0], &SD->f0.mTti[0], 10000U * sizeof(creal_T));
    memcpy(&b_m->Thi[0], &SD->f0.mThi[0], 10000U * sizeof(creal_T));
    memcpy(&b_m->Ttt[0], &SD->f0.mTtt[0], 10000U * sizeof(creal_T));
    memcpy(&b_m->Tht[0], &SD->f0.mTht[0], 10000U * sizeof(creal_T));
    memcpy(&b_m->ploss[0], &SD->f0.mploss[0], 10000U * sizeof(creal_T));
    memcpy(&b_m->pd[0], &SD->f0.mpd[0], 10000U * sizeof(real_T));
    memcpy(&b_m->epd[0], &SD->f0.mepd[0], 10000U * sizeof(real_T));
    memcpy(&b_m->nbpen[0], &mnbpen[0], 10000U * sizeof(real_T));
    for (i1 = 0; i1 < 20000; i1++) {
      b_m->pflag[i1] = mpflag[i1];
    }

    b_m->mask = 2.0;
    b_m->npb = cnt;
  } else {
    memcpy(&b_m->shi[0], &SD->f0.mshi[0], 30000U * sizeof(real_T));
    memcpy(&b_m->sti[0], &SD->f0.msti[0], 30000U * sizeof(real_T));
    memcpy(&b_m->stt[0], &SD->f0.mstt[0], 30000U * sizeof(real_T));
    memcpy(&b_m->sht[0], &SD->f0.msht[0], 30000U * sizeof(real_T));
    memcpy(&b_m->sho[0], &SD->f0.msho[0], 30000U * sizeof(real_T));
    memcpy(&b_m->sto[0], &SD->f0.msto[0], 30000U * sizeof(real_T));
    memcpy(&b_m->str[0], &SD->f0.mstr[0], 30000U * sizeof(real_T));
    memcpy(&b_m->shr[0], &SD->f0.mshr[0], 30000U * sizeof(real_T));
    memcpy(&b_m->Tti[0], &SD->f0.mTti[0], 10000U * sizeof(creal_T));
    memcpy(&b_m->Thi[0], &SD->f0.mThi[0], 10000U * sizeof(creal_T));
    memcpy(&b_m->Ttt[0], &SD->f0.mTtt[0], 10000U * sizeof(creal_T));
    memcpy(&b_m->Tht[0], &SD->f0.mTht[0], 10000U * sizeof(creal_T));
    memcpy(&b_m->ploss[0], &SD->f0.mploss[0], 10000U * sizeof(creal_T));
    memcpy(&b_m->pd[0], &SD->f0.mpd[0], 10000U * sizeof(real_T));
    memcpy(&b_m->epd[0], &SD->f0.mepd[0], 10000U * sizeof(real_T));
    memcpy(&b_m->nbpen[0], &mnbpen[0], 10000U * sizeof(real_T));
    for (i1 = 0; i1 < 20000; i1++) {
      b_m->pflag[i1] = mpflag[i1];
    }

    b_m->mask = msk;
    b_m->npb = cnt;
  }
}

/* End of code generation (Masking.c) */
