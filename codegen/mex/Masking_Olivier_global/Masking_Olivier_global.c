/*
 * Masking_Olivier_global.c
 *
 * Code generation for function 'Masking_Olivier_global'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Masking_Olivier_global.h"
#include "mpower.h"
#include "Masking_Olivier_global_mexutil.h"
#include "sort1.h"
#include "norm.h"
#include "error.h"
#include "AppFace2.h"
#include "sqrt.h"
#include "exp.h"
#include "cart2rayfixed.h"
#include "cross.h"
#include "squeeze.h"
#include "BlockCheck.h"
#include "Masking_Olivier_global_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 322,   /* lineNo */
  "Masking_Olivier_global",            /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 300, /* lineNo */
  "Masking_Olivier_global",            /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 279, /* lineNo */
  "Masking_Olivier_global",            /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 249, /* lineNo */
  "Masking_Olivier_global",            /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 230, /* lineNo */
  "Masking_Olivier_global",            /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 229, /* lineNo */
  "Masking_Olivier_global",            /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 193, /* lineNo */
  "Masking_Olivier_global",            /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 187, /* lineNo */
  "Masking_Olivier_global",            /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 182, /* lineNo */
  "Masking_Olivier_global",            /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 178, /* lineNo */
  "Masking_Olivier_global",            /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 137, /* lineNo */
  "Masking_Olivier_global",            /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 75,  /* lineNo */
  "Masking_Olivier_global",            /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 26,  /* lineNo */
  "sort",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 36, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtMCInfo b_emlrtMCI = { 70,  /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  27,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  26,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  26,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  26,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  26,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  26,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  26,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  26,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  26,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  26,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  89,                                  /* lineNo */
  67,                                  /* colNo */
  "wedges",                            /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { 1,   /* iFirst */
  1000,                                /* iLast */
  114,                                 /* lineNo */
  21,                                  /* colNo */
  "tpp",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  3                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  139,                                 /* lineNo */
  9,                                   /* colNo */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  140,                                 /* lineNo */
  9,                                   /* colNo */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pName */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  141,                                 /* lineNo */
  9,                                   /* colNo */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { 2,   /* nDims */
  158,                                 /* lineNo */
  14,                                  /* colNo */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { 2,   /* nDims */
  159,                                 /* lineNo */
  14,                                  /* colNo */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pName */
};

static emlrtECInfo f_emlrtECI = { 2,   /* nDims */
  160,                                 /* lineNo */
  14,                                  /* colNo */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pName */
};

static emlrtECInfo g_emlrtECI = { 2,   /* nDims */
  161,                                 /* lineNo */
  14,                                  /* colNo */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pName */
};

static emlrtECInfo h_emlrtECI = { 2,   /* nDims */
  162,                                 /* lineNo */
  14,                                  /* colNo */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { 2,   /* nDims */
  163,                                 /* lineNo */
  14,                                  /* colNo */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pName */
};

static emlrtECInfo j_emlrtECI = { 2,   /* nDims */
  164,                                 /* lineNo */
  14,                                  /* colNo */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pName */
};

static emlrtECInfo k_emlrtECI = { 2,   /* nDims */
  165,                                 /* lineNo */
  14,                                  /* colNo */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m"/* pName */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  205,                                 /* lineNo */
  29,                                  /* colNo */
  "dist",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  227,                                 /* lineNo */
  31,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  227,                                 /* lineNo */
  42,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  235,                                 /* lineNo */
  27,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  235,                                 /* lineNo */
  43,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  277,                                 /* lineNo */
  32,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  277,                                 /* lineNo */
  43,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  283,                                 /* lineNo */
  29,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  285,                                 /* lineNo */
  27,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  285,                                 /* lineNo */
  35,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  311,                                 /* lineNo */
  29,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  345,                                 /* lineNo */
  32,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  347,                                 /* lineNo */
  35,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  347,                                 /* lineNo */
  51,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  348,                                 /* lineNo */
  30,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  348,                                 /* lineNo */
  38,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  356,                                 /* lineNo */
  38,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  359,                                 /* lineNo */
  36,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  359,                                 /* lineNo */
  44,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  360,                                 /* lineNo */
  30,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  360,                                 /* lineNo */
  46,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  326,                                 /* lineNo */
  14,                                  /* colNo */
  "mshi",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  324,                                 /* lineNo */
  14,                                  /* colNo */
  "msti",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  325,                                 /* lineNo */
  14,                                  /* colNo */
  "mstt",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  327,                                 /* lineNo */
  14,                                  /* colNo */
  "msht",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  331,                                 /* lineNo */
  10,                                  /* colNo */
  "msho",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  329,                                 /* lineNo */
  14,                                  /* colNo */
  "msto",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  328,                                 /* lineNo */
  14,                                  /* colNo */
  "mstr",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  330,                                 /* lineNo */
  14,                                  /* colNo */
  "mshr",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  318,                                 /* lineNo */
  16,                                  /* colNo */
  "mpflag",                            /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  139,                                 /* lineNo */
  31,                                  /* colNo */
  "dist",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  208,                                 /* lineNo */
  22,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  208,                                 /* lineNo */
  47,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  216,                                 /* lineNo */
  22,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  216,                                 /* lineNo */
  47,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  233,                                 /* lineNo */
  27,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  260,                                 /* lineNo */
  22,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  260,                                 /* lineNo */
  47,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  268,                                 /* lineNo */
  22,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  268,                                 /* lineNo */
  47,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  316,                                 /* lineNo */
  16,                                  /* colNo */
  "mnbpen",                            /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  319,                                 /* lineNo */
  16,                                  /* colNo */
  "mploss",                            /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  321,                                 /* lineNo */
  13,                                  /* colNo */
  "mpd",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  322,                                 /* lineNo */
  43,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  322,                                 /* lineNo */
  14,                                  /* colNo */
  "mepd",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  334,                                 /* lineNo */
  18,                                  /* colNo */
  "mTti",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  335,                                 /* lineNo */
  18,                                  /* colNo */
  "mThi",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  338,                                 /* lineNo */
  18,                                  /* colNo */
  "mTtt",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  339,                                 /* lineNo */
  18,                                  /* colNo */
  "mTht",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  344,                                 /* lineNo */
  35,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  357,                                 /* lineNo */
  30,                                  /* colNo */
  "eta",                               /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  14,                                  /* colNo */
  "dist",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  350,                                 /* lineNo */
  18,                                  /* colNo */
  "mTti",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  351,                                 /* lineNo */
  18,                                  /* colNo */
  "mThi",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  362,                                 /* lineNo */
  18,                                  /* colNo */
  "mTtt",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  363,                                 /* lineNo */
  18,                                  /* colNo */
  "mTht",                              /* aName */
  "Masking_Olivier_global",            /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Masking_Olivier_global.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo vb_emlrtRSI = { 70, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

/* Function Declarations */
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m7;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m7, 3, pArrays, "feval", true, location);
}

void Masking_Olivier_global(Masking_Olivier_globalStackData *SD, const
  emlrtStack *sp, const real_T P1_re[3], const real_T P2_re[3], struct0_T *b_m)
{
  int32_T i;
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
  real_T dist[2];
  int32_T fe;
  int32_T dist_size_idx_0;
  int32_T l;
  real_T dist_data[1000];
  int32_T k;
  real_T et[3];
  int32_T i2;
  int32_T mnbpen_size[1];
  real_T bi;
  real_T mnbpen_data[1000];
  int8_T mpflag_data[2000];
  int32_T iidx_data[1000];
  int32_T iidx_size[1];
  creal_T mploss_data[1000];
  real_T vnfaces_re[3];
  real_T mpd_data[1000];
  int32_T b_cnt[2];
  real_T mepd_data[1000];
  int32_T c_cnt[2];
  real_T flag[2];
  real_T b_dist_data[1000];
  real_T b_ppt[6];
  int32_T iidx[3];
  real_T b_nb[4];
  int32_T mnbpen[3];
  real_T dv0[12];
  real_T tff_data[4000];
  creal_T mTti_data[1000];
  creal_T mThi_data[1000];
  creal_T mTtt_data[1000];
  creal_T mTht_data[1000];
  boolean_T exitg1;
  cuint8_T t0_shi[3];
  real_T b_f1;
  cuint8_T t0_sti[3];
  cuint8_T t0_stt[3];
  cuint8_T t0_sht[3];
  real_T f2;
  cuint8_T t0_sho[3];
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 7 };

  cuint8_T t0_sto[3];
  boolean_T guard1 = false;
  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  boolean_T guard2 = false;
  cuint8_T t0_str[3];
  boolean_T guard3 = false;
  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 42 };

  cuint8_T t0_shr[3];
  static const char_T formatSpec[42] = { ' ', ' ', ' ', ' ', ' ', ' ', 'E', 'r',
    'r', 'o', 'r', ':', ' ', 'C', 'a', 'n', 'n', 'o', 't', ' ', 'b', 'e', ' ',
    '1', 's', 't', ' ', 'p', 'e', 'n', 'e', 't', 'r', 'a', 't', 'i', 'o', 'n',
    '!', ' ', '\\', 'n' };

  cuint8_T t0_Tti[3];
  cuint8_T t0_Thi[3];
  cuint8_T t0_Ttt[3];
  cuint8_T t0_Tht[3];
  cuint8_T t0_ploss[3];
  static const int32_T iv2[2] = { 1, 7 };

  real_T dp;
  static const int32_T iv3[2] = { 1, 43 };

  static const char_T b_formatSpec[43] = { ' ', ' ', ' ', ' ', ' ', ' ', 'E',
    'r', 'r', 'o', 'r', ':', ' ', 'C', 'a', 'n', 'n', 'o', 't', ' ', 'b', 'e',
    ' ', 'l', 'a', 's', 't', ' ', 'p', 'e', 'n', 'e', 't', 'r', 'a', 't', 'i',
    'o', 'n', '!', ' ', '\\', 'n' };

  real_T st[3];
  real_T re;
  real_T b_re;
  real_T d0;
  creal_T ctr;
  creal_T teps;
  real_T ar;
  real_T ai;
  real_T brm;
  real_T eti[3];
  real_T ehi[3];
  real_T etr[3];
  real_T ehr[3];
  real_T inveta_im;
  real_T b_teps;
  real_T c_teps;
  real_T d_teps;
  real_T e_teps;
  real_T ett[3];
  real_T eht[3];
  creal_T dc0;
  real_T inveta_re;
  creal_T dc1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;

  /*  Checks if it is blocked between P1 and P2 */
  /*   */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> */
  /*           Mingming Gan   <gan@ftw.at> */
  /*   */
  /*  History:  2011.9.28 */
  /*  (OR): parallel & perpendicular incident vectors (1st interface) */
  /*  (OR): parallel & perpendicular transmitted vectors (1st interface) */
  /*  (OR): parallel & perpendicular incident vectors (2nd interface) */
  /*  (OR): parallel & perpendicular transmitted vectors (2nd interface) */
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

  kn = norm(dP);
  for (i = 0; i < 3; i++) {
    sdp[i] = dP[i] / kn;
  }

  cnt = 0;

  /*  count the number of penetration per path */
  b_i = 1.0;
  memset(&SD->f0.tpp[0], 0, 6000U * sizeof(real_T));

  /*  (OR): (nb_penetrations_per_path x [P1 P2] x 3D_coordinates) */
  memset(&SD->f0.tff[0], 0, 4000U * sizeof(real_T));

  /*  (OR): (nb_penetrations_per_path x [P1 P2] x [nb_block nb_face]) */
  for (i = 0; i < 2; i++) {
    dist[i] = 0.0;
  }

  while (b_i <= Nblock) {
    /*  continue until the end of the blocks or until it is masked */
    fe = -1;

    /*  count the number of intersection point */
    l = 0;
    while ((l + 1 <= 6) && (fe + 1 < 2)) {
      /*  for each block, continue (i): until the end of the faces,  */
      /*  (ii): until it is masked, or (iii): both the input and output points are found */
      i1 = vnfaces->size[0];
      i = (int32_T)b_i;
      if (!((i >= 1) && (i <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i1, &emlrtBCI, sp);
      }

      kn = 0.0;
      for (k = 0; k < 3; k++) {
        bi = vnfaces->data[((i + vnfaces->size[0] * l) + vnfaces->size[0] *
                            vnfaces->size[1] * k) - 1];
        kn += dP[k] * bi;
      }

      if (muDoubleScalarAbs(kn) > 0.001) {
        /*  if the path is not parallel to the face, then look for the intersections */
        i1 = wedges->size[0];
        i2 = (int32_T)b_i;
        if (!((i2 >= 1) && (i2 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &b_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        i2 = (int32_T)b_i;
        if (!((i2 >= 1) && (i2 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &c_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        i2 = (int32_T)b_i;
        if (!((i2 >= 1) && (i2 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &d_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        i2 = (int32_T)b_i;
        if (!((i2 >= 1) && (i2 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &e_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        i2 = (int32_T)b_i;
        if (!((i2 >= 1) && (i2 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &f_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        i2 = (int32_T)b_i;
        if (!((i2 >= 1) && (i2 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &g_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        i2 = (int32_T)b_i;
        if (!((i2 >= 1) && (i2 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &h_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        i2 = (int32_T)b_i;
        if (!((i2 >= 1) && (i2 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &i_emlrtBCI, sp);
        }

        i1 = wedges->size[0];
        i2 = (int32_T)b_i;
        if (!((i2 >= 1) && (i2 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &j_emlrtBCI, sp);
        }

        kn = ((P1[0] - P2[0]) * ((wedges->data[(((int32_T)b_i + wedges->size[0] *
                  l) + wedges->size[0] * wedges->size[1] * wedges->size[2]) - 1]
                - wedges->data[((((int32_T)b_i + wedges->size[0] * l) +
                  (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
                 wedges->size[1] * wedges->size[2]) - 1]) * (wedges->data
                [((((int32_T)b_i + wedges->size[0] * l) + wedges->size[0] *
                   wedges->size[1]) + (wedges->size[0] * wedges->size[1] *
                  wedges->size[2] << 1)) - 1] - wedges->data[((((int32_T)b_i +
                   wedges->size[0] * l) + (wedges->size[0] * wedges->size[1] <<
                   1)) + (wedges->size[0] * wedges->size[1] * wedges->size[2] <<
                          1)) - 1]) - (wedges->data[((((int32_T)b_i +
                   wedges->size[0] * l) + wedges->size[0] * wedges->size[1]) +
                 wedges->size[0] * wedges->size[1] * wedges->size[2]) - 1] -
                wedges->data[((((int32_T)b_i + wedges->size[0] * l) +
                  (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
                              wedges->size[1] * wedges->size[2]) - 1]) *
               (wedges->data[(((int32_T)b_i + wedges->size[0] * l) +
                              (wedges->size[0] * wedges->size[1] * wedges->size
                  [2] << 1)) - 1] - wedges->data[((((int32_T)b_i + wedges->size
                   [0] * l) + (wedges->size[0] * wedges->size[1] << 1)) +
                 (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1)) - 1]))
              - (P1[1] - P2[1]) * ((wedges->data[((int32_T)b_i + wedges->size[0]
                 * l) - 1] - wedges->data[(((int32_T)b_i + wedges->size[0] * l)
                 + (wedges->size[0] * wedges->size[1] << 1)) - 1]) *
               (wedges->data[((((int32_T)b_i + wedges->size[0] * l) +
                  wedges->size[0] * wedges->size[1]) + (wedges->size[0] *
                  wedges->size[1] * wedges->size[2] << 1)) - 1] - wedges->data
                [((((int32_T)b_i + wedges->size[0] * l) + (wedges->size[0] *
                   wedges->size[1] << 1)) + (wedges->size[0] * wedges->size[1] *
                  wedges->size[2] << 1)) - 1]) - (wedges->data[(((int32_T)b_i +
                  wedges->size[0] * l) + wedges->size[0] * wedges->size[1]) - 1]
                - wedges->data[(((int32_T)b_i + wedges->size[0] * l) +
                 (wedges->size[0] * wedges->size[1] << 1)) - 1]) * (wedges->
                data[(((int32_T)b_i + wedges->size[0] * l) + (wedges->size[0] *
                  wedges->size[1] * wedges->size[2] << 1)) - 1] - wedges->data
                [((((int32_T)b_i + wedges->size[0] * l) + (wedges->size[0] *
                   wedges->size[1] << 1)) + (wedges->size[0] * wedges->size[1] *
                  wedges->size[2] << 1)) - 1]))) + (P1[2] - P2[2]) *
          ((wedges->data[((int32_T)b_i + wedges->size[0] * l) - 1] -
            wedges->data[(((int32_T)b_i + wedges->size[0] * l) + (wedges->size[0]
              * wedges->size[1] << 1)) - 1]) * (wedges->data[((((int32_T)b_i +
               wedges->size[0] * l) + wedges->size[0] * wedges->size[1]) +
             wedges->size[0] * wedges->size[1] * wedges->size[2]) - 1] -
            wedges->data[((((int32_T)b_i + wedges->size[0] * l) + (wedges->size
               [0] * wedges->size[1] << 1)) + wedges->size[0] * wedges->size[1] *
                          wedges->size[2]) - 1]) - (wedges->data[(((int32_T)b_i
              + wedges->size[0] * l) + wedges->size[0] * wedges->size[1]) - 1] -
            wedges->data[(((int32_T)b_i + wedges->size[0] * l) + (wedges->size[0]
              * wedges->size[1] << 1)) - 1]) * (wedges->data[(((int32_T)b_i +
              wedges->size[0] * l) + wedges->size[0] * wedges->size[1] *
             wedges->size[2]) - 1] - wedges->data[((((int32_T)b_i + wedges->
               size[0] * l) + (wedges->size[0] * wedges->size[1] << 1)) +
             wedges->size[0] * wedges->size[1] * wedges->size[2]) - 1]));
        if (kn == 0.0) {
          b_st.site = &l_emlrtRSI;
          error(&b_st);
        } else {
          kn = (((P1[0] - wedges->data[(((int32_T)b_i + wedges->size[0] * l) +
                   (wedges->size[0] * wedges->size[1] << 1)) - 1]) *
                 ((wedges->data[(((int32_T)b_i + wedges->size[0] * l) +
                    wedges->size[0] * wedges->size[1] * wedges->size[2]) - 1] -
                   wedges->data[((((int32_T)b_i + wedges->size[0] * l) +
                     (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0]
                    * wedges->size[1] * wedges->size[2]) - 1]) * (wedges->data
                   [((((int32_T)b_i + wedges->size[0] * l) + wedges->size[0] *
                      wedges->size[1]) + (wedges->size[0] * wedges->size[1] *
                     wedges->size[2] << 1)) - 1] - wedges->data[((((int32_T)b_i
                      + wedges->size[0] * l) + (wedges->size[0] * wedges->size[1]
                      << 1)) + (wedges->size[0] * wedges->size[1] * wedges->
                                size[2] << 1)) - 1]) - (wedges->data[((((int32_T)
                      b_i + wedges->size[0] * l) + wedges->size[0] *
                     wedges->size[1]) + wedges->size[0] * wedges->size[1] *
                    wedges->size[2]) - 1] - wedges->data[((((int32_T)b_i +
                      wedges->size[0] * l) + (wedges->size[0] * wedges->size[1] <<
                      1)) + wedges->size[0] * wedges->size[1] * wedges->size[2])
                   - 1]) * (wedges->data[(((int32_T)b_i + wedges->size[0] * l) +
                    (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1))
                            - 1] - wedges->data[((((int32_T)b_i + wedges->size[0]
                      * l) + (wedges->size[0] * wedges->size[1] << 1)) +
                    (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1))
                            - 1])) + (P1[1] - wedges->data[((((int32_T)b_i +
                     wedges->size[0] * l) + (wedges->size[0] * wedges->size[1] <<
                     1)) + wedges->size[0] * wedges->size[1] * wedges->size[2])
                  - 1]) * ((wedges->data[(((int32_T)b_i + wedges->size[0] * l) +
                    wedges->size[0] * wedges->size[1]) - 1] - wedges->data
                            [(((int32_T)b_i + wedges->size[0] * l) +
                              (wedges->size[0] * wedges->size[1] << 1)) - 1]) *
                           (wedges->data[(((int32_T)b_i + wedges->size[0] * l) +
                    (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1))
                            - 1] - wedges->data[((((int32_T)b_i + wedges->size[0]
                      * l) + (wedges->size[0] * wedges->size[1] << 1)) +
                    (wedges->size[0] * wedges->size[1] * wedges->size[2] << 1))
                            - 1]) - (wedges->data[((int32_T)b_i + wedges->size[0]
                    * l) - 1] - wedges->data[(((int32_T)b_i + wedges->size[0] *
                     l) + (wedges->size[0] * wedges->size[1] << 1)) - 1]) *
                           (wedges->data[((((int32_T)b_i + wedges->size[0] * l)
                     + wedges->size[0] * wedges->size[1]) + (wedges->size[0] *
                     wedges->size[1] * wedges->size[2] << 1)) - 1] -
                            wedges->data[((((int32_T)b_i + wedges->size[0] * l)
                     + (wedges->size[0] * wedges->size[1] << 1)) + (wedges->
                     size[0] * wedges->size[1] * wedges->size[2] << 1)) - 1])))
                + (P1[2] - wedges->data[((((int32_T)b_i + wedges->size[0] * l) +
                   (wedges->size[0] * wedges->size[1] << 1)) + (wedges->size[0] *
                   wedges->size[1] * wedges->size[2] << 1)) - 1]) *
                ((wedges->data[((int32_T)b_i + wedges->size[0] * l) - 1] -
                  wedges->data[(((int32_T)b_i + wedges->size[0] * l) +
                                (wedges->size[0] * wedges->size[1] << 1)) - 1]) *
                 (wedges->data[((((int32_T)b_i + wedges->size[0] * l) +
                    wedges->size[0] * wedges->size[1]) + wedges->size[0] *
                                wedges->size[1] * wedges->size[2]) - 1] -
                  wedges->data[((((int32_T)b_i + wedges->size[0] * l) +
                    (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
                                wedges->size[1] * wedges->size[2]) - 1]) -
                 (wedges->data[(((int32_T)b_i + wedges->size[0] * l) +
                                wedges->size[0] * wedges->size[1]) - 1] -
                  wedges->data[(((int32_T)b_i + wedges->size[0] * l) +
                                (wedges->size[0] * wedges->size[1] << 1)) - 1]) *
                 (wedges->data[(((int32_T)b_i + wedges->size[0] * l) +
                                wedges->size[0] * wedges->size[1] * wedges->
                                size[2]) - 1] - wedges->data[((((int32_T)b_i +
                     wedges->size[0] * l) + (wedges->size[0] * wedges->size[1] <<
                     1)) + wedges->size[0] * wedges->size[1] * wedges->size[2])
                  - 1]))) / kn;
          if ((kn > -1.0E-6) && (kn < 1.000001)) {
            /*  if t>0 && t<1, intersection point is in-between P1 and P2 */
            for (i = 0; i < 3; i++) {
              et[i] = P1[i] + kn * (P2[i] - P1[i]);
            }

            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
            /*                      af = AppFace(ip,face); */
            /*                      Atemp(:) = wedges(face(1),face(2),[1 2 4],:); */
            /*                      af = AppFace(ip,Atemp);%Loe_20161013, af = AppFace(ip,face); */
            i1 = wedges->size[0];
            i2 = (int32_T)b_i;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &k_emlrtBCI, sp);
            }

            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
            for (i1 = 0; i1 < 4; i1++) {
              for (i2 = 0; i2 < 3; i2++) {
                dv0[i2 + 3 * i1] = wedges->data[((((int32_T)b_i + wedges->size[0]
                  * l) + wedges->size[0] * wedges->size[1] * i1) + wedges->size
                  [0] * wedges->size[1] * wedges->size[2] * i2) - 1];
              }
            }

            if (AppFace2(et, dv0) == 1.0) {
              /*  intersection point is found */
              fe++;
              for (i1 = 0; i1 < 3; i1++) {
                ppt[i1 + 3 * fe] = et[i1];
              }

              /*  coordinates of the intersection point */
              nb[fe << 1] = b_i;
              nb[1 + (fe << 1)] = l + 1;
            }
          }
        }
      }

      if (fe + 1 == 2) {
        /*  if the two intersection points are found and there is no masking */
        for (i1 = 0; i1 < 3; i1++) {
          vnfaces_re[i1] = P1[i1] - ppt[i1];
        }

        dist[0] = norm(vnfaces_re);
        for (i1 = 0; i1 < 3; i1++) {
          vnfaces_re[i1] = P1[i1] - ppt[3 + i1];
        }

        dist[1] = norm(vnfaces_re);
        if (muDoubleScalarAbs(dist[0] - dist[1]) > 1.0E-8) {
          cnt++;
          for (i = 0; i < 2; i++) {
            flag[i] = dist[i];
          }

          sort(flag, b_cnt);
          for (i = 0; i < 2; i++) {
            flag[i] = b_cnt[i];
          }

          /*  order the intersection points starting from the closer  */
          /*  to the virtual transmitter */
          if (!((cnt >= 1) && (cnt <= 1000))) {
            emlrtDynamicBoundsCheckR2012b(cnt, 1, 1000, &l_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            for (i2 = 0; i2 < 2; i2++) {
              b_ppt[i2 + (i1 << 1)] = ppt[i1 + 3 * ((int32_T)flag[i2] - 1)];
              SD->f0.tpp[((cnt + 1000 * i2) + 2000 * i1) - 1] = b_ppt[i2 + (i1 <<
                1)];
            }
          }

          for (i1 = 0; i1 < 2; i1++) {
            for (i2 = 0; i2 < 2; i2++) {
              b_nb[i2 + (i1 << 1)] = nb[i1 + (((int32_T)flag[i2] - 1) << 1)];
              SD->f0.tff[((cnt + 1000 * i2) + 2000 * i1) - 1] = b_nb[i2 + (i1 <<
                1)];
            }
          }
        }
      }

      l++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    b_i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  fe = -1;
  if ((int16_T)(cnt - 2) > 0) {
    fe = (int16_T)(cnt - 2) - 1;
  }

  dist_size_idx_0 = 3 + fe;
  for (i1 = 0; i1 < 2; i1++) {
    dist_data[i1] = dist[i1];
  }

  for (i1 = 0; i1 <= fe; i1++) {
    dist_data[i1 + 2] = 0.0;
  }

  k = 0;
  while (k <= cnt - 1) {
    for (i1 = 0; i1 < 3; i1++) {
      et[i1] = P1[i1] - SD->f0.tpp[k + 2000 * i1];
    }

    i1 = 3 + fe;
    i2 = 1 + k;
    if (!((i2 >= 1) && (i2 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &nc_emlrtBCI, sp);
    }

    dist_data[i2 - 1] = norm(et);
    k++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  if (cnt > 1) {
    /*  if more than one penetration is found during the path, they are ordered from  */
    /*  beginning from the closest to P1 - insertion sort */
    b_st.site = &k_emlrtRSI;
    mnbpen_size[0] = 3 + fe;
    l = 3 + fe;
    for (i1 = 0; i1 < l; i1++) {
      mnbpen_data[i1] = dist_data[i1];
    }

    c_st.site = &m_emlrtRSI;
    c_sort(&c_st, mnbpen_data, mnbpen_size, iidx_data, iidx_size);
    l = iidx_size[0];
    for (i1 = 0; i1 < l; i1++) {
      mnbpen_data[i1] = iidx_data[i1];
    }

    /*  order the penetrations starting from the closer  */
    /*  to the virtual transmitter */
    l = iidx_size[0];
    for (i1 = 0; i1 < l; i1++) {
      i2 = 3 + fe;
      i = (int32_T)mnbpen_data[i1];
      if (!((i >= 1) && (i <= i2))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i2, &rb_emlrtBCI, sp);
      }
    }

    i1 = 3 + fe;
    if (i1 != iidx_size[0]) {
      emlrtSizeEqCheck1DR2012b(i1, iidx_size[0], &emlrtECI, sp);
    }

    l = iidx_size[0];
    for (i1 = 0; i1 < l; i1++) {
      b_dist_data[i1] = dist_data[(int32_T)mnbpen_data[i1] - 1];
    }

    dist_size_idx_0 = iidx_size[0];
    l = iidx_size[0];
    for (i1 = 0; i1 < l; i1++) {
      dist_data[i1] = b_dist_data[i1];
    }

    l = iidx_size[0];
    for (i1 = 0; i1 < l; i1++) {
      iidx_data[i1] = i1;
    }

    iidx[0] = iidx_size[0];
    iidx[1] = 2;
    iidx[2] = 3;
    mnbpen[0] = iidx_size[0];
    mnbpen[1] = 2;
    mnbpen[2] = 3;
    emlrtSubAssignSizeCheckR2012b(iidx, 3, mnbpen, 3, &b_emlrtECI, sp);
    fe = iidx_size[0];
    l = iidx_size[0];
    for (i1 = 0; i1 < 3; i1++) {
      for (i2 = 0; i2 < 2; i2++) {
        for (i = 0; i < l; i++) {
          SD->f0.tpp_data[(i + fe * i2) + (fe << 1) * i1] = SD->f0.tpp
            [(((int32_T)mnbpen_data[i] + 1000 * i2) + 2000 * i1) - 1];
        }
      }
    }

    l = iidx_size[0];
    for (i1 = 0; i1 < 3; i1++) {
      for (i2 = 0; i2 < 2; i2++) {
        for (i = 0; i < l; i++) {
          SD->f0.tpp[(iidx_data[i] + 1000 * i2) + 2000 * i1] = SD->f0.tpp_data
            [(i + fe * i2) + (fe << 1) * i1];
        }
      }
    }

    l = iidx_size[0];
    for (i1 = 0; i1 < l; i1++) {
      iidx_data[i1] = i1;
    }

    iidx[0] = iidx_size[0];
    iidx[1] = 2;
    iidx[2] = 2;
    mnbpen[0] = iidx_size[0];
    mnbpen[1] = 2;
    mnbpen[2] = 2;
    emlrtSubAssignSizeCheckR2012b(iidx, 3, mnbpen, 3, &c_emlrtECI, sp);
    fe = iidx_size[0];
    l = iidx_size[0];
    for (i1 = 0; i1 < 2; i1++) {
      for (i2 = 0; i2 < 2; i2++) {
        for (i = 0; i < l; i++) {
          tff_data[(i + fe * i2) + (fe << 1) * i1] = SD->f0.tff[(((int32_T)
            mnbpen_data[i] + 1000 * i2) + 2000 * i1) - 1];
        }
      }
    }

    l = iidx_size[0];
    for (i1 = 0; i1 < 2; i1++) {
      for (i2 = 0; i2 < 2; i2++) {
        for (i = 0; i < l; i++) {
          SD->f0.tff[(iidx_data[i] + 1000 * i2) + 2000 * i1] = tff_data[(i + fe *
            i2) + (fe << 1) * i1];
        }
      }
    }
  }

  /*  computing the parameters of penetration */
  for (i1 = 0; i1 < cnt; i1++) {
    mnbpen_data[i1] = 0.0;
  }

  l = cnt << 1;
  for (i1 = 0; i1 < l; i1++) {
    mpflag_data[i1] = 0;
  }

  for (i1 = 0; i1 < cnt; i1++) {
    mploss_data[i1].re = 0.0;
    mploss_data[i1].im = 0.0;
  }

  for (i1 = 0; i1 < cnt; i1++) {
    mpd_data[i1] = 0.0;
  }

  for (i1 = 0; i1 < cnt; i1++) {
    mepd_data[i1] = 0.0;
  }

  b_cnt[0] = cnt;
  b_cnt[1] = 3;
  c_cnt[0] = cnt;
  c_cnt[1] = 3;
  if (b_cnt[0] != c_cnt[0]) {
    emlrtSizeEqCheckNDR2012b(&b_cnt[0], &c_cnt[0], &d_emlrtECI, sp);
  }

  l = cnt * 3;
  for (i1 = 0; i1 < l; i1++) {
    SD->f0.msti_data[i1].re = 0.0;
    SD->f0.msti_data[i1].im = 0.0;
  }

  b_cnt[0] = cnt;
  b_cnt[1] = 3;
  c_cnt[0] = cnt;
  c_cnt[1] = 3;
  if (b_cnt[0] != c_cnt[0]) {
    emlrtSizeEqCheckNDR2012b(&b_cnt[0], &c_cnt[0], &e_emlrtECI, sp);
  }

  l = cnt * 3;
  for (i1 = 0; i1 < l; i1++) {
    SD->f0.mstt_data[i1].re = 0.0;
    SD->f0.mstt_data[i1].im = 0.0;
  }

  b_cnt[0] = cnt;
  b_cnt[1] = 3;
  c_cnt[0] = cnt;
  c_cnt[1] = 3;
  if (b_cnt[0] != c_cnt[0]) {
    emlrtSizeEqCheckNDR2012b(&b_cnt[0], &c_cnt[0], &f_emlrtECI, sp);
  }

  l = cnt * 3;
  for (i1 = 0; i1 < l; i1++) {
    SD->f0.mshi_data[i1].re = 0.0;
    SD->f0.mshi_data[i1].im = 0.0;
  }

  b_cnt[0] = cnt;
  b_cnt[1] = 3;
  c_cnt[0] = cnt;
  c_cnt[1] = 3;
  if (b_cnt[0] != c_cnt[0]) {
    emlrtSizeEqCheckNDR2012b(&b_cnt[0], &c_cnt[0], &g_emlrtECI, sp);
  }

  l = cnt * 3;
  for (i1 = 0; i1 < l; i1++) {
    SD->f0.msht_data[i1].re = 0.0;
    SD->f0.msht_data[i1].im = 0.0;
  }

  b_cnt[0] = cnt;
  b_cnt[1] = 3;
  c_cnt[0] = cnt;
  c_cnt[1] = 3;
  if (b_cnt[0] != c_cnt[0]) {
    emlrtSizeEqCheckNDR2012b(&b_cnt[0], &c_cnt[0], &h_emlrtECI, sp);
  }

  l = cnt * 3;
  for (i1 = 0; i1 < l; i1++) {
    SD->f0.mstr_data[i1].re = 0.0;
    SD->f0.mstr_data[i1].im = 0.0;
  }

  b_cnt[0] = cnt;
  b_cnt[1] = 3;
  c_cnt[0] = cnt;
  c_cnt[1] = 3;
  if (b_cnt[0] != c_cnt[0]) {
    emlrtSizeEqCheckNDR2012b(&b_cnt[0], &c_cnt[0], &i_emlrtECI, sp);
  }

  l = cnt * 3;
  for (i1 = 0; i1 < l; i1++) {
    SD->f0.msto_data[i1].re = 0.0;
    SD->f0.msto_data[i1].im = 0.0;
  }

  b_cnt[0] = cnt;
  b_cnt[1] = 3;
  c_cnt[0] = cnt;
  c_cnt[1] = 3;
  if (b_cnt[0] != c_cnt[0]) {
    emlrtSizeEqCheckNDR2012b(&b_cnt[0], &c_cnt[0], &j_emlrtECI, sp);
  }

  l = cnt * 3;
  for (i1 = 0; i1 < l; i1++) {
    SD->f0.mshr_data[i1].re = 0.0;
    SD->f0.mshr_data[i1].im = 0.0;
  }

  b_cnt[0] = cnt;
  b_cnt[1] = 3;
  c_cnt[0] = cnt;
  c_cnt[1] = 3;
  if (b_cnt[0] != c_cnt[0]) {
    emlrtSizeEqCheckNDR2012b(&b_cnt[0], &c_cnt[0], &k_emlrtECI, sp);
  }

  l = cnt * 3;
  for (i1 = 0; i1 < l; i1++) {
    SD->f0.msho_data[i1].re = 0.0;
    SD->f0.msho_data[i1].im = 0.0;
  }

  for (i1 = 0; i1 < cnt; i1++) {
    mTti_data[i1].re = 0.0;
    mTti_data[i1].im = 0.0;
  }

  for (i1 = 0; i1 < cnt; i1++) {
    mThi_data[i1].re = 0.0;
    mThi_data[i1].im = 0.0;
  }

  for (i1 = 0; i1 < cnt; i1++) {
    mTtt_data[i1].re = 0.0;
    mTtt_data[i1].im = 0.0;
  }

  for (i1 = 0; i1 < cnt; i1++) {
    mTht_data[i1].re = 0.0;
    mTht_data[i1].im = 0.0;
  }

  l = 0;
  exitg1 = false;
  while ((!exitg1) && ((l + 1 <= cnt) && (msk != 1))) {
    for (i = 0; i < 2; i++) {
      flag[i] = 0.0;
    }

    /*  -> flag(1,1) = {0,1,2,3} */
    /*  -> flag(2,1) = {0,4,5,6}, respectively */
    for (i1 = 0; i1 < 3; i1++) {
      vnfaces_re[i1] = SD->f0.tpp[l + 2000 * i1];
    }

    b_st.site = &j_emlrtRSI;
    b_f1 = BlockCheck(&b_st, SD->f0.tff[l], vnfaces_re);

    /*  checks if the input penetration point belongs to some other  */
    /*  block (-1 if not) */
    if ((l + 1 == 1) && (b_f1 != -1.0) && (dist_data[0] > 0.005)) {
      b_st.site = &i_emlrtRSI;
      c_st.site = &qb_emlrtRSI;
      emlrt_synchGlobalsToML(&c_st);
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv0);
      emlrtInitCharArrayR2013a(&c_st, 7, m0, &u[0]);
      emlrtAssign(&y, m0);
      b_y = NULL;
      m0 = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(&c_st, 42, m0, &formatSpec[0]);
      emlrtAssign(&b_y, m0);
      d_st.site = &vb_emlrtRSI;
      emlrt_marshallIn(&d_st, feval(&d_st, y, emlrt_marshallOut(1.0), b_y,
        &b_emlrtMCI), "feval");
      emlrt_synchGlobalsFromML(&c_st);
      msk = 1;
      exitg1 = true;
    } else {
      for (i1 = 0; i1 < 3; i1++) {
        vnfaces_re[i1] = SD->f0.tpp[1000 + (l + 2000 * i1)];
      }

      b_st.site = &h_emlrtRSI;
      f2 = BlockCheck(&b_st, SD->f0.tff[1000 + l], vnfaces_re);

      /*  checks if the output penetration point belongs to some other  */
      /*  block (-1 if not) */
      guard1 = false;
      guard2 = false;
      guard3 = false;
      if ((l + 1 == cnt) && (f2 != -1.0)) {
        for (i1 = 0; i1 < 3; i1++) {
          vnfaces_re[i1] = SD->f0.tpp[1000 + (l + 2000 * i1)];
        }

        squeeze(vnfaces_re, et);
        for (i = 0; i < 3; i++) {
          vnfaces_re[i] = P2[i] - et[i];
        }

        if (norm(vnfaces_re) > 0.005) {
          b_st.site = &g_emlrtRSI;
          c_st.site = &qb_emlrtRSI;
          emlrt_synchGlobalsToML(&c_st);
          y = NULL;
          m0 = emlrtCreateCharArray(2, iv2);
          emlrtInitCharArrayR2013a(&c_st, 7, m0, &u[0]);
          emlrtAssign(&y, m0);
          b_y = NULL;
          m0 = emlrtCreateCharArray(2, iv3);
          emlrtInitCharArrayR2013a(&c_st, 43, m0, &b_formatSpec[0]);
          emlrtAssign(&b_y, m0);
          d_st.site = &vb_emlrtRSI;
          emlrt_marshallIn(&d_st, feval(&d_st, y, emlrt_marshallOut(1.0), b_y,
            &b_emlrtMCI), "feval");
          emlrt_synchGlobalsFromML(&c_st);
          msk = 1;
          exitg1 = true;
        } else {
          guard3 = true;
        }
      } else {
        guard3 = true;
      }

      if (guard3) {
        if (f2 != -1.0) {
          /*  output penetration point also belongs to another block */
          fe = 1;

          /*  -> to be used in next loop execution */
        } else {
          fe = 0;
        }

        i1 = l + 1;
        if (!((i1 >= 1) && (i1 <= dist_size_idx_0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, dist_size_idx_0, &m_emlrtBCI, sp);
        }

        for (i1 = 0; i1 < 3; i1++) {
          vnfaces_re[i1] = SD->f0.tpp[1000 + (l + 2000 * i1)];
        }

        squeeze(vnfaces_re, et);
        for (i = 0; i < 3; i++) {
          vnfaces_re[i] = P1[i] - et[i];
        }

        dp = muDoubleScalarAbs(dist_data[l] - norm(vnfaces_re));
        if ((l + 1 == 1) && (b_f1 != -1.0)) {
          i1 = eta->size[0];
          i2 = (int32_T)SD->f0.tff[0];
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &sb_emlrtBCI, sp);
          }

          i1 = eta->size[0];
          i = (int32_T)b_f1;
          if (!((i >= 1) && (i <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i1, &tb_emlrtBCI, sp);
          }

          if (eta->data[i2 - 1].re == eta->data[i - 1].re) {
            msk = 1;
            exitg1 = true;
          } else {
            /*  flag(1) to distinguish different possibilities when f1 ~= -1 */
            flag[0] = 1.0;

            /*  -> 1st penetration point is P1 */
            guard2 = true;
          }
        } else {
          guard2 = true;
        }
      }

      if (guard2) {
        if ((l + 1 > 1) && (b_f1 != -1.0) && (fe == 1)) {
          i1 = eta->size[0];
          i2 = (int32_T)SD->f0.tff[l];
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ub_emlrtBCI, sp);
          }

          i1 = eta->size[0];
          i = (int32_T)b_f1;
          if (!((i >= 1) && (i <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i1, &vb_emlrtBCI, sp);
          }

          if (eta->data[i2 - 1].re == eta->data[i - 1].re) {
            flag[0] = 2.0;

            /*  input penetration point is an output penetration point of a previous penetration in the same path - same epsilon */
          } else {
            flag[0] = 3.0;

            /*  as above but different epsilon */
          }
        }

        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        i1 = (int32_T)SD->f0.tff[2000 + l];
        if (!((i1 >= 1) && (i1 <= 6))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &o_emlrtBCI, sp);
        }

        i1 = vnfaces->size[0];
        fe = (int32_T)SD->f0.tff[l];
        if (!((fe >= 1) && (fe <= i1))) {
          emlrtDynamicBoundsCheckR2012b(fe, 1, i1, &n_emlrtBCI, sp);
        }

        for (i1 = 0; i1 < 3; i1++) {
          vnfaces_re[i1] = vnfaces->data[((fe + vnfaces->size[0] * ((int32_T)
            SD->f0.tff[2000 + l] - 1)) + vnfaces->size[0] * vnfaces->size[1] *
            i1) - 1];
        }

        /*  (OR): vector normal to 1st face of block */
        cross(sdp, vnfaces_re, et);

        /*  (OR): perpendicular vector of the incident wave */
        b_st.site = &f_emlrtRSI;
        re = mpower(norm(et));

        /*  (OR): sine square of the incident angle */
        d0 = 1.0 - re;
        b_st.site = &e_emlrtRSI;
        b_sqrt(&b_st, &d0);

        /*  (OR): cosine of the incident angle */
        if ((flag[0] == 0.0) || (flag[0] == 1.0)) {
          i1 = eta->size[0];
          i2 = (int32_T)SD->f0.tff[l];
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &wb_emlrtBCI, sp);
          }

          teps.re = eta->data[i2 - 1].re;
          i1 = eta->size[0];
          i2 = (int32_T)SD->f0.tff[l];
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &wb_emlrtBCI, sp);
          }

          teps.im = eta->data[i2 - 1].im;
        } else {
          i1 = eta->size[0];
          i2 = (int32_T)SD->f0.tff[l];
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &p_emlrtBCI, sp);
          }

          i1 = eta->size[0];
          i2 = (int32_T)b_f1;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &q_emlrtBCI, sp);
          }

          ar = eta->data[(int32_T)SD->f0.tff[l] - 1].re;
          ai = eta->data[(int32_T)SD->f0.tff[l] - 1].im;
          kn = eta->data[(int32_T)b_f1 - 1].re;
          bi = eta->data[(int32_T)b_f1 - 1].im;
          if (bi == 0.0) {
            if (ai == 0.0) {
              teps.re = ar / kn;
              teps.im = 0.0;
            } else if (ar == 0.0) {
              teps.re = 0.0;
              teps.im = ai / kn;
            } else {
              teps.re = ar / kn;
              teps.im = ai / kn;
            }
          } else if (kn == 0.0) {
            if (ar == 0.0) {
              teps.re = ai / bi;
              teps.im = 0.0;
            } else if (ai == 0.0) {
              teps.re = 0.0;
              teps.im = -(ar / bi);
            } else {
              teps.re = ai / bi;
              teps.im = -(ar / bi);
            }
          } else {
            brm = muDoubleScalarAbs(kn);
            b_i = muDoubleScalarAbs(bi);
            if (brm > b_i) {
              b_i = bi / kn;
              bi = kn + b_i * bi;
              teps.re = (ar + b_i * ai) / bi;
              teps.im = (ai - b_i * ar) / bi;
            } else if (b_i == brm) {
              if (kn > 0.0) {
                kn = 0.5;
              } else {
                kn = -0.5;
              }

              if (bi > 0.0) {
                b_i = 0.5;
              } else {
                b_i = -0.5;
              }

              teps.re = (ar * kn + ai * b_i) / brm;
              teps.im = (ai * kn - ar * b_i) / brm;
            } else {
              b_i = kn / bi;
              bi += b_i * kn;
              teps.re = (b_i * ar + ai) / bi;
              teps.im = (b_i * ai - ar) / bi;
            }
          }

          /*  (OR): no square root (-> modified on 19.02.2017) */
        }

        if (norm(et) > teps.re) {
          /*  total internal reflection */
          msk = 1;
          exitg1 = true;
        } else {
          cart2rayfixed(sdp, eti, ehi);

          /*  (OR): eti -> unitary parallel vector (incident field) --- 1st interface */
          /*        ehi -> unitary perpendicular vector (incident field) --- 1st interface */
          /*  (OR): no square root (-> modified on 19.02.2017) */
          if (teps.im == 0.0) {
            b_re = 1.0 / teps.re;
          } else if (teps.re == 0.0) {
            b_re = 0.0;
          } else {
            brm = muDoubleScalarAbs(teps.re);
            b_i = muDoubleScalarAbs(teps.im);
            if (brm > b_i) {
              b_i = teps.im / teps.re;
              b_re = (1.0 + b_i * 0.0) / (teps.re + b_i * teps.im);
            } else if (b_i == brm) {
              if (teps.re > 0.0) {
                b_teps = 0.5;
              } else {
                b_teps = -0.5;
              }

              if (teps.im > 0.0) {
                d_teps = 0.5;
              } else {
                d_teps = -0.5;
              }

              b_re = (b_teps + 0.0 * d_teps) / brm;
            } else {
              b_i = teps.re / teps.im;
              b_re = b_i / (teps.im + b_i * teps.re);
            }
          }

          b_st.site = &d_emlrtRSI;
          bi = mpower(d0);
          b_st.site = &d_emlrtRSI;
          b_i = mpower(b_re);
          bi = 1.0 - b_i * (1.0 - bi);
          b_st.site = &d_emlrtRSI;
          b_sqrt(&b_st, &bi);
          kn = b_re * d0 - bi;
          for (i = 0; i < 3; i++) {
            st[i] = b_re * sdp[i] + kn * vnfaces_re[i];
          }

          kn = norm(st);
          for (i1 = 0; i1 < 3; i1++) {
            st[i1] /= kn;
          }

          cart2rayfixed(st, ett, eht);

          /*  (OR): ett -> unitary parallel vector (transmission field) --- 1st interface */
          /*        eht -> unitary perpendicular vector (transmission field) --- 1st interface */
          /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
          if ((f2 != -1.0) && (l + 1 == cnt)) {
            i1 = eta->size[0];
            i2 = (int32_T)SD->f0.tff[1000 + l];
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &xb_emlrtBCI, sp);
            }

            i1 = eta->size[0];
            i = (int32_T)f2;
            if (!((i >= 1) && (i <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, i1, &yb_emlrtBCI, sp);
            }

            if (eta->data[i2 - 1].re == eta->data[i - 1].re) {
              msk = 1;
              exitg1 = true;
            } else {
              /*  flag(2) to distinguish different possibilities when f2 ~= -1 */
              flag[1] = 4.0;

              /*  -> 2nd penetration point is P2 */
              guard1 = true;
            }
          } else {
            guard1 = true;
          }
        }
      }

      if (guard1) {
        if ((f2 != -1.0) && (l + 1 > 1) && (l + 1 != cnt)) {
          i1 = eta->size[0];
          i2 = (int32_T)SD->f0.tff[1000 + l];
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ac_emlrtBCI, sp);
          }

          i1 = eta->size[0];
          i = (int32_T)f2;
          if (!((i >= 1) && (i <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i1, &bc_emlrtBCI, sp);
          }

          if (eta->data[i2 - 1].re == eta->data[i - 1].re) {
            flag[1] = 5.0;

            /*  output penetration point is an input penetration point of a following penetration in the same path - same epsilon */
          } else {
            flag[1] = 6.0;

            /*  as above but different epsilon */
          }
        }

        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        i1 = (int32_T)SD->f0.tff[3000 + l];
        if (!((i1 >= 1) && (i1 <= 6))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &s_emlrtBCI, sp);
        }

        i1 = vnfaces->size[0];
        fe = (int32_T)SD->f0.tff[1000 + l];
        if (!((fe >= 1) && (fe <= i1))) {
          emlrtDynamicBoundsCheckR2012b(fe, 1, i1, &r_emlrtBCI, sp);
        }

        for (i1 = 0; i1 < 3; i1++) {
          dP[i1] = -vnfaces->data[((fe + vnfaces->size[0] * ((int32_T)SD->
            f0.tff[3000 + l] - 1)) + vnfaces->size[0] * vnfaces->size[1] * i1) -
            1];
        }

        /*  (OR): vector normal to 2nd face of block */
        cross(st, dP, et);

        /*  (OR): perpendicular vector of the penetrated wave */
        b_st.site = &c_emlrtRSI;
        b_re = mpower(norm(et));

        /*  (OR): sine square of the penetrated angle */
        ctr.re = 1.0 - b_re;
        ctr.im = 0.0;
        c_sqrt(&ctr);

        /*  (OR): cosine of the penetrated angle */
        if ((flag[1] == 0.0) || (flag[1] == 4.0)) {
          i1 = eta->size[0];
          i2 = (int32_T)SD->f0.tff[1000 + l];
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &t_emlrtBCI, sp);
          }

          kn = eta->data[(int32_T)SD->f0.tff[1000 + l] - 1].re;
          bi = eta->data[(int32_T)SD->f0.tff[1000 + l] - 1].im;
          if (bi == 0.0) {
            teps.re = 1.0 / kn;
            teps.im = 0.0;
          } else if (kn == 0.0) {
            teps.re = 0.0;
            teps.im = -(1.0 / bi);
          } else {
            brm = muDoubleScalarAbs(kn);
            b_i = muDoubleScalarAbs(bi);
            if (brm > b_i) {
              b_i = bi / kn;
              bi = kn + b_i * bi;
              teps.re = (1.0 + b_i * 0.0) / bi;
              teps.im = (0.0 - b_i) / bi;
            } else if (b_i == brm) {
              if (kn > 0.0) {
                kn = 0.5;
              } else {
                kn = -0.5;
              }

              if (bi > 0.0) {
                b_i = 0.5;
              } else {
                b_i = -0.5;
              }

              teps.re = (kn + 0.0 * b_i) / brm;
              teps.im = (0.0 * kn - b_i) / brm;
            } else {
              b_i = kn / bi;
              bi += b_i * kn;
              teps.re = b_i / bi;
              teps.im = (b_i * 0.0 - 1.0) / bi;
            }
          }
        } else {
          i1 = eta->size[0];
          i2 = (int32_T)f2;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &u_emlrtBCI, sp);
          }

          i1 = eta->size[0];
          i2 = (int32_T)SD->f0.tff[1000 + l];
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &v_emlrtBCI, sp);
          }

          ar = eta->data[(int32_T)f2 - 1].re;
          ai = eta->data[(int32_T)f2 - 1].im;
          kn = eta->data[(int32_T)SD->f0.tff[1000 + l] - 1].re;
          bi = eta->data[(int32_T)SD->f0.tff[1000 + l] - 1].im;
          if (bi == 0.0) {
            if (ai == 0.0) {
              teps.re = ar / kn;
              teps.im = 0.0;
            } else if (ar == 0.0) {
              teps.re = 0.0;
              teps.im = ai / kn;
            } else {
              teps.re = ar / kn;
              teps.im = ai / kn;
            }
          } else if (kn == 0.0) {
            if (ar == 0.0) {
              teps.re = ai / bi;
              teps.im = 0.0;
            } else if (ai == 0.0) {
              teps.re = 0.0;
              teps.im = -(ar / bi);
            } else {
              teps.re = ai / bi;
              teps.im = -(ar / bi);
            }
          } else {
            brm = muDoubleScalarAbs(kn);
            b_i = muDoubleScalarAbs(bi);
            if (brm > b_i) {
              b_i = bi / kn;
              bi = kn + b_i * bi;
              teps.re = (ar + b_i * ai) / bi;
              teps.im = (ai - b_i * ar) / bi;
            } else if (b_i == brm) {
              if (kn > 0.0) {
                kn = 0.5;
              } else {
                kn = -0.5;
              }

              if (bi > 0.0) {
                b_i = 0.5;
              } else {
                b_i = -0.5;
              }

              teps.re = (ar * kn + ai * b_i) / brm;
              teps.im = (ai * kn - ar * b_i) / brm;
            } else {
              b_i = kn / bi;
              bi += b_i * kn;
              teps.re = (b_i * ar + ai) / bi;
              teps.im = (b_i * ai - ar) / bi;
            }
          }

          /*  (OR): no square root (-> modified on 19.02.2017) */
        }

        if (norm(et) > teps.re) {
          /*  total internal reflection */
          msk = 1;
          exitg1 = true;
        } else {
          cart2rayfixed(st, etr, ehr);

          /*  (OR): etr -> unitary parallel vector (incident field) --- 2nd interface */
          /*        ehr -> unitary perpendicular vector (incident field) --- 2nd interface */
          /*  (OR): no square root (-> modified on 19.02.2017) */
          if (teps.im == 0.0) {
            inveta_im = 1.0 / teps.re;
          } else if (teps.re == 0.0) {
            inveta_im = 0.0;
          } else {
            brm = muDoubleScalarAbs(teps.re);
            b_i = muDoubleScalarAbs(teps.im);
            if (brm > b_i) {
              b_i = teps.im / teps.re;
              inveta_im = (1.0 + b_i * 0.0) / (teps.re + b_i * teps.im);
            } else if (b_i == brm) {
              if (teps.re > 0.0) {
                c_teps = 0.5;
              } else {
                c_teps = -0.5;
              }

              if (teps.im > 0.0) {
                e_teps = 0.5;
              } else {
                e_teps = -0.5;
              }

              inveta_im = (c_teps + 0.0 * e_teps) / brm;
            } else {
              b_i = teps.re / teps.im;
              inveta_im = b_i / (teps.im + b_i * teps.re);
            }
          }

          b_st.site = &b_emlrtRSI;
          bi = mpower(ctr.re);
          b_st.site = &b_emlrtRSI;
          b_i = mpower(inveta_im);
          bi = 1.0 - b_i * (1.0 - bi);
          b_st.site = &b_emlrtRSI;
          b_sqrt(&b_st, &bi);
          kn = inveta_im * ctr.re - bi;
          for (i1 = 0; i1 < 3; i1++) {
            st[i1] = inveta_im * st[i1] + kn * vnfaces_re[i1];
          }

          kn = norm(st);
          for (i1 = 0; i1 < 3; i1++) {
            st[i1] /= kn;
          }

          cart2rayfixed(st, dP, et);

          /*  (OR): ett -> unitary parallel vector (transmission field) --- 2nd interface */
          /*        eht -> unitary perpendicular vector (transmission field) --- 2nd interface */
          /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
          if (msk != 1) {
            i1 = eta->size[0];
            i2 = (int32_T)SD->f0.tff[l];
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &w_emlrtBCI, sp);
            }

            /*  		sqrem1         = uno-sqreta; % (OR): no "1-[...]" (-> modified on 28.09.2017) */
            if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
              emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &cc_emlrtBCI, sp);
            }

            mnbpen_data[l] = SD->f0.tff[l];

            /*  block number */
            if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
              emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qb_emlrtBCI, sp);
            }

            for (i1 = 0; i1 < 2; i1++) {
              mpflag_data[l + cnt * i1] = (int8_T)flag[i1];
            }

            /*  vector flag */
            dc0 = eta->data[(int32_T)SD->f0.tff[l] - 1];
            c_sqrt(&dc0);
            inveta_re = K * dp;
            if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
              emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &dc_emlrtBCI, sp);
            }

            mploss_data[l].re = 0.0 * -dc0.re - inveta_re * -dc0.im;
            if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
              emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &dc_emlrtBCI, sp);
            }

            mploss_data[l].im = 0.0 * -dc0.im + inveta_re * -dc0.re;
            if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
              emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &dc_emlrtBCI, sp);
            }

            b_exp(&mploss_data[l]);

            /*  penetration loss */
            if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
              emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &ec_emlrtBCI, sp);
            }

            mpd_data[l] = dp;

            /*  length of the penetration path */
            i1 = eta->size[0];
            i2 = (int32_T)SD->f0.tff[l];
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &fc_emlrtBCI, sp);
            }

            bi = eta->data[i2 - 1].re;
            b_st.site = &emlrtRSI;
            b_sqrt(&b_st, &bi);
            if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
              emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &gc_emlrtBCI, sp);
            }

            mepd_data[l] = dp * bi;

            /*  effective length of the penetration path */
            if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
              emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &jb_emlrtBCI, sp);
            }

            for (i1 = 0; i1 < 3; i1++) {
              SD->f0.msti_data[l + cnt * i1].re = eti[i1];
              SD->f0.msti_data[l + cnt * i1].im = 0.0;
            }

            /*  perpendicular and parallel polarization vectors at each interface */
            if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
              emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &kb_emlrtBCI, sp);
            }

            for (i1 = 0; i1 < 3; i1++) {
              SD->f0.mstt_data[l + cnt * i1].re = ett[i1];
              SD->f0.mstt_data[l + cnt * i1].im = 0.0;
            }

            if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
              emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &ib_emlrtBCI, sp);
            }

            for (i1 = 0; i1 < 3; i1++) {
              SD->f0.mshi_data[l + cnt * i1].re = ehi[i1];
              SD->f0.mshi_data[l + cnt * i1].im = 0.0;
            }

            if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
              emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &lb_emlrtBCI, sp);
            }

            for (i1 = 0; i1 < 3; i1++) {
              SD->f0.msht_data[l + cnt * i1].re = eht[i1];
              SD->f0.msht_data[l + cnt * i1].im = 0.0;
            }

            if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
              emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &ob_emlrtBCI, sp);
            }

            for (i1 = 0; i1 < 3; i1++) {
              SD->f0.mstr_data[l + cnt * i1].re = etr[i1];
              SD->f0.mstr_data[l + cnt * i1].im = 0.0;
            }

            if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
              emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &nb_emlrtBCI, sp);
            }

            for (i1 = 0; i1 < 3; i1++) {
              SD->f0.msto_data[l + cnt * i1].re = dP[i1];
              SD->f0.msto_data[l + cnt * i1].im = 0.0;
            }

            if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
              emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pb_emlrtBCI, sp);
            }

            for (i1 = 0; i1 < 3; i1++) {
              SD->f0.mshr_data[l + cnt * i1].re = ehr[i1];
              SD->f0.mshr_data[l + cnt * i1].im = 0.0;
            }

            if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
              emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &mb_emlrtBCI, sp);
            }

            for (i1 = 0; i1 < 3; i1++) {
              SD->f0.msho_data[l + cnt * i1].re = et[i1];
              SD->f0.msho_data[l + cnt * i1].im = 0.0;
            }

            if (flag[0] == 1.0) {
              if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &hc_emlrtBCI, sp);
              }

              mTti_data[l].re = 0.0;
              if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &hc_emlrtBCI, sp);
              }

              mTti_data[l].im = 0.0;
              if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &ic_emlrtBCI, sp);
              }

              mThi_data[l].re = 0.0;
              if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &ic_emlrtBCI, sp);
              }

              mThi_data[l].im = 0.0;
            }

            if (flag[1] == 4.0) {
              if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &jc_emlrtBCI, sp);
              }

              mTtt_data[l].re = 0.0;
              if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &jc_emlrtBCI, sp);
              }

              mTtt_data[l].im = 0.0;
              if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &kc_emlrtBCI, sp);
              }

              mTht_data[l].re = 0.0;
              if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &kc_emlrtBCI, sp);
              }

              mTht_data[l].im = 0.0;
            }

            if ((flag[0] == 0.0) || (flag[0] == 3.0)) {
              if (flag[0] == 0.0) {
                i1 = eta->size[0];
                i2 = (int32_T)SD->f0.tff[l];
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &lc_emlrtBCI, sp);
                }

                teps.re = eta->data[i2 - 1].re - re;
                i1 = eta->size[0];
                i2 = (int32_T)SD->f0.tff[l];
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &lc_emlrtBCI, sp);
                }

                teps.im = eta->data[i2 - 1].im;
                c_sqrt(&teps);
                i1 = eta->size[0];
                i2 = (int32_T)SD->f0.tff[l];
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &x_emlrtBCI, sp);
                }

                kn = eta->data[(int32_T)SD->f0.tff[l] - 1].re;
                bi = eta->data[(int32_T)SD->f0.tff[l] - 1].im;
                if (bi == 0.0) {
                  inveta_re = 1.0 / kn;
                  inveta_im = 0.0;
                } else if (kn == 0.0) {
                  inveta_re = 0.0;
                  inveta_im = -(1.0 / bi);
                } else {
                  brm = muDoubleScalarAbs(kn);
                  b_i = muDoubleScalarAbs(bi);
                  if (brm > b_i) {
                    b_i = bi / kn;
                    bi = kn + b_i * bi;
                    inveta_re = (1.0 + b_i * 0.0) / bi;
                    inveta_im = (0.0 - b_i) / bi;
                  } else if (b_i == brm) {
                    if (kn > 0.0) {
                      kn = 0.5;
                    } else {
                      kn = -0.5;
                    }

                    if (bi > 0.0) {
                      b_i = 0.5;
                    } else {
                      b_i = -0.5;
                    }

                    inveta_re = (kn + 0.0 * b_i) / brm;
                    inveta_im = (0.0 * kn - b_i) / brm;
                  } else {
                    b_i = kn / bi;
                    bi += b_i * kn;
                    inveta_re = b_i / bi;
                    inveta_im = (b_i * 0.0 - 1.0) / bi;
                  }
                }
              } else {
                i1 = eta->size[0];
                i2 = (int32_T)SD->f0.tff[l];
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &y_emlrtBCI, sp);
                }

                i1 = eta->size[0];
                i2 = (int32_T)b_f1;
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ab_emlrtBCI, sp);
                }

                ar = eta->data[(int32_T)SD->f0.tff[l] - 1].re;
                ai = eta->data[(int32_T)SD->f0.tff[l] - 1].im;
                kn = eta->data[(int32_T)b_f1 - 1].re;
                bi = eta->data[(int32_T)b_f1 - 1].im;
                if (bi == 0.0) {
                  if (ai == 0.0) {
                    inveta_im = ar / kn;
                    inveta_re = 0.0;
                  } else if (ar == 0.0) {
                    inveta_im = 0.0;
                    inveta_re = ai / kn;
                  } else {
                    inveta_im = ar / kn;
                    inveta_re = ai / kn;
                  }
                } else if (kn == 0.0) {
                  if (ar == 0.0) {
                    inveta_im = ai / bi;
                    inveta_re = 0.0;
                  } else if (ai == 0.0) {
                    inveta_im = 0.0;
                    inveta_re = -(ar / bi);
                  } else {
                    inveta_im = ai / bi;
                    inveta_re = -(ar / bi);
                  }
                } else {
                  brm = muDoubleScalarAbs(kn);
                  b_i = muDoubleScalarAbs(bi);
                  if (brm > b_i) {
                    b_i = bi / kn;
                    bi = kn + b_i * bi;
                    inveta_im = (ar + b_i * ai) / bi;
                    inveta_re = (ai - b_i * ar) / bi;
                  } else if (b_i == brm) {
                    if (kn > 0.0) {
                      kn = 0.5;
                    } else {
                      kn = -0.5;
                    }

                    if (bi > 0.0) {
                      b_i = 0.5;
                    } else {
                      b_i = -0.5;
                    }

                    inveta_im = (ar * kn + ai * b_i) / brm;
                    inveta_re = (ai * kn - ar * b_i) / brm;
                  } else {
                    b_i = kn / bi;
                    bi += b_i * kn;
                    inveta_im = (b_i * ar + ai) / bi;
                    inveta_re = (b_i * ai - ar) / bi;
                  }
                }

                teps.re = inveta_im - re;
                teps.im = inveta_re;
                c_sqrt(&teps);
                i1 = eta->size[0];
                i2 = (int32_T)b_f1;
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &bb_emlrtBCI, sp);
                }

                i1 = eta->size[0];
                i2 = (int32_T)SD->f0.tff[l];
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &cb_emlrtBCI, sp);
                }

                ar = eta->data[(int32_T)b_f1 - 1].re;
                ai = eta->data[(int32_T)b_f1 - 1].im;
                kn = eta->data[(int32_T)SD->f0.tff[l] - 1].re;
                bi = eta->data[(int32_T)SD->f0.tff[l] - 1].im;
                if (bi == 0.0) {
                  if (ai == 0.0) {
                    inveta_re = ar / kn;
                    inveta_im = 0.0;
                  } else if (ar == 0.0) {
                    inveta_re = 0.0;
                    inveta_im = ai / kn;
                  } else {
                    inveta_re = ar / kn;
                    inveta_im = ai / kn;
                  }
                } else if (kn == 0.0) {
                  if (ar == 0.0) {
                    inveta_re = ai / bi;
                    inveta_im = 0.0;
                  } else if (ai == 0.0) {
                    inveta_re = 0.0;
                    inveta_im = -(ar / bi);
                  } else {
                    inveta_re = ai / bi;
                    inveta_im = -(ar / bi);
                  }
                } else {
                  brm = muDoubleScalarAbs(kn);
                  b_i = muDoubleScalarAbs(bi);
                  if (brm > b_i) {
                    b_i = bi / kn;
                    bi = kn + b_i * bi;
                    inveta_re = (ar + b_i * ai) / bi;
                    inveta_im = (ai - b_i * ar) / bi;
                  } else if (b_i == brm) {
                    if (kn > 0.0) {
                      kn = 0.5;
                    } else {
                      kn = -0.5;
                    }

                    if (bi > 0.0) {
                      b_i = 0.5;
                    } else {
                      b_i = -0.5;
                    }

                    inveta_re = (ar * kn + ai * b_i) / brm;
                    inveta_im = (ai * kn - ar * b_i) / brm;
                  } else {
                    b_i = kn / bi;
                    bi += b_i * kn;
                    inveta_re = (b_i * ar + ai) / bi;
                    inveta_im = (b_i * ai - ar) / bi;
                  }
                }
              }

              ar = 2.0 * d0;
              kn = d0 + teps.re;
              if (teps.im == 0.0) {
                if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                  emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &oc_emlrtBCI, sp);
                }

                mTti_data[l].re = ar / kn;
                if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                  emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &oc_emlrtBCI, sp);
                }

                mTti_data[l].im = 0.0;
              } else if (kn == 0.0) {
                if (ar == 0.0) {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &oc_emlrtBCI,
                      sp);
                  }

                  mTti_data[l].re = 0.0 / teps.im;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &oc_emlrtBCI,
                      sp);
                  }

                  mTti_data[l].im = 0.0;
                } else {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &oc_emlrtBCI,
                      sp);
                  }

                  mTti_data[l].re = 0.0;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &oc_emlrtBCI,
                      sp);
                  }

                  mTti_data[l].im = -(ar / teps.im);
                }
              } else {
                brm = muDoubleScalarAbs(kn);
                b_i = muDoubleScalarAbs(teps.im);
                if (brm > b_i) {
                  b_i = teps.im / kn;
                  bi = kn + b_i * teps.im;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &oc_emlrtBCI,
                      sp);
                  }

                  mTti_data[l].re = (ar + b_i * 0.0) / bi;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &oc_emlrtBCI,
                      sp);
                  }

                  mTti_data[l].im = (0.0 - b_i * ar) / bi;
                } else if (b_i == brm) {
                  if (kn > 0.0) {
                    kn = 0.5;
                  } else {
                    kn = -0.5;
                  }

                  if (teps.im > 0.0) {
                    b_i = 0.5;
                  } else {
                    b_i = -0.5;
                  }

                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &oc_emlrtBCI,
                      sp);
                  }

                  mTti_data[l].re = (ar * kn + 0.0 * b_i) / brm;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &oc_emlrtBCI,
                      sp);
                  }

                  mTti_data[l].im = (0.0 * kn - ar * b_i) / brm;
                } else {
                  b_i = kn / teps.im;
                  bi = teps.im + b_i * kn;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &oc_emlrtBCI,
                      sp);
                  }

                  mTti_data[l].re = b_i * ar / bi;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &oc_emlrtBCI,
                      sp);
                  }

                  mTti_data[l].im = (b_i * 0.0 - ar) / bi;
                }
              }

              /*  parallel and perpendicular transmission coefficients at 1st interface */
              dc0.re = inveta_re;
              dc0.im = inveta_im;
              c_sqrt(&dc0);
              dc1.re = inveta_re;
              dc1.im = inveta_im;
              c_sqrt(&dc1);
              teps.re = 1.0 - (inveta_re * re - inveta_im * 0.0);
              teps.im = 0.0 - (inveta_re * 0.0 + inveta_im * re);
              c_sqrt(&teps);
              re = 2.0 * dc0.re;
              inveta_re = 2.0 * dc0.im;
              inveta_im = re * d0 - inveta_re * 0.0;
              inveta_re = re * 0.0 + inveta_re * d0;
              kn = d0 + (dc1.re * teps.re - dc1.im * teps.im);
              bi = dc1.re * teps.im + dc1.im * teps.re;
              if (bi == 0.0) {
                if (inveta_re == 0.0) {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pc_emlrtBCI,
                      sp);
                  }

                  mThi_data[l].re = inveta_im / kn;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pc_emlrtBCI,
                      sp);
                  }

                  mThi_data[l].im = 0.0;
                } else if (inveta_im == 0.0) {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pc_emlrtBCI,
                      sp);
                  }

                  mThi_data[l].re = 0.0;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pc_emlrtBCI,
                      sp);
                  }

                  mThi_data[l].im = inveta_re / kn;
                } else {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pc_emlrtBCI,
                      sp);
                  }

                  mThi_data[l].re = inveta_im / kn;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pc_emlrtBCI,
                      sp);
                  }

                  mThi_data[l].im = inveta_re / kn;
                }
              } else if (kn == 0.0) {
                if (inveta_im == 0.0) {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pc_emlrtBCI,
                      sp);
                  }

                  mThi_data[l].re = inveta_re / bi;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pc_emlrtBCI,
                      sp);
                  }

                  mThi_data[l].im = 0.0;
                } else if (inveta_re == 0.0) {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pc_emlrtBCI,
                      sp);
                  }

                  mThi_data[l].re = 0.0;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pc_emlrtBCI,
                      sp);
                  }

                  mThi_data[l].im = -(inveta_im / bi);
                } else {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pc_emlrtBCI,
                      sp);
                  }

                  mThi_data[l].re = inveta_re / bi;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pc_emlrtBCI,
                      sp);
                  }

                  mThi_data[l].im = -(inveta_im / bi);
                }
              } else {
                brm = muDoubleScalarAbs(kn);
                b_i = muDoubleScalarAbs(bi);
                if (brm > b_i) {
                  b_i = bi / kn;
                  bi = kn + b_i * bi;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pc_emlrtBCI,
                      sp);
                  }

                  mThi_data[l].re = (inveta_im + b_i * inveta_re) / bi;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pc_emlrtBCI,
                      sp);
                  }

                  mThi_data[l].im = (inveta_re - b_i * inveta_im) / bi;
                } else if (b_i == brm) {
                  if (kn > 0.0) {
                    kn = 0.5;
                  } else {
                    kn = -0.5;
                  }

                  if (bi > 0.0) {
                    b_i = 0.5;
                  } else {
                    b_i = -0.5;
                  }

                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pc_emlrtBCI,
                      sp);
                  }

                  mThi_data[l].re = (inveta_im * kn + inveta_re * b_i) / brm;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pc_emlrtBCI,
                      sp);
                  }

                  mThi_data[l].im = (inveta_re * kn - inveta_im * b_i) / brm;
                } else {
                  b_i = kn / bi;
                  bi += b_i * kn;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pc_emlrtBCI,
                      sp);
                  }

                  mThi_data[l].re = (b_i * inveta_im + inveta_re) / bi;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &pc_emlrtBCI,
                      sp);
                  }

                  mThi_data[l].im = (b_i * inveta_re - inveta_im) / bi;
                }
              }
            }

            if ((flag[1] == 0.0) || (flag[1] == 6.0)) {
              if (flag[1] == 0.0) {
                i1 = eta->size[0];
                i2 = (int32_T)SD->f0.tff[l];
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &db_emlrtBCI, sp);
                }

                kn = eta->data[(int32_T)SD->f0.tff[l] - 1].re;
                bi = eta->data[(int32_T)SD->f0.tff[l] - 1].im;
                if (bi == 0.0) {
                  re = 1.0 / kn;
                  inveta_re = 0.0;
                } else if (kn == 0.0) {
                  re = 0.0;
                  inveta_re = -(1.0 / bi);
                } else {
                  brm = muDoubleScalarAbs(kn);
                  b_i = muDoubleScalarAbs(bi);
                  if (brm > b_i) {
                    b_i = bi / kn;
                    bi = kn + b_i * bi;
                    re = (1.0 + b_i * 0.0) / bi;
                    inveta_re = (0.0 - b_i) / bi;
                  } else if (b_i == brm) {
                    if (kn > 0.0) {
                      kn = 0.5;
                    } else {
                      kn = -0.5;
                    }

                    if (bi > 0.0) {
                      b_i = 0.5;
                    } else {
                      b_i = -0.5;
                    }

                    re = (kn + 0.0 * b_i) / brm;
                    inveta_re = (0.0 * kn - b_i) / brm;
                  } else {
                    b_i = kn / bi;
                    bi += b_i * kn;
                    re = b_i / bi;
                    inveta_re = (b_i * 0.0 - 1.0) / bi;
                  }
                }

                teps.re = re - b_re;
                teps.im = inveta_re;
                c_sqrt(&teps);
                i1 = eta->size[0];
                i2 = (int32_T)SD->f0.tff[l];
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &mc_emlrtBCI, sp);
                }

                inveta_re = eta->data[i2 - 1].re;
                i1 = eta->size[0];
                i2 = (int32_T)SD->f0.tff[l];
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &mc_emlrtBCI, sp);
                }

                inveta_im = eta->data[i2 - 1].im;
              } else {
                i1 = eta->size[0];
                i2 = (int32_T)f2;
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &eb_emlrtBCI, sp);
                }

                i1 = eta->size[0];
                i2 = (int32_T)SD->f0.tff[1000 + l];
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &fb_emlrtBCI, sp);
                }

                ar = eta->data[(int32_T)f2 - 1].re;
                ai = eta->data[(int32_T)f2 - 1].im;
                kn = eta->data[(int32_T)SD->f0.tff[1000 + l] - 1].re;
                bi = eta->data[(int32_T)SD->f0.tff[1000 + l] - 1].im;
                if (bi == 0.0) {
                  if (ai == 0.0) {
                    re = ar / kn;
                    inveta_re = 0.0;
                  } else if (ar == 0.0) {
                    re = 0.0;
                    inveta_re = ai / kn;
                  } else {
                    re = ar / kn;
                    inveta_re = ai / kn;
                  }
                } else if (kn == 0.0) {
                  if (ar == 0.0) {
                    re = ai / bi;
                    inveta_re = 0.0;
                  } else if (ai == 0.0) {
                    re = 0.0;
                    inveta_re = -(ar / bi);
                  } else {
                    re = ai / bi;
                    inveta_re = -(ar / bi);
                  }
                } else {
                  brm = muDoubleScalarAbs(kn);
                  b_i = muDoubleScalarAbs(bi);
                  if (brm > b_i) {
                    b_i = bi / kn;
                    bi = kn + b_i * bi;
                    re = (ar + b_i * ai) / bi;
                    inveta_re = (ai - b_i * ar) / bi;
                  } else if (b_i == brm) {
                    if (kn > 0.0) {
                      kn = 0.5;
                    } else {
                      kn = -0.5;
                    }

                    if (bi > 0.0) {
                      b_i = 0.5;
                    } else {
                      b_i = -0.5;
                    }

                    re = (ar * kn + ai * b_i) / brm;
                    inveta_re = (ai * kn - ar * b_i) / brm;
                  } else {
                    b_i = kn / bi;
                    bi += b_i * kn;
                    re = (b_i * ar + ai) / bi;
                    inveta_re = (b_i * ai - ar) / bi;
                  }
                }

                teps.re = re - b_re;
                teps.im = inveta_re;
                c_sqrt(&teps);
                i1 = eta->size[0];
                i2 = (int32_T)SD->f0.tff[1000 + l];
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &gb_emlrtBCI, sp);
                }

                i1 = eta->size[0];
                i2 = (int32_T)f2;
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &hb_emlrtBCI, sp);
                }

                ar = eta->data[(int32_T)SD->f0.tff[1000 + l] - 1].re;
                ai = eta->data[(int32_T)SD->f0.tff[1000 + l] - 1].im;
                kn = eta->data[(int32_T)f2 - 1].re;
                bi = eta->data[(int32_T)f2 - 1].im;
                if (bi == 0.0) {
                  if (ai == 0.0) {
                    inveta_re = ar / kn;
                    inveta_im = 0.0;
                  } else if (ar == 0.0) {
                    inveta_re = 0.0;
                    inveta_im = ai / kn;
                  } else {
                    inveta_re = ar / kn;
                    inveta_im = ai / kn;
                  }
                } else if (kn == 0.0) {
                  if (ar == 0.0) {
                    inveta_re = ai / bi;
                    inveta_im = 0.0;
                  } else if (ai == 0.0) {
                    inveta_re = 0.0;
                    inveta_im = -(ar / bi);
                  } else {
                    inveta_re = ai / bi;
                    inveta_im = -(ar / bi);
                  }
                } else {
                  brm = muDoubleScalarAbs(kn);
                  b_i = muDoubleScalarAbs(bi);
                  if (brm > b_i) {
                    b_i = bi / kn;
                    bi = kn + b_i * bi;
                    inveta_re = (ar + b_i * ai) / bi;
                    inveta_im = (ai - b_i * ar) / bi;
                  } else if (b_i == brm) {
                    if (kn > 0.0) {
                      kn = 0.5;
                    } else {
                      kn = -0.5;
                    }

                    if (bi > 0.0) {
                      b_i = 0.5;
                    } else {
                      b_i = -0.5;
                    }

                    inveta_re = (ar * kn + ai * b_i) / brm;
                    inveta_im = (ai * kn - ar * b_i) / brm;
                  } else {
                    b_i = kn / bi;
                    bi += b_i * kn;
                    inveta_re = (b_i * ar + ai) / bi;
                    inveta_im = (b_i * ai - ar) / bi;
                  }
                }
              }

              ar = 2.0 * ctr.re;
              ai = 2.0 * ctr.im;
              kn = ctr.re + teps.re;
              bi = ctr.im + teps.im;
              if (bi == 0.0) {
                if (ai == 0.0) {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qc_emlrtBCI,
                      sp);
                  }

                  mTtt_data[l].re = ar / kn;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qc_emlrtBCI,
                      sp);
                  }

                  mTtt_data[l].im = 0.0;
                } else if (ar == 0.0) {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qc_emlrtBCI,
                      sp);
                  }

                  mTtt_data[l].re = 0.0;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qc_emlrtBCI,
                      sp);
                  }

                  mTtt_data[l].im = ai / kn;
                } else {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qc_emlrtBCI,
                      sp);
                  }

                  mTtt_data[l].re = ar / kn;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qc_emlrtBCI,
                      sp);
                  }

                  mTtt_data[l].im = ai / kn;
                }
              } else if (kn == 0.0) {
                if (ar == 0.0) {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qc_emlrtBCI,
                      sp);
                  }

                  mTtt_data[l].re = ai / bi;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qc_emlrtBCI,
                      sp);
                  }

                  mTtt_data[l].im = 0.0;
                } else if (ai == 0.0) {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qc_emlrtBCI,
                      sp);
                  }

                  mTtt_data[l].re = 0.0;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qc_emlrtBCI,
                      sp);
                  }

                  mTtt_data[l].im = -(ar / bi);
                } else {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qc_emlrtBCI,
                      sp);
                  }

                  mTtt_data[l].re = ai / bi;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qc_emlrtBCI,
                      sp);
                  }

                  mTtt_data[l].im = -(ar / bi);
                }
              } else {
                brm = muDoubleScalarAbs(kn);
                b_i = muDoubleScalarAbs(bi);
                if (brm > b_i) {
                  b_i = bi / kn;
                  bi = kn + b_i * bi;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qc_emlrtBCI,
                      sp);
                  }

                  mTtt_data[l].re = (ar + b_i * ai) / bi;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qc_emlrtBCI,
                      sp);
                  }

                  mTtt_data[l].im = (ai - b_i * ar) / bi;
                } else if (b_i == brm) {
                  if (kn > 0.0) {
                    kn = 0.5;
                  } else {
                    kn = -0.5;
                  }

                  if (bi > 0.0) {
                    b_i = 0.5;
                  } else {
                    b_i = -0.5;
                  }

                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qc_emlrtBCI,
                      sp);
                  }

                  mTtt_data[l].re = (ar * kn + ai * b_i) / brm;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qc_emlrtBCI,
                      sp);
                  }

                  mTtt_data[l].im = (ai * kn - ar * b_i) / brm;
                } else {
                  b_i = kn / bi;
                  bi += b_i * kn;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qc_emlrtBCI,
                      sp);
                  }

                  mTtt_data[l].re = (b_i * ar + ai) / bi;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &qc_emlrtBCI,
                      sp);
                  }

                  mTtt_data[l].im = (b_i * ai - ar) / bi;
                }
              }

              /*  parallel and perpendicular transmission coefficients at 2nd interface */
              dc0.re = inveta_re;
              dc0.im = inveta_im;
              c_sqrt(&dc0);
              dc1.re = inveta_re;
              dc1.im = inveta_im;
              c_sqrt(&dc1);
              teps.re = 1.0 - (inveta_re * b_re - inveta_im * 0.0);
              teps.im = 0.0 - (inveta_re * 0.0 + inveta_im * b_re);
              c_sqrt(&teps);
              re = 2.0 * dc0.re;
              inveta_re = 2.0 * dc0.im;
              b_re = re * ctr.re - inveta_re * ctr.im;
              inveta_re = re * ctr.im + inveta_re * ctr.re;
              kn = ctr.re + (dc1.re * teps.re - dc1.im * teps.im);
              bi = ctr.im + (dc1.re * teps.im + dc1.im * teps.re);
              if (bi == 0.0) {
                if (inveta_re == 0.0) {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &rc_emlrtBCI,
                      sp);
                  }

                  mTht_data[l].re = b_re / kn;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &rc_emlrtBCI,
                      sp);
                  }

                  mTht_data[l].im = 0.0;
                } else if (b_re == 0.0) {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &rc_emlrtBCI,
                      sp);
                  }

                  mTht_data[l].re = 0.0;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &rc_emlrtBCI,
                      sp);
                  }

                  mTht_data[l].im = inveta_re / kn;
                } else {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &rc_emlrtBCI,
                      sp);
                  }

                  mTht_data[l].re = b_re / kn;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &rc_emlrtBCI,
                      sp);
                  }

                  mTht_data[l].im = inveta_re / kn;
                }
              } else if (kn == 0.0) {
                if (b_re == 0.0) {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &rc_emlrtBCI,
                      sp);
                  }

                  mTht_data[l].re = inveta_re / bi;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &rc_emlrtBCI,
                      sp);
                  }

                  mTht_data[l].im = 0.0;
                } else if (inveta_re == 0.0) {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &rc_emlrtBCI,
                      sp);
                  }

                  mTht_data[l].re = 0.0;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &rc_emlrtBCI,
                      sp);
                  }

                  mTht_data[l].im = -(b_re / bi);
                } else {
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &rc_emlrtBCI,
                      sp);
                  }

                  mTht_data[l].re = inveta_re / bi;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &rc_emlrtBCI,
                      sp);
                  }

                  mTht_data[l].im = -(b_re / bi);
                }
              } else {
                brm = muDoubleScalarAbs(kn);
                b_i = muDoubleScalarAbs(bi);
                if (brm > b_i) {
                  b_i = bi / kn;
                  bi = kn + b_i * bi;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &rc_emlrtBCI,
                      sp);
                  }

                  mTht_data[l].re = (b_re + b_i * inveta_re) / bi;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &rc_emlrtBCI,
                      sp);
                  }

                  mTht_data[l].im = (inveta_re - b_i * b_re) / bi;
                } else if (b_i == brm) {
                  if (kn > 0.0) {
                    kn = 0.5;
                  } else {
                    kn = -0.5;
                  }

                  if (bi > 0.0) {
                    b_i = 0.5;
                  } else {
                    b_i = -0.5;
                  }

                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &rc_emlrtBCI,
                      sp);
                  }

                  mTht_data[l].re = (b_re * kn + inveta_re * b_i) / brm;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &rc_emlrtBCI,
                      sp);
                  }

                  mTht_data[l].im = (inveta_re * kn - b_re * b_i) / brm;
                } else {
                  b_i = kn / bi;
                  bi += b_i * kn;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &rc_emlrtBCI,
                      sp);
                  }

                  mTht_data[l].re = (b_i * b_re + inveta_re) / bi;
                  if (!((l + 1 >= 1) && (l + 1 <= cnt))) {
                    emlrtDynamicBoundsCheckR2012b(l + 1, 1, cnt, &rc_emlrtBCI,
                      sp);
                  }

                  mTht_data[l].im = (b_i * inveta_re - b_re) / bi;
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
  }

  /*  1 -> masking, 2 -> penetration, and 0 -> nothing */
  /*  number of penetrations per path */
  if (msk == 2) {
    b_m->shi.size[0] = cnt;
    b_m->shi.size[1] = 3;
    l = cnt * 3;
    for (i1 = 0; i1 < l; i1++) {
      b_m->shi.data[i1] = SD->f0.mshi_data[i1];
    }

    b_m->sti.size[0] = cnt;
    b_m->sti.size[1] = 3;
    l = cnt * 3;
    for (i1 = 0; i1 < l; i1++) {
      b_m->sti.data[i1] = SD->f0.msti_data[i1];
    }

    b_m->stt.size[0] = cnt;
    b_m->stt.size[1] = 3;
    l = cnt * 3;
    for (i1 = 0; i1 < l; i1++) {
      b_m->stt.data[i1] = SD->f0.mstt_data[i1];
    }

    b_m->sht.size[0] = cnt;
    b_m->sht.size[1] = 3;
    l = cnt * 3;
    for (i1 = 0; i1 < l; i1++) {
      b_m->sht.data[i1] = SD->f0.msht_data[i1];
    }

    b_m->sho.size[0] = cnt;
    b_m->sho.size[1] = 3;
    l = cnt * 3;
    for (i1 = 0; i1 < l; i1++) {
      b_m->sho.data[i1] = SD->f0.msho_data[i1];
    }

    b_m->sto.size[0] = cnt;
    b_m->sto.size[1] = 3;
    l = cnt * 3;
    for (i1 = 0; i1 < l; i1++) {
      b_m->sto.data[i1] = SD->f0.msto_data[i1];
    }

    b_m->str.size[0] = cnt;
    b_m->str.size[1] = 3;
    l = cnt * 3;
    for (i1 = 0; i1 < l; i1++) {
      b_m->str.data[i1] = SD->f0.mstr_data[i1];
    }

    b_m->shr.size[0] = cnt;
    b_m->shr.size[1] = 3;
    l = cnt * 3;
    for (i1 = 0; i1 < l; i1++) {
      b_m->shr.data[i1] = SD->f0.mshr_data[i1];
    }

    b_m->Tti.size[0] = cnt;
    b_m->Tti.size[1] = 1;
    for (i1 = 0; i1 < cnt; i1++) {
      b_m->Tti.data[i1] = mTti_data[i1];
    }

    b_m->Thi.size[0] = cnt;
    b_m->Thi.size[1] = 1;
    for (i1 = 0; i1 < cnt; i1++) {
      b_m->Thi.data[i1] = mThi_data[i1];
    }

    b_m->Ttt.size[0] = cnt;
    b_m->Ttt.size[1] = 1;
    for (i1 = 0; i1 < cnt; i1++) {
      b_m->Ttt.data[i1] = mTtt_data[i1];
    }

    b_m->Tht.size[0] = cnt;
    b_m->Tht.size[1] = 1;
    for (i1 = 0; i1 < cnt; i1++) {
      b_m->Tht.data[i1] = mTht_data[i1];
    }

    b_m->ploss.size[0] = cnt;
    b_m->ploss.size[1] = 1;
    for (i1 = 0; i1 < cnt; i1++) {
      b_m->ploss.data[i1] = mploss_data[i1];
    }

    b_m->pd.size[0] = cnt;
    for (i1 = 0; i1 < cnt; i1++) {
      b_m->pd.data[i1] = mpd_data[i1];
    }

    b_m->epd.size[0] = cnt;
    for (i1 = 0; i1 < cnt; i1++) {
      b_m->epd.data[i1] = mepd_data[i1];
    }

    b_m->nbpen.size[0] = cnt;
    for (i1 = 0; i1 < cnt; i1++) {
      b_m->nbpen.data[i1] = mnbpen_data[i1];
    }

    b_m->pflag.size[0] = cnt;
    b_m->pflag.size[1] = 2;
    l = cnt << 1;
    for (i1 = 0; i1 < l; i1++) {
      b_m->pflag.data[i1] = mpflag_data[i1];
    }

    b_m->mask = 2.0;
    b_m->npb = cnt;
  } else {
    for (i1 = 0; i1 < 3; i1++) {
      t0_shi[i1].re = 0;
      t0_shi[i1].im = 0;
      t0_sti[i1].re = 0;
      t0_sti[i1].im = 0;
      t0_stt[i1].re = 0;
      t0_stt[i1].im = 0;
      t0_sht[i1].re = 0;
      t0_sht[i1].im = 0;
      t0_sho[i1].re = 0;
      t0_sho[i1].im = 0;
      t0_sto[i1].re = 0;
      t0_sto[i1].im = 0;
      t0_str[i1].re = 0;
      t0_str[i1].im = 0;
      t0_shr[i1].re = 0;
      t0_shr[i1].im = 0;
      t0_Tti[i1].re = 0;
      t0_Tti[i1].im = 0;
      t0_Thi[i1].re = 0;
      t0_Thi[i1].im = 0;
      t0_Ttt[i1].re = 0;
      t0_Ttt[i1].im = 0;
      t0_Tht[i1].re = 0;
      t0_Tht[i1].im = 0;
      t0_ploss[i1].re = 0;
      t0_ploss[i1].im = 0;
    }

    b_m->shi.size[0] = 1;
    b_m->shi.size[1] = 3;
    for (i1 = 0; i1 < 3; i1++) {
      b_m->shi.data[i1].re = 0.0;
      b_m->shi.data[i1].im = t0_shi[i1].im;
    }

    b_m->sti.size[0] = 1;
    b_m->sti.size[1] = 3;
    for (i1 = 0; i1 < 3; i1++) {
      b_m->sti.data[i1].re = 0.0;
      b_m->sti.data[i1].im = t0_sti[i1].im;
    }

    b_m->stt.size[0] = 1;
    b_m->stt.size[1] = 3;
    for (i1 = 0; i1 < 3; i1++) {
      b_m->stt.data[i1].re = 0.0;
      b_m->stt.data[i1].im = t0_stt[i1].im;
    }

    b_m->sht.size[0] = 1;
    b_m->sht.size[1] = 3;
    for (i1 = 0; i1 < 3; i1++) {
      b_m->sht.data[i1].re = 0.0;
      b_m->sht.data[i1].im = t0_sht[i1].im;
    }

    b_m->sho.size[0] = 1;
    b_m->sho.size[1] = 3;
    for (i1 = 0; i1 < 3; i1++) {
      b_m->sho.data[i1].re = 0.0;
      b_m->sho.data[i1].im = t0_sho[i1].im;
    }

    b_m->sto.size[0] = 1;
    b_m->sto.size[1] = 3;
    for (i1 = 0; i1 < 3; i1++) {
      b_m->sto.data[i1].re = 0.0;
      b_m->sto.data[i1].im = t0_sto[i1].im;
    }

    b_m->str.size[0] = 1;
    b_m->str.size[1] = 3;
    for (i1 = 0; i1 < 3; i1++) {
      b_m->str.data[i1].re = 0.0;
      b_m->str.data[i1].im = t0_str[i1].im;
    }

    b_m->shr.size[0] = 1;
    b_m->shr.size[1] = 3;
    for (i1 = 0; i1 < 3; i1++) {
      b_m->shr.data[i1].re = 0.0;
      b_m->shr.data[i1].im = t0_shr[i1].im;
    }

    b_m->Tti.size[0] = 1;
    b_m->Tti.size[1] = 3;
    for (i1 = 0; i1 < 3; i1++) {
      b_m->Tti.data[i1].re = 0.0;
      b_m->Tti.data[i1].im = t0_Tti[i1].im;
    }

    b_m->Thi.size[0] = 1;
    b_m->Thi.size[1] = 3;
    for (i1 = 0; i1 < 3; i1++) {
      b_m->Thi.data[i1].re = 0.0;
      b_m->Thi.data[i1].im = t0_Thi[i1].im;
    }

    b_m->Ttt.size[0] = 1;
    b_m->Ttt.size[1] = 3;
    for (i1 = 0; i1 < 3; i1++) {
      b_m->Ttt.data[i1].re = 0.0;
      b_m->Ttt.data[i1].im = t0_Ttt[i1].im;
    }

    b_m->Tht.size[0] = 1;
    b_m->Tht.size[1] = 3;
    for (i1 = 0; i1 < 3; i1++) {
      b_m->Tht.data[i1].re = 0.0;
      b_m->Tht.data[i1].im = t0_Tht[i1].im;
    }

    b_m->ploss.size[0] = 1;
    b_m->ploss.size[1] = 3;
    for (i1 = 0; i1 < 3; i1++) {
      b_m->ploss.data[i1].re = 0.0;
      b_m->ploss.data[i1].im = t0_ploss[i1].im;
    }

    b_m->pd.size[0] = 1;
    b_m->pd.data[0] = 0.0;
    b_m->epd.size[0] = 1;
    b_m->epd.data[0] = 0.0;
    b_m->nbpen.size[0] = 1;
    b_m->nbpen.data[0] = 0.0;
    b_m->pflag.size[0] = 0;
    b_m->pflag.size[1] = 0;
    b_m->mask = msk;
    b_m->npb = cnt;
  }
}

/* End of code generation (Masking_Olivier_global.c) */
