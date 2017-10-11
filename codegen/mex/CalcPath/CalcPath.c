/*
 * CalcPath.c
 *
 * Code generation for function 'CalcPath'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CalcPath.h"
#include "CalcPath_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "Blocking.h"
#include "norm.h"
#include "AppFace2.h"
#include "CalcPath_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 17,    /* lineNo */
  "CalcPath",                          /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 49,  /* lineNo */
  "CalcPath",                          /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 74,  /* lineNo */
  "CalcPath",                          /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 119, /* lineNo */
  "CalcPath",                          /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 13,  /* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 19,  /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 140, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 376, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 348, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 21,  /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRTEInfo m_emlrtRTEI = { 1, /* lineNo */
  10,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 30,/* lineNo */
  1,                                   /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  20,                                  /* colNo */
  "Mtrun",                             /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  30,                                  /* colNo */
  "Mtrun",                             /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  18,                                  /* colNo */
  "trackface",                         /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 55,    /* lineNo */
  38,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  38,                                  /* colNo */
  "vnfaces",                           /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 55,  /* lineNo */
  53,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  55,                                  /* lineNo */
  53,                                  /* colNo */
  "vnfaces",                           /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 69,  /* lineNo */
  49,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  49,                                  /* colNo */
  "wedges",                            /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 69,  /* lineNo */
  62,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  69,                                  /* lineNo */
  62,                                  /* colNo */
  "wedges",                            /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 87,  /* lineNo */
  63,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  63,                                  /* colNo */
  "wedges",                            /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 109, /* lineNo */
  30,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  109,                                 /* lineNo */
  30,                                  /* colNo */
  "Mtrun",                             /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 109, /* lineNo */
  38,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  109,                                 /* lineNo */
  38,                                  /* colNo */
  "Mtrun",                             /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  50,                                  /* lineNo */
  14,                                  /* colNo */
  "track",                             /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  131,                                 /* lineNo */
  47,                                  /* colNo */
  "track",                             /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  131,                                 /* lineNo */
  22,                                  /* colNo */
  "PSLN",                              /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  131,                                 /* lineNo */
  29,                                  /* colNo */
  "PSLN",                              /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  131,                                 /* lineNo */
  34,                                  /* colNo */
  "PSLN",                              /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  51,                                  /* colNo */
  "trackface",                         /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  22,                                  /* colNo */
  "FSLN",                              /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  29,                                  /* colNo */
  "FSLN",                              /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  34,                                  /* colNo */
  "FSLN",                              /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  140,                                 /* lineNo */
  47,                                  /* colNo */
  "track",                             /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  140,                                 /* lineNo */
  20,                                  /* colNo */
  "RP",                                /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  140,                                 /* lineNo */
  29,                                  /* colNo */
  "RP",                                /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  140,                                 /* lineNo */
  34,                                  /* colNo */
  "RP",                                /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  51,                                  /* colNo */
  "trackface",                         /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  20,                                  /* colNo */
  "RF",                                /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  29,                                  /* colNo */
  "RF",                                /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  34,                                  /* colNo */
  "RF",                                /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  150,                                 /* lineNo */
  33,                                  /* colNo */
  "Mtrun",                             /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  150,                                 /* lineNo */
  43,                                  /* colNo */
  "Mtrun",                             /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo p_emlrtRTEI = { 39,/* lineNo */
  27,                                  /* colNo */
  "minOrMax",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 121,/* lineNo */
  27,                                  /* colNo */
  "minOrMax",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pName */
};

