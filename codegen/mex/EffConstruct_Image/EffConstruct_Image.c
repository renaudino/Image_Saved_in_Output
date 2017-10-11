/*
 * EffConstruct_Image.c
 *
 * Code generation for function 'EffConstruct_Image'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct_Image.h"
#include "EffConstruct_Image_emxutil.h"
#include "EffPointsImages.h"
#include "Blocking.h"
#include "norm.h"
#include "AppFace2.h"
#include "squeeze.h"
#include "Breakthrough.h"
#include "EffConstruct_Image_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 394,   /* lineNo */
  "EffConstruct_Image",                /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 352, /* lineNo */
  "EffConstruct_Image",                /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 324, /* lineNo */
  "EffConstruct_Image",                /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 256, /* lineNo */
  "EffConstruct_Image",                /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 177, /* lineNo */
  "EffConstruct_Image",                /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 130, /* lineNo */
  "EffConstruct_Image",                /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 102, /* lineNo */
  "EffConstruct_Image",                /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 83,  /* lineNo */
  "EffConstruct_Image",                /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 49,  /* lineNo */
  "EffConstruct_Image",                /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pathName */
};

static emlrtRTEInfo m_emlrtRTEI = { 1, /* lineNo */
  10,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 25,/* lineNo */
  1,                                   /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 26,/* lineNo */
  1,                                   /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 33,/* lineNo */
  1,                                   /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 34,/* lineNo */
  1,                                   /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 35,/* lineNo */
  1,                                   /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 42,/* lineNo */
  1,                                   /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 43,/* lineNo */
  1,                                   /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 48,/* lineNo */
  9,                                   /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  35,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  43,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  45,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  76,                                  /* lineNo */
  23,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  23,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  31,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 77,    /* lineNo */
  34,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  34,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  77,                                  /* lineNo */
  17,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  23,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  33,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo v_emlrtRTEI = { 82,/* lineNo */
  25,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  28,                                  /* colNo */
  "loopdomain",                        /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  38,                                  /* colNo */
  "loopdomain",                        /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo w_emlrtRTEI = { 91,/* lineNo */
  21,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  94,                                  /* lineNo */
  30,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  94,                                  /* lineNo */
  32,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  31,                                  /* colNo */
  "trackface",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 110, /* lineNo */
  51,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  110,                                 /* lineNo */
  51,                                  /* colNo */
  "vnfaces",                           /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 110, /* lineNo */
  66,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  110,                                 /* lineNo */
  66,                                  /* colNo */
  "vnfaces",                           /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 125, /* lineNo */
  62,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  125,                                 /* lineNo */
  62,                                  /* colNo */
  "wedges",                            /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 125, /* lineNo */
  75,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  125,                                 /* lineNo */
  75,                                  /* colNo */
  "wedges",                            /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 145, /* lineNo */
  75,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  145,                                 /* lineNo */
  75,                                  /* colNo */
  "wedges",                            /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  169,                                 /* lineNo */
  34,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  169,                                 /* lineNo */
  36,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  27,                                  /* colNo */
  "track",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  189,                                 /* lineNo */
  61,                                  /* colNo */
  "track",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  189,                                 /* lineNo */
  34,                                  /* colNo */
  "PSLN",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  189,                                 /* lineNo */
  38,                                  /* colNo */
  "PSLN",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  189,                                 /* lineNo */
  48,                                  /* colNo */
  "PSLN",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  190,                                 /* lineNo */
  65,                                  /* colNo */
  "trackface",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  190,                                 /* lineNo */
  34,                                  /* colNo */
  "FSLN",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  190,                                 /* lineNo */
  38,                                  /* colNo */
  "FSLN",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  190,                                 /* lineNo */
  48,                                  /* colNo */
  "FSLN",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  106,                                 /* lineNo */
  32,                                  /* colNo */
  "trackimage",                        /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  191,                                 /* lineNo */
  66,                                  /* colNo */
  "trackimage",                        /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  191,                                 /* lineNo */
  34,                                  /* colNo */
  "ISLN",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  191,                                 /* lineNo */
  38,                                  /* colNo */
  "ISLN",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  191,                                 /* lineNo */
  48,                                  /* colNo */
  "ISLN",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  201,                                 /* lineNo */
  57,                                  /* colNo */
  "track",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  201,                                 /* lineNo */
  32,                                  /* colNo */
  "RP",                                /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  201,                                 /* lineNo */
  34,                                  /* colNo */
  "RP",                                /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  201,                                 /* lineNo */
  44,                                  /* colNo */
  "RP",                                /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  202,                                 /* lineNo */
  61,                                  /* colNo */
  "trackface",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  202,                                 /* lineNo */
  32,                                  /* colNo */
  "RF",                                /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  202,                                 /* lineNo */
  34,                                  /* colNo */
  "RF",                                /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  202,                                 /* lineNo */
  44,                                  /* colNo */
  "RF",                                /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  252,                                 /* lineNo */
  35,                                  /* colNo */
  "loopdomain",                        /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo x_emlrtRTEI = { 252,/* lineNo */
  22,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  40,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  48,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  254,                                 /* lineNo */
  41,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  254,                                 /* lineNo */
  49,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 263, /* lineNo */
  63,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  263,                                 /* lineNo */
  63,                                  /* colNo */
  "wedges",                            /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 263, /* lineNo */
  76,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  263,                                 /* lineNo */
  76,                                  /* colNo */
  "wedges",                            /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  282,                                 /* lineNo */
  46,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  282,                                 /* lineNo */
  54,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  282,                                 /* lineNo */
  33,                                  /* colNo */
  "leveltemp",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  284,                                 /* lineNo */
  23,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  285,                                 /* lineNo */
  52,                                  /* colNo */
  "leveltemp",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  285,                                 /* lineNo */
  54,                                  /* colNo */
  "leveltemp",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  285,                                 /* lineNo */
  23,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  285,                                 /* lineNo */
  31,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  285,                                 /* lineNo */
  33,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  285,                                 /* lineNo */
  17,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  316,                                 /* lineNo */
  22,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  316,                                 /* lineNo */
  31,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  326,                                 /* lineNo */
  19,                                  /* colNo */
  "track",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  327,                                 /* lineNo */
  23,                                  /* colNo */
  "trackface",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  328,                                 /* lineNo */
  24,                                  /* colNo */
  "trackimage",                        /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 332, /* lineNo */
  43,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  332,                                 /* lineNo */
  43,                                  /* colNo */
  "vnfaces",                           /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 332, /* lineNo */
  58,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  332,                                 /* lineNo */
  58,                                  /* colNo */
  "vnfaces",                           /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 346, /* lineNo */
  54,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  346,                                 /* lineNo */
  54,                                  /* colNo */
  "wedges",                            /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 346, /* lineNo */
  67,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  346,                                 /* lineNo */
  67,                                  /* colNo */
  "wedges",                            /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 365, /* lineNo */
  67,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  365,                                 /* lineNo */
  67,                                  /* colNo */
  "wedges",                            /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  387,                                 /* lineNo */
  26,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  387,                                 /* lineNo */
  28,                                  /* colNo */
  "Mpath",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  406,                                 /* lineNo */
  59,                                  /* colNo */
  "track",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  406,                                 /* lineNo */
  26,                                  /* colNo */
  "PSLN",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  406,                                 /* lineNo */
  33,                                  /* colNo */
  "PSLN",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  406,                                 /* lineNo */
  46,                                  /* colNo */
  "PSLN",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  407,                                 /* lineNo */
  63,                                  /* colNo */
  "trackface",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  407,                                 /* lineNo */
  26,                                  /* colNo */
  "FSLN",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  407,                                 /* lineNo */
  33,                                  /* colNo */
  "FSLN",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  407,                                 /* lineNo */
  46,                                  /* colNo */
  "FSLN",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  408,                                 /* lineNo */
  64,                                  /* colNo */
  "trackimage",                        /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  408,                                 /* lineNo */
  26,                                  /* colNo */
  "ISLN",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  408,                                 /* lineNo */
  33,                                  /* colNo */
  "ISLN",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  408,                                 /* lineNo */
  46,                                  /* colNo */
  "ISLN",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  416,                                 /* lineNo */
  61,                                  /* colNo */
  "track",                             /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  416,                                 /* lineNo */
  24,                                  /* colNo */
  "RP",                                /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  416,                                 /* lineNo */
  35,                                  /* colNo */
  "RP",                                /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  416,                                 /* lineNo */
  48,                                  /* colNo */
  "RP",                                /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  417,                                 /* lineNo */
  65,                                  /* colNo */
  "trackface",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  417,                                 /* lineNo */
  24,                                  /* colNo */
  "RF",                                /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  417,                                 /* lineNo */
  35,                                  /* colNo */
  "RF",                                /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  417,                                 /* lineNo */
  48,                                  /* colNo */
  "RF",                                /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo y_emlrtRTEI = { 430,/* lineNo */
  9,                                   /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m"/* pName */
};

static emlrtDCInfo n_emlrtDCI = { 26,  /* lineNo */
  21,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 26,  /* lineNo */
  21,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 33,  /* lineNo */
  15,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 34,  /* lineNo */
  19,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 35,  /* lineNo */
  20,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 42,  /* lineNo */
  21,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 42,  /* lineNo */
  21,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 25,  /* lineNo */
  14,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 25,  /* lineNo */
  14,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 43,  /* lineNo */
  20,                                  /* colNo */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  435,                                 /* lineNo */
  23,                                  /* colNo */
  "NbrDSSlns",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  433,                                 /* lineNo */
  21,                                  /* colNo */
  "NbrSlns",                           /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  444,                                 /* lineNo */
  23,                                  /* colNo */
  "NbrDSSlns",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  442,                                 /* lineNo */
  21,                                  /* colNo */
  "NbrSlns",                           /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  305,                                 /* lineNo */
  16,                                  /* colNo */
  "loopdomain",                        /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  313,                                 /* lineNo */
  28,                                  /* colNo */
  "loopdomain",                        /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  332,                                 /* lineNo */
  53,                                  /* colNo */
  "trackface",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  332,                                 /* lineNo */
  68,                                  /* colNo */
  "trackface",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  413,                                 /* lineNo */
  37,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  413,                                 /* lineNo */
  22,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  414,                                 /* lineNo */
  46,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  414,                                 /* lineNo */
  27,                                  /* colNo */
  "NbrDSSlns",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  416,                                 /* lineNo */
  40,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  417,                                 /* lineNo */
  40,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  403,                                 /* lineNo */
  37,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  403,                                 /* lineNo */
  22,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  404,                                 /* lineNo */
  40,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  404,                                 /* lineNo */
  25,                                  /* colNo */
  "NbrSlns",                           /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  406,                                 /* lineNo */
  38,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  407,                                 /* lineNo */
  38,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  408,                                 /* lineNo */
  38,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  280,                                 /* lineNo */
  44,                                  /* colNo */
  "loopdomain",                        /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  292,                                 /* lineNo */
  36,                                  /* colNo */
  "loopdomain",                        /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  282,                                 /* lineNo */
  64,                                  /* colNo */
  "numberuse",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  269,                                 /* lineNo */
  31,                                  /* colNo */
  "numberuse",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  50,                                  /* colNo */
  "loopdomain",                        /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  28,                                  /* colNo */
  "loopdomain",                        /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo se_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  220,                                 /* lineNo */
  31,                                  /* colNo */
  "loopdomain",                        /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  227,                                 /* lineNo */
  41,                                  /* colNo */
  "loopdomain",                        /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  110,                                 /* lineNo */
  61,                                  /* colNo */
  "trackface",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ve_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  110,                                 /* lineNo */
  76,                                  /* colNo */
  "trackface",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo we_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  196,                                 /* lineNo */
  42,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  196,                                 /* lineNo */
  30,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ye_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  197,                                 /* lineNo */
  45,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo af_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  197,                                 /* lineNo */
  35,                                  /* colNo */
  "NbrDSSlns",                         /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  201,                                 /* lineNo */
  39,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  202,                                 /* lineNo */
  39,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo df_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  186,                                 /* lineNo */
  42,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ef_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  186,                                 /* lineNo */
  30,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ff_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  187,                                 /* lineNo */
  45,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  187,                                 /* lineNo */
  33,                                  /* colNo */
  "NbrSlns",                           /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  189,                                 /* lineNo */
  43,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo if_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  190,                                 /* lineNo */
  43,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  191,                                 /* lineNo */
  43,                                  /* colNo */
  "pass",                              /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  83,                                  /* lineNo */
  32,                                  /* colNo */
  "loopdomain",                        /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  16,                                  /* colNo */
  "loopdomain",                        /* aName */
  "EffConstruct_Image",                /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\EffConstruct_Image.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void EffConstruct_Image(const emlrtStack *sp, real_T OrdRef, const real_T tx[3],
  real_T rvsds)
{
  emxArray_real_T *pass;
  uint32_T x;
  real_T count;
  int32_T i0;
  int32_T loop_ub;
  emxArray_real_T *leveltemp;
  real_T cache;
  emxArray_real_T *track;
  emxArray_real_T *trackface;
  emxArray_real_T *trackimage;
  int32_T i;
  emxArray_real_T *numberuse;
  real_T pointV[3];
  emxArray_real_T *loopdomain;
  int32_T b;
  real_T golevel;
  int32_T i1;
  int32_T goflag;
  real_T jumplevel;
  int32_T order;
  emxArray_int32_T *r0;
  emxArray_int32_T *r1;
  emxArray_real_T *b_leveltemp;
  int32_T p;
  int32_T i2;
  int32_T n;
  real_T b_n;
  int32_T glob;
  int32_T exitg3;
  int32_T b_trackface;
  real_T j;
  int32_T pp;
  real_T back[5];
  real_T facecheck[2];
  real_T m;
  real_T extrem[3];
  boolean_T exitg1;
  real_T difftest[3];
  real_T vnfaces_re[3];
  int32_T iv0[3];
  real_T dv0[12];
  real_T dv1[12];
  int32_T c_leveltemp[3];
  real_T b_vnfaces_re;
  boolean_T guard1 = false;
  boolean_T exitg2;
  boolean_T guard2 = false;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &pass, 1, &n_emlrtRTEI, true);

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
  if (!(OrdRef >= 0.0)) {
    emlrtNonNegativeCheckR2012b(OrdRef, &v_emlrtDCI, sp);
  }

  if (OrdRef != (int32_T)muDoubleScalarFloor(OrdRef)) {
    emlrtIntegerCheckR2012b(OrdRef, &u_emlrtDCI, sp);
  }

  pass->size[0] = (int32_T)OrdRef;
  emxEnsureCapacity(sp, (emxArray__common *)pass, i0, sizeof(real_T),
                    &m_emlrtRTEI);
  if (!(OrdRef >= 0.0)) {
    emlrtNonNegativeCheckR2012b(OrdRef, &v_emlrtDCI, sp);
  }

  if (OrdRef != (int32_T)muDoubleScalarFloor(OrdRef)) {
    emlrtIntegerCheckR2012b(OrdRef, &u_emlrtDCI, sp);
  }

  loop_ub = (int32_T)OrdRef;
  for (i0 = 0; i0 < loop_ub; i0++) {
    pass->data[i0] = 0.0;
  }

  emxInit_real_T1(sp, &leveltemp, 3, &o_emlrtRTEI, true);
  i0 = leveltemp->size[0] * leveltemp->size[1] * leveltemp->size[2];
  leveltemp->size[0] = 1;
  cache = Nblock * 6.0;
  if (!(cache >= 0.0)) {
    emlrtNonNegativeCheckR2012b(cache, &o_emlrtDCI, sp);
  }

  if (cache != (int32_T)muDoubleScalarFloor(cache)) {
    emlrtIntegerCheckR2012b(cache, &n_emlrtDCI, sp);
  }

  leveltemp->size[1] = (int32_T)cache;
  leveltemp->size[2] = 5;
  emxEnsureCapacity(sp, (emxArray__common *)leveltemp, i0, sizeof(real_T),
                    &m_emlrtRTEI);
  cache = Nblock * 6.0;
  if (!(cache >= 0.0)) {
    emlrtNonNegativeCheckR2012b(cache, &o_emlrtDCI, sp);
  }

  if (cache != (int32_T)muDoubleScalarFloor(cache)) {
    emlrtIntegerCheckR2012b(cache, &n_emlrtDCI, sp);
  }

  loop_ub = (int32_T)cache * 5;
  for (i0 = 0; i0 < loop_ub; i0++) {
    leveltemp->data[i0] = 0.0;
  }

  emxInit_real_T3(sp, &track, 2, &p_emlrtRTEI, true);
  i0 = track->size[0] * track->size[1];
  if (OrdRef + 1.0 != (int32_T)muDoubleScalarFloor(OrdRef + 1.0)) {
    emlrtIntegerCheckR2012b(OrdRef + 1.0, &p_emlrtDCI, sp);
  }

  track->size[0] = (int32_T)(OrdRef + 1.0);
  track->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)track, i0, sizeof(real_T),
                    &m_emlrtRTEI);
  if (OrdRef + 1.0 != (int32_T)muDoubleScalarFloor(OrdRef + 1.0)) {
    emlrtIntegerCheckR2012b(OrdRef + 1.0, &p_emlrtDCI, sp);
  }

  loop_ub = (int32_T)(OrdRef + 1.0) * 3;
  for (i0 = 0; i0 < loop_ub; i0++) {
    track->data[i0] = 0.0;
  }

  emxInit_real_T3(sp, &trackface, 2, &q_emlrtRTEI, true);
  i0 = trackface->size[0] * trackface->size[1];
  if (OrdRef + 1.0 != (int32_T)muDoubleScalarFloor(OrdRef + 1.0)) {
    emlrtIntegerCheckR2012b(OrdRef + 1.0, &q_emlrtDCI, sp);
  }

  trackface->size[0] = (int32_T)(OrdRef + 1.0);
  trackface->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)trackface, i0, sizeof(real_T),
                    &m_emlrtRTEI);
  if (OrdRef + 1.0 != (int32_T)muDoubleScalarFloor(OrdRef + 1.0)) {
    emlrtIntegerCheckR2012b(OrdRef + 1.0, &q_emlrtDCI, sp);
  }

  loop_ub = (int32_T)(OrdRef + 1.0) << 1;
  for (i0 = 0; i0 < loop_ub; i0++) {
    trackface->data[i0] = 0.0;
  }

  emxInit_real_T3(sp, &trackimage, 2, &r_emlrtRTEI, true);
  i0 = trackimage->size[0] * trackimage->size[1];
  if (OrdRef + 1.0 != (int32_T)muDoubleScalarFloor(OrdRef + 1.0)) {
    emlrtIntegerCheckR2012b(OrdRef + 1.0, &r_emlrtDCI, sp);
  }

  trackimage->size[0] = (int32_T)(OrdRef + 1.0);
  trackimage->size[1] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)trackimage, i0, sizeof(real_T),
                    &m_emlrtRTEI);
  if (OrdRef + 1.0 != (int32_T)muDoubleScalarFloor(OrdRef + 1.0)) {
    emlrtIntegerCheckR2012b(OrdRef + 1.0, &r_emlrtDCI, sp);
  }

  loop_ub = (int32_T)(OrdRef + 1.0) * 3;
  for (i0 = 0; i0 < loop_ub; i0++) {
    trackimage->data[i0] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    pointV[i] = 0.0;
  }

  emxInit_real_T3(sp, &numberuse, 2, &s_emlrtRTEI, true);

  /*  back = zeros(1,3); */
  i0 = numberuse->size[0] * numberuse->size[1];
  numberuse->size[0] = 1;
  cache = Nblock * 6.0;
  if (!(cache >= 0.0)) {
    emlrtNonNegativeCheckR2012b(cache, &t_emlrtDCI, sp);
  }

  if (cache != (int32_T)muDoubleScalarFloor(cache)) {
    emlrtIntegerCheckR2012b(cache, &s_emlrtDCI, sp);
  }

  numberuse->size[1] = (int32_T)cache;
  emxEnsureCapacity(sp, (emxArray__common *)numberuse, i0, sizeof(real_T),
                    &m_emlrtRTEI);
  cache = Nblock * 6.0;
  if (!(cache >= 0.0)) {
    emlrtNonNegativeCheckR2012b(cache, &t_emlrtDCI, sp);
  }

  if (cache != (int32_T)muDoubleScalarFloor(cache)) {
    emlrtIntegerCheckR2012b(cache, &s_emlrtDCI, sp);
  }

  loop_ub = (int32_T)cache;
  for (i0 = 0; i0 < loop_ub; i0++) {
    numberuse->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &loopdomain, 1, &t_emlrtRTEI, true);
  i0 = loopdomain->size[0];
  if (OrdRef + 1.0 != (int32_T)muDoubleScalarFloor(OrdRef + 1.0)) {
    emlrtIntegerCheckR2012b(OrdRef + 1.0, &w_emlrtDCI, sp);
  }

  loopdomain->size[0] = (int32_T)(OrdRef + 1.0);
  emxEnsureCapacity(sp, (emxArray__common *)loopdomain, i0, sizeof(real_T),
                    &m_emlrtRTEI);
  if (OrdRef + 1.0 != (int32_T)muDoubleScalarFloor(OrdRef + 1.0)) {
    emlrtIntegerCheckR2012b(OrdRef + 1.0, &w_emlrtDCI, sp);
  }

  loop_ub = (int32_T)(OrdRef + 1.0);
  for (i0 = 0; i0 < loop_ub; i0++) {
    loopdomain->data[i0] = 0.0;
  }

  /* -------------------------------------------------------------------------% */
  loopdomain->data[0] = 1.0;

  /*  only Tx in the first level */
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, OrdRef, mxDOUBLE_CLASS, (int32_T)
    OrdRef, &u_emlrtRTEI, sp);
  i = 0;
  while (i <= (int32_T)OrdRef - 1) {
    /*  build up the original image tree */
    i0 = loopdomain->size[0];
    i1 = (int32_T)((1.0 + (real_T)i) + 1.0);
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &lf_emlrtBCI, sp);
    }

    st.site = &i_emlrtRSI;
    loopdomain->data[i1 - 1] = EffPointsImages(&st, 1.0 + (real_T)i);
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  b = 1;

  /*  flag */
  golevel = 2.0;
  goflag = 0;

  /*  original image tree: 0    updated image tree: 1 */
  jumplevel = OrdRef + 1.0;

  /*  pointer. from which point to update the image tree */
  order = 1;
  emxInit_int32_T(sp, &r0, 2, &m_emlrtRTEI, true);
  emxInit_int32_T1(sp, &r1, 1, &m_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_leveltemp, 3, &m_emlrtRTEI, true);
  while ((jumplevel > 1.0) && (order == 1)) {
    /*  update the image tree until go back to Tx */
    /*     %% part 1 */
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
            i2 = 0;
          } else {
            i0 = Mpath->size[1];
            if (!(2 <= i0)) {
              emlrtDynamicBoundsCheckR2012b(2, 1, i0, &b_emlrtBCI, sp);
            }

            i0 = 1;
            i1 = Mpath->size[1];
            i2 = Mpath->size[1];
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &c_emlrtBCI, sp);
            }
          }

          i1 = Mpath->size[0];
          glob = (int32_T)golevel;
          if (!((glob >= 1) && (glob <= i1))) {
            emlrtDynamicBoundsCheckR2012b(glob, 1, i1, &emlrtBCI, sp);
          }

          i1 = leveltemp->size[0] * leveltemp->size[1] * leveltemp->size[2];
          leveltemp->size[0] = 1;
          leveltemp->size[1] = i2 - i0;
          leveltemp->size[2] = 5;
          emxEnsureCapacity(sp, (emxArray__common *)leveltemp, i1, sizeof(real_T),
                            &m_emlrtRTEI);
          loop_ub = i2 - i0;
          for (i1 = 0; i1 < 5; i1++) {
            for (i2 = 0; i2 < loop_ub; i2++) {
              leveltemp->data[leveltemp->size[0] * i2 + leveltemp->size[0] *
                leveltemp->size[1] * i1] = Mpath->data[((glob + Mpath->size[0] *
                (i0 + i2)) + Mpath->size[0] * Mpath->size[1] * i1) - 1];
            }
          }

          /*  remove the first used point, renew the tree from the second point on this level */
          loop_ub = Mpath->size[1];
          i0 = Mpath->size[0];
          i1 = (int32_T)golevel;
          if (!((i1 >= 1) && (i1 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &d_emlrtBCI, sp);
          }

          for (i0 = 0; i0 < 5; i0++) {
            for (i1 = 0; i1 < loop_ub; i1++) {
              Mpath->data[(((int32_T)golevel + Mpath->size[0] * i1) +
                           Mpath->size[0] * Mpath->size[1] * i0) - 1] = 0.0;
            }
          }

          Mpath_dirty |= 1U;
          cache = Nblock * 6.0 - 1.0;
          if (1.0 > cache) {
            loop_ub = 0;
          } else {
            i0 = Mpath->size[1];
            if (!(1 <= i0)) {
              emlrtDynamicBoundsCheckR2012b(1, 1, i0, &f_emlrtBCI, sp);
            }

            if (cache != (int32_T)muDoubleScalarFloor(cache)) {
              emlrtIntegerCheckR2012b(cache, &emlrtDCI, sp);
            }

            i0 = Mpath->size[1];
            loop_ub = (int32_T)cache;
            if (!((loop_ub >= 1) && (loop_ub <= i0))) {
              emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &g_emlrtBCI, sp);
            }
          }

          i0 = Mpath->size[0];
          i1 = (int32_T)golevel;
          if (!((i1 >= 1) && (i1 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &e_emlrtBCI, sp);
          }

          i0 = i1 - 1;
          i1 = r1->size[0];
          r1->size[0] = loop_ub;
          emxEnsureCapacity(sp, (emxArray__common *)r1, i1, sizeof(int32_T),
                            &m_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            r1->data[i1] = i1;
          }

          iv0[0] = 1;
          iv0[1] = r1->size[0];
          iv0[2] = 5;
          emlrtSubAssignSizeCheckR2012b(iv0, 3, *(int32_T (*)[3])leveltemp->size,
            3, &emlrtECI, sp);
          for (i1 = 0; i1 < 5; i1++) {
            loop_ub = leveltemp->size[1];
            for (i2 = 0; i2 < loop_ub; i2++) {
              Mpath->data[(i0 + Mpath->size[0] * r1->data[i2]) + Mpath->size[0] *
                Mpath->size[1] * i1] = leveltemp->data[leveltemp->size[0] * i2 +
                leveltemp->size[0] * leveltemp->size[1] * i1];
            }
          }

          Mpath_dirty |= 1U;
          if (golevel + 1.0 > Mpath->size[0]) {
            i1 = 1;
            i0 = 1;
          } else {
            i0 = Mpath->size[0];
            i1 = (int32_T)((uint32_T)golevel + 1U);
            if (!((i1 >= 1) && (i1 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &h_emlrtBCI, sp);
            }

            i0 = Mpath->size[0];
            i2 = Mpath->size[0];
            if (!((i2 >= 1) && (i2 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &i_emlrtBCI, sp);
            }

            i0 = i2 + 1;
          }

          loop_ub = Mpath->size[1];
          pp = i0 - i1;
          for (i0 = 0; i0 < 5; i0++) {
            for (i2 = 0; i2 < loop_ub; i2++) {
              for (b_trackface = 0; b_trackface < pp; b_trackface++) {
                Mpath->data[(((i1 + b_trackface) + Mpath->size[0] * i2) +
                             Mpath->size[0] * Mpath->size[1] * i0) - 1] = 0.0;
              }
            }
          }

          Mpath_dirty |= 1U;

          /*  clear the last few levels for new imagepoints */
          if ((uint32_T)golevel + 1U > (uint32_T)loopdomain->size[0]) {
            i0 = 0;
            i2 = 0;
          } else {
            i0 = loopdomain->size[0];
            i1 = (int32_T)((uint32_T)golevel + 1U);
            if (!((i1 >= 1) && (i1 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &j_emlrtBCI, sp);
            }

            i0 = i1 - 1;
            i1 = loopdomain->size[0];
            i2 = loopdomain->size[0];
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &k_emlrtBCI, sp);
            }
          }

          i1 = r0->size[0] * r0->size[1];
          r0->size[0] = 1;
          r0->size[1] = i2 - i0;
          emxEnsureCapacity(sp, (emxArray__common *)r0, i1, sizeof(int32_T),
                            &m_emlrtRTEI);
          loop_ub = i2 - i0;
          for (i1 = 0; i1 < loop_ub; i1++) {
            r0->data[r0->size[0] * i1] = i0 + i1;
          }

          loop_ub = r0->size[0] * r0->size[1];
          for (i0 = 0; i0 < loop_ub; i0++) {
            loopdomain->data[r0->data[i0]] = 0.0;
          }

          i0 = (int32_T)((OrdRef + 1.0) + (1.0 - (golevel + 1.0)));
          emlrtForLoopVectorCheckR2012b(golevel + 1.0, 1.0, OrdRef + 1.0,
            mxDOUBLE_CLASS, i0, &v_emlrtRTEI, sp);
          loop_ub = 0;
          while (loop_ub <= i0 - 1) {
            m = (golevel + 1.0) + (real_T)loop_ub;
            i1 = loopdomain->size[0];
            i2 = (int32_T)m;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &kf_emlrtBCI, sp);
            }

            st.site = &h_emlrtRSI;
            loopdomain->data[i2 - 1] = EffPointsImages(&st, m - 1.0);
            loop_ub++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(sp);
            }
          }

          i0 = loopdomain->size[0];
          i1 = (int32_T)golevel;
          if (!((i1 >= 1) && (i1 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &qe_emlrtBCI, sp);
          }

          i0 = loopdomain->size[0];
          i2 = (int32_T)golevel;
          if (!((i2 >= 1) && (i2 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &re_emlrtBCI, sp);
          }

          loopdomain->data[i2 - 1] = loopdomain->data[i1 - 1] - 1.0;
        }

        i0 = (int32_T)(OrdRef + (1.0 - golevel));
        emlrtForLoopVectorCheckR2012b(golevel, 1.0, OrdRef, mxDOUBLE_CLASS, i0,
          &w_emlrtRTEI, sp);
        n = 0;
        while (n <= i0 - 1) {
          b_n = golevel + (real_T)n;

          /*  backtrack from the new point */
          glob = 1;
          j = b_n;
          i1 = Mpath->size[1];
          if (!(1 <= i1)) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i1, &m_emlrtBCI, sp);
          }

          i1 = Mpath->size[0];
          pp = (int32_T)b_n;
          if (!((pp >= 1) && (pp <= i1))) {
            emlrtDynamicBoundsCheckR2012b(pp, 1, i1, &l_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < 5; i1++) {
            back[i1] = Mpath->data[(pp + Mpath->size[0] * Mpath->size[1] * i1) -
              1];
          }

          for (i = 0; i < 3; i++) {
            extrem[i] = recept[i];
          }

          m = 1.0;
          exitg1 = false;
          while ((!exitg1) && ((j != 1.0) && (glob == 1))) {
            /*   face */
            /*  point */
            st.site = &g_emlrtRSI;
            Breakthrough(&st, *(real_T (*)[2])&back[0], *(real_T (*)[3])&back[2],
                         extrem, pointV);
            pp = track->size[0];
            i1 = (int32_T)m;
            if (!((i1 >= 1) && (i1 <= pp))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, pp, &v_emlrtBCI, sp);
            }

            for (i1 = 0; i1 < 3; i1++) {
              track->data[((int32_T)m + track->size[0] * i1) - 1] = pointV[i1];
            }

            /*  coordinates of reflection point */
            loop_ub = trackface->size[0];
            i1 = (int32_T)m;
            if (!((i1 >= 1) && (i1 <= loop_ub))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &n_emlrtBCI, sp);
            }

            for (i1 = 0; i1 < 2; i1++) {
              trackface->data[((int32_T)m + trackface->size[0] * i1) - 1] =
                back[i1];
            }

            /*  face */
            pp = trackimage->size[0];
            i1 = (int32_T)m;
            if (!((i1 >= 1) && (i1 <= pp))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, pp, &fb_emlrtBCI, sp);
            }

            /*  image */
            for (i = 0; i < 3; i++) {
              trackimage->data[((int32_T)m + trackimage->size[0] * i) - 1] =
                back[2 + i];
              difftest[i] = extrem[i] - pointV[i];
            }

            /*                      if (back(1) ~= 0) */
            i1 = trackface->size[0];
            i2 = (int32_T)m;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ve_emlrtBCI, sp);
            }

            cache = trackface->data[(i2 + trackface->size[0]) - 1];
            if (cache != (int32_T)muDoubleScalarFloor(cache)) {
              emlrtIntegerCheckR2012b(cache, &c_emlrtDCI, sp);
            }

            loop_ub = (int32_T)cache;
            if (!((loop_ub >= 1) && (loop_ub <= 6))) {
              emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 6, &p_emlrtBCI, sp);
            }

            i1 = trackface->size[0];
            i2 = (int32_T)m;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ue_emlrtBCI, sp);
            }

            cache = trackface->data[i2 - 1];
            if (cache != (int32_T)muDoubleScalarFloor(cache)) {
              emlrtIntegerCheckR2012b(cache, &b_emlrtDCI, sp);
            }

            i1 = vnfaces->size[0];
            b_trackface = (int32_T)cache;
            if (!((b_trackface >= 1) && (b_trackface <= i1))) {
              emlrtDynamicBoundsCheckR2012b(b_trackface, 1, i1, &o_emlrtBCI, sp);
            }

            cache = 0.0;
            for (pp = 0; pp < 3; pp++) {
              b_vnfaces_re = vnfaces->data[((b_trackface + vnfaces->size[0] *
                (loop_ub - 1)) + vnfaces->size[0] * vnfaces->size[1] * pp) - 1];
              cache += b_vnfaces_re * difftest[pp];
            }

            if (cache <= 0.0) {
              glob = 0;
              exitg1 = true;
            } else {
              /*                      end */
              /*                      if (back(1) == 0) */
              /*                          app = AppGround(pointV); */
              /*                      else */
              /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
              /*                          app = AppFace(pointV,back_temp); % Attention AppFace input dimension match */
              if (back[0] != (int32_T)muDoubleScalarFloor(back[0])) {
                emlrtIntegerCheckR2012b(back[0], &d_emlrtDCI, sp);
              }

              i1 = wedges->size[0];
              i2 = (int32_T)back[0];
              if (!((i2 >= 1) && (i2 <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &q_emlrtBCI, sp);
              }

              if (back[1] != (int32_T)muDoubleScalarFloor(back[1])) {
                emlrtIntegerCheckR2012b(back[1], &e_emlrtDCI, sp);
              }

              i1 = (int32_T)back[1];
              if (!((i1 >= 1) && (i1 <= 6))) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &r_emlrtBCI, sp);
              }

              /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
              /*                      end */
              for (i1 = 0; i1 < 3; i1++) {
                for (i2 = 0; i2 < 4; i2++) {
                  dv0[i2 + (i1 << 2)] = wedges->data[((((int32_T)back[0] +
                    wedges->size[0] * ((int32_T)back[1] - 1)) + wedges->size[0] *
                    wedges->size[1] * i2) + wedges->size[0] * wedges->size[1] *
                    wedges->size[2] * i1) - 1];
                }
              }

              squeeze(dv0, dv1);
              for (i1 = 0; i1 < 4; i1++) {
                for (i2 = 0; i2 < 3; i2++) {
                  dv0[i2 + 3 * i1] = dv1[i1 + (i2 << 2)];
                }
              }

              if (AppFace2(pointV, dv0) == 1.0) {
                st.site = &f_emlrtRSI;
                cache = Blocking(&st, extrem, pointV);
                if (cache == 1.0) {
                  glob = 0;
                  exitg1 = true;
                } else {
                  cache = back[0];

                  /*  index of the current block */
                  guard1 = false;
                  if (back[0] > 0.0) {
                    pp = 0;
                    exitg2 = false;
                    while ((!exitg2) && (pp < 6)) {
                      guard2 = false;
                      if (1.0 + (real_T)pp != back[1]) {
                        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
                        /*                                      appf = AppFace(pointV,fface); */
                        if (cache != (int32_T)muDoubleScalarFloor(cache)) {
                          emlrtIntegerCheckR2012b(cache, &f_emlrtDCI, sp);
                        }

                        i1 = wedges->size[0];
                        i2 = (int32_T)cache;
                        if (!((i2 >= 1) && (i2 <= i1))) {
                          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &s_emlrtBCI,
                            sp);
                        }

                        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
                        for (i1 = 0; i1 < 3; i1++) {
                          for (i2 = 0; i2 < 4; i2++) {
                            dv0[i2 + (i1 << 2)] = wedges->data[((((int32_T)cache
                              + wedges->size[0] * pp) + wedges->size[0] *
                              wedges->size[1] * i2) + wedges->size[0] *
                              wedges->size[1] * wedges->size[2] * i1) - 1];
                          }
                        }

                        squeeze(dv0, dv1);
                        for (i1 = 0; i1 < 4; i1++) {
                          for (i2 = 0; i2 < 3; i2++) {
                            dv0[i2 + 3 * i1] = dv1[i1 + (i2 << 2)];
                          }
                        }

                        if (AppFace2(pointV, dv0) == 1.0) {
                          glob = 0;
                          exitg2 = true;
                        } else {
                          guard2 = true;
                        }
                      } else {
                        guard2 = true;
                      }

                      if (guard2) {
                        pp++;
                        if (*emlrtBreakCheckR2012bFlagVar != 0) {
                          emlrtBreakCheckR2012b(sp);
                        }
                      }
                    }

                    /*  test */
                    for (i = 0; i < 3; i++) {
                      difftest[i] = extrem[i] - pointV[i];
                    }

                    if (norm(difftest) < 1.0E-12) {
                      glob = 0;
                      exitg1 = true;
                    } else {
                      guard1 = true;
                    }
                  } else {
                    guard1 = true;
                  }

                  if (guard1) {
                    for (i = 0; i < 3; i++) {
                      extrem[i] = pointV[i];
                    }

                    j--;
                    i1 = Mpath->size[1];
                    if (!(1 <= i1)) {
                      emlrtDynamicBoundsCheckR2012b(1, 1, i1, &u_emlrtBCI, sp);
                    }

                    i1 = Mpath->size[0];
                    pp = (int32_T)j;
                    if (!((pp >= 1) && (pp <= i1))) {
                      emlrtDynamicBoundsCheckR2012b(pp, 1, i1, &t_emlrtBCI, sp);
                    }

                    for (i1 = 0; i1 < 5; i1++) {
                      back[i1] = Mpath->data[(pp + Mpath->size[0] * Mpath->size
                        [1] * i1) - 1];
                    }

                    /*  the first point of upper level */
                    m++;

                    /*   the reflection point is okay, go to the upper level */
                    if (*emlrtBreakCheckR2012bFlagVar != 0) {
                      emlrtBreakCheckR2012b(sp);
                    }
                  }
                }
              } else {
                glob = 0;
                exitg1 = true;
              }
            }
          }

          /*  while (j ~=0) */
          if (glob == 1) {
            for (i = 0; i < 3; i++) {
              extrem[i] = tx[i];
            }

            st.site = &e_emlrtRSI;
            cache = Blocking(&st, extrem, pointV);

            /*   input of Blocking should be 3*1, so use tx' */
            if (cache == 1.0) {
              glob = 0;
            }
          }

          if (glob == 1) {
            Reflex = 1.0;
            Reflex_dirty |= 1U;
            if (rvsds == 0.0) {
              i1 = pass->size[0];
              i2 = (int32_T)b_n - 1;
              if (!((i2 >= 1) && (i2 <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &df_emlrtBCI, sp);
              }

              i1 = pass->size[0];
              b_trackface = (int32_T)b_n - 1;
              if (!((b_trackface >= 1) && (b_trackface <= i1))) {
                emlrtDynamicBoundsCheckR2012b(b_trackface, 1, i1, &ef_emlrtBCI,
                  sp);
              }

              pass->data[b_trackface - 1] = pass->data[i2 - 1] + 1.0;

              /*  test */
              i1 = pass->size[0];
              i2 = (int32_T)b_n - 1;
              if (!((i2 >= 1) && (i2 <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ff_emlrtBCI, sp);
              }

              i1 = NbrSlns->size[0];
              b_trackface = (int32_T)b_n - 1;
              if (!((b_trackface >= 1) && (b_trackface <= i1))) {
                emlrtDynamicBoundsCheckR2012b(b_trackface, 1, i1, &gf_emlrtBCI,
                  sp);
              }

              NbrSlns->data[b_trackface - 1] = pass->data[i2 - 1];
              NbrSlns_dirty |= 1U;
              i = 0;
              while (i <= (int32_T)(uint32_T)m - 2) {
                i1 = track->size[0];
                loop_ub = (int32_T)(m - (1.0 + (real_T)i));
                if (!((loop_ub >= 1) && (loop_ub <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &w_emlrtBCI, sp);
                }

                i1 = PSLN->size[0];
                i2 = PSLN->size[1];
                b_trackface = PSLN->size[2];
                pp = 1 + i;
                if (!((pp >= 1) && (pp <= b_trackface))) {
                  emlrtDynamicBoundsCheckR2012b(pp, 1, b_trackface, &ab_emlrtBCI,
                    sp);
                }

                b_trackface = pass->size[0];
                pp = (int32_T)b_n - 1;
                if (!((pp >= 1) && (pp <= b_trackface))) {
                  emlrtDynamicBoundsCheckR2012b(pp, 1, b_trackface, &hf_emlrtBCI,
                    sp);
                }

                pp = (int32_T)pass->data[pp - 1];
                if (!((pp >= 1) && (pp <= i2))) {
                  emlrtDynamicBoundsCheckR2012b(pp, 1, i2, &y_emlrtBCI, sp);
                }

                i2 = (int32_T)b_n - 1;
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &x_emlrtBCI, sp);
                }

                for (i1 = 0; i1 < 3; i1++) {
                  PSLN->data[((((int32_T)b_n + PSLN->size[0] * (pp - 1)) +
                               PSLN->size[0] * PSLN->size[1] * i) + PSLN->size[0]
                              * PSLN->size[1] * PSLN->size[2] * i1) - 2] =
                    track->data[(loop_ub + track->size[0] * i1) - 1];
                }

                PSLN_dirty |= 1U;
                i1 = trackface->size[0];
                loop_ub = (int32_T)(m - (1.0 + (real_T)i));
                if (!((loop_ub >= 1) && (loop_ub <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &bb_emlrtBCI, sp);
                }

                i1 = FSLN->size[0];
                i2 = FSLN->size[1];
                b_trackface = FSLN->size[2];
                pp = 1 + i;
                if (!((pp >= 1) && (pp <= b_trackface))) {
                  emlrtDynamicBoundsCheckR2012b(pp, 1, b_trackface, &eb_emlrtBCI,
                    sp);
                }

                b_trackface = pass->size[0];
                pp = (int32_T)b_n - 1;
                if (!((pp >= 1) && (pp <= b_trackface))) {
                  emlrtDynamicBoundsCheckR2012b(pp, 1, b_trackface, &if_emlrtBCI,
                    sp);
                }

                pp = (int32_T)pass->data[pp - 1];
                if (!((pp >= 1) && (pp <= i2))) {
                  emlrtDynamicBoundsCheckR2012b(pp, 1, i2, &db_emlrtBCI, sp);
                }

                i2 = (int32_T)b_n - 1;
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &cb_emlrtBCI, sp);
                }

                for (i1 = 0; i1 < 2; i1++) {
                  FSLN->data[((((int32_T)b_n + FSLN->size[0] * (pp - 1)) +
                               FSLN->size[0] * FSLN->size[1] * i) + FSLN->size[0]
                              * FSLN->size[1] * FSLN->size[2] * i1) - 2] =
                    trackface->data[(loop_ub + trackface->size[0] * i1) - 1];
                }

                FSLN_dirty |= 1U;
                i1 = trackimage->size[0];
                loop_ub = (int32_T)(m - (1.0 + (real_T)i));
                if (!((loop_ub >= 1) && (loop_ub <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &gb_emlrtBCI, sp);
                }

                i1 = ISLN->size[0];
                i2 = ISLN->size[1];
                b_trackface = ISLN->size[2];
                pp = 1 + i;
                if (!((pp >= 1) && (pp <= b_trackface))) {
                  emlrtDynamicBoundsCheckR2012b(pp, 1, b_trackface, &jb_emlrtBCI,
                    sp);
                }

                b_trackface = pass->size[0];
                pp = (int32_T)b_n - 1;
                if (!((pp >= 1) && (pp <= b_trackface))) {
                  emlrtDynamicBoundsCheckR2012b(pp, 1, b_trackface, &jf_emlrtBCI,
                    sp);
                }

                pp = (int32_T)pass->data[pp - 1];
                if (!((pp >= 1) && (pp <= i2))) {
                  emlrtDynamicBoundsCheckR2012b(pp, 1, i2, &ib_emlrtBCI, sp);
                }

                i2 = (int32_T)b_n - 1;
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &hb_emlrtBCI, sp);
                }

                for (i1 = 0; i1 < 3; i1++) {
                  ISLN->data[((((int32_T)b_n + ISLN->size[0] * (pp - 1)) +
                               ISLN->size[0] * ISLN->size[1] * i) + ISLN->size[0]
                              * ISLN->size[1] * ISLN->size[2] * i1) - 2] =
                    trackimage->data[(loop_ub + trackimage->size[0] * i1) - 1];
                }

                ISLN_dirty |= 1U;
                i++;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(sp);
                }
              }

              /* pass(n-1) = pass(n-1) + 1; */
              count++;
            } else {
              i1 = pass->size[0];
              i2 = (int32_T)b_n - 1;
              if (!((i2 >= 1) && (i2 <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &we_emlrtBCI, sp);
              }

              i1 = pass->size[0];
              b_trackface = (int32_T)b_n - 1;
              if (!((b_trackface >= 1) && (b_trackface <= i1))) {
                emlrtDynamicBoundsCheckR2012b(b_trackface, 1, i1, &xe_emlrtBCI,
                  sp);
              }

              pass->data[b_trackface - 1] = pass->data[i2 - 1] + 1.0;

              /*  test */
              i1 = pass->size[0];
              i2 = (int32_T)b_n - 1;
              if (!((i2 >= 1) && (i2 <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ye_emlrtBCI, sp);
              }

              i1 = NbrDSSlns->size[0];
              b_trackface = (int32_T)b_n;
              if (!((b_trackface >= 1) && (b_trackface <= i1))) {
                emlrtDynamicBoundsCheckR2012b(b_trackface, 1, i1, &af_emlrtBCI,
                  sp);
              }

              NbrDSSlns->data[b_trackface - 1] = pass->data[i2 - 1];
              NbrDSSlns_dirty |= 1U;
              i = 0;
              while (i <= (int32_T)(uint32_T)m - 2) {
                i1 = track->size[0];
                loop_ub = (int32_T)(m - (1.0 + (real_T)i));
                if (!((loop_ub >= 1) && (loop_ub <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &kb_emlrtBCI, sp);
                }

                i1 = RP->size[0];
                i2 = RP->size[1];
                b_trackface = RP->size[2];
                pp = 1 + i;
                if (!((pp >= 1) && (pp <= b_trackface))) {
                  emlrtDynamicBoundsCheckR2012b(pp, 1, b_trackface, &nb_emlrtBCI,
                    sp);
                }

                b_trackface = pass->size[0];
                pp = (int32_T)b_n - 1;
                if (!((pp >= 1) && (pp <= b_trackface))) {
                  emlrtDynamicBoundsCheckR2012b(pp, 1, b_trackface, &bf_emlrtBCI,
                    sp);
                }

                pp = (int32_T)pass->data[pp - 1];
                if (!((pp >= 1) && (pp <= i2))) {
                  emlrtDynamicBoundsCheckR2012b(pp, 1, i2, &mb_emlrtBCI, sp);
                }

                i2 = (int32_T)b_n;
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &lb_emlrtBCI, sp);
                }

                for (i1 = 0; i1 < 3; i1++) {
                  RP->data[((((int32_T)b_n + RP->size[0] * (pp - 1)) + RP->size
                             [0] * RP->size[1] * i) + RP->size[0] * RP->size[1] *
                            RP->size[2] * i1) - 1] = track->data[(loop_ub +
                    track->size[0] * i1) - 1];
                }

                RP_dirty |= 1U;
                i1 = trackface->size[0];
                loop_ub = (int32_T)(m - (1.0 + (real_T)i));
                if (!((loop_ub >= 1) && (loop_ub <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &ob_emlrtBCI, sp);
                }

                i1 = RF->size[0];
                i2 = RF->size[1];
                b_trackface = RF->size[2];
                pp = 1 + i;
                if (!((pp >= 1) && (pp <= b_trackface))) {
                  emlrtDynamicBoundsCheckR2012b(pp, 1, b_trackface, &rb_emlrtBCI,
                    sp);
                }

                b_trackface = pass->size[0];
                pp = (int32_T)b_n - 1;
                if (!((pp >= 1) && (pp <= b_trackface))) {
                  emlrtDynamicBoundsCheckR2012b(pp, 1, b_trackface, &cf_emlrtBCI,
                    sp);
                }

                pp = (int32_T)pass->data[pp - 1];
                if (!((pp >= 1) && (pp <= i2))) {
                  emlrtDynamicBoundsCheckR2012b(pp, 1, i2, &qb_emlrtBCI, sp);
                }

                i2 = (int32_T)b_n;
                if (!((i2 >= 1) && (i2 <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &pb_emlrtBCI, sp);
                }

                for (i1 = 0; i1 < 2; i1++) {
                  RF->data[((((int32_T)b_n + RF->size[0] * (pp - 1)) + RF->size
                             [0] * RF->size[1] * i) + RF->size[0] * RF->size[1] *
                            RF->size[2] * i1) - 1] = trackface->data[(loop_ub +
                    trackface->size[0] * i1) - 1];
                }

                RF_dirty |= 1U;
                i++;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(sp);
                }
              }

              /*                      pass(n-1) = pass(n-1) + 1; */
              count++;
            }
          }

          n++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        if (goflag == 0) {
          golevel = OrdRef + 1.0;
          goflag = 1;
        } else {
          i0 = loopdomain->size[0];
          i1 = (int32_T)OrdRef;
          if (!((i1 >= 1) && (i1 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &se_emlrtBCI, sp);
          }

          if (loopdomain->data[i1 - 1] == 1.0) {
            /*  special case: only one point left on the last second level */
            p = 1;

            /*  flag */
            jumplevel = OrdRef - 1.0;
            pp = 0;
            while ((jumplevel >= 1.0) && (pp == 0)) {
              /*   backtrack until there is more than one valid point on that level, */
              i0 = loopdomain->size[0];
              i1 = (int32_T)jumplevel;
              if (!((i1 >= 1) && (i1 <= i0))) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &te_emlrtBCI, sp);
              }

              if (loopdomain->data[i1 - 1] == 1.0) {
                /*  important for the next start point */
                jumplevel--;
              } else {
                pp = 1;
              }

              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }

            golevel = OrdRef + 1.0;
          } else {
            p = 0;
            golevel = OrdRef + 1.0;
          }
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      /* ------check if the point on the last level is useful------% */
      if (golevel == OrdRef + 1.0) {
        x = 0U;
        i0 = loopdomain->size[0];
        i1 = (int32_T)golevel;
        if (!((i1 >= 1) && (i1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &sb_emlrtBCI, sp);
        }

        emlrtForLoopVectorCheckR2012b(1.0, 1.0, loopdomain->data[(int32_T)
          golevel - 1], mxDOUBLE_CLASS, (int32_T)loopdomain->data[(int32_T)
          golevel - 1], &x_emlrtRTEI, sp);
        b_trackface = 0;
        while (b_trackface <= (int32_T)loopdomain->data[(int32_T)golevel - 1] -
               1) {
          i0 = Mpath->size[1];
          if (!((b_trackface + 1 >= 1) && (b_trackface + 1 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(b_trackface + 1, 1, i0, &ub_emlrtBCI,
              sp);
          }

          pp = b_trackface + 1;
          i0 = Mpath->size[0];
          glob = (int32_T)golevel;
          if (!((glob >= 1) && (glob <= i0))) {
            emlrtDynamicBoundsCheckR2012b(glob, 1, i0, &tb_emlrtBCI, sp);
          }

          for (i0 = 0; i0 < 2; i0++) {
            facecheck[i0] = Mpath->data[((glob + Mpath->size[0] * (pp - 1)) +
              Mpath->size[0] * Mpath->size[1] * i0) - 1];
          }

          /*  1*2 */
          i0 = Mpath->size[1];
          if (!((b_trackface + 1 >= 1) && (b_trackface + 1 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(b_trackface + 1, 1, i0, &wb_emlrtBCI,
              sp);
          }

          pp = b_trackface + 1;
          i0 = Mpath->size[0];
          glob = (int32_T)golevel;
          if (!((glob >= 1) && (glob <= i0))) {
            emlrtDynamicBoundsCheckR2012b(glob, 1, i0, &vb_emlrtBCI, sp);
          }

          /*  3*1 */
          for (i = 0; i < 3; i++) {
            extrem[i] = Mpath->data[((glob + Mpath->size[0] * (pp - 1)) +
              Mpath->size[0] * Mpath->size[1] * (2 + i)) - 1];
            difftest[i] = recept[i];
          }

          /* 3*1 */
          st.site = &d_emlrtRSI;
          Breakthrough(&st, facecheck, extrem, difftest, vnfaces_re);

          /*                  if (facecheck(1) == 0)   % if ground */
          /*                      app = AppGround(pointVcheck); */
          /*                  else */
          /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
          /*                      app = AppFace(pointVcheck,facecheck); % Attention AppFace input dimension match */
          if (facecheck[0] != (int32_T)muDoubleScalarFloor(facecheck[0])) {
            emlrtIntegerCheckR2012b(facecheck[0], &g_emlrtDCI, sp);
          }

          i0 = wedges->size[0];
          i1 = (int32_T)facecheck[0];
          if (!((i1 >= 1) && (i1 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &xb_emlrtBCI, sp);
          }

          if (facecheck[1] != (int32_T)muDoubleScalarFloor(facecheck[1])) {
            emlrtIntegerCheckR2012b(facecheck[1], &h_emlrtDCI, sp);
          }

          i0 = (int32_T)facecheck[1];
          if (!((i0 >= 1) && (i0 <= 6))) {
            emlrtDynamicBoundsCheckR2012b(i0, 1, 6, &yb_emlrtBCI, sp);
          }

          /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
          /*                  end */
          for (i0 = 0; i0 < 3; i0++) {
            for (i1 = 0; i1 < 4; i1++) {
              dv0[i1 + (i0 << 2)] = wedges->data[((((int32_T)facecheck[0] +
                wedges->size[0] * ((int32_T)facecheck[1] - 1)) + wedges->size[0]
                * wedges->size[1] * i1) + wedges->size[0] * wedges->size[1] *
                wedges->size[2] * i0) - 1];
            }
          }

          squeeze(dv0, dv1);
          for (i0 = 0; i0 < 4; i0++) {
            for (i1 = 0; i1 < 3; i1++) {
              dv0[i1 + 3 * i0] = dv1[i0 + (i1 << 2)];
            }
          }

          if (AppFace2(vnfaces_re, dv0) == 1.0) {
            x++;
            i0 = numberuse->size[1];
            i1 = (int32_T)x;
            if (!((i1 >= 1) && (i1 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &pe_emlrtBCI, sp);
            }

            numberuse->data[i1 - 1] = 1.0 + (real_T)b_trackface;

            /*   the useful imagepoints index on the last level */
          }

          b_trackface++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
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
          if (!((i1 >= 1) && (i1 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &me_emlrtBCI, sp);
          }

          if (x < loopdomain->data[i1 - 1]) {
            /*    renew the OrdRef+1 level */
            loop_ub = 1;
            while (loop_ub - 1 <= (int32_T)x - 1) {
              i0 = Mpath->size[1];
              i1 = numberuse->size[1];
              if (!((loop_ub >= 1) && (loop_ub <= i1))) {
                emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &oe_emlrtBCI, sp);
              }

              b_trackface = (int32_T)numberuse->data[loop_ub - 1];
              if (!((b_trackface >= 1) && (b_trackface <= i0))) {
                emlrtDynamicBoundsCheckR2012b(b_trackface, 1, i0, &bc_emlrtBCI,
                  sp);
              }

              i0 = Mpath->size[0];
              glob = (int32_T)golevel;
              if (!((glob >= 1) && (glob <= i0))) {
                emlrtDynamicBoundsCheckR2012b(glob, 1, i0, &ac_emlrtBCI, sp);
              }

              pp = leveltemp->size[1];
              if (!((loop_ub >= 1) && (loop_ub <= pp))) {
                emlrtDynamicBoundsCheckR2012b(loop_ub, 1, pp, &cc_emlrtBCI, sp);
              }

              for (i0 = 0; i0 < 5; i0++) {
                leveltemp->data[leveltemp->size[0] * (loop_ub - 1) +
                  leveltemp->size[0] * leveltemp->size[1] * i0] = Mpath->data
                  [((glob + Mpath->size[0] * (b_trackface - 1)) + Mpath->size[0]
                    * Mpath->size[1] * i0) - 1];
              }

              loop_ub++;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }

            loop_ub = Mpath->size[1];
            i0 = Mpath->size[0];
            i1 = (int32_T)golevel;
            if (!((i1 >= 1) && (i1 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &dc_emlrtBCI, sp);
            }

            for (i0 = 0; i0 < 5; i0++) {
              for (i1 = 0; i1 < loop_ub; i1++) {
                Mpath->data[(((int32_T)golevel + Mpath->size[0] * i1) +
                             Mpath->size[0] * Mpath->size[1] * i0) - 1] = 0.0;
              }
            }

            Mpath_dirty |= 1U;
            i0 = leveltemp->size[1];
            if (!(1 <= i0)) {
              emlrtDynamicBoundsCheckR2012b(1, 1, i0, &ec_emlrtBCI, sp);
            }

            i0 = leveltemp->size[1];
            i1 = (int32_T)x;
            if (!((i1 >= 1) && (i1 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &fc_emlrtBCI, sp);
            }

            i0 = Mpath->size[1];
            if (!(1 <= i0)) {
              emlrtDynamicBoundsCheckR2012b(1, 1, i0, &hc_emlrtBCI, sp);
            }

            i0 = Mpath->size[1];
            i1 = (int32_T)x;
            if (!((i1 >= 1) && (i1 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &ic_emlrtBCI, sp);
            }

            i0 = Mpath->size[0];
            i1 = (int32_T)golevel;
            if (!((i1 >= 1) && (i1 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &gc_emlrtBCI, sp);
            }

            i0 = i1 - 1;
            i1 = r1->size[0];
            r1->size[0] = (int32_T)x;
            emxEnsureCapacity(sp, (emxArray__common *)r1, i1, sizeof(int32_T),
                              &m_emlrtRTEI);
            loop_ub = (int32_T)x;
            for (i1 = 0; i1 < loop_ub; i1++) {
              r1->data[i1] = i1;
            }

            iv0[0] = 1;
            iv0[1] = r1->size[0];
            iv0[2] = 5;
            i1 = b_leveltemp->size[0] * b_leveltemp->size[1] * b_leveltemp->
              size[2];
            b_leveltemp->size[0] = 1;
            b_leveltemp->size[1] = (int32_T)x;
            b_leveltemp->size[2] = 5;
            emxEnsureCapacity(sp, (emxArray__common *)b_leveltemp, i1, sizeof
                              (real_T), &m_emlrtRTEI);
            loop_ub = (int32_T)x;
            for (i1 = 0; i1 < 5; i1++) {
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

            emlrtSubAssignSizeCheckR2012b(iv0, 3, c_leveltemp, 3, &b_emlrtECI,
              sp);
            loop_ub = (int32_T)x;
            for (i1 = 0; i1 < 5; i1++) {
              for (i2 = 0; i2 < loop_ub; i2++) {
                Mpath->data[(i0 + Mpath->size[0] * r1->data[i2]) + Mpath->size[0]
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
            if (!((i1 >= 1) && (i1 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &ne_emlrtBCI, sp);
            }

            if (x == loopdomain->data[i1 - 1]) {
              /*   all imagepoints can be used */
              if (p == 1) {
                /*  update the image tree from the 1st point on jumplevel */
                golevel = jumplevel;
              } else {
                golevel--;
              }

              b = 0;

              /*  there are valid points on the last level, go to part 2   */
            }
          }
        }
      } else {
        b = 0;
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    i0 = loopdomain->size[0];
    i1 = (int32_T)(OrdRef + 1.0);
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &ud_emlrtBCI, sp);
    }

    loopdomain->data[i1 - 1] = x;

    /*   # valid points on the last level */
    /*     %% part 2 */
    /*  Backtrack from the points on the last level, calculate full order ('OrdRef') reflection path */
    b_n = 1.0;
    do {
      exitg3 = 0;
      i0 = loopdomain->size[0];
      i1 = (int32_T)(OrdRef + 1.0);
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &vd_emlrtBCI, sp);
      }

      if (b_n <= loopdomain->data[i1 - 1]) {
        /*  loop for useful image points in the last level */
        glob = 1;
        j = OrdRef + 1.0;
        i0 = Mpath->size[1];
        n = (int32_T)b_n;
        if (!((n >= 1) && (n <= i0))) {
          emlrtDynamicBoundsCheckR2012b(n, 1, i0, &kc_emlrtBCI, sp);
        }

        i0 = Mpath->size[0];
        pp = (int32_T)(OrdRef + 1.0);
        if (!((pp >= 1) && (pp <= i0))) {
          emlrtDynamicBoundsCheckR2012b(pp, 1, i0, &jc_emlrtBCI, sp);
        }

        for (i0 = 0; i0 < 5; i0++) {
          back[i0] = Mpath->data[((pp + Mpath->size[0] * (n - 1)) + Mpath->size
            [0] * Mpath->size[1] * i0) - 1];
        }

        m = 1.0;
        for (i = 0; i < 3; i++) {
          extrem[i] = recept[i];
        }

        exitg1 = false;
        while ((!exitg1) && ((j != 1.0) && (glob == 1))) {
          /*  face */
          /*  point */
          st.site = &c_emlrtRSI;
          Breakthrough(&st, *(real_T (*)[2])&back[0], *(real_T (*)[3])&back[2],
                       extrem, pointV);
          pp = track->size[0];
          i0 = (int32_T)m;
          if (!((i0 >= 1) && (i0 <= pp))) {
            emlrtDynamicBoundsCheckR2012b(i0, 1, pp, &lc_emlrtBCI, sp);
          }

          for (i0 = 0; i0 < 3; i0++) {
            track->data[((int32_T)m + track->size[0] * i0) - 1] = pointV[i0];
          }

          /*  coordinates of reflection point */
          loop_ub = trackface->size[0];
          i0 = (int32_T)m;
          if (!((i0 >= 1) && (i0 <= loop_ub))) {
            emlrtDynamicBoundsCheckR2012b(i0, 1, loop_ub, &mc_emlrtBCI, sp);
          }

          for (i0 = 0; i0 < 2; i0++) {
            trackface->data[((int32_T)m + trackface->size[0] * i0) - 1] =
              back[i0];
          }

          /*  face */
          pp = trackimage->size[0];
          i0 = (int32_T)m;
          if (!((i0 >= 1) && (i0 <= pp))) {
            emlrtDynamicBoundsCheckR2012b(i0, 1, pp, &nc_emlrtBCI, sp);
          }

          /*  image */
          for (i = 0; i < 3; i++) {
            trackimage->data[((int32_T)m + trackimage->size[0] * i) - 1] = back
              [2 + i];
            difftest[i] = extrem[i] - pointV[i];
          }

          /*              if (back(1) ~= 0) */
          i0 = trackface->size[0];
          i1 = (int32_T)m;
          if (!((i1 >= 1) && (i1 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &xd_emlrtBCI, sp);
          }

          cache = trackface->data[(i1 + trackface->size[0]) - 1];
          if (cache != (int32_T)muDoubleScalarFloor(cache)) {
            emlrtIntegerCheckR2012b(cache, &j_emlrtDCI, sp);
          }

          loop_ub = (int32_T)cache;
          if (!((loop_ub >= 1) && (loop_ub <= 6))) {
            emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 6, &pc_emlrtBCI, sp);
          }

          i0 = trackface->size[0];
          i1 = (int32_T)m;
          if (!((i1 >= 1) && (i1 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &wd_emlrtBCI, sp);
          }

          cache = trackface->data[i1 - 1];
          if (cache != (int32_T)muDoubleScalarFloor(cache)) {
            emlrtIntegerCheckR2012b(cache, &i_emlrtDCI, sp);
          }

          i0 = vnfaces->size[0];
          b_trackface = (int32_T)cache;
          if (!((b_trackface >= 1) && (b_trackface <= i0))) {
            emlrtDynamicBoundsCheckR2012b(b_trackface, 1, i0, &oc_emlrtBCI, sp);
          }

          cache = 0.0;
          for (pp = 0; pp < 3; pp++) {
            b_vnfaces_re = vnfaces->data[((b_trackface + vnfaces->size[0] *
              (loop_ub - 1)) + vnfaces->size[0] * vnfaces->size[1] * pp) - 1];
            cache += b_vnfaces_re * difftest[pp];
          }

          if (cache <= 0.0) {
            glob = 0;
            exitg1 = true;
          } else {
            /*              end */
            /*              if (back(1) == 0)  */
            /*                  app = AppGround(pointV); */
            /*              else */
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
            /*                  app = AppFace(pointV,back_temp); % Attention AppFace input dimension match */
            if (back[0] != (int32_T)muDoubleScalarFloor(back[0])) {
              emlrtIntegerCheckR2012b(back[0], &k_emlrtDCI, sp);
            }

            i0 = wedges->size[0];
            i1 = (int32_T)back[0];
            if (!((i1 >= 1) && (i1 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &qc_emlrtBCI, sp);
            }

            if (back[1] != (int32_T)muDoubleScalarFloor(back[1])) {
              emlrtIntegerCheckR2012b(back[1], &l_emlrtDCI, sp);
            }

            i0 = (int32_T)back[1];
            if (!((i0 >= 1) && (i0 <= 6))) {
              emlrtDynamicBoundsCheckR2012b(i0, 1, 6, &rc_emlrtBCI, sp);
            }

            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
            /*              end */
            for (i0 = 0; i0 < 3; i0++) {
              for (i1 = 0; i1 < 4; i1++) {
                dv0[i1 + (i0 << 2)] = wedges->data[((((int32_T)back[0] +
                  wedges->size[0] * ((int32_T)back[1] - 1)) + wedges->size[0] *
                  wedges->size[1] * i1) + wedges->size[0] * wedges->size[1] *
                  wedges->size[2] * i0) - 1];
              }
            }

            squeeze(dv0, dv1);
            for (i0 = 0; i0 < 4; i0++) {
              for (i1 = 0; i1 < 3; i1++) {
                dv0[i1 + 3 * i0] = dv1[i0 + (i1 << 2)];
              }
            }

            if (AppFace2(pointV, dv0) == 1.0) {
              st.site = &b_emlrtRSI;
              cache = Blocking(&st, extrem, pointV);
              if (cache == 1.0) {
                glob = 0;
                exitg1 = true;
              } else {
                cache = back[0];

                /*  index of the current block */
                guard1 = false;
                if (back[0] > 0.0) {
                  pp = 0;
                  exitg2 = false;
                  while ((!exitg2) && (pp < 6)) {
                    guard2 = false;
                    if (1.0 + (real_T)pp != back[1]) {
                      /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
                      /*                              appf = AppFace(pointV,fface); */
                      if (cache != (int32_T)muDoubleScalarFloor(cache)) {
                        emlrtIntegerCheckR2012b(cache, &m_emlrtDCI, sp);
                      }

                      i0 = wedges->size[0];
                      i1 = (int32_T)cache;
                      if (!((i1 >= 1) && (i1 <= i0))) {
                        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &sc_emlrtBCI,
                          sp);
                      }

                      /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
                      for (i0 = 0; i0 < 3; i0++) {
                        for (i1 = 0; i1 < 4; i1++) {
                          dv0[i1 + (i0 << 2)] = wedges->data[((((int32_T)cache +
                            wedges->size[0] * pp) + wedges->size[0] *
                            wedges->size[1] * i1) + wedges->size[0] *
                            wedges->size[1] * wedges->size[2] * i0) - 1];
                        }
                      }

                      squeeze(dv0, dv1);
                      for (i0 = 0; i0 < 4; i0++) {
                        for (i1 = 0; i1 < 3; i1++) {
                          dv0[i1 + 3 * i0] = dv1[i0 + (i1 << 2)];
                        }
                      }

                      if (AppFace2(pointV, dv0) == 1.0) {
                        glob = 0;
                        exitg2 = true;
                      } else {
                        guard2 = true;
                      }
                    } else {
                      guard2 = true;
                    }

                    if (guard2) {
                      pp++;
                      if (*emlrtBreakCheckR2012bFlagVar != 0) {
                        emlrtBreakCheckR2012b(sp);
                      }
                    }
                  }

                  for (i = 0; i < 3; i++) {
                    difftest[i] = extrem[i] - pointV[i];
                  }

                  if (norm(difftest) < 1.0E-12) {
                    glob = 0;
                    exitg1 = true;
                  } else {
                    guard1 = true;
                  }
                } else {
                  guard1 = true;
                }

                if (guard1) {
                  for (i = 0; i < 3; i++) {
                    extrem[i] = pointV[i];
                  }

                  j--;
                  i0 = Mpath->size[1];
                  if (!(1 <= i0)) {
                    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &uc_emlrtBCI, sp);
                  }

                  i0 = Mpath->size[0];
                  pp = (int32_T)j;
                  if (!((pp >= 1) && (pp <= i0))) {
                    emlrtDynamicBoundsCheckR2012b(pp, 1, i0, &tc_emlrtBCI, sp);
                  }

                  for (i0 = 0; i0 < 5; i0++) {
                    back[i0] = Mpath->data[(pp + Mpath->size[0] * Mpath->size[1]
                      * i0) - 1];
                  }

                  m++;
                  if (*emlrtBreakCheckR2012bFlagVar != 0) {
                    emlrtBreakCheckR2012b(sp);
                  }
                }
              }
            } else {
              glob = 0;
              exitg1 = true;
            }
          }
        }

        if (glob == 1) {
          for (i = 0; i < 3; i++) {
            extrem[i] = tx[i];
          }

          st.site = &emlrtRSI;
          cache = Blocking(&st, extrem, pointV);
          if (cache == 1.0) {
            glob = 0;
          }
        }

        if (glob == 1) {
          Reflex = 1.0;
          Reflex_dirty |= 1U;
          if (rvsds == 0.0) {
            i0 = pass->size[0];
            i1 = (int32_T)OrdRef;
            if (!((i1 >= 1) && (i1 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &fe_emlrtBCI, sp);
            }

            i0 = pass->size[0];
            i2 = (int32_T)OrdRef;
            if (!((i2 >= 1) && (i2 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &ge_emlrtBCI, sp);
            }

            pass->data[i2 - 1] = pass->data[i1 - 1] + 1.0;

            /*  test */
            i0 = pass->size[0];
            i1 = (int32_T)OrdRef;
            if (!((i1 >= 1) && (i1 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &he_emlrtBCI, sp);
            }

            i0 = NbrSlns->size[0];
            i2 = (int32_T)OrdRef;
            if (!((i2 >= 1) && (i2 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &ie_emlrtBCI, sp);
            }

            NbrSlns->data[i2 - 1] = pass->data[i1 - 1];
            NbrSlns_dirty |= 1U;
            i = 0;
            while (i <= (int32_T)(uint32_T)m - 2) {
              i0 = track->size[0];
              loop_ub = (int32_T)(m - (1.0 + (real_T)i));
              if (!((loop_ub >= 1) && (loop_ub <= i0))) {
                emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &vc_emlrtBCI, sp);
              }

              i0 = PSLN->size[0];
              i1 = PSLN->size[1];
              i2 = PSLN->size[2];
              b_trackface = 1 + i;
              if (!((b_trackface >= 1) && (b_trackface <= i2))) {
                emlrtDynamicBoundsCheckR2012b(b_trackface, 1, i2, &yc_emlrtBCI,
                  sp);
              }

              i2 = pass->size[0];
              b_trackface = (int32_T)OrdRef;
              if (!((b_trackface >= 1) && (b_trackface <= i2))) {
                emlrtDynamicBoundsCheckR2012b(b_trackface, 1, i2, &je_emlrtBCI,
                  sp);
              }

              pp = (int32_T)pass->data[b_trackface - 1];
              if (!((pp >= 1) && (pp <= i1))) {
                emlrtDynamicBoundsCheckR2012b(pp, 1, i1, &xc_emlrtBCI, sp);
              }

              i1 = (int32_T)OrdRef;
              if (!((i1 >= 1) && (i1 <= i0))) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &wc_emlrtBCI, sp);
              }

              for (i0 = 0; i0 < 3; i0++) {
                PSLN->data[((((int32_T)OrdRef + PSLN->size[0] * (pp - 1)) +
                             PSLN->size[0] * PSLN->size[1] * i) + PSLN->size[0] *
                            PSLN->size[1] * PSLN->size[2] * i0) - 1] =
                  track->data[(loop_ub + track->size[0] * i0) - 1];
              }

              PSLN_dirty |= 1U;
              i0 = trackface->size[0];
              loop_ub = (int32_T)(m - (1.0 + (real_T)i));
              if (!((loop_ub >= 1) && (loop_ub <= i0))) {
                emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &ad_emlrtBCI, sp);
              }

              i0 = FSLN->size[0];
              i1 = FSLN->size[1];
              i2 = FSLN->size[2];
              b_trackface = 1 + i;
              if (!((b_trackface >= 1) && (b_trackface <= i2))) {
                emlrtDynamicBoundsCheckR2012b(b_trackface, 1, i2, &dd_emlrtBCI,
                  sp);
              }

              i2 = pass->size[0];
              b_trackface = (int32_T)OrdRef;
              if (!((b_trackface >= 1) && (b_trackface <= i2))) {
                emlrtDynamicBoundsCheckR2012b(b_trackface, 1, i2, &ke_emlrtBCI,
                  sp);
              }

              pp = (int32_T)pass->data[b_trackface - 1];
              if (!((pp >= 1) && (pp <= i1))) {
                emlrtDynamicBoundsCheckR2012b(pp, 1, i1, &cd_emlrtBCI, sp);
              }

              i1 = (int32_T)OrdRef;
              if (!((i1 >= 1) && (i1 <= i0))) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &bd_emlrtBCI, sp);
              }

              for (i0 = 0; i0 < 2; i0++) {
                FSLN->data[((((int32_T)OrdRef + FSLN->size[0] * (pp - 1)) +
                             FSLN->size[0] * FSLN->size[1] * i) + FSLN->size[0] *
                            FSLN->size[1] * FSLN->size[2] * i0) - 1] =
                  trackface->data[(loop_ub + trackface->size[0] * i0) - 1];
              }

              FSLN_dirty |= 1U;
              i0 = trackimage->size[0];
              loop_ub = (int32_T)(m - (1.0 + (real_T)i));
              if (!((loop_ub >= 1) && (loop_ub <= i0))) {
                emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &ed_emlrtBCI, sp);
              }

              i0 = ISLN->size[0];
              i1 = ISLN->size[1];
              i2 = ISLN->size[2];
              b_trackface = 1 + i;
              if (!((b_trackface >= 1) && (b_trackface <= i2))) {
                emlrtDynamicBoundsCheckR2012b(b_trackface, 1, i2, &hd_emlrtBCI,
                  sp);
              }

              i2 = pass->size[0];
              b_trackface = (int32_T)OrdRef;
              if (!((b_trackface >= 1) && (b_trackface <= i2))) {
                emlrtDynamicBoundsCheckR2012b(b_trackface, 1, i2, &le_emlrtBCI,
                  sp);
              }

              pp = (int32_T)pass->data[b_trackface - 1];
              if (!((pp >= 1) && (pp <= i1))) {
                emlrtDynamicBoundsCheckR2012b(pp, 1, i1, &gd_emlrtBCI, sp);
              }

              i1 = (int32_T)OrdRef;
              if (!((i1 >= 1) && (i1 <= i0))) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &fd_emlrtBCI, sp);
              }

              for (i0 = 0; i0 < 3; i0++) {
                ISLN->data[((((int32_T)OrdRef + ISLN->size[0] * (pp - 1)) +
                             ISLN->size[0] * ISLN->size[1] * i) + ISLN->size[0] *
                            ISLN->size[1] * ISLN->size[2] * i0) - 1] =
                  trackimage->data[(loop_ub + trackimage->size[0] * i0) - 1];
              }

              ISLN_dirty |= 1U;
              i++;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }

            /*              pass(OrdRef) = pass(OrdRef) + 1; */
            count++;
          } else {
            i0 = pass->size[0];
            i1 = (int32_T)OrdRef;
            if (!((i1 >= 1) && (i1 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &yd_emlrtBCI, sp);
            }

            i0 = pass->size[0];
            i2 = (int32_T)OrdRef;
            if (!((i2 >= 1) && (i2 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &ae_emlrtBCI, sp);
            }

            pass->data[i2 - 1] = pass->data[i1 - 1] + 1.0;

            /* test */
            i0 = pass->size[0];
            i1 = (int32_T)OrdRef;
            if (!((i1 >= 1) && (i1 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &be_emlrtBCI, sp);
            }

            i0 = NbrDSSlns->size[0];
            i2 = (int32_T)((uint32_T)OrdRef + 2U);
            if (!((i2 >= 1) && (i2 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &ce_emlrtBCI, sp);
            }

            NbrDSSlns->data[i2 - 1] = pass->data[i1 - 1];
            NbrDSSlns_dirty |= 1U;
            i = 0;
            while (i <= (int32_T)(uint32_T)m - 2) {
              i0 = track->size[0];
              loop_ub = (int32_T)(m - (1.0 + (real_T)i));
              if (!((loop_ub >= 1) && (loop_ub <= i0))) {
                emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &id_emlrtBCI, sp);
              }

              i0 = RP->size[0];
              i1 = RP->size[1];
              i2 = RP->size[2];
              b_trackface = 1 + i;
              if (!((b_trackface >= 1) && (b_trackface <= i2))) {
                emlrtDynamicBoundsCheckR2012b(b_trackface, 1, i2, &ld_emlrtBCI,
                  sp);
              }

              i2 = pass->size[0];
              b_trackface = (int32_T)OrdRef;
              if (!((b_trackface >= 1) && (b_trackface <= i2))) {
                emlrtDynamicBoundsCheckR2012b(b_trackface, 1, i2, &de_emlrtBCI,
                  sp);
              }

              pp = (int32_T)pass->data[b_trackface - 1];
              if (!((pp >= 1) && (pp <= i1))) {
                emlrtDynamicBoundsCheckR2012b(pp, 1, i1, &kd_emlrtBCI, sp);
              }

              i1 = (int32_T)((uint32_T)OrdRef + 2U);
              if (!((i1 >= 1) && (i1 <= i0))) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &jd_emlrtBCI, sp);
              }

              for (i0 = 0; i0 < 3; i0++) {
                RP->data[((((int32_T)(uint32_T)OrdRef + RP->size[0] * (pp - 1))
                           + RP->size[0] * RP->size[1] * i) + RP->size[0] *
                          RP->size[1] * RP->size[2] * i0) + 1] = track->data
                  [(loop_ub + track->size[0] * i0) - 1];
              }

              RP_dirty |= 1U;
              i0 = trackface->size[0];
              loop_ub = (int32_T)(m - (1.0 + (real_T)i));
              if (!((loop_ub >= 1) && (loop_ub <= i0))) {
                emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &md_emlrtBCI, sp);
              }

              i0 = RF->size[0];
              i1 = RF->size[1];
              i2 = RF->size[2];
              b_trackface = 1 + i;
              if (!((b_trackface >= 1) && (b_trackface <= i2))) {
                emlrtDynamicBoundsCheckR2012b(b_trackface, 1, i2, &pd_emlrtBCI,
                  sp);
              }

              i2 = pass->size[0];
              b_trackface = (int32_T)OrdRef;
              if (!((b_trackface >= 1) && (b_trackface <= i2))) {
                emlrtDynamicBoundsCheckR2012b(b_trackface, 1, i2, &ee_emlrtBCI,
                  sp);
              }

              pp = (int32_T)pass->data[b_trackface - 1];
              if (!((pp >= 1) && (pp <= i1))) {
                emlrtDynamicBoundsCheckR2012b(pp, 1, i1, &od_emlrtBCI, sp);
              }

              i1 = (int32_T)((uint32_T)OrdRef + 2U);
              if (!((i1 >= 1) && (i1 <= i0))) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &nd_emlrtBCI, sp);
              }

              for (i0 = 0; i0 < 2; i0++) {
                RF->data[((((int32_T)(uint32_T)OrdRef + RF->size[0] * (pp - 1))
                           + RF->size[0] * RF->size[1] * i) + RF->size[0] *
                          RF->size[1] * RF->size[2] * i0) + 1] = trackface->
                  data[(loop_ub + trackface->size[0] * i0) - 1];
              }

              RF_dirty |= 1U;
              i++;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }

            /*              pass(OrdRef) = pass(OrdRef) + 1; */
            count++;
          }
        }

        b_n++;

        /*  path calculation of current point end,  go to next point on the same level     */
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      } else {
        exitg3 = 1;
      }
    } while (exitg3 == 0);

    b = 1;

    /*  go back to part 1 */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_leveltemp);
  emxFree_int32_T(&r1);
  emxFree_int32_T(&r0);
  emxFree_real_T(&loopdomain);
  emxFree_real_T(&numberuse);
  emxFree_real_T(&trackimage);
  emxFree_real_T(&trackface);
  emxFree_real_T(&track);
  emxFree_real_T(&leveltemp);
  emxFree_real_T(&pass);
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, OrdRef, mxDOUBLE_CLASS, (int32_T)
    OrdRef, &y_emlrtRTEI, sp);
  i = 1;
  while (i - 1 <= (int32_T)OrdRef - 1) {
    if (Reflex == 0.0) {
      if (rvsds == 0.0) {
        i0 = NbrSlns->size[0];
        if (!((i >= 1) && (i <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i0, &rd_emlrtBCI, sp);
        }

        NbrSlns->data[i - 1] = 0.0;
        NbrSlns_dirty |= 1U;
      } else {
        i0 = NbrDSSlns->size[0];
        if (!((i >= 1) && (i <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i0, &qd_emlrtBCI, sp);
        }

        NbrDSSlns->data[i - 1] = 0.0;
        NbrDSSlns_dirty |= 1U;
      }
    }

    if ((count != 0.0) || (oldReflex == 1.0) || (Reflex == 1.0)) {
      Reflex = 1.0;
      Reflex_dirty |= 1U;
    } else if (rvsds == 0.0) {
      i0 = NbrSlns->size[0];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &td_emlrtBCI, sp);
      }

      NbrSlns->data[i - 1] = 0.0;
      NbrSlns_dirty |= 1U;
    } else {
      i0 = NbrDSSlns->size[0];
      if (!((i >= 1) && (i <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i0, &sd_emlrtBCI, sp);
      }

      NbrDSSlns->data[i - 1] = 0.0;
      NbrDSSlns_dirty |= 1U;
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (EffConstruct_Image.c) */
