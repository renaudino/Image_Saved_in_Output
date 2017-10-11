/*
 * RefFieldUP.c
 *
 * Code generation for function 'RefFieldUP'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RefFieldUP.h"
#include "sqrt.h"
#include "norm.h"
#include "RefFieldUP_data.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  30,                                  /* colNo */
  "eta",                               /* aName */
  "RefFieldUP",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  28,                                  /* colNo */
  "eta",                               /* aName */
  "RefFieldUP",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 64,    /* lineNo */
  37,                                  /* colNo */
  "RefFieldUP",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  37,                                  /* colNo */
  "eta",                               /* aName */
  "RefFieldUP",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  31,                                  /* colNo */
  "eta",                               /* aName */
  "RefFieldUP",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  40,                                  /* colNo */
  "eta",                               /* aName */
  "RefFieldUP",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  74,                                  /* lineNo */
  30,                                  /* colNo */
  "Rcoeff",                            /* aName */
  "RefFieldUP",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  9,                                   /* colNo */
  "CEP",                               /* aName */
  "RefFieldUP",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 56,  /* lineNo */
  9,                                   /* colNo */
  "RefFieldUP",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  27,                                  /* colNo */
  "eta",                               /* aName */
  "RefFieldUP",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefFieldUP.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void RefFieldUP(const emlrtStack *sp, real_T pblo, real_T blo, const real_T
                E_re[3], const real_T R_re[3], const real_T qr_re[3], const
                real_T n_re[3], const creal_T Ein[3], creal_T Eout[3], creal_T
                *Rt, creal_T *Rh)
{
  int32_T i1;
  real_T r;
  real_T b_qr_re[3];
  real_T dr;
  real_T vi[3];
  real_T vr[3];
  creal_T csfi2;
  creal_T b;
  real_T ccfi_re;
  real_T az;
  real_T dv0[9];
  real_T dv1[9];
  static const int8_T iv0[3] = { 0, 0, 1 };

  static const int8_T iv1[3] = { 1, 0, 0 };

  int32_T i2;
  real_T dv2[9];
  int32_T i3;
  real_T e[9];
  static const int8_T b_b[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  creal_T Ct;
  real_T ar;
  real_T ai;
  real_T re;
  real_T bi;
  real_T im;
  real_T brm;
  creal_T b_e[3];

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
  for (i1 = 0; i1 < 3; i1++) {
    b_qr_re[i1] = qr_re[i1] - E_re[i1];
  }

  r = 1.0 / norm(b_qr_re);
  for (i1 = 0; i1 < 3; i1++) {
    vi[i1] = r * (qr_re[i1] - E_re[i1]);
    vr[i1] = R_re[i1] - qr_re[i1];
    b_qr_re[i1] = R_re[i1] - qr_re[i1];
  }

  dr = norm(b_qr_re);
  r = 1.0 / dr;
  for (i1 = 0; i1 < 3; i1++) {
    vr[i1] *= r;
  }

  b_qr_re[0] = vi[1] * n_re[2] - vi[2] * n_re[1];
  b_qr_re[1] = vi[2] * n_re[0] - vi[0] * n_re[2];
  b_qr_re[2] = vi[0] * n_re[1] - vi[1] * n_re[0];
  r = norm(b_qr_re);
  csfi2.re = r * r;
  b.re = 1.0 - csfi2.re;
  b.im = 0.0;
  b_sqrt(&b);
  ccfi_re = muDoubleScalarMax(0.0, b.re);

  /*  if (norm(eti) <= 1.0e-6) % if incident wave is normal to the surface, i.e. (cross-product = 0) <=> (theta_inc = 0) */
  r = muDoubleScalarAtan2(-vi[2], muDoubleScalarHypot(-vi[0], -vi[1]));
  az = muDoubleScalarAtan2(-vi[1], -vi[0]);
  dv0[0] = muDoubleScalarCos(1.5707963267948966 - az);
  dv0[3] = muDoubleScalarSin(1.5707963267948966 - az);
  dv0[6] = 0.0;
  dv0[1] = -muDoubleScalarSin(1.5707963267948966 - az);
  dv0[4] = muDoubleScalarCos(1.5707963267948966 - az);
  dv0[7] = 0.0;
  for (i1 = 0; i1 < 3; i1++) {
    dv0[2 + 3 * i1] = iv0[i1];
    dv1[3 * i1] = iv1[i1];
  }

  dv1[1] = 0.0;
  dv1[4] = muDoubleScalarCos(3.1415926535897931 - r);
  dv1[7] = muDoubleScalarSin(3.1415926535897931 - r);
  dv1[2] = 0.0;
  dv1[5] = -muDoubleScalarSin(3.1415926535897931 - r);
  dv1[8] = muDoubleScalarCos(3.1415926535897931 - r);
  for (i1 = 0; i1 < 3; i1++) {
    for (i2 = 0; i2 < 3; i2++) {
      dv2[i1 + 3 * i2] = 0.0;
      for (i3 = 0; i3 < 3; i3++) {
        dv2[i1 + 3 * i2] += dv0[i1 + 3 * i3] * dv1[i3 + 3 * i2];
      }
    }

    for (i2 = 0; i2 < 3; i2++) {
      e[i1 + 3 * i2] = 0.0;
      for (i3 = 0; i3 < 3; i3++) {
        e[i1 + 3 * i2] += dv2[i1 + 3 * i3] * (real_T)b_b[i3 + 3 * i2];
      }
    }
  }

  /*  (OR): unitary parallel vector (transmission field) --- 1st interface */
  /*  (OR): unitary perpendicular vector (transmission field) --- 1st interface */
  /*  (OR): eti -> unitary parallel vector */
  /*  end                                      %       ehi -> unitary perpendicular vector */
  /* %%%%%%%%%%%%%%%% E components in the SW-fixed coordinate system %%%%%%%%%%%%%%% */
  i1 = CEP->size[0];
  if (blo != (int32_T)muDoubleScalarFloor(blo)) {
    emlrtIntegerCheckR2012b(blo, &b_emlrtDCI, sp);
  }

  i2 = (int32_T)blo;
  if (!((i2 >= 1) && (i2 <= i1))) {
    emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &g_emlrtBCI, sp);
  }

  if (CEP->data[i2 - 1] == 1.0) {
    Rt->re = -1.0;
    Rt->im = 0.0;

    /*  -> perpendicular polarization coefficient */
    Rh->re = 1.0;
    Rh->im = 0.0;

    /*  -> parallel polarization coefficient */
  } else {
    if (pblo == -1.0) {
      i1 = eta->size[0];
      i2 = (int32_T)blo;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &h_emlrtBCI, sp);
      }

      Ct.re = eta->data[i2 - 1].re - csfi2.re;
      i1 = eta->size[0];
      i2 = (int32_T)blo;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &h_emlrtBCI, sp);
      }

      Ct.im = eta->data[i2 - 1].im;
      i1 = eta->size[0];
      i2 = (int32_T)blo;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &emlrtBCI, sp);
      }

      re = eta->data[(int32_T)blo - 1].re * eta->data[(int32_T)blo - 1].re -
        eta->data[(int32_T)blo - 1].im * eta->data[(int32_T)blo - 1].im;
      im = eta->data[(int32_T)blo - 1].re * eta->data[(int32_T)blo - 1].im +
        eta->data[(int32_T)blo - 1].im * eta->data[(int32_T)blo - 1].re;
      if (im == 0.0) {
        if (Ct.im == 0.0) {
          csfi2.re = Ct.re / re;
          csfi2.im = 0.0;
        } else if (Ct.re == 0.0) {
          csfi2.re = 0.0;
          csfi2.im = Ct.im / re;
        } else {
          csfi2.re = Ct.re / re;
          csfi2.im = Ct.im / re;
        }
      } else if (re == 0.0) {
        if (Ct.re == 0.0) {
          csfi2.re = Ct.im / im;
          csfi2.im = 0.0;
        } else if (Ct.im == 0.0) {
          csfi2.re = 0.0;
          csfi2.im = -(Ct.re / im);
        } else {
          csfi2.re = Ct.im / im;
          csfi2.im = -(Ct.re / im);
        }
      } else {
        brm = muDoubleScalarAbs(re);
        az = muDoubleScalarAbs(im);
        if (brm > az) {
          az = im / re;
          r = re + az * im;
          csfi2.re = (Ct.re + az * Ct.im) / r;
          csfi2.im = (Ct.im - az * Ct.re) / r;
        } else if (az == brm) {
          if (re > 0.0) {
            az = 0.5;
          } else {
            az = -0.5;
          }

          if (im > 0.0) {
            r = 0.5;
          } else {
            r = -0.5;
          }

          csfi2.re = (Ct.re * az + Ct.im * r) / brm;
          csfi2.im = (Ct.im * az - Ct.re * r) / brm;
        } else {
          az = re / im;
          r = im + az * re;
          csfi2.re = (az * Ct.re + Ct.im) / r;
          csfi2.im = (az * Ct.im - Ct.re) / r;
        }
      }
    } else {
      i1 = eta->size[0];
      i2 = (int32_T)blo;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &b_emlrtBCI, sp);
      }

      if (pblo != (int32_T)muDoubleScalarFloor(pblo)) {
        emlrtIntegerCheckR2012b(pblo, &emlrtDCI, sp);
      }

      i1 = eta->size[0];
      i2 = (int32_T)pblo;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &c_emlrtBCI, sp);
      }

      ar = eta->data[(int32_T)blo - 1].re;
      ai = eta->data[(int32_T)blo - 1].im;
      r = eta->data[(int32_T)pblo - 1].re;
      bi = eta->data[(int32_T)pblo - 1].im;
      if (bi == 0.0) {
        if (ai == 0.0) {
          re = ar / r;
          im = 0.0;
        } else if (ar == 0.0) {
          re = 0.0;
          im = ai / r;
        } else {
          re = ar / r;
          im = ai / r;
        }
      } else if (r == 0.0) {
        if (ar == 0.0) {
          re = ai / bi;
          im = 0.0;
        } else if (ai == 0.0) {
          re = 0.0;
          im = -(ar / bi);
        } else {
          re = ai / bi;
          im = -(ar / bi);
        }
      } else {
        brm = muDoubleScalarAbs(r);
        az = muDoubleScalarAbs(bi);
        if (brm > az) {
          az = bi / r;
          r += az * bi;
          re = (ar + az * ai) / r;
          im = (ai - az * ar) / r;
        } else if (az == brm) {
          if (r > 0.0) {
            az = 0.5;
          } else {
            az = -0.5;
          }

          if (bi > 0.0) {
            r = 0.5;
          } else {
            r = -0.5;
          }

          re = (ar * az + ai * r) / brm;
          im = (ai * az - ar * r) / brm;
        } else {
          az = r / bi;
          r = bi + az * r;
          re = (az * ar + ai) / r;
          im = (az * ai - ar) / r;
        }
      }

      Ct.re = re - csfi2.re;
      Ct.im = im;
      i1 = eta->size[0];
      i2 = (int32_T)blo;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &d_emlrtBCI, sp);
      }

      i1 = eta->size[0];
      i2 = (int32_T)pblo;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &e_emlrtBCI, sp);
      }

      ar = eta->data[(int32_T)blo - 1].re;
      ai = eta->data[(int32_T)blo - 1].im;
      r = eta->data[(int32_T)pblo - 1].re;
      bi = eta->data[(int32_T)pblo - 1].im;
      if (bi == 0.0) {
        if (ai == 0.0) {
          csfi2.re = ar / r;
          csfi2.im = 0.0;
        } else if (ar == 0.0) {
          csfi2.re = 0.0;
          csfi2.im = ai / r;
        } else {
          csfi2.re = ar / r;
          csfi2.im = ai / r;
        }
      } else if (r == 0.0) {
        if (ar == 0.0) {
          csfi2.re = ai / bi;
          csfi2.im = 0.0;
        } else if (ai == 0.0) {
          csfi2.re = 0.0;
          csfi2.im = -(ar / bi);
        } else {
          csfi2.re = ai / bi;
          csfi2.im = -(ar / bi);
        }
      } else {
        brm = muDoubleScalarAbs(r);
        az = muDoubleScalarAbs(bi);
        if (brm > az) {
          az = bi / r;
          r += az * bi;
          csfi2.re = (ar + az * ai) / r;
          csfi2.im = (ai - az * ar) / r;
        } else if (az == brm) {
          if (r > 0.0) {
            az = 0.5;
          } else {
            az = -0.5;
          }

          if (bi > 0.0) {
            r = 0.5;
          } else {
            r = -0.5;
          }

          csfi2.re = (ar * az + ai * r) / brm;
          csfi2.im = (ai * az - ar * r) / brm;
        } else {
          az = r / bi;
          r = bi + az * r;
          csfi2.re = (az * ar + ai) / r;
          csfi2.im = (az * ai - ar) / r;
        }
      }

      r = csfi2.re * csfi2.re - csfi2.im * csfi2.im;
      bi = csfi2.re * csfi2.im + csfi2.im * csfi2.re;
      if (bi == 0.0) {
        if (im == 0.0) {
          csfi2.re = Ct.re / r;
          csfi2.im = 0.0;
        } else if (Ct.re == 0.0) {
          csfi2.re = 0.0;
          csfi2.im = im / r;
        } else {
          csfi2.re = Ct.re / r;
          csfi2.im = im / r;
        }
      } else if (r == 0.0) {
        if (Ct.re == 0.0) {
          csfi2.re = im / bi;
          csfi2.im = 0.0;
        } else if (im == 0.0) {
          csfi2.re = 0.0;
          csfi2.im = -(Ct.re / bi);
        } else {
          csfi2.re = im / bi;
          csfi2.im = -(Ct.re / bi);
        }
      } else {
        brm = muDoubleScalarAbs(r);
        az = muDoubleScalarAbs(bi);
        if (brm > az) {
          az = bi / r;
          r += az * bi;
          csfi2.re = (Ct.re + az * im) / r;
          csfi2.im = (im - az * Ct.re) / r;
        } else if (az == brm) {
          if (r > 0.0) {
            az = 0.5;
          } else {
            az = -0.5;
          }

          if (bi > 0.0) {
            r = 0.5;
          } else {
            r = -0.5;
          }

          csfi2.re = (Ct.re * az + im * r) / brm;
          csfi2.im = (im * az - Ct.re * r) / brm;
        } else {
          az = r / bi;
          r = bi + az * r;
          csfi2.re = (az * Ct.re + im) / r;
          csfi2.im = (az * im - Ct.re) / r;
        }
      }
    }

    b = Ct;
    b_sqrt(&b);
    b_sqrt(&Ct);
    ar = ccfi_re - b.re;
    r = ccfi_re + Ct.re;
    if (Ct.im == 0.0) {
      if (0.0 - b.im == 0.0) {
        Rt->re = ar / r;
        Rt->im = 0.0;
      } else if (ar == 0.0) {
        Rt->re = 0.0;
        Rt->im = (0.0 - b.im) / r;
      } else {
        Rt->re = ar / r;
        Rt->im = (0.0 - b.im) / r;
      }
    } else if (r == 0.0) {
      if (ar == 0.0) {
        Rt->re = (0.0 - b.im) / Ct.im;
        Rt->im = 0.0;
      } else if (0.0 - b.im == 0.0) {
        Rt->re = 0.0;
        Rt->im = -(ar / Ct.im);
      } else {
        Rt->re = (0.0 - b.im) / Ct.im;
        Rt->im = -(ar / Ct.im);
      }
    } else {
      brm = muDoubleScalarAbs(r);
      az = muDoubleScalarAbs(Ct.im);
      if (brm > az) {
        az = Ct.im / r;
        r += az * Ct.im;
        Rt->re = (ar + az * (0.0 - b.im)) / r;
        Rt->im = ((0.0 - b.im) - az * ar) / r;
      } else if (az == brm) {
        if (r > 0.0) {
          az = 0.5;
        } else {
          az = -0.5;
        }

        if (Ct.im > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        Rt->re = (ar * az + (0.0 - b.im) * r) / brm;
        Rt->im = ((0.0 - b.im) * az - ar * r) / brm;
      } else {
        az = r / Ct.im;
        r = Ct.im + az * r;
        Rt->re = (az * ar + (0.0 - b.im)) / r;
        Rt->im = (az * (0.0 - b.im) - ar) / r;
      }
    }

    b = csfi2;
    b_sqrt(&b);
    b_sqrt(&csfi2);
    ar = ccfi_re - b.re;
    r = ccfi_re + csfi2.re;
    if (csfi2.im == 0.0) {
      if (0.0 - b.im == 0.0) {
        Rh->re = ar / r;
        Rh->im = 0.0;
      } else if (ar == 0.0) {
        Rh->re = 0.0;
        Rh->im = (0.0 - b.im) / r;
      } else {
        Rh->re = ar / r;
        Rh->im = (0.0 - b.im) / r;
      }
    } else if (r == 0.0) {
      if (ar == 0.0) {
        Rh->re = (0.0 - b.im) / csfi2.im;
        Rh->im = 0.0;
      } else if (0.0 - b.im == 0.0) {
        Rh->re = 0.0;
        Rh->im = -(ar / csfi2.im);
      } else {
        Rh->re = (0.0 - b.im) / csfi2.im;
        Rh->im = -(ar / csfi2.im);
      }
    } else {
      brm = muDoubleScalarAbs(r);
      az = muDoubleScalarAbs(csfi2.im);
      if (brm > az) {
        az = csfi2.im / r;
        r += az * csfi2.im;
        Rh->re = (ar + az * (0.0 - b.im)) / r;
        Rh->im = ((0.0 - b.im) - az * ar) / r;
      } else if (az == brm) {
        if (r > 0.0) {
          az = 0.5;
        } else {
          az = -0.5;
        }

        if (csfi2.im > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        Rh->re = (ar * az + (0.0 - b.im) * r) / brm;
        Rh->im = ((0.0 - b.im) * az - ar * r) / brm;
      } else {
        az = r / csfi2.im;
        r = csfi2.im + az * r;
        Rh->re = (az * ar + (0.0 - b.im)) / r;
        Rh->im = (az * (0.0 - b.im) - ar) / r;
      }
    }
  }

  csfi2.re = dr * (K * 0.0);
  csfi2.im = dr * -K;
  if (csfi2.im == 0.0) {
    csfi2.re = muDoubleScalarExp(csfi2.re);
    csfi2.im = 0.0;
  } else {
    r = muDoubleScalarExp(csfi2.re / 2.0);
    csfi2.re = r * (r * muDoubleScalarCos(csfi2.im));
    csfi2.im = r * (r * muDoubleScalarSin(csfi2.im));
  }

  re = 0.0;
  im = 0.0;
  for (i1 = 0; i1 < 3; i1++) {
    re += e[6 + i1] * Ein[i1].re - 0.0 * Ein[i1].im;
    im += e[6 + i1] * Ein[i1].im + 0.0 * Ein[i1].re;
  }

  Ct.re = Rh->re * re - Rh->im * im;
  Ct.im = Rh->re * im + Rh->im * re;
  re = 0.0;
  im = 0.0;
  for (i1 = 0; i1 < 3; i1++) {
    re += e[i1] * Ein[i1].re - 0.0 * Ein[i1].im;
    im += e[i1] * Ein[i1].im + 0.0 * Ein[i1].re;
  }

  b.re = Rt->re * re - Rt->im * im;
  b.im = Rt->re * im + Rt->im * re;
  i1 = Rcoeff->size[0];
  i2 = (int32_T)blo;
  if (!((i2 >= 1) && (i2 <= i1))) {
    emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &f_emlrtBCI, sp);
  }

  r = Rcoeff->data[(int32_T)blo - 1];
  b_e[0].re = (e[1] * vr[2] - e[2] * vr[1]) * Ct.re;
  b_e[0].im = (e[1] * vr[2] - e[2] * vr[1]) * Ct.im;
  b_e[1].re = (e[2] * vr[0] - e[0] * vr[2]) * Ct.re;
  b_e[1].im = (e[2] * vr[0] - e[0] * vr[2]) * Ct.im;
  b_e[2].re = (e[0] * vr[1] - e[1] * vr[0]) * Ct.re;
  b_e[2].im = (e[0] * vr[1] - e[1] * vr[0]) * Ct.im;
  for (i1 = 0; i1 < 3; i1++) {
    az = b_e[i1].re + e[i1] * b.re;
    bi = b_e[i1].im + e[i1] * b.im;
    Eout[i1].re = r * (csfi2.re * az - csfi2.im * bi);
    Eout[i1].im = r * (csfi2.re * bi + csfi2.im * az);
  }

  /*  updated on 18.10.2011: multiplying the field and the R coefficient that   */
  /*                         takes into account the diffuse scattering power reduction */
}

/* End of code generation (RefFieldUP.c) */