static emlrtDCInfo h_emlrtDCI = { 27,  /* lineNo */
  22,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  22,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 27,  /* lineNo */
  30,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  27,                                  /* lineNo */
  30,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 28,  /* lineNo */
  29,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  29,                                  /* colNo */
  "wedges",                            /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 28,  /* lineNo */
  37,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  28,                                  /* lineNo */
  37,                                  /* colNo */
  "wedges",                            /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 30,  /* lineNo */
  15,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 30,  /* lineNo */
  15,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 31,  /* lineNo */
  19,                                  /* colNo */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  48,                                  /* colNo */
  "trackface",                         /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  63,                                  /* colNo */
  "trackface",                         /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  138,                                 /* lineNo */
  23,                                  /* colNo */
  "NbrDSSlns",                         /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  129,                                 /* lineNo */
  21,                                  /* colNo */
  "NbrSlns",                           /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  159,                                 /* lineNo */
  19,                                  /* colNo */
  "NbrDSSlns",                         /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  157,                                 /* lineNo */
  17,                                  /* colNo */
  "NbrSlns",                           /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  168,                                 /* lineNo */
  19,                                  /* colNo */
  "NbrDSSlns",                         /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  166,                                 /* lineNo */
  17,                                  /* colNo */
  "NbrSlns",                           /* aName */
  "CalcPath",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\CalcPath.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void CalcPath(const emlrtStack *sp, const real_T tx[3], const real_T rx[3],
              real_T ordmax, real_T rvsds)
{
  emxArray_real_T *varargin_1;
  uint32_T ornum;
  real_T pass;
  real_T count;
  int32_T i1;
  int32_T ixstart;
  boolean_T overflow;
  int32_T n;
  real_T mtmp;
  int32_T ix;
  int32_T i;
  boolean_T exitg1;
  emxArray_real_T *track;
  real_T ri[3];
  emxArray_real_T *trackface;
  real_T curs[9];
  int32_T glob;
  real_T extrem[3];
  uint32_T m;
  int32_T i2;
  boolean_T exitg2;
  real_T num;
  real_T b_n[3];
  real_T den;
  real_T wedges_re;
  real_T b_ri;
  real_T b[12];
  real_T b_b[12];
  boolean_T exitg3;
  boolean_T guard1 = false;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &varargin_1, 1, &m_emlrtRTEI, true);

  /*  Calculates the path followed by a ray, i.e. the reflection points */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History: 2011.9.26 */
  /*           2011.10.4 updated after learning the diffuse scattering */
  /*  Updated by: Xuhong Li <xuhong@ftw.at> */
  /*  History: 2013.08.01 */
  ornum = 1U;

  /*  pass = 1; */
  pass = 0.0;

  /*  test */
  count = 0.0;
  st.site = &emlrtRSI;
  i1 = varargin_1->size[0];
  varargin_1->size[0] = Nbrimg->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)varargin_1, i1, sizeof(real_T),
                    &m_emlrtRTEI);
  ixstart = Nbrimg->size[0];
  for (i1 = 0; i1 < ixstart; i1++) {
    varargin_1->data[i1] = Nbrimg->data[i1];
  }

  b_st.site = &e_emlrtRSI;
  c_st.site = &f_emlrtRSI;
  if ((Nbrimg->size[0] == 1) || (Nbrimg->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2012b(&c_st, &p_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(varargin_1->size[0] > 0)) {
    emlrtErrorWithMessageIdR2012b(&c_st, &q_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &g_emlrtRSI;
  ixstart = 1;
  n = varargin_1->size[0];
  mtmp = varargin_1->data[0];
  if (varargin_1->size[0] > 1) {
    if (muDoubleScalarIsNaN(varargin_1->data[0])) {
      e_st.site = &i_emlrtRSI;
      overflow = (varargin_1->size[0] > 2147483646);
      if (overflow) {
        f_st.site = &j_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      ix = 2;
      exitg1 = false;
      while ((!exitg1) && (ix <= n)) {
        ixstart = ix;
        if (!muDoubleScalarIsNaN(varargin_1->data[ix - 1])) {
          mtmp = varargin_1->data[ix - 1];
          exitg1 = true;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < varargin_1->size[0]) {
      e_st.site = &h_emlrtRSI;
      overflow = ((!(ixstart + 1 > varargin_1->size[0])) && (varargin_1->size[0]
        > 2147483646));
      if (overflow) {
        f_st.site = &j_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (ixstart + 1 <= n) {
        if (varargin_1->data[ixstart] > mtmp) {
          mtmp = varargin_1->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  emxFree_real_T(&varargin_1);

  /* --------------- unify variable size for code convertion -----------------% */
  for (i = 0; i < 3; i++) {
    ri[i] = 0.0;
  }

  emxInit_real_T3(sp, &track, 2, &n_emlrtRTEI, true);
  i1 = track->size[0] * track->size[1];
  if (!(ordmax >= 0.0)) {
    emlrtNonNegativeCheckR2012b(ordmax, &m_emlrtDCI, sp);
  }

  if (ordmax != (int32_T)muDoubleScalarFloor(ordmax)) {
    emlrtIntegerCheckR2012b(ordmax, &l_emlrtDCI, sp);
  }

  track->size[0] = (int32_T)ordmax;
  track->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)track, i1, sizeof(real_T),
                    &m_emlrtRTEI);
  if (!(ordmax >= 0.0)) {
    emlrtNonNegativeCheckR2012b(ordmax, &m_emlrtDCI, sp);
  }

  if (ordmax != (int32_T)muDoubleScalarFloor(ordmax)) {
    emlrtIntegerCheckR2012b(ordmax, &l_emlrtDCI, sp);
  }

  ixstart = (int32_T)ordmax * 3;
  for (i1 = 0; i1 < ixstart; i1++) {
    track->data[i1] = 0.0;
  }

  emxInit_real_T3(sp, &trackface, 2, &o_emlrtRTEI, true);
  i1 = trackface->size[0] * trackface->size[1];
  if (ordmax != (int32_T)muDoubleScalarFloor(ordmax)) {
    emlrtIntegerCheckR2012b(ordmax, &n_emlrtDCI, sp);
  }

  trackface->size[0] = (int32_T)ordmax;
  trackface->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)trackface, i1, sizeof(real_T),
                    &m_emlrtRTEI);
  if (ordmax != (int32_T)muDoubleScalarFloor(ordmax)) {
    emlrtIntegerCheckR2012b(ordmax, &n_emlrtDCI, sp);
  }

  ixstart = (int32_T)ordmax << 1;
  for (i1 = 0; i1 < ixstart; i1++) {
    trackface->data[i1] = 0.0;
  }

  /* -------------------------------------------------------------------------% */
  i1 = Mtrun->size[1];
  if (!(1 <= i1)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i1, &b_emlrtBCI, sp);
  }

  i1 = Mtrun->size[0];
  ixstart = (int32_T)(ordmax + 1.0);
  if (!((ixstart >= 1) && (ixstart <= i1))) {
    emlrtDynamicBoundsCheckR2012b(ixstart, 1, i1, &emlrtBCI, sp);
  }

  for (i1 = 0; i1 < 9; i1++) {
    curs[i1] = Mtrun->data[(ixstart + Mtrun->size[0] * Mtrun->size[1] * i1) - 1];
  }

  oldReflex = Reflex;
  oldReflex_dirty |= 1U;
  exitg1 = false;
  while ((!exitg1) && (curs[0] != 0.0)) {
    /*  if not empty, then continue */
    for (i = 0; i < 3; i++) {
      extrem[i] = rx[i];
    }

    glob = 1;
    m = 1U;
    exitg2 = false;
    while ((!exitg2) && ((curs[7] != 0.0) && (glob == 1))) {
      st.site = &b_emlrtRSI;

      /*  Calculates the breakthrough point in the face                                 */
      /*  Pneg : point on the negative normal vector side                           */
      /*  Ppos : point on the positive normal vector side  */
      /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
      /*  History:  2011.9.19 */
      /*  Updated by: Xuhong Li <xuhong@ftw.at> */
      /*  History: 2013.08.01 */
      /*  if(face(1) == 0) */
      /*  if(face(1) == 0 && face(2) == 0) */
      /*      n = [0;0;1]; */
      /*      rp(:,1) = -Pnpos(:,1); */
      /*      ri(:,1) = Pnneg(:,1) - Pnpos(:,1); */
      /*  else */
      if (curs[2] != (int32_T)muDoubleScalarFloor(curs[2])) {
        emlrtIntegerCheckR2012b(curs[2], &i_emlrtDCI, &st);
      }

      i1 = (int32_T)curs[2];
      if (!((i1 >= 1) && (i1 <= 6))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &fb_emlrtBCI, &st);
      }

      if (curs[1] != (int32_T)muDoubleScalarFloor(curs[1])) {
        emlrtIntegerCheckR2012b(curs[1], &h_emlrtDCI, &st);
      }

      i1 = vnfaces->size[0];
      n = (int32_T)curs[1];
      if (!((n >= 1) && (n <= i1))) {
        emlrtDynamicBoundsCheckR2012b(n, 1, i1, &eb_emlrtBCI, &st);
      }

      for (i1 = 0; i1 < 3; i1++) {
        b_n[i1] = vnfaces->data[((n + vnfaces->size[0] * ((int32_T)curs[2] - 1))
          + vnfaces->size[0] * vnfaces->size[1] * i1) - 1];
      }

      if (curs[2] != (int32_T)muDoubleScalarFloor(curs[2])) {
        emlrtIntegerCheckR2012b(curs[2], &k_emlrtDCI, &st);
      }

      i1 = (int32_T)curs[2];
      if (!((i1 >= 1) && (i1 <= 6))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &hb_emlrtBCI, &st);
      }

      if (curs[1] != (int32_T)muDoubleScalarFloor(curs[1])) {
        emlrtIntegerCheckR2012b(curs[1], &j_emlrtDCI, &st);
      }

      i1 = wedges->size[0];
      n = (int32_T)curs[1];
      if (!((n >= 1) && (n <= i1))) {
        emlrtDynamicBoundsCheckR2012b(n, 1, i1, &gb_emlrtBCI, &st);
      }

      /*  end */
      num = 0.0;
      den = 0.0;
      for (ix = 0; ix < 3; ix++) {
        wedges_re = wedges->data[(((n + wedges->size[0] * ((int32_T)curs[2] - 1))
          + (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
          wedges->size[1] * wedges->size[2] * ix) - 1];
        wedges_re -= extrem[ix];
        b_ri = curs[3 + ix] - extrem[ix];
        num += b_n[ix] * wedges_re;
        den += b_n[ix] * b_ri;
        ri[ix] = b_ri;
      }

      num /= den;
      for (i1 = 0; i1 < 3; i1++) {
        ri[i1] = extrem[i1] + num * ri[i1];
      }

      ixstart = track->size[0];
      i1 = (int32_T)m;
      if (!((i1 >= 1) && (i1 <= ixstart))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ixstart, &k_emlrtBCI, sp);
      }

      for (i1 = 0; i1 < 3; i1++) {
        track->data[((int32_T)m + track->size[0] * i1) - 1] = ri[i1];
      }

      n = trackface->size[0];
      i1 = (int32_T)m;
      if (!((i1 >= 1) && (i1 <= n))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, n, &c_emlrtBCI, sp);
      }

      for (i1 = 0; i1 < 2; i1++) {
        trackface->data[((int32_T)m + trackface->size[0] * i1) - 1] = curs[1 +
          i1];
      }

      for (i = 0; i < 3; i++) {
        b_n[i] = extrem[i] - ri[i];
      }

      /*         if (back(2) ~= 0) */
      i1 = trackface->size[0];
      i2 = (int32_T)m;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &jb_emlrtBCI, sp);
      }

      num = trackface->data[(i2 + trackface->size[0]) - 1];
      if (num != (int32_T)muDoubleScalarFloor(num)) {
        emlrtIntegerCheckR2012b(num, &b_emlrtDCI, sp);
      }

      n = (int32_T)num;
      if (!((n >= 1) && (n <= 6))) {
        emlrtDynamicBoundsCheckR2012b(n, 1, 6, &e_emlrtBCI, sp);
      }

      i1 = trackface->size[0];
      i2 = (int32_T)m;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ib_emlrtBCI, sp);
      }

      num = trackface->data[i2 - 1];
      if (num != (int32_T)muDoubleScalarFloor(num)) {
        emlrtIntegerCheckR2012b(num, &emlrtDCI, sp);
      }

      i1 = vnfaces->size[0];
      ixstart = (int32_T)num;
      if (!((ixstart >= 1) && (ixstart <= i1))) {
        emlrtDynamicBoundsCheckR2012b(ixstart, 1, i1, &d_emlrtBCI, sp);
      }

      num = 0.0;
      for (ix = 0; ix < 3; ix++) {
        wedges_re = vnfaces->data[((ixstart + vnfaces->size[0] * (n - 1)) +
          vnfaces->size[0] * vnfaces->size[1] * ix) - 1];
        num += wedges_re * b_n[ix];
      }

      if (num <= 0.0) {
        glob = 0;
        exitg2 = true;
      } else {
        /*         end */
        /*         if (back(2) == 0) */
        /*             app = AppGround(pointV); */
        /*         else */
        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        /*             app = AppFace(pointV,back_temp); */
        if (curs[1] != (int32_T)muDoubleScalarFloor(curs[1])) {
          emlrtIntegerCheckR2012b(curs[1], &c_emlrtDCI, sp);
        }

        i1 = wedges->size[0];
        i2 = (int32_T)curs[1];
        if (!((i2 >= 1) && (i2 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &f_emlrtBCI, sp);
        }

        if (curs[2] != (int32_T)muDoubleScalarFloor(curs[2])) {
          emlrtIntegerCheckR2012b(curs[2], &d_emlrtDCI, sp);
        }

        i1 = (int32_T)curs[2];
        if (!((i1 >= 1) && (i1 <= 6))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &g_emlrtBCI, sp);
        }

        for (ix = 0; ix < 12; ix++) {
          b[ix] = wedges->data[((((int32_T)curs[1] + wedges->size[0] * ((int32_T)
            curs[2] - 1)) + wedges->size[0] * wedges->size[1] * (ix % 4)) +
                                wedges->size[0] * wedges->size[1] * wedges->
                                size[2] * (ix / 4)) - 1];
        }

        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        /*         end */
        for (i1 = 0; i1 < 4; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            b_b[i2 + 3 * i1] = b[i1 + (i2 << 2)];
          }
        }

        if (AppFace2(ri, b_b) == 1.0) {
          st.site = &c_emlrtRSI;
          num = Blocking(&st, extrem, ri);
          if (num == 1.0) {
            glob = 0;
            exitg2 = true;
          } else {
            /*             if (fface(1) > 0) */
            ixstart = 0;
            exitg3 = false;
            while ((!exitg3) && (ixstart < 6)) {
              guard1 = false;
              if (1.0 + (real_T)ixstart != curs[2]) {
                /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
                /*                          appf = AppFace(pointV,fface); */
                if (curs[1] != (int32_T)muDoubleScalarFloor(curs[1])) {
                  emlrtIntegerCheckR2012b(curs[1], &e_emlrtDCI, sp);
                }

                i1 = wedges->size[0];
                i2 = (int32_T)curs[1];
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &h_emlrtBCI, sp);
                }

                for (ix = 0; ix < 12; ix++) {
                  b[ix] = wedges->data[((((int32_T)curs[1] + wedges->size[0] *
                    ixstart) + wedges->size[0] * wedges->size[1] * (ix % 4)) +
                                        wedges->size[0] * wedges->size[1] *
                                        wedges->size[2] * (ix / 4)) - 1];
                }

                /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
                for (i1 = 0; i1 < 4; i1++) {
                  for (i2 = 0; i2 < 3; i2++) {
                    b_b[i2 + 3 * i1] = b[i1 + (i2 << 2)];
                  }
                }

                if (AppFace2(ri, b_b) == 1.0) {
                  glob = 0;
                  exitg3 = true;
                } else {
                  guard1 = true;
                }
              } else {
                guard1 = true;
              }

              if (guard1) {
                ixstart++;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(sp);
                }
              }
            }

            for (i = 0; i < 3; i++) {
              b_n[i] = extrem[i] - ri[i];
            }

            if (norm(b_n) < 1.0E-12) {
              glob = 0;
              exitg2 = true;
            } else {
              /*              end  */
              for (i = 0; i < 3; i++) {
                extrem[i] = ri[i];
              }

              if (curs[7] != (int32_T)muDoubleScalarFloor(curs[7])) {
                emlrtIntegerCheckR2012b(curs[7], &f_emlrtDCI, sp);
              }

              i1 = Mtrun->size[0];
              i2 = (int32_T)curs[7];
              if (!((i2 >= 1) && (i2 <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &i_emlrtBCI, sp);
              }

              if (curs[8] != (int32_T)muDoubleScalarFloor(curs[8])) {
                emlrtIntegerCheckR2012b(curs[8], &g_emlrtDCI, sp);
              }

              i1 = Mtrun->size[1];
              i2 = (int32_T)curs[8];
              if (!((i2 >= 1) && (i2 <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &j_emlrtBCI, sp);
              }

              n = (int32_T)curs[7] - 1;
              ixstart = (int32_T)curs[8] - 1;
              for (i1 = 0; i1 < 9; i1++) {
                curs[i1] = Mtrun->data[(n + Mtrun->size[0] * ixstart) +
                  Mtrun->size[0] * Mtrun->size[1] * i1];
              }

              m++;

              /*  means the reflection point found is okay, then go to the upper level */
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }
          }
        } else {
          glob = 0;
          exitg2 = true;
        }
      }
    }

    if (glob == 1) {
      for (i1 = 0; i1 < 3; i1++) {
        b_n[i1] = tx[i1];
      }

      st.site = &d_emlrtRSI;
      num = Blocking(&st, b_n, ri);

      /*   input of Blocking should be 3*1, so use tx' */
      if (num == 1.0) {
        glob = 0;
      }
    }

    if (glob == 1) {
      Reflex = 1.0;
      Reflex_dirty |= 1U;
      if (rvsds == 0.0) {
        pass++;
        i1 = NbrSlns->size[0];
        i2 = (int32_T)ordmax;
        if (!((i2 >= 1) && (i2 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &lb_emlrtBCI, sp);
        }

        NbrSlns->data[i2 - 1] = pass;
        NbrSlns_dirty |= 1U;
        i = 0;
        while (i <= (int32_T)m - 2) {
          i1 = track->size[0];
          ixstart = (int32_T)((real_T)m - (1.0 + (real_T)i));
          if (!((ixstart >= 1) && (ixstart <= i1))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 1, i1, &l_emlrtBCI, sp);
          }

          i1 = PSLN->size[0];
          i2 = PSLN->size[1];
          n = PSLN->size[2];
          ix = 1 + i;
          if (!((ix >= 1) && (ix <= n))) {
            emlrtDynamicBoundsCheckR2012b(ix, 1, n, &o_emlrtBCI, sp);
          }

          n = (int32_T)pass;
          if (!((n >= 1) && (n <= i2))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i2, &n_emlrtBCI, sp);
          }

          i2 = (int32_T)ordmax;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &m_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            PSLN->data[((((int32_T)ordmax + PSLN->size[0] * ((int32_T)pass - 1))
                         + PSLN->size[0] * PSLN->size[1] * i) + PSLN->size[0] *
                        PSLN->size[1] * PSLN->size[2] * i1) - 1] = track->data
              [(ixstart + track->size[0] * i1) - 1];
          }

          PSLN_dirty |= 1U;
          i1 = trackface->size[0];
          ixstart = (int32_T)((real_T)m - (1.0 + (real_T)i));
          if (!((ixstart >= 1) && (ixstart <= i1))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 1, i1, &p_emlrtBCI, sp);
          }

          i1 = FSLN->size[0];
          i2 = FSLN->size[1];
          n = FSLN->size[2];
          ix = 1 + i;
          if (!((ix >= 1) && (ix <= n))) {
            emlrtDynamicBoundsCheckR2012b(ix, 1, n, &s_emlrtBCI, sp);
          }

          n = (int32_T)pass;
          if (!((n >= 1) && (n <= i2))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i2, &r_emlrtBCI, sp);
          }

          i2 = (int32_T)ordmax;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &q_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < 2; i1++) {
            FSLN->data[((((int32_T)ordmax + FSLN->size[0] * ((int32_T)pass - 1))
                         + FSLN->size[0] * FSLN->size[1] * i) + FSLN->size[0] *
                        FSLN->size[1] * FSLN->size[2] * i1) - 1] =
              trackface->data[(ixstart + trackface->size[0] * i1) - 1];
          }

          FSLN_dirty |= 1U;
          i++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        /*              pass = pass + 1; */
        count++;
      } else {
        pass++;
        i1 = NbrDSSlns->size[0];
        i2 = (int32_T)(ordmax + 1.0);
        if (!((i2 >= 1) && (i2 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &kb_emlrtBCI, sp);
        }

        NbrDSSlns->data[i2 - 1] = pass;
        NbrDSSlns_dirty |= 1U;
        i = 0;
        while (i <= (int32_T)m - 2) {
          i1 = track->size[0];
          ixstart = (int32_T)((real_T)m - (1.0 + (real_T)i));
          if (!((ixstart >= 1) && (ixstart <= i1))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 1, i1, &t_emlrtBCI, sp);
          }

          i1 = RP->size[0];
          i2 = RP->size[1];
          n = RP->size[2];
          ix = 1 + i;
          if (!((ix >= 1) && (ix <= n))) {
            emlrtDynamicBoundsCheckR2012b(ix, 1, n, &w_emlrtBCI, sp);
          }

          n = (int32_T)pass;
          if (!((n >= 1) && (n <= i2))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i2, &v_emlrtBCI, sp);
          }

          i2 = (int32_T)(ordmax + 1.0);
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &u_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            RP->data[((((int32_T)(ordmax + 1.0) + RP->size[0] * ((int32_T)pass -
              1)) + RP->size[0] * RP->size[1] * i) + RP->size[0] * RP->size[1] *
                      RP->size[2] * i1) - 1] = track->data[(ixstart +
              track->size[0] * i1) - 1];
          }

          RP_dirty |= 1U;
          i1 = trackface->size[0];
          ixstart = (int32_T)((real_T)m - (1.0 + (real_T)i));
          if (!((ixstart >= 1) && (ixstart <= i1))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 1, i1, &x_emlrtBCI, sp);
          }

          i1 = RF->size[0];
          i2 = RF->size[1];
          n = RF->size[2];
          ix = 1 + i;
          if (!((ix >= 1) && (ix <= n))) {
            emlrtDynamicBoundsCheckR2012b(ix, 1, n, &bb_emlrtBCI, sp);
          }

          n = (int32_T)pass;
          if (!((n >= 1) && (n <= i2))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i2, &ab_emlrtBCI, sp);
          }

          i2 = (int32_T)(ordmax + 1.0);
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &y_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < 2; i1++) {
            RF->data[((((int32_T)(ordmax + 1.0) + RF->size[0] * ((int32_T)pass -
              1)) + RF->size[0] * RF->size[1] * i) + RF->size[0] * RF->size[1] *
                      RF->size[2] * i1) - 1] = trackface->data[(ixstart +
              trackface->size[0] * i1) - 1];
          }

          RF_dirty |= 1U;
          i++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        /*              pass = pass + 1; */
        count++;
      }
    }

    ornum++;
    if (ornum <= mtmp) {
      i1 = Mtrun->size[0];
      i2 = (int32_T)(ordmax + 1.0);
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &cb_emlrtBCI, sp);
      }

      i1 = Mtrun->size[1];
      i2 = (int32_T)ornum;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &db_emlrtBCI, sp);
      }

      for (i1 = 0; i1 < 9; i1++) {
        curs[i1] = Mtrun->data[(((int32_T)(ordmax + 1.0) + Mtrun->size[0] *
          ((int32_T)ornum - 1)) + Mtrun->size[0] * Mtrun->size[1] * i1) - 1];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    } else {
      exitg1 = true;
    }
  }

  emxFree_real_T(&trackface);
  emxFree_real_T(&track);
  if (Reflex == 0.0) {
    if (rvsds == 0.0) {
      i1 = NbrSlns->size[0];
      i2 = (int32_T)ordmax;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &nb_emlrtBCI, sp);
      }

      NbrSlns->data[i2 - 1] = 0.0;
      NbrSlns_dirty |= 1U;
    } else {
      i1 = NbrDSSlns->size[0];
      i2 = (int32_T)ordmax;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &mb_emlrtBCI, sp);
      }

      NbrDSSlns->data[i2 - 1] = 0.0;
      NbrDSSlns_dirty |= 1U;
    }
  }

  if ((count != 0.0) || (oldReflex == 1.0) || (Reflex == 1.0)) {
    Reflex = 1.0;
    Reflex_dirty |= 1U;
  } else if (rvsds == 0.0) {
    i1 = NbrSlns->size[0];
    i2 = (int32_T)ordmax;
    if (!((i2 >= 1) && (i2 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &pb_emlrtBCI, sp);
    }

    NbrSlns->data[i2 - 1] = 0.0;
    NbrSlns_dirty |= 1U;
  } else {
    i1 = NbrDSSlns->size[0];
    i2 = (int32_T)ordmax;
    if (!((i2 >= 1) && (i2 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ob_emlrtBCI, sp);
    }

    NbrDSSlns->data[i2 - 1] = 0.0;
    NbrDSSlns_dirty |= 1U;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (CalcPath.c) */
