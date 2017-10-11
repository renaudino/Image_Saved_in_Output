/*
 * CalcPath2.c
 *
 * Code generation for function 'CalcPath2'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CalcPath2.h"
#include "CalcPath2_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "Blocking.h"
#include "AppFace2.h"
#include "CalcPath2_data.h"

/* Variable Definitions */
static real_T oldReflex;
static emlrtRSInfo emlrtRSI = { 28,    /* lineNo */
  "CalcPath2",                         /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 57,  /* lineNo */
  "CalcPath2",                         /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 82,  /* lineNo */
  "CalcPath2",                         /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 117, /* lineNo */
  "CalcPath2",                         /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 44,  /* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 234, /* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 253, /* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 21,  /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 18,  /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRTEInfo d_emlrtRTEI = { 1, /* lineNo */
  61,                                  /* colNo */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 253,/* lineNo */
  13,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 28,/* lineNo */
  1,                                   /* colNo */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 36,/* lineNo */
  6,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  19,                                  /* colNo */
  "ind",                               /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  15,                                  /* colNo */
  "trun2",                             /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 64,    /* lineNo */
  37,                                  /* colNo */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  37,                                  /* colNo */
  "vnfaces",                           /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 64,  /* lineNo */
  52,                                  /* colNo */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  64,                                  /* lineNo */
  52,                                  /* colNo */
  "vnfaces",                           /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 77,  /* lineNo */
  55,                                  /* colNo */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  55,                                  /* colNo */
  "wedges",                            /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 77,  /* lineNo */
  63,                                  /* colNo */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  77,                                  /* lineNo */
  63,                                  /* colNo */
  "wedges",                            /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 95,  /* lineNo */
  63,                                  /* colNo */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  63,                                  /* colNo */
  "wedges",                            /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 112, /* lineNo */
  22,                                  /* colNo */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  112,                                 /* lineNo */
  22,                                  /* colNo */
  "trun2",                             /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { 1,   /* iFirst */
  10,                                  /* iLast */
  59,                                  /* lineNo */
  15,                                  /* colNo */
  "track",                             /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { 1,   /* iFirst */
  10,                                  /* iLast */
  128,                                 /* lineNo */
  47,                                  /* colNo */
  "track",                             /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  128,                                 /* lineNo */
  22,                                  /* colNo */
  "PSLN",                              /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  128,                                 /* lineNo */
  29,                                  /* colNo */
  "PSLN",                              /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  128,                                 /* lineNo */
  34,                                  /* colNo */
  "PSLN",                              /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { 1,  /* iFirst */
  10,                                  /* iLast */
  129,                                 /* lineNo */
  51,                                  /* colNo */
  "trackface",                         /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  129,                                 /* lineNo */
  22,                                  /* colNo */
  "FSLN",                              /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  129,                                 /* lineNo */
  29,                                  /* colNo */
  "FSLN",                              /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  129,                                 /* lineNo */
  34,                                  /* colNo */
  "FSLN",                              /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { 1,  /* iFirst */
  10,                                  /* iLast */
  136,                                 /* lineNo */
  51,                                  /* colNo */
  "trackface",                         /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 136, /* lineNo */
  20,                                  /* colNo */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  136,                                 /* lineNo */
  20,                                  /* colNo */
  "RF",                                /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  136,                                 /* lineNo */
  29,                                  /* colNo */
  "RF",                                /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  136,                                 /* lineNo */
  34,                                  /* colNo */
  "RF",                                /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { 1,  /* iFirst */
  10,                                  /* iLast */
  137,                                 /* lineNo */
  47,                                  /* colNo */
  "track",                             /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 137, /* lineNo */
  20,                                  /* colNo */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  137,                                 /* lineNo */
  20,                                  /* colNo */
  "RP",                                /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  137,                                 /* lineNo */
  29,                                  /* colNo */
  "RP",                                /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  137,                                 /* lineNo */
  34,                                  /* colNo */
  "RP",                                /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  145,                                 /* lineNo */
  23,                                  /* colNo */
  "trun2",                             /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo j_emlrtRTEI = { 243,/* lineNo */
  9,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 88,/* lineNo */
  9,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtDCInfo i_emlrtDCI = { 27,  /* lineNo */
  22,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  22,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 27,  /* lineNo */
  30,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  27,                                  /* lineNo */
  30,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 28,  /* lineNo */
  29,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  29,                                  /* colNo */
  "wedges",                            /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 28,  /* lineNo */
  37,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  28,                                  /* lineNo */
  37,                                  /* colNo */
  "wedges",                            /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  23,                                  /* colNo */
  "NbrDSSlns",                         /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 134, /* lineNo */
  23,                                  /* colNo */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  126,                                 /* lineNo */
  21,                                  /* colNo */
  "NbrSlns",                           /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 126, /* lineNo */
  21,                                  /* colNo */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  155,                                 /* lineNo */
  19,                                  /* colNo */
  "NbrDSSlns",                         /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 155, /* lineNo */
  19,                                  /* colNo */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  153,                                 /* lineNo */
  17,                                  /* colNo */
  "NbrSlns",                           /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 153, /* lineNo */
  17,                                  /* colNo */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  165,                                 /* lineNo */
  19,                                  /* colNo */
  "NbrDSSlns",                         /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 165, /* lineNo */
  19,                                  /* colNo */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  163,                                 /* lineNo */
  17,                                  /* colNo */
  "NbrSlns",                           /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 163, /* lineNo */
  17,                                  /* colNo */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  145,                                 /* lineNo */
  27,                                  /* colNo */
  "ind",                               /* aName */
  "CalcPath2",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\CalcPath2.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
real_T CalcPath2(const emlrtStack *sp, const real_T tx[3], const real_T rx[3],
                 real_T ordmax, real_T rvsds, emxArray_real_T *FSLN,
                 emxArray_real_T *PSLN, emxArray_real_T *RF, emxArray_real_T *RP,
                 emxArray_real_T *NbrDSSlns, emxArray_real_T *NbrSlns)
{
  real_T Reflex;
  emxArray_boolean_T *x;
  uint32_T ornum;
  real_T pass;
  real_T count;
  int32_T loop_ub;
  int32_T i9;
  emxArray_int32_T *ii;
  int32_T nx;
  int32_T idx;
  boolean_T overflow;
  boolean_T exitg1;
  emxArray_int32_T *ind;
  real_T curs[7];
  real_T track[30];
  real_T trackface[20];
  int32_T i;
  real_T ri[3];
  int32_T exitg2;
  real_T extrem[3];
  int32_T m;
  real_T num;
  int32_T b_m;
  real_T n[3];
  real_T den;
  real_T wedges_re;
  real_T b_ri;
  real_T b[12];
  real_T b_b[12];
  boolean_T guard1 = false;
  boolean_T exitg3;
  boolean_T guard2 = false;
  boolean_T b_x[3];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_boolean_T(sp, &x, 1, &d_emlrtRTEI, true);

  /*  function CalcPath(tx,rx,ordmax,rvsds) */
  /*  #codegen */
  /*  Calculates the path followed by a ray, i.e. the reflection points */
  /*   */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> */
  /*           Mingming Gan   <gan@ftw.at> */
  /*   */
  /*  History: 2011.09.26 */
  /*           2011.10.04 -> updated after learning the diffuse scattering */
  /*  Nblock  = p.Nblock; */
  /*  vnfaces = p.vnfaces; */
  /*  wedges  = p.wedges; */
  /*   */
  /*  MSKFlag = p.MSKFlag; */
  /*  CEP     = p.CEP; */
  ornum = 1U;
  pass = 1.0;
  count = 0.0;
  st.site = &emlrtRSI;
  loop_ub = trun2->size[0];
  i9 = x->size[0];
  x->size[0] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)x, i9, sizeof(boolean_T),
                    &d_emlrtRTEI);
  for (i9 = 0; i9 < loop_ub; i9++) {
    x->data[i9] = (trun2->data[i9 + trun2->size[0] * 6] == ordmax);
  }

  emxInit_int32_T(&st, &ii, 1, &h_emlrtRTEI, true);
  b_st.site = &e_emlrtRSI;
  nx = x->size[0];
  idx = 0;
  i9 = ii->size[0];
  ii->size[0] = x->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)ii, i9, sizeof(int32_T),
                    &d_emlrtRTEI);
  c_st.site = &f_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    d_st.site = &h_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  loop_ub = 1;
  exitg1 = false;
  while ((!exitg1) && (loop_ub <= nx)) {
    if (x->data[loop_ub - 1]) {
      idx++;
      ii->data[idx - 1] = loop_ub;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        loop_ub++;
      }
    } else {
      loop_ub++;
    }
  }

  if (!(idx <= x->size[0])) {
    emlrtErrorWithMessageIdR2012b(&b_st, &j_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (x->size[0] == 1) {
    if (idx == 0) {
      i9 = ii->size[0];
      ii->size[0] = 0;
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i9, sizeof(int32_T),
                        &d_emlrtRTEI);
    }
  } else {
    if (1 > idx) {
      i9 = 0;
    } else {
      i9 = idx;
    }

    c_st.site = &g_emlrtRSI;
    overflow = !(ii->size[0] != 1);
    if (overflow) {
      overflow = false;
      if (i9 != 1) {
        overflow = true;
      }

      if (overflow) {
        overflow = true;
      } else {
        overflow = false;
      }
    } else {
      overflow = false;
    }

    d_st.site = &i_emlrtRSI;
    if (overflow) {
      emlrtErrorWithMessageIdR2012b(&d_st, &k_emlrtRTEI,
        "Coder:FE:PotentialVectorVector", 0);
    }

    nx = ii->size[0];
    ii->size[0] = i9;
    emxEnsureCapacity(&b_st, (emxArray__common *)ii, nx, sizeof(int32_T),
                      &f_emlrtRTEI);
  }

  emxFree_boolean_T(&x);
  emxInit_int32_T(&b_st, &ind, 1, &g_emlrtRTEI, true);
  i9 = ind->size[0];
  ind->size[0] = ii->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)ind, i9, sizeof(int32_T),
                    &d_emlrtRTEI);
  loop_ub = ii->size[0];
  for (i9 = 0; i9 < loop_ub; i9++) {
    ind->data[i9] = ii->data[i9];
  }

  emxFree_int32_T(&ii);
  i9 = ind->size[0];
  if (!(1 <= i9)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i9, &m_emlrtBCI, sp);
  }

  i9 = trun2->size[0];
  loop_ub = ind->data[0];
  if (!((loop_ub >= 1) && (loop_ub <= i9))) {
    emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i9, &n_emlrtBCI, sp);
  }

  for (i9 = 0; i9 < 7; i9++) {
    curs[i9] = trun2->data[(loop_ub + trun2->size[0] * i9) - 1];
  }

  Reflex = 0.0;

  /*  Atemp      = zeros(3); */
  memset(&track[0], 0, 30U * sizeof(real_T));
  memset(&trackface[0], 0, 20U * sizeof(real_T));
  for (i = 0; i < 3; i++) {
    ri[i] = 0.0;
  }

  do {
    exitg2 = 0;
    for (i = 0; i < 3; i++) {
      extrem[i] = rx[i];
    }

    idx = 1;
    m = 0;
    exitg1 = false;
    while ((!exitg1) && (curs[0] != 0.0)) {
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
        emlrtIntegerCheckR2012b(curs[2], &j_emlrtDCI, &st);
      }

      i9 = (int32_T)curs[2];
      if (!((i9 >= 1) && (i9 <= 6))) {
        emlrtDynamicBoundsCheckR2012b(i9, 1, 6, &ob_emlrtBCI, &st);
      }

      if (curs[1] != (int32_T)muDoubleScalarFloor(curs[1])) {
        emlrtIntegerCheckR2012b(curs[1], &i_emlrtDCI, &st);
      }

      i9 = vnfaces->size[0];
      loop_ub = (int32_T)curs[1];
      if (!((loop_ub >= 1) && (loop_ub <= i9))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i9, &nb_emlrtBCI, &st);
      }

      for (i9 = 0; i9 < 3; i9++) {
        n[i9] = vnfaces->data[((loop_ub + vnfaces->size[0] * ((int32_T)curs[2] -
          1)) + vnfaces->size[0] * vnfaces->size[1] * i9) - 1];
      }

      if (curs[2] != (int32_T)muDoubleScalarFloor(curs[2])) {
        emlrtIntegerCheckR2012b(curs[2], &l_emlrtDCI, &st);
      }

      i9 = (int32_T)curs[2];
      if (!((i9 >= 1) && (i9 <= 6))) {
        emlrtDynamicBoundsCheckR2012b(i9, 1, 6, &qb_emlrtBCI, &st);
      }

      if (curs[1] != (int32_T)muDoubleScalarFloor(curs[1])) {
        emlrtIntegerCheckR2012b(curs[1], &k_emlrtDCI, &st);
      }

      i9 = wedges->size[0];
      loop_ub = (int32_T)curs[1];
      if (!((loop_ub >= 1) && (loop_ub <= i9))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i9, &pb_emlrtBCI, &st);
      }

      /*  end */
      num = 0.0;
      den = 0.0;
      for (nx = 0; nx < 3; nx++) {
        wedges_re = wedges->data[(((loop_ub + wedges->size[0] * ((int32_T)curs[2]
          - 1)) + (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
          wedges->size[1] * wedges->size[2] * nx) - 1];
        wedges_re -= extrem[nx];
        b_ri = curs[3 + nx] - extrem[nx];
        num += n[nx] * wedges_re;
        den += n[nx] * b_ri;
        ri[nx] = b_ri;
      }

      num /= den;
      for (i9 = 0; i9 < 3; i9++) {
        ri[i9] = extrem[i9] + num * ri[i9];
      }

      /*          pointV         = Breakthrough(back(2:3).',back(4:6).',extrem); */
      if (!((m + 1 >= 1) && (m + 1 <= 10))) {
        emlrtDynamicBoundsCheckR2012b(m + 1, 1, 10, &u_emlrtBCI, sp);
      }

      for (i9 = 0; i9 < 3; i9++) {
        track[m + 10 * i9] = ri[i9];
      }

      /*  coordinates of reflection point */
      for (i9 = 0; i9 < 2; i9++) {
        trackface[m + 10 * i9] = curs[1 + i9];
      }

      for (i = 0; i < 3; i++) {
        n[i] = extrem[i] - ri[i];
      }

      /*          if (back(2) ~= 0) */
      if (trackface[m] != (int32_T)muDoubleScalarFloor(trackface[m])) {
        emlrtIntegerCheckR2012b(trackface[m], &emlrtDCI, sp);
      }

      i9 = vnfaces->size[0];
      nx = (int32_T)trackface[m];
      if (!((nx >= 1) && (nx <= i9))) {
        emlrtDynamicBoundsCheckR2012b(nx, 1, i9, &o_emlrtBCI, sp);
      }

      num = trackface[10 + m];
      if (num != (int32_T)muDoubleScalarFloor(num)) {
        emlrtIntegerCheckR2012b(num, &b_emlrtDCI, sp);
      }

      i9 = (int32_T)num;
      if (!((i9 >= 1) && (i9 <= 6))) {
        emlrtDynamicBoundsCheckR2012b(i9, 1, 6, &p_emlrtBCI, sp);
      }

      num = 0.0;
      for (nx = 0; nx < 3; nx++) {
        num += vnfaces->data[(((int32_T)trackface[m] + vnfaces->size[0] *
          ((int32_T)trackface[10 + m] - 1)) + vnfaces->size[0] * vnfaces->size[1]
                              * nx) - 1] * n[nx];
      }

      if (num <= 0.0) {
        /* (dot(vnfaces_re,difftest) <= 0) */
        idx = 0;
        exitg1 = true;
      } else {
        /*          end */
        /*          if (back(2) == 0) */
        /*              app      = AppGround(pointV,p); */
        /*          else */
        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        /*              Atemp(:) = wedges(back(2),back(3),[1 2 4],:); */
        /*              app      = AppFace(pointV,Atemp); */
        if (curs[1] != (int32_T)muDoubleScalarFloor(curs[1])) {
          emlrtIntegerCheckR2012b(curs[1], &c_emlrtDCI, sp);
        }

        i9 = wedges->size[0];
        nx = (int32_T)curs[1];
        if (!((nx >= 1) && (nx <= i9))) {
          emlrtDynamicBoundsCheckR2012b(nx, 1, i9, &q_emlrtBCI, sp);
        }

        if (curs[2] != (int32_T)muDoubleScalarFloor(curs[2])) {
          emlrtIntegerCheckR2012b(curs[2], &d_emlrtDCI, sp);
        }

        i9 = (int32_T)curs[2];
        if (!((i9 >= 1) && (i9 <= 6))) {
          emlrtDynamicBoundsCheckR2012b(i9, 1, 6, &r_emlrtBCI, sp);
        }

        for (nx = 0; nx < 12; nx++) {
          b[nx] = wedges->data[((((int32_T)curs[1] + wedges->size[0] * ((int32_T)
            curs[2] - 1)) + wedges->size[0] * wedges->size[1] * (nx % 4)) +
                                wedges->size[0] * wedges->size[1] * wedges->
                                size[2] * (nx / 4)) - 1];
        }

        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        /*          end */
        for (i9 = 0; i9 < 4; i9++) {
          for (nx = 0; nx < 3; nx++) {
            b_b[nx + 3 * i9] = b[i9 + (nx << 2)];
          }
        }

        if (AppFace2(ri, b_b) == 1.0) {
          st.site = &c_emlrtRSI;
          num = Blocking(&st, extrem, ri);
          if (num == 1.0) {
            idx = 0;
            exitg1 = true;
          } else {
            num = curs[1];
            guard1 = false;
            if (curs[1] > 0.0) {
              loop_ub = 0;
              exitg3 = false;
              while ((!exitg3) && (loop_ub < 6)) {
                guard2 = false;
                if (1.0 + (real_T)loop_ub != curs[2]) {
                  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
                  /*                          Atemp(:) = wedges(fface(1),fface(2),[1 2 4],:); */
                  /*                          appf = AppFace(pointV,Atemp); */
                  if (num != (int32_T)muDoubleScalarFloor(num)) {
                    emlrtIntegerCheckR2012b(num, &e_emlrtDCI, sp);
                  }

                  i9 = wedges->size[0];
                  nx = (int32_T)num;
                  if (!((nx >= 1) && (nx <= i9))) {
                    emlrtDynamicBoundsCheckR2012b(nx, 1, i9, &s_emlrtBCI, sp);
                  }

                  for (nx = 0; nx < 12; nx++) {
                    b[nx] = wedges->data[((((int32_T)num + wedges->size[0] *
                      loop_ub) + wedges->size[0] * wedges->size[1] * (nx % 4)) +
                                          wedges->size[0] * wedges->size[1] *
                                          wedges->size[2] * (nx / 4)) - 1];
                  }

                  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
                  for (i9 = 0; i9 < 4; i9++) {
                    for (nx = 0; nx < 3; nx++) {
                      b_b[nx + 3 * i9] = b[i9 + (nx << 2)];
                    }
                  }

                  if (AppFace2(ri, b_b) == 1.0) {
                    idx = 0;
                    exitg3 = true;
                  } else {
                    guard2 = true;
                  }
                } else {
                  guard2 = true;
                }

                if (guard2) {
                  loop_ub++;
                  if (*emlrtBreakCheckR2012bFlagVar != 0) {
                    emlrtBreakCheckR2012b(sp);
                  }
                }
              }

              for (nx = 0; nx < 3; nx++) {
                b_x[nx] = (muDoubleScalarAbs(extrem[nx] - ri[nx]) < 1.0E-12);
              }

              num = b_x[0];
              for (nx = 0; nx < 2; nx++) {
                num += (real_T)b_x[nx + 1];
              }

              if (num == 3.0) {
                /* (abs(extrem-pointV) < 1.0e-12) */
                idx = 0;
                exitg1 = true;
              } else {
                guard1 = true;
              }
            } else {
              guard1 = true;
            }

            if (guard1) {
              for (i = 0; i < 3; i++) {
                extrem[i] = ri[i];
              }

              if (curs[0] != (int32_T)muDoubleScalarFloor(curs[0])) {
                emlrtIntegerCheckR2012b(curs[0], &f_emlrtDCI, sp);
              }

              i9 = trun2->size[0];
              loop_ub = (int32_T)curs[0];
              if (!((loop_ub >= 1) && (loop_ub <= i9))) {
                emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i9, &t_emlrtBCI, sp);
              }

              for (i9 = 0; i9 < 7; i9++) {
                curs[i9] = trun2->data[(loop_ub + trun2->size[0] * i9) - 1];
              }

              m++;

              /*  means that the path found is okay, then go to the next level */
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }
          }
        } else {
          idx = 0;
          exitg1 = true;
        }
      }
    }

    if (idx == 1) {
      st.site = &d_emlrtRSI;
      num = Blocking(&st, tx, ri);
      if (num == 1.0) {
        idx = 0;
      }
    }

    if (idx == 1) {
      Reflex = 1.0;

      /*          if (rvsds == 0) % (OR): commented -> 28.04.2017 */
      if (!(rvsds != 0.0)) {
        i9 = NbrSlns->size[0] * NbrSlns->size[1];
        if (ordmax != (int32_T)muDoubleScalarFloor(ordmax)) {
          emlrtIntegerCheckR2012b(ordmax, &n_emlrtDCI, sp);
        }

        nx = (int32_T)ordmax;
        if (!((nx >= 1) && (nx <= i9))) {
          emlrtDynamicBoundsCheckR2012b(nx, 1, i9, &sb_emlrtBCI, sp);
        }

        NbrSlns->data[nx - 1] = pass;
        i = 0;
        while (i <= m - 1) {
          b_m = m - i;
          if (!((b_m >= 1) && (b_m <= 10))) {
            emlrtDynamicBoundsCheckR2012b(b_m, 1, 10, &v_emlrtBCI, sp);
          }

          loop_ub = PSLN->size[0];
          nx = PSLN->size[1];
          idx = PSLN->size[2];
          i9 = 1 + i;
          if (!((i9 >= 1) && (i9 <= idx))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, idx, &y_emlrtBCI, sp);
          }

          i9 = (int32_T)pass;
          if (!((i9 >= 1) && (i9 <= nx))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, nx, &x_emlrtBCI, sp);
          }

          i9 = (int32_T)ordmax;
          if (!((i9 >= 1) && (i9 <= loop_ub))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, loop_ub, &w_emlrtBCI, sp);
          }

          for (i9 = 0; i9 < 3; i9++) {
            PSLN->data[((((int32_T)ordmax + PSLN->size[0] * ((int32_T)pass - 1))
                         + PSLN->size[0] * PSLN->size[1] * i) + PSLN->size[0] *
                        PSLN->size[1] * PSLN->size[2] * i9) - 1] = track[(b_m +
              10 * i9) - 1];
          }

          b_m = m - i;
          if (!((b_m >= 1) && (b_m <= 10))) {
            emlrtDynamicBoundsCheckR2012b(b_m, 1, 10, &ab_emlrtBCI, sp);
          }

          loop_ub = FSLN->size[0];
          nx = FSLN->size[1];
          idx = FSLN->size[2];
          i9 = 1 + i;
          if (!((i9 >= 1) && (i9 <= idx))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, idx, &db_emlrtBCI, sp);
          }

          i9 = (int32_T)pass;
          if (!((i9 >= 1) && (i9 <= nx))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, nx, &cb_emlrtBCI, sp);
          }

          i9 = (int32_T)ordmax;
          if (!((i9 >= 1) && (i9 <= loop_ub))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, loop_ub, &bb_emlrtBCI, sp);
          }

          for (i9 = 0; i9 < 2; i9++) {
            FSLN->data[((((int32_T)ordmax + FSLN->size[0] * ((int32_T)pass - 1))
                         + FSLN->size[0] * FSLN->size[1] * i) + FSLN->size[0] *
                        FSLN->size[1] * FSLN->size[2] * i9) - 1] = trackface
              [(b_m + 10 * i9) - 1];
          }

          i++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        pass++;
        count++;
      } else {
        i9 = NbrDSSlns->size[0];
        if (ordmax + 1.0 != (int32_T)muDoubleScalarFloor(ordmax + 1.0)) {
          emlrtIntegerCheckR2012b(ordmax + 1.0, &m_emlrtDCI, sp);
        }

        nx = (int32_T)(ordmax + 1.0);
        if (!((nx >= 1) && (nx <= i9))) {
          emlrtDynamicBoundsCheckR2012b(nx, 1, i9, &rb_emlrtBCI, sp);
        }

        NbrDSSlns->data[nx - 1] = pass;
        i = 0;
        while (i <= m - 1) {
          b_m = m - i;
          if (!((b_m >= 1) && (b_m <= 10))) {
            emlrtDynamicBoundsCheckR2012b(b_m, 1, 10, &eb_emlrtBCI, sp);
          }

          loop_ub = RF->size[0];
          nx = RF->size[1];
          idx = RF->size[2];
          i9 = 1 + i;
          if (!((i9 >= 1) && (i9 <= idx))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, idx, &hb_emlrtBCI, sp);
          }

          i9 = (int32_T)pass;
          if (!((i9 >= 1) && (i9 <= nx))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, nx, &gb_emlrtBCI, sp);
          }

          if (ordmax + 1.0 != (int32_T)muDoubleScalarFloor(ordmax + 1.0)) {
            emlrtIntegerCheckR2012b(ordmax + 1.0, &g_emlrtDCI, sp);
          }

          i9 = (int32_T)(ordmax + 1.0);
          if (!((i9 >= 1) && (i9 <= loop_ub))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, loop_ub, &fb_emlrtBCI, sp);
          }

          for (i9 = 0; i9 < 2; i9++) {
            RF->data[((((int32_T)(ordmax + 1.0) + RF->size[0] * ((int32_T)pass -
              1)) + RF->size[0] * RF->size[1] * i) + RF->size[0] * RF->size[1] *
                      RF->size[2] * i9) - 1] = trackface[(b_m + 10 * i9) - 1];
          }

          b_m = m - i;
          if (!((b_m >= 1) && (b_m <= 10))) {
            emlrtDynamicBoundsCheckR2012b(b_m, 1, 10, &ib_emlrtBCI, sp);
          }

          loop_ub = RP->size[0];
          nx = RP->size[1];
          idx = RP->size[2];
          i9 = 1 + i;
          if (!((i9 >= 1) && (i9 <= idx))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, idx, &lb_emlrtBCI, sp);
          }

          i9 = (int32_T)pass;
          if (!((i9 >= 1) && (i9 <= nx))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, nx, &kb_emlrtBCI, sp);
          }

          if (ordmax + 1.0 != (int32_T)muDoubleScalarFloor(ordmax + 1.0)) {
            emlrtIntegerCheckR2012b(ordmax + 1.0, &h_emlrtDCI, sp);
          }

          i9 = (int32_T)(ordmax + 1.0);
          if (!((i9 >= 1) && (i9 <= loop_ub))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, loop_ub, &jb_emlrtBCI, sp);
          }

          for (i9 = 0; i9 < 3; i9++) {
            RP->data[((((int32_T)(ordmax + 1.0) + RP->size[0] * ((int32_T)pass -
              1)) + RP->size[0] * RP->size[1] * i) + RP->size[0] * RP->size[1] *
                      RP->size[2] * i9) - 1] = track[(b_m + 10 * i9) - 1];
          }

          i++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        pass++;
        count++;
      }
    }

    ornum++;
    if ((real_T)ornum <= ind->size[0]) {
      i9 = trun2->size[0];
      nx = ind->size[0];
      loop_ub = (int32_T)ornum;
      if (!(loop_ub <= nx)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, nx, &xb_emlrtBCI, sp);
      }

      loop_ub = ind->data[loop_ub - 1];
      if (!((loop_ub >= 1) && (loop_ub <= i9))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i9, &mb_emlrtBCI, sp);
      }

      for (i9 = 0; i9 < 7; i9++) {
        curs[i9] = trun2->data[(loop_ub + trun2->size[0] * i9) - 1];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    } else {
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  emxFree_int32_T(&ind);
  if (Reflex == 0.0) {
    /*      if (rvsds == 0) % (OR): commented -> 28.04.2017 */
    if (!(rvsds != 0.0)) {
      i9 = NbrSlns->size[0] * NbrSlns->size[1];
      if (ordmax != (int32_T)muDoubleScalarFloor(ordmax)) {
        emlrtIntegerCheckR2012b(ordmax, &p_emlrtDCI, sp);
      }

      nx = (int32_T)ordmax;
      if (!((nx >= 1) && (nx <= i9))) {
        emlrtDynamicBoundsCheckR2012b(nx, 1, i9, &ub_emlrtBCI, sp);
      }

      NbrSlns->data[nx - 1] = 0.0;
    } else {
      i9 = NbrDSSlns->size[0];
      if (ordmax != (int32_T)muDoubleScalarFloor(ordmax)) {
        emlrtIntegerCheckR2012b(ordmax, &o_emlrtDCI, sp);
      }

      nx = (int32_T)ordmax;
      if (!((nx >= 1) && (nx <= i9))) {
        emlrtDynamicBoundsCheckR2012b(nx, 1, i9, &tb_emlrtBCI, sp);
      }

      NbrDSSlns->data[nx - 1] = 0.0;
    }
  }

  if ((count != 0.0) || (oldReflex == 1.0) || (Reflex == 1.0)) {
    Reflex = 1.0;
  } else {
    /*      if (rvsds == 0) % (OR): commented -> 28.04.2017 */
    if (!(rvsds != 0.0)) {
      i9 = NbrSlns->size[0] * NbrSlns->size[1];
      if (ordmax != (int32_T)muDoubleScalarFloor(ordmax)) {
        emlrtIntegerCheckR2012b(ordmax, &r_emlrtDCI, sp);
      }

      nx = (int32_T)ordmax;
      if (!((nx >= 1) && (nx <= i9))) {
        emlrtDynamicBoundsCheckR2012b(nx, 1, i9, &wb_emlrtBCI, sp);
      }

      NbrSlns->data[nx - 1] = 0.0;
    } else {
      i9 = NbrDSSlns->size[0];
      if (ordmax != (int32_T)muDoubleScalarFloor(ordmax)) {
        emlrtIntegerCheckR2012b(ordmax, &q_emlrtDCI, sp);
      }

      nx = (int32_T)ordmax;
      if (!((nx >= 1) && (nx <= i9))) {
        emlrtDynamicBoundsCheckR2012b(nx, 1, i9, &vb_emlrtBCI, sp);
      }

      NbrDSSlns->data[nx - 1] = 0.0;
    }
  }

  oldReflex = Reflex;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return Reflex;
}

void CalcPath2_init(void)
{
  oldReflex = 0.0;
}

void oldReflex_not_empty_init(void)
{
}

/* End of code generation (CalcPath2.c) */
