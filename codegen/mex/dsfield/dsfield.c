/*
 * dsfield.c
 *
 * Code generation for function 'dsfield'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "dsfield.h"
#include "dsfield_mexutil.h"
#include "error.h"
#include "exp.h"
#include "norm.h"
#include "abs.h"
#include "sqrt.h"
#include "Falpha.h"
#include "lobe.h"
#include "dsfield_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 50,    /* lineNo */
  "dsfield",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 77,  /* lineNo */
  "dsfield",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 118, /* lineNo */
  "dsfield",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 119, /* lineNo */
  "dsfield",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 127, /* lineNo */
  "dsfield",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 128, /* lineNo */
  "dsfield",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 134, /* lineNo */
  "dsfield",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 145, /* lineNo */
  "dsfield",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 172, /* lineNo */
  "dsfield",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 173, /* lineNo */
  "dsfield",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 176, /* lineNo */
  "dsfield",                           /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 50,  /* lineNo */
  "RefFieldUP",                        /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 45,  /* lineNo */
  "RefFieldUP",                        /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 37, /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 36, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtMCInfo c_emlrtMCI = { 51,  /* lineNo */
  5,                                   /* colNo */
  "RefFieldUP",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 70,  /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  97,                                  /* lineNo */
  30,                                  /* colNo */
  "eta",                               /* aName */
  "RefFieldUP",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  109,                                 /* lineNo */
  30,                                  /* colNo */
  "Rcoeff",                            /* aName */
  "RefFieldUP",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  29,                                  /* colNo */
  "vnfaces",                           /* aName */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  6,                                   /* iLast */
  95,                                  /* lineNo */
  30,                                  /* colNo */
  "vnfaces",                           /* aName */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 95,    /* lineNo */
  30,                                  /* colNo */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  27,                                  /* colNo */
  "vnfaces",                           /* aName */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 95,  /* lineNo */
  27,                                  /* colNo */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  111,                                 /* lineNo */
  11,                                  /* colNo */
  "Model",                             /* aName */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  117,                                 /* lineNo */
  11,                                  /* colNo */
  "Model",                             /* aName */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  118,                                 /* lineNo */
  23,                                  /* colNo */
  "Ar",                                /* aName */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  119,                                 /* lineNo */
  25,                                  /* colNo */
  "Ar",                                /* aName */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  126,                                 /* lineNo */
  11,                                  /* colNo */
  "Model",                             /* aName */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  127,                                 /* lineNo */
  17,                                  /* colNo */
  "Lam",                               /* aName */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  127,                                 /* lineNo */
  31,                                  /* colNo */
  "Ar",                                /* aName */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  127,                                 /* lineNo */
  49,                                  /* colNo */
  "Lam",                               /* aName */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  127,                                 /* lineNo */
  65,                                  /* colNo */
  "Aii",                               /* aName */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  128,                                 /* lineNo */
  17,                                  /* colNo */
  "Lam",                               /* aName */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  128,                                 /* lineNo */
  35,                                  /* colNo */
  "Ar",                                /* aName */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  128,                                 /* lineNo */
  47,                                  /* colNo */
  "Lam",                               /* aName */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  128,                                 /* lineNo */
  63,                                  /* colNo */
  "Aii",                               /* aName */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  91,                                  /* lineNo */
  9,                                   /* colNo */
  "CEP",                               /* aName */
  "RefFieldUP",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  96,                                  /* lineNo */
  27,                                  /* colNo */
  "eta",                               /* aName */
  "RefFieldUP",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  152,                                 /* lineNo */
  26,                                  /* colNo */
  "Scoeff",                            /* aName */
  "dsfield",                           /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\dsfield.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo db_emlrtRSI = { 51, /* lineNo */
  "RefFieldUP",                        /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 70, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

/* Function Declarations */
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static void keyboard(const emlrtStack *sp, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m8;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m8, 3, pArrays, "feval", true, location);
}

static void keyboard(const emlrtStack *sp, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b(sp, 0, NULL, 0, NULL, "keyboard", true, location);
}

void dsfield(const emlrtStack *sp, const creal_T Einc[3], const real_T start_re
             [3], const real_T fin_re[3], const real_T sf[2], const real_T
             sp_re[3], real_T surf, creal_T Eds[3], real_T *ri)
{
  real_T num;
  real_T denom;
  int32_T i;
  real_T si[3];
  real_T fin[3];
  real_T y;
  int32_T i1;
  real_T start[3];
  real_T b_sp[3];
  real_T costh;
  real_T sinth;
  real_T dp;
  real_T sinphi;
  real_T cosphi;
  creal_T Fp[3];
  real_T ET_re;
  real_T ET_im;
  real_T EH_re;
  real_T EH_im;
  creal_T a[3];
  real_T ss[3];
  int32_T b_sf;
  real_T sr[3];
  real_T x;
  int32_T i2;
  int32_T i3;
  real_T c_sp[3];
  real_T dr;
  real_T vr[3];
  creal_T csfi2;
  creal_T fac;
  const mxArray *b_y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 7 };

  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *c_y;
  static const int32_T iv1[2] = { 1, 24 };

  static const char_T formatSpec[24] = { ' ', ' ', ' ', 't', 'e', 's', 't', ' ',
    '-', '>', ' ', 'R', 'e', 'f', 'F', 'i', 'e', 'l', 'd', 'U', 'P', ' ', '\\',
    'n' };

  real_T dv0[9];
  real_T dv1[9];
  static const int8_T iv2[3] = { 0, 0, 1 };

  creal_T Ch;
  static const int8_T iv3[3] = { 1, 0, 0 };

  real_T dv2[9];
  real_T e[9];
  static const int8_T b[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  creal_T b_si[3];
  real_T dv3[3];
  real_T dv4[3];
  real_T dv5[3];
  creal_T ep[3];
  real_T dv6[3];
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

  /*  Diffuse scattering field */
  /*  Refer to the paper Vittorio D. 2007 */
  /*  start : first point */
  /*  fin : last point */
  /*  sf: scattering face  */
  /*  sp: scattering point */
  /*  surf: size of element */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History:  2011.10.3 */
  /*  Updated by: Xuhong Li <xuhong@ftw.at> */
  /*  History: 2013.08.01 */
  /*  global vnfaces Model Ar Lam Aii GAr GLam GAii Scoeff kxpol GModel GScoeff; */
  num = 0.0;
  denom = 0.0;
  for (i = 0; i < 3; i++) {
    fin[i] = fin_re[i];
    si[i] = sp_re[i] - start_re[i];
    start[i] = start_re[i];
    b_sp[i] = sp_re[i];
  }

  *ri = norm(si);
  y = 1.0 / *ri;
  for (i1 = 0; i1 < 3; i1++) {
    si[i1] *= y;
  }

  /*  incidence unit vector */
  costh = (b_sp[2] - start[2]) / *ri;
  st.site = &emlrtRSI;
  b_st.site = &l_emlrtRSI;
  sinth = 1.0 - costh * costh;
  st.site = &emlrtRSI;
  b_sqrt(&st, &sinth);
  dp = *ri * sinth;
  sinphi = (b_sp[1] - start[1]) / dp;
  cosphi = (b_sp[0] - start[0]) / dp;
  Eds[0].re = cosphi * costh;
  Eds[0].im = 0.0;
  Eds[1].re = sinphi * costh;
  Eds[1].im = 0.0;
  Eds[2].re = -sinth;
  Eds[2].im = 0.0;
  Fp[0].re = -sinphi;
  Fp[0].im = 0.0;
  Fp[1].re = cosphi;
  Fp[1].im = 0.0;
  Fp[2].re = 0.0;
  Fp[2].im = 0.0;
  ET_re = 0.0;
  ET_im = 0.0;
  EH_re = 0.0;
  EH_im = 0.0;
  for (i = 0; i < 3; i++) {
    a[i].re = Eds[i].re;
    a[i].im = -0.0;
    ET_re += a[i].re * Einc[i].re - a[i].im * Einc[i].im;
    ET_im += a[i].re * Einc[i].im + a[i].im * Einc[i].re;
    a[i].re = Fp[i].re;
    a[i].im = -0.0;
    EH_re += a[i].re * Einc[i].re - a[i].im * Einc[i].im;
    EH_im += a[i].re * Einc[i].im + a[i].im * Einc[i].re;
    ss[i] = fin[i] - b_sp[i];
  }

  EH_re = -EH_re;
  EH_im = -EH_im;
  sinphi = norm(ss);
  y = 1.0 / sinphi;
  for (i1 = 0; i1 < 3; i1++) {
    ss[i1] *= y;
  }

  /*  diffuse scattering unit vector */
  costh = (fin[2] - b_sp[2]) / sinphi;
  st.site = &b_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  y = costh * costh;
  st.site = &b_emlrtRSI;
  if (1.0 - y < 0.0) {
    b_st.site = &n_emlrtRSI;
    b_error(&b_st);
  }

  sinth = muDoubleScalarSqrt(1.0 - y);
  dp = sinphi * sinth;
  sinphi = (-b_sp[1] + fin[1]) / dp;
  cosphi = (-b_sp[0] + fin[0]) / dp;
  Eds[0].re = cosphi * costh;
  Eds[0].im = 0.0;
  Eds[1].re = sinphi * costh;
  Eds[1].im = 0.0;
  Eds[2].re = -sinth;
  Eds[2].im = 0.0;
  Fp[0].re = -sinphi;
  Fp[0].im = 0.0;
  Fp[1].re = cosphi;
  Fp[1].im = 0.0;
  Fp[2].re = 0.0;
  Fp[2].im = 0.0;
  if (sf[1] != (int32_T)muDoubleScalarFloor(sf[1])) {
    emlrtIntegerCheckR2012b(sf[1], &emlrtDCI, sp);
  }

  i1 = (int32_T)sf[1];
  if (!((i1 >= 1) && (i1 <= 6))) {
    emlrtDynamicBoundsCheckR2012b(i1, 1, 6, &d_emlrtBCI, sp);
  }

  i1 = vnfaces->size[0];
  if (sf[0] != (int32_T)muDoubleScalarFloor(sf[0])) {
    emlrtIntegerCheckR2012b(sf[0], &b_emlrtDCI, sp);
  }

  b_sf = (int32_T)sf[0];
  if (!((b_sf >= 1) && (b_sf <= i1))) {
    emlrtDynamicBoundsCheckR2012b(b_sf, 1, i1, &e_emlrtBCI, sp);
  }

  y = 0.0;
  for (i = 0; i < 3; i++) {
    dp = vnfaces->data[((b_sf + vnfaces->size[0] * ((int32_T)sf[1] - 1)) +
                        vnfaces->size[0] * vnfaces->size[1] * i) - 1];
    y += dp * si[i];
    fin[i] = dp;
  }

  sinth = 2.0 * -y;
  for (i = 0; i < 3; i++) {
    sr[i] = si[i] + sinth * fin[i];
  }

  dp = 1.0 / norm(sr);
  cosphi = 0.0;
  sinphi = 0.0;
  sinth = 0.0;
  for (i = 0; i < 3; i++) {
    costh = dp * sr[i];
    cosphi += fin[i] * ss[i];
    sinphi += ss[i] * costh;
    sinth += ss[i] * -si[i];
    sr[i] = costh;
    si[i] = -si[i];
  }

  /*  if ((bl ~= 0) && (Model(bl) == 1)) || ((bl == 0) && (GModel == 1))    % choice of the diffuse scattering model */
  i1 = Model->size[0];
  i = (int32_T)sf[0];
  if (!((i >= 1) && (i <= i1))) {
    emlrtDynamicBoundsCheckR2012b(i, 1, i1, &f_emlrtBCI, sp);
  }

  if (Model->data[i - 1] == 1.0) {
    /*  choice of the diffuse scattering model */
    denom = 3.1415926535897931;
    num = cosphi;
  }

  /*  if ((bl ~= 0) && (Model(bl) == 2)) */
  i1 = Model->size[0];
  i = (int32_T)sf[0];
  if (!((i >= 1) && (i <= i1))) {
    emlrtDynamicBoundsCheckR2012b(i, 1, i1, &g_emlrtBCI, sp);
  }

  if (Model->data[i - 1] == 2.0) {
    i1 = Ar->size[0];
    i = (int32_T)sf[0];
    if (!((i >= 1) && (i <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i1, &h_emlrtBCI, sp);
    }

    st.site = &c_emlrtRSI;
    denom = Falpha(&st, Ar->data[i - 1], -y);
    i1 = Ar->size[0];
    i = (int32_T)sf[0];
    if (!((i >= 1) && (i <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i1, &i_emlrtBCI, sp);
    }

    st.site = &d_emlrtRSI;
    num = lobe(&st, sinphi, Ar->data[i - 1]);

    /*  elseif ((bl == 0) && (GModel == 2)) */
    /*      denom = Falpha(GAr,costi); */
    /*      num = lobe(cosfr,GAr); */
  }

  /*  if ((bl ~= 0) && (Model(bl) == 3)) */
  i1 = Model->size[0];
  i = (int32_T)sf[0];
  if (!((i >= 1) && (i <= i1))) {
    emlrtDynamicBoundsCheckR2012b(i, 1, i1, &j_emlrtBCI, sp);
  }

  if (Model->data[i - 1] == 3.0) {
    i1 = Lam->size[0];
    i = (int32_T)sf[0];
    if (!((i >= 1) && (i <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i1, &k_emlrtBCI, sp);
    }

    i1 = Ar->size[0];
    b_sf = (int32_T)sf[0];
    if (!((b_sf >= 1) && (b_sf <= i1))) {
      emlrtDynamicBoundsCheckR2012b(b_sf, 1, i1, &l_emlrtBCI, sp);
    }

    i1 = Lam->size[0];
    i2 = (int32_T)sf[0];
    if (!((i2 >= 1) && (i2 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &m_emlrtBCI, sp);
    }

    i1 = Aii->size[0];
    i3 = (int32_T)sf[0];
    if (!((i3 >= 1) && (i3 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &n_emlrtBCI, sp);
    }

    st.site = &e_emlrtRSI;
    denom = Lam->data[i - 1] * Falpha(&st, Ar->data[b_sf - 1], -y) + (1.0 -
      Lam->data[i2 - 1]) * Falpha(&st, Aii->data[i3 - 1], -y);
    i1 = Lam->size[0];
    i = (int32_T)sf[0];
    if (!((i >= 1) && (i <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i1, &o_emlrtBCI, sp);
    }

    i1 = Ar->size[0];
    b_sf = (int32_T)sf[0];
    if (!((b_sf >= 1) && (b_sf <= i1))) {
      emlrtDynamicBoundsCheckR2012b(b_sf, 1, i1, &p_emlrtBCI, sp);
    }

    i1 = Lam->size[0];
    i2 = (int32_T)sf[0];
    if (!((i2 >= 1) && (i2 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &q_emlrtBCI, sp);
    }

    i1 = Aii->size[0];
    i3 = (int32_T)sf[0];
    if (!((i3 >= 1) && (i3 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &r_emlrtBCI, sp);
    }

    st.site = &f_emlrtRSI;
    num = Lam->data[i - 1] * lobe(&st, sinphi, Ar->data[b_sf - 1]) + (1.0 -
      Lam->data[i2 - 1]) * Falpha(&st, Aii->data[i3 - 1], sinth);

    /*  elseif ((bl == 0) && (GModel == 3)) */
    /*      denom = GLam*Falpha(GAr,costi)+(1-GLam)*Falpha(GAii,costi); */
    /*      num = GLam*lobe(cosfr,GAr)+(1-GLam)*Falpha(GAii,cosfi); */
  }

  x = -y * num * surf / denom;
  st.site = &g_emlrtRSI;
  if (x < 0.0) {
    b_st.site = &n_emlrtRSI;
    b_error(&b_st);
  }

  for (i1 = 0; i1 < 3; i1++) {
    sr[i1] += b_sp[i1];
  }

  i1 = vnfaces->size[0];
  i = (int32_T)sf[0];
  if (!((i >= 1) && (i <= i1))) {
    emlrtDynamicBoundsCheckR2012b(i, 1, i1, &c_emlrtBCI, sp);
  }

  /*  Eout      = RefField(-1,Re2,Re3,Re4,Re5,vn_temp,Einc); */
  /*  Eout = RefField(-1,bl,start,frp,sp,vn_temp,Einc); */
  st.site = &h_emlrtRSI;

  /*  Calculates the reflected field */
  /*  blo : block number for which the reflected field is evaluated */
  /*  E : transmitter position */
  /*  R : receiver position */
  /*  qr : reflection point */
  /*  n : ext. norm. */
  /*  Ein : incident field */
  /*  Eout : field at the observation point (R) */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History: 2011.9.26 */
  /*  Updated by: Xuhong Li <xuhong@ftw.at> */
  /*  History: 2013.08.01 */
  /*           2014.02.06(save the reflection coefficients) */
  /*  global CEP eta GCEP Geta GRcoeff K Rcoeff vnfaces wedges; */
  /* %%%%%%%% Incident wave coordinate system calculation : eti & ehi %%%%%%%%% */
  /*  eti is the perpendicular vector to the incident plane */
  /*  ehi is the parallel vector to the incident plane */
  for (i = 0; i < 3; i++) {
    c_sp[i] = b_sp[i] - start[i];
  }

  y = 1.0 / norm(c_sp);
  for (i = 0; i < 3; i++) {
    vr[i] = sr[i] - b_sp[i];
    c_sp[i] = sr[i] - b_sp[i];
    start[i] = y * (b_sp[i] - start[i]);
  }

  dr = norm(c_sp);
  y = 1.0 / dr;
  for (i1 = 0; i1 < 3; i1++) {
    vr[i1] *= y;
  }

  si[0] = start[1] * vnfaces->data[(((int32_T)sf[0] + vnfaces->size[0] *
    ((int32_T)sf[1] - 1)) + (vnfaces->size[0] * vnfaces->size[1] << 1)) - 1] -
    start[2] * vnfaces->data[(((int32_T)sf[0] + vnfaces->size[0] * ((int32_T)sf
    [1] - 1)) + vnfaces->size[0] * vnfaces->size[1]) - 1];
  si[1] = start[2] * vnfaces->data[((int32_T)sf[0] + vnfaces->size[0] *
    ((int32_T)sf[1] - 1)) - 1] - start[0] * vnfaces->data[(((int32_T)sf[0] +
    vnfaces->size[0] * ((int32_T)sf[1] - 1)) + (vnfaces->size[0] * vnfaces->
    size[1] << 1)) - 1];
  si[2] = start[0] * vnfaces->data[(((int32_T)sf[0] + vnfaces->size[0] *
    ((int32_T)sf[1] - 1)) + vnfaces->size[0] * vnfaces->size[1]) - 1] - start[1]
    * vnfaces->data[((int32_T)sf[0] + vnfaces->size[0] * ((int32_T)sf[1] - 1)) -
    1];
  sinth = norm(si);
  b_st.site = &y_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  d_st.site = &l_emlrtRSI;
  csfi2.re = sinth * sinth;
  fac.re = 1.0 - csfi2.re;
  fac.im = 0.0;
  c_sqrt(&fac);
  denom = muDoubleScalarMax(0.0, fac.re);
  if (norm(si) <= 1.0E-6) {
    /*  if incident wave is normal to the surface, i.e. (cross-product = 0) <=> (theta_inc = 0) */
    b_st.site = &x_emlrtRSI;
    c_st.site = &bb_emlrtRSI;
    emlrt_synchGlobalsToML(&c_st);
    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(&c_st, 7, m0, &u[0]);
    emlrtAssign(&b_y, m0);
    c_y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&c_st, 24, m0, &formatSpec[0]);
    emlrtAssign(&c_y, m0);
    d_st.site = &eb_emlrtRSI;
    emlrt_marshallIn(&d_st, c_feval(&d_st, b_y, emlrt_marshallOut(1.0), c_y,
      &d_emlrtMCI), "feval");
    emlrt_synchGlobalsFromML(&c_st);
    emlrt_synchGlobalsToML(&st);
    b_st.site = &db_emlrtRSI;
    keyboard(&b_st, &c_emlrtMCI);
    emlrt_synchGlobalsFromML(&st);
    dp = muDoubleScalarAtan2(-start[2], muDoubleScalarHypot(-start[0], -start[1]));
    sinphi = muDoubleScalarAtan2(-start[1], -start[0]);
    dv0[0] = muDoubleScalarCos(1.5707963267948966 - sinphi);
    dv0[3] = muDoubleScalarSin(1.5707963267948966 - sinphi);
    dv0[6] = 0.0;
    dv0[1] = -muDoubleScalarSin(1.5707963267948966 - sinphi);
    dv0[4] = muDoubleScalarCos(1.5707963267948966 - sinphi);
    dv0[7] = 0.0;
    for (i1 = 0; i1 < 3; i1++) {
      dv0[2 + 3 * i1] = iv2[i1];
      dv1[3 * i1] = iv3[i1];
    }

    dv1[1] = 0.0;
    dv1[4] = muDoubleScalarCos(3.1415926535897931 - dp);
    dv1[7] = muDoubleScalarSin(3.1415926535897931 - dp);
    dv1[2] = 0.0;
    dv1[5] = -muDoubleScalarSin(3.1415926535897931 - dp);
    dv1[8] = muDoubleScalarCos(3.1415926535897931 - dp);

    /*  (OR): unitary parallel vector (transmission field) --- 1st interface */
    for (i1 = 0; i1 < 3; i1++) {
      for (i = 0; i < 3; i++) {
        dv2[i1 + 3 * i] = 0.0;
        for (b_sf = 0; b_sf < 3; b_sf++) {
          dv2[i1 + 3 * i] += dv0[i1 + 3 * b_sf] * dv1[b_sf + 3 * i];
        }
      }

      for (i = 0; i < 3; i++) {
        e[i1 + 3 * i] = 0.0;
        for (b_sf = 0; b_sf < 3; b_sf++) {
          e[i1 + 3 * i] += dv2[i1 + 3 * b_sf] * (real_T)b[b_sf + 3 * i];
        }
      }

      si[i1] = e[i1];
      fin[i1] = e[6 + i1];
    }

    /*  (OR): unitary perpendicular vector (transmission field) --- 1st interface */
    /*  (OR): eti -> unitary parallel vector */
    /*        ehi -> unitary perpendicular vector */
    /*  %     eti    = [0 0 1].'; */
    /*       */
    /*      d          = zeros(1,6); */
    /*      for i = 1:6 */
    /*          d(1,i) = sum(n_re-squeeze(vnfaces(blo,i,:))); */
    /*      end */
    /*      [~,ind]     = min(abs(d)); */
    /*       */
    /*      P1          = reshape(wedges(blo,ind,1,:),3,1); */
    /*      P2          = reshape(wedges(blo,ind,2,:),3,1); */
    /*      P4          = reshape(wedges(blo,ind,4,:),3,1); */
    /*       */
    /*      if abs(P1(1)-P2(1)) > abs(P1(1)-P4(1)) */
    /*          P       = [P1 P2]; */
    /*      else */
    /*          P       = [P1 P4]; */
    /*      end */
    /*      [~,ind]     = max(P(1,:)); */
    /*       */
    /*      if (acosd(dot(vi,n)) < 90) % incident wave and normal vector to the surface have same direction */
    /*          eti     = P(:,ind)-P(:,setdiff(1:2,ind)); */
    /*      else % incident wave and normal vector to the surface have opposite direction */
    /*          eti     = P(:,setdiff(1:2,ind))-P(:,ind); */
    /*      end */
  } else {
    y = 1.0 / norm(si);
    for (i1 = 0; i1 < 3; i1++) {
      si[i1] *= y;
    }

    fin[0] = si[1] * start[2] - si[2] * start[1];
    fin[1] = si[2] * start[0] - si[0] * start[2];
    fin[2] = si[0] * start[1] - si[1] * start[0];
  }

  /* %%%%%%%%%%%%%%%% E components in the SW-fixed coordinate system %%%%%%%%%%%%%%% */
  i1 = CEP->size[0];
  i = (int32_T)sf[0];
  if (!((i >= 1) && (i <= i1))) {
    emlrtDynamicBoundsCheckR2012b(i, 1, i1, &s_emlrtBCI, &st);
  }

  if (CEP->data[i - 1] == 1.0) {
    costh = -1.0;
    num = 0.0;

    /*  -> perpendicular polarization coefficient */
    csfi2.re = 1.0;
    csfi2.im = 0.0;

    /*  -> parallel polarization coefficient */
  } else {
    i1 = eta->size[0];
    i = (int32_T)sf[0];
    if (!((i >= 1) && (i <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i1, &t_emlrtBCI, &st);
    }

    csfi2.re = eta->data[i - 1].re - csfi2.re;
    i1 = eta->size[0];
    i = (int32_T)sf[0];
    if (!((i >= 1) && (i <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i1, &t_emlrtBCI, &st);
    }

    csfi2.im = eta->data[i - 1].im;
    i1 = eta->size[0];
    i = (int32_T)sf[0];
    if (!((i >= 1) && (i <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, i1, &emlrtBCI, &st);
    }

    dp = eta->data[(int32_T)sf[0] - 1].re * eta->data[(int32_T)sf[0] - 1].re -
      eta->data[(int32_T)sf[0] - 1].im * eta->data[(int32_T)sf[0] - 1].im;
    sinphi = eta->data[(int32_T)sf[0] - 1].re * eta->data[(int32_T)sf[0] - 1].im
      + eta->data[(int32_T)sf[0] - 1].im * eta->data[(int32_T)sf[0] - 1].re;
    if (sinphi == 0.0) {
      if (csfi2.im == 0.0) {
        Ch.re = csfi2.re / dp;
        Ch.im = 0.0;
      } else if (csfi2.re == 0.0) {
        Ch.re = 0.0;
        Ch.im = csfi2.im / dp;
      } else {
        Ch.re = csfi2.re / dp;
        Ch.im = csfi2.im / dp;
      }
    } else if (dp == 0.0) {
      if (csfi2.re == 0.0) {
        Ch.re = csfi2.im / sinphi;
        Ch.im = 0.0;
      } else if (csfi2.im == 0.0) {
        Ch.re = 0.0;
        Ch.im = -(csfi2.re / sinphi);
      } else {
        Ch.re = csfi2.im / sinphi;
        Ch.im = -(csfi2.re / sinphi);
      }
    } else {
      sinth = muDoubleScalarAbs(dp);
      cosphi = muDoubleScalarAbs(sinphi);
      if (sinth > cosphi) {
        cosphi = sinphi / dp;
        dp += cosphi * sinphi;
        Ch.re = (csfi2.re + cosphi * csfi2.im) / dp;
        Ch.im = (csfi2.im - cosphi * csfi2.re) / dp;
      } else if (cosphi == sinth) {
        if (dp > 0.0) {
          cosphi = 0.5;
        } else {
          cosphi = -0.5;
        }

        if (sinphi > 0.0) {
          dp = 0.5;
        } else {
          dp = -0.5;
        }

        Ch.re = (csfi2.re * cosphi + csfi2.im * dp) / sinth;
        Ch.im = (csfi2.im * cosphi - csfi2.re * dp) / sinth;
      } else {
        cosphi = dp / sinphi;
        dp = sinphi + cosphi * dp;
        Ch.re = (cosphi * csfi2.re + csfi2.im) / dp;
        Ch.im = (cosphi * csfi2.im - csfi2.re) / dp;
      }
    }

    fac = csfi2;
    c_sqrt(&fac);
    c_sqrt(&csfi2);
    sinphi = denom - fac.re;
    dp = denom + csfi2.re;
    if (csfi2.im == 0.0) {
      if (0.0 - fac.im == 0.0) {
        costh = sinphi / dp;
        num = 0.0;
      } else if (sinphi == 0.0) {
        costh = 0.0;
        num = (0.0 - fac.im) / dp;
      } else {
        costh = sinphi / dp;
        num = (0.0 - fac.im) / dp;
      }
    } else if (dp == 0.0) {
      if (sinphi == 0.0) {
        costh = (0.0 - fac.im) / csfi2.im;
        num = 0.0;
      } else if (0.0 - fac.im == 0.0) {
        costh = 0.0;
        num = -(sinphi / csfi2.im);
      } else {
        costh = (0.0 - fac.im) / csfi2.im;
        num = -(sinphi / csfi2.im);
      }
    } else {
      sinth = muDoubleScalarAbs(dp);
      cosphi = muDoubleScalarAbs(csfi2.im);
      if (sinth > cosphi) {
        cosphi = csfi2.im / dp;
        dp += cosphi * csfi2.im;
        costh = (sinphi + cosphi * (0.0 - fac.im)) / dp;
        num = ((0.0 - fac.im) - cosphi * sinphi) / dp;
      } else if (cosphi == sinth) {
        if (dp > 0.0) {
          cosphi = 0.5;
        } else {
          cosphi = -0.5;
        }

        if (csfi2.im > 0.0) {
          dp = 0.5;
        } else {
          dp = -0.5;
        }

        costh = (sinphi * cosphi + (0.0 - fac.im) * dp) / sinth;
        num = ((0.0 - fac.im) * cosphi - sinphi * dp) / sinth;
      } else {
        cosphi = dp / csfi2.im;
        dp = csfi2.im + cosphi * dp;
        costh = (cosphi * sinphi + (0.0 - fac.im)) / dp;
        num = (cosphi * (0.0 - fac.im) - sinphi) / dp;
      }
    }

    fac = Ch;
    c_sqrt(&fac);
    c_sqrt(&Ch);
    sinphi = denom - fac.re;
    dp = denom + Ch.re;
    if (Ch.im == 0.0) {
      if (0.0 - fac.im == 0.0) {
        csfi2.re = sinphi / dp;
        csfi2.im = 0.0;
      } else if (sinphi == 0.0) {
        csfi2.re = 0.0;
        csfi2.im = (0.0 - fac.im) / dp;
      } else {
        csfi2.re = sinphi / dp;
        csfi2.im = (0.0 - fac.im) / dp;
      }
    } else if (dp == 0.0) {
      if (sinphi == 0.0) {
        csfi2.re = (0.0 - fac.im) / Ch.im;
        csfi2.im = 0.0;
      } else if (0.0 - fac.im == 0.0) {
        csfi2.re = 0.0;
        csfi2.im = -(sinphi / Ch.im);
      } else {
        csfi2.re = (0.0 - fac.im) / Ch.im;
        csfi2.im = -(sinphi / Ch.im);
      }
    } else {
      sinth = muDoubleScalarAbs(dp);
      cosphi = muDoubleScalarAbs(Ch.im);
      if (sinth > cosphi) {
        cosphi = Ch.im / dp;
        dp += cosphi * Ch.im;
        csfi2.re = (sinphi + cosphi * (0.0 - fac.im)) / dp;
        csfi2.im = ((0.0 - fac.im) - cosphi * sinphi) / dp;
      } else if (cosphi == sinth) {
        if (dp > 0.0) {
          cosphi = 0.5;
        } else {
          cosphi = -0.5;
        }

        if (Ch.im > 0.0) {
          dp = 0.5;
        } else {
          dp = -0.5;
        }

        csfi2.re = (sinphi * cosphi + (0.0 - fac.im) * dp) / sinth;
        csfi2.im = ((0.0 - fac.im) * cosphi - sinphi * dp) / sinth;
      } else {
        cosphi = dp / Ch.im;
        dp = Ch.im + cosphi * dp;
        csfi2.re = (cosphi * sinphi + (0.0 - fac.im)) / dp;
        csfi2.im = (cosphi * (0.0 - fac.im) - sinphi) / dp;
      }
    }
  }

  fac.re = dr * (K * 0.0);
  fac.im = dr * -K;
  if (fac.im == 0.0) {
    fac.re = muDoubleScalarExp(fac.re);
    fac.im = 0.0;
  } else {
    dp = muDoubleScalarExp(fac.re / 2.0);
    fac.re = dp * (dp * muDoubleScalarCos(fac.im));
    fac.im = dp * (dp * muDoubleScalarSin(fac.im));
  }

  dp = 0.0;
  sinphi = 0.0;
  for (i1 = 0; i1 < 3; i1++) {
    dp += fin[i1] * Einc[i1].re - 0.0 * Einc[i1].im;
    sinphi += fin[i1] * Einc[i1].im + 0.0 * Einc[i1].re;
  }

  Ch.re = csfi2.re * dp - csfi2.im * sinphi;
  Ch.im = csfi2.re * sinphi + csfi2.im * dp;
  dp = 0.0;
  sinphi = 0.0;
  for (i1 = 0; i1 < 3; i1++) {
    dp += si[i1] * Einc[i1].re - 0.0 * Einc[i1].im;
    sinphi += si[i1] * Einc[i1].im + 0.0 * Einc[i1].re;
  }

  csfi2.re = costh * dp - num * sinphi;
  csfi2.im = costh * sinphi + num * dp;
  i1 = Rcoeff->size[0];
  i = (int32_T)sf[0];
  if (!((i >= 1) && (i <= i1))) {
    emlrtDynamicBoundsCheckR2012b(i, 1, i1, &b_emlrtBCI, &st);
  }

  /*  updated on 18.10.2011: multiplying the field and the R coefficient that   */
  /*                         takes into account the diffuse scattering power reduction */
  /*  if (bl ~= 0) */
  dp = Rcoeff->data[(int32_T)sf[0] - 1];
  b_si[0].re = (si[1] * vr[2] - si[2] * vr[1]) * Ch.re;
  b_si[0].im = (si[1] * vr[2] - si[2] * vr[1]) * Ch.im;
  b_si[1].re = (si[2] * vr[0] - si[0] * vr[2]) * Ch.re;
  b_si[1].im = (si[2] * vr[0] - si[0] * vr[2]) * Ch.im;
  b_si[2].re = (si[0] * vr[1] - si[1] * vr[0]) * Ch.re;
  b_si[2].im = (si[0] * vr[1] - si[1] * vr[0]) * Ch.im;
  for (i1 = 0; i1 < 3; i1++) {
    sinphi = b_si[i1].re + si[i1] * csfi2.re;
    cosphi = b_si[i1].im + si[i1] * csfi2.im;
    a[i1].re = dp * (fac.re * sinphi - fac.im * cosphi);
    a[i1].im = dp * (fac.re * cosphi + fac.im * sinphi);
  }

  i1 = Scoeff->size[0];
  i = (int32_T)sf[0];
  if (!((i >= 1) && (i <= i1))) {
    emlrtDynamicBoundsCheckR2012b(i, 1, i1, &u_emlrtBCI, sp);
  }

  b_abs(a, dv3);
  b_abs(Einc, dv4);
  sinth = muDoubleScalarSqrt(x) * Scoeff->data[i - 1] * (norm(dv3) / norm(dv4));
  for (i1 = 0; i1 < 3; i1++) {
    dp = Eds[i1].re * ET_im + Eds[i1].im * ET_re;
    Eds[i1].re = sinth * ((Eds[i1].re * ET_re - Eds[i1].im * ET_im) + (Fp[i1].re
      * EH_re - 0.0 * EH_im));
    Eds[i1].im = sinth * (dp + (Fp[i1].re * EH_im + 0.0 * EH_re));
  }

  /*  elseif (bl == 0) */
  /*      amplEds = radic*GScoeff*rflcoeff*ei; */
  /*  end */
  c_abs(Eds, dv5);
  dp = b_norm(dv5);
  y = 1.0 / dp;
  for (i1 = 0; i1 < 3; i1++) {
    Eds[i1].re *= y;
    Eds[i1].im *= y;
  }

  /*  co-polarization */
  ep[0].re = ss[1] * Eds[2].re - ss[2] * Eds[1].re;
  ep[0].im = ss[1] * Eds[2].im - ss[2] * Eds[1].im;
  ep[1].re = ss[2] * Eds[0].re - ss[0] * Eds[2].re;
  ep[1].im = ss[2] * Eds[0].im - ss[0] * Eds[2].im;
  ep[2].re = ss[0] * Eds[1].re - ss[1] * Eds[0].re;
  ep[2].im = ss[0] * Eds[1].im - ss[1] * Eds[0].im;
  c_abs(ep, dv6);
  y = 1.0 / b_norm(dv6);
  for (i1 = 0; i1 < 3; i1++) {
    ep[i1].re *= y;
    ep[i1].im *= y;
    ep[i1].re = -ep[i1].re;
  }

  /*  cross-polarization */
  st.site = &i_emlrtRSI;
  x = 1.0 - kxpol;
  if (1.0 - kxpol < 0.0) {
    b_st.site = &n_emlrtRSI;
    b_error(&b_st);
  }

  sinth = dp * muDoubleScalarSqrt(x);
  st.site = &j_emlrtRSI;
  if (kxpol < 0.0) {
    b_st.site = &n_emlrtRSI;
    b_error(&b_st);
  }

  x = muDoubleScalarSqrt(kxpol);
  cosphi = dp * x;
  st.site = &k_emlrtRSI;
  emlrt_checkEscapedGlobals();
  emlrtRandu(&dp, 1);
  csfi2.re = dp * 0.0;
  csfi2.im = dp * 6.2831853071795862;
  b_exp(&csfi2);

  /*  random phase */
  for (i1 = 0; i1 < 3; i1++) {
    dp = sinth * Eds[i1].re + cosphi * ep[i1].re;
    sinphi = sinth * Eds[i1].im + cosphi * ep[i1].im;
    Eds[i1].re = dp * csfi2.re - sinphi * csfi2.im;
    Eds[i1].im = dp * csfi2.im + sinphi * csfi2.re;
  }
}

/* End of code generation (dsfield.c) */
