/*
 * RefField.c
 *
 * Code generation for function 'RefField'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RefField.h"
#include "sqrt.h"
#include "norm.h"
#include "RefField_data.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  83,                                  /* lineNo */
  26,                                  /* colNo */
  "eta",                               /* aName */
  "RefField",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefField.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  23,                                  /* colNo */
  "eta",                               /* aName */
  "RefField",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefField.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 87,    /* lineNo */
  32,                                  /* colNo */
  "RefField",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefField.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  32,                                  /* colNo */
  "eta",                               /* aName */
  "RefField",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefField.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  27,                                  /* colNo */
  "eta",                               /* aName */
  "RefField",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefField.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  36,                                  /* colNo */
  "eta",                               /* aName */
  "RefField",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefField.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  102,                                 /* lineNo */
  19,                                  /* colNo */
  "Rcoeff",                            /* aName */
  "RefField",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefField.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  13,                                  /* colNo */
  "CEP",                               /* aName */
  "RefField",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefField.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 77,  /* lineNo */
  13,                                  /* colNo */
  "RefField",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefField.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  82,                                  /* lineNo */
  22,                                  /* colNo */
  "eta",                               /* aName */
  "RefField",                          /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\RefField.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void RefField(const emlrtStack *sp, real_T pblo, real_T blo, const real_T E_re[3],
              const real_T R_re[3], const real_T qr_re[3], const real_T n_re[3],
              const creal_T Ein[3], creal_T Eout[3], creal_T *Rt, creal_T *Rh)
{
  int32_T i;
  real_T r;
  real_T b_qr_re[3];
  real_T dr;
  real_T vi[3];
  real_T vr[3];
  real_T eti[3];
  creal_T csfi2;
  creal_T b;
  real_T ccfi_re;
  static const int8_T iv0[3] = { 0, 0, 1 };

  int32_T i1;
  creal_T Ct;
  real_T ar;
  real_T ai;
  real_T bi;
  real_T re;
  real_T im;
  real_T brm;
  real_T bim;
  creal_T b_eti[3];

  /*  Calculates the reflected field */
  /*  blo : block number for which the reflected field is evaluated		   */
  /*  E : transm. position                                                    */
  /*  R : recept pos.                                                           */
  /*  qr : reflecion point                                                      */
  /*  n : ext. norm.                                                                                                             				        */
  /*  Ein : incident field                                                       */
  /*  Eout : field at the obs. point (R) */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History: 2011.9.26 */
  /*  Updated by: Xuhong Li <xuhong@ftw.at> */
  /*  History: 2013.08.01 */
  /* %%%%%%%% Incident wave coordinate system calculation : eti & ehi%%%%%%%%% */
  /*  eti is the perpendicular vector to the incident plane  */
  /*  ehi is the parallel vector to the incident plane */
  for (i = 0; i < 3; i++) {
    b_qr_re[i] = qr_re[i] - E_re[i];
  }

  r = 1.0 / norm(b_qr_re);
  for (i = 0; i < 3; i++) {
    vi[i] = r * (qr_re[i] - E_re[i]);
    vr[i] = R_re[i] - qr_re[i];
    b_qr_re[i] = R_re[i] - qr_re[i];
  }

  dr = norm(b_qr_re);
  r = 1.0 / dr;
  for (i = 0; i < 3; i++) {
    vr[i] *= r;
  }

  eti[0] = vi[1] * n_re[2] - vi[2] * n_re[1];
  eti[1] = vi[2] * n_re[0] - vi[0] * n_re[2];
  eti[2] = vi[0] * n_re[1] - vi[1] * n_re[0];
  r = norm(eti);
  csfi2.re = r * r;
  if (1.0 - csfi2.re < 0.0) {
    ccfi_re = 0.0;
  } else {
    b.re = 1.0 - csfi2.re;
    b.im = 0.0;
    b_sqrt(&b);
    ccfi_re = b.re;
  }

  if (norm(eti) <= 1.0E-6) {
    for (i = 0; i < 3; i++) {
      eti[i] = iv0[i];
    }
  }

  r = 1.0 / norm(eti);
  for (i = 0; i < 3; i++) {
    eti[i] *= r;
  }

  /* %%%%%%%%%%%%%%%% E components in the SW-fixed coord. syst.%%%%%%%%%%%%%%% */
  /* coEh = dot(ehi,Ein); */
  /* coEt = dot(eti,Ein); */
  /*  if blo == 0 */
  /*      if GCEP == 1 */
  /*          Rh = complex(1,0); */
  /*          Rt = complex(-1,0); */
  /*      else */
  /*          if (pblo == -1)    % previous medium is air */
  /*               Ct = Geta - csfi2; */
  /*               Ch = Ct/(Geta^2); */
  /*               Rt = (ccfi-sqrt(Ct))/(ccfi+sqrt(Ct)); */
  /*               Rh = (ccfi-sqrt(Ch))/(ccfi+sqrt(Ch)); */
  /*          else     % previous medium is not air */
  /*               Ct = (Geta/eta(pblo)) - csfi2; */
  /*               Ch = Ct/((Geta/eta(pblo))^2); */
  /*               Rt = (ccfi-sqrt(Ct))/(ccfi+sqrt(Ct)); */
  /*               Rh = (ccfi-sqrt(Ch))/(ccfi+sqrt(Ch)); */
  /*          end  */
  /*      end */
  /*  else */
  i = CEP->size[0];
  if (blo != (int32_T)muDoubleScalarFloor(blo)) {
    emlrtIntegerCheckR2012b(blo, &b_emlrtDCI, sp);
  }

  i1 = (int32_T)blo;
  if (!((i1 >= 1) && (i1 <= i))) {
    emlrtDynamicBoundsCheckR2012b(i1, 1, i, &g_emlrtBCI, sp);
  }

  if (CEP->data[i1 - 1] == 1.0) {
    Rh->re = 1.0;
    Rh->im = 0.0;
    Rt->re = -1.0;
    Rt->im = 0.0;
  } else if (pblo == -1.0) {
    i = eta->size[0];
    i1 = (int32_T)blo;
    if (!((i1 >= 1) && (i1 <= i))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i, &h_emlrtBCI, sp);
    }

    Ct.re = eta->data[i1 - 1].re - csfi2.re;
    i = eta->size[0];
    i1 = (int32_T)blo;
    if (!((i1 >= 1) && (i1 <= i))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i, &h_emlrtBCI, sp);
    }

    Ct.im = eta->data[i1 - 1].im;
    i = eta->size[0];
    i1 = (int32_T)blo;
    if (!((i1 >= 1) && (i1 <= i))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i, &emlrtBCI, sp);
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
      bim = muDoubleScalarAbs(im);
      if (brm > bim) {
        bim = im / re;
        r = re + bim * im;
        csfi2.re = (Ct.re + bim * Ct.im) / r;
        csfi2.im = (Ct.im - bim * Ct.re) / r;
      } else if (bim == brm) {
        if (re > 0.0) {
          bim = 0.5;
        } else {
          bim = -0.5;
        }

        if (im > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        csfi2.re = (Ct.re * bim + Ct.im * r) / brm;
        csfi2.im = (Ct.im * bim - Ct.re * r) / brm;
      } else {
        bim = re / im;
        r = im + bim * re;
        csfi2.re = (bim * Ct.re + Ct.im) / r;
        csfi2.im = (bim * Ct.im - Ct.re) / r;
      }
    }

    b = Ct;
    b_sqrt(&b);
    b_sqrt(&Ct);
    ar = ccfi_re - b.re;
    ai = 0.0 - b.im;
    r = ccfi_re + Ct.re;
    bi = Ct.im;
    if (bi == 0.0) {
      if (ai == 0.0) {
        Rt->re = ar / r;
        Rt->im = 0.0;
      } else if (ar == 0.0) {
        Rt->re = 0.0;
        Rt->im = ai / r;
      } else {
        Rt->re = ar / r;
        Rt->im = ai / r;
      }
    } else if (r == 0.0) {
      if (ar == 0.0) {
        Rt->re = ai / bi;
        Rt->im = 0.0;
      } else if (ai == 0.0) {
        Rt->re = 0.0;
        Rt->im = -(ar / bi);
      } else {
        Rt->re = ai / bi;
        Rt->im = -(ar / bi);
      }
    } else {
      brm = muDoubleScalarAbs(r);
      bim = muDoubleScalarAbs(bi);
      if (brm > bim) {
        bim = bi / r;
        r += bim * bi;
        Rt->re = (ar + bim * ai) / r;
        Rt->im = (ai - bim * ar) / r;
      } else if (bim == brm) {
        if (r > 0.0) {
          bim = 0.5;
        } else {
          bim = -0.5;
        }

        if (bi > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        Rt->re = (ar * bim + ai * r) / brm;
        Rt->im = (ai * bim - ar * r) / brm;
      } else {
        bim = r / bi;
        r = bi + bim * r;
        Rt->re = (bim * ar + ai) / r;
        Rt->im = (bim * ai - ar) / r;
      }
    }

    b = csfi2;
    b_sqrt(&b);
    b_sqrt(&csfi2);
    ar = ccfi_re - b.re;
    ai = 0.0 - b.im;
    r = ccfi_re + csfi2.re;
    bi = csfi2.im;
    if (bi == 0.0) {
      if (ai == 0.0) {
        Rh->re = ar / r;
        Rh->im = 0.0;
      } else if (ar == 0.0) {
        Rh->re = 0.0;
        Rh->im = ai / r;
      } else {
        Rh->re = ar / r;
        Rh->im = ai / r;
      }
    } else if (r == 0.0) {
      if (ar == 0.0) {
        Rh->re = ai / bi;
        Rh->im = 0.0;
      } else if (ai == 0.0) {
        Rh->re = 0.0;
        Rh->im = -(ar / bi);
      } else {
        Rh->re = ai / bi;
        Rh->im = -(ar / bi);
      }
    } else {
      brm = muDoubleScalarAbs(r);
      bim = muDoubleScalarAbs(bi);
      if (brm > bim) {
        bim = bi / r;
        r += bim * bi;
        Rh->re = (ar + bim * ai) / r;
        Rh->im = (ai - bim * ar) / r;
      } else if (bim == brm) {
        if (r > 0.0) {
          bim = 0.5;
        } else {
          bim = -0.5;
        }

        if (bi > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        Rh->re = (ar * bim + ai * r) / brm;
        Rh->im = (ai * bim - ar * r) / brm;
      } else {
        bim = r / bi;
        r = bi + bim * r;
        Rh->re = (bim * ar + ai) / r;
        Rh->im = (bim * ai - ar) / r;
      }
    }
  } else {
    i = eta->size[0];
    i1 = (int32_T)blo;
    if (!((i1 >= 1) && (i1 <= i))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i, &b_emlrtBCI, sp);
    }

    if (pblo != (int32_T)muDoubleScalarFloor(pblo)) {
      emlrtIntegerCheckR2012b(pblo, &emlrtDCI, sp);
    }

    i = eta->size[0];
    i1 = (int32_T)pblo;
    if (!((i1 >= 1) && (i1 <= i))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i, &c_emlrtBCI, sp);
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
      bim = muDoubleScalarAbs(bi);
      if (brm > bim) {
        bim = bi / r;
        r += bim * bi;
        re = (ar + bim * ai) / r;
        im = (ai - bim * ar) / r;
      } else if (bim == brm) {
        if (r > 0.0) {
          bim = 0.5;
        } else {
          bim = -0.5;
        }

        if (bi > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        re = (ar * bim + ai * r) / brm;
        im = (ai * bim - ar * r) / brm;
      } else {
        bim = r / bi;
        r = bi + bim * r;
        re = (bim * ar + ai) / r;
        im = (bim * ai - ar) / r;
      }
    }

    Ct.re = re - csfi2.re;
    Ct.im = im;
    i = eta->size[0];
    i1 = (int32_T)blo;
    if (!((i1 >= 1) && (i1 <= i))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i, &d_emlrtBCI, sp);
    }

    i = eta->size[0];
    i1 = (int32_T)pblo;
    if (!((i1 >= 1) && (i1 <= i))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i, &e_emlrtBCI, sp);
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
      bim = muDoubleScalarAbs(bi);
      if (brm > bim) {
        bim = bi / r;
        r += bim * bi;
        csfi2.re = (ar + bim * ai) / r;
        csfi2.im = (ai - bim * ar) / r;
      } else if (bim == brm) {
        if (r > 0.0) {
          bim = 0.5;
        } else {
          bim = -0.5;
        }

        if (bi > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        csfi2.re = (ar * bim + ai * r) / brm;
        csfi2.im = (ai * bim - ar * r) / brm;
      } else {
        bim = r / bi;
        r = bi + bim * r;
        csfi2.re = (bim * ar + ai) / r;
        csfi2.im = (bim * ai - ar) / r;
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
      bim = muDoubleScalarAbs(bi);
      if (brm > bim) {
        bim = bi / r;
        r += bim * bi;
        csfi2.re = (Ct.re + bim * im) / r;
        csfi2.im = (im - bim * Ct.re) / r;
      } else if (bim == brm) {
        if (r > 0.0) {
          bim = 0.5;
        } else {
          bim = -0.5;
        }

        if (bi > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        csfi2.re = (Ct.re * bim + im * r) / brm;
        csfi2.im = (im * bim - Ct.re * r) / brm;
      } else {
        bim = r / bi;
        r = bi + bim * r;
        csfi2.re = (bim * Ct.re + im) / r;
        csfi2.im = (bim * im - Ct.re) / r;
      }
    }

    b = Ct;
    b_sqrt(&b);
    b_sqrt(&Ct);
    ar = ccfi_re - b.re;
    ai = 0.0 - b.im;
    r = ccfi_re + Ct.re;
    bi = Ct.im;
    if (bi == 0.0) {
      if (ai == 0.0) {
        Rt->re = ar / r;
        Rt->im = 0.0;
      } else if (ar == 0.0) {
        Rt->re = 0.0;
        Rt->im = ai / r;
      } else {
        Rt->re = ar / r;
        Rt->im = ai / r;
      }
    } else if (r == 0.0) {
      if (ar == 0.0) {
        Rt->re = ai / bi;
        Rt->im = 0.0;
      } else if (ai == 0.0) {
        Rt->re = 0.0;
        Rt->im = -(ar / bi);
      } else {
        Rt->re = ai / bi;
        Rt->im = -(ar / bi);
      }
    } else {
      brm = muDoubleScalarAbs(r);
      bim = muDoubleScalarAbs(bi);
      if (brm > bim) {
        bim = bi / r;
        r += bim * bi;
        Rt->re = (ar + bim * ai) / r;
        Rt->im = (ai - bim * ar) / r;
      } else if (bim == brm) {
        if (r > 0.0) {
          bim = 0.5;
        } else {
          bim = -0.5;
        }

        if (bi > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        Rt->re = (ar * bim + ai * r) / brm;
        Rt->im = (ai * bim - ar * r) / brm;
      } else {
        bim = r / bi;
        r = bi + bim * r;
        Rt->re = (bim * ar + ai) / r;
        Rt->im = (bim * ai - ar) / r;
      }
    }

    b = csfi2;
    b_sqrt(&b);
    b_sqrt(&csfi2);
    ar = ccfi_re - b.re;
    ai = 0.0 - b.im;
    r = ccfi_re + csfi2.re;
    bi = csfi2.im;
    if (bi == 0.0) {
      if (ai == 0.0) {
        Rh->re = ar / r;
        Rh->im = 0.0;
      } else if (ar == 0.0) {
        Rh->re = 0.0;
        Rh->im = ai / r;
      } else {
        Rh->re = ar / r;
        Rh->im = ai / r;
      }
    } else if (r == 0.0) {
      if (ar == 0.0) {
        Rh->re = ai / bi;
        Rh->im = 0.0;
      } else if (ai == 0.0) {
        Rh->re = 0.0;
        Rh->im = -(ar / bi);
      } else {
        Rh->re = ai / bi;
        Rh->im = -(ar / bi);
      }
    } else {
      brm = muDoubleScalarAbs(r);
      bim = muDoubleScalarAbs(bi);
      if (brm > bim) {
        bim = bi / r;
        r += bim * bi;
        Rh->re = (ar + bim * ai) / r;
        Rh->im = (ai - bim * ar) / r;
      } else if (bim == brm) {
        if (r > 0.0) {
          bim = 0.5;
        } else {
          bim = -0.5;
        }

        if (bi > 0.0) {
          r = 0.5;
        } else {
          r = -0.5;
        }

        Rh->re = (ar * bim + ai * r) / brm;
        Rh->im = (ai * bim - ar * r) / brm;
      } else {
        bim = r / bi;
        r = bi + bim * r;
        Rh->re = (bim * ar + ai) / r;
        Rh->im = (bim * ai - ar) / r;
      }
    }
  }

  /*  end */
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

  b_qr_re[0] = eti[1] * vi[2] - eti[2] * vi[1];
  b_qr_re[1] = eti[2] * vi[0] - eti[0] * vi[2];
  b_qr_re[2] = eti[0] * vi[1] - eti[1] * vi[0];
  re = 0.0;
  im = 0.0;
  for (i = 0; i < 3; i++) {
    re += b_qr_re[i] * Ein[i].re - 0.0 * Ein[i].im;
    im += b_qr_re[i] * Ein[i].im + 0.0 * Ein[i].re;
  }

  Ct.re = Rh->re * re - Rh->im * im;
  Ct.im = Rh->re * im + Rh->im * re;
  re = 0.0;
  im = 0.0;
  for (i = 0; i < 3; i++) {
    re += eti[i] * Ein[i].re - 0.0 * Ein[i].im;
    im += eti[i] * Ein[i].im + 0.0 * Ein[i].re;
  }

  b.re = Rt->re * re - Rt->im * im;
  b.im = Rt->re * im + Rt->im * re;

  /*  if blo == 0    % updated on 18.10.2011: multiplying the field and the R coeff. that takes into account the diffuse scattering power reduction */
  /*      Eout = GRcoeff*Eout;     */
  /*  else  */
  i = Rcoeff->size[0];
  i1 = (int32_T)blo;
  if (!((i1 >= 1) && (i1 <= i))) {
    emlrtDynamicBoundsCheckR2012b(i1, 1, i, &f_emlrtBCI, sp);
  }

  r = Rcoeff->data[(int32_T)blo - 1];
  b_eti[0].re = (eti[1] * vr[2] - eti[2] * vr[1]) * Ct.re;
  b_eti[0].im = (eti[1] * vr[2] - eti[2] * vr[1]) * Ct.im;
  b_eti[1].re = (eti[2] * vr[0] - eti[0] * vr[2]) * Ct.re;
  b_eti[1].im = (eti[2] * vr[0] - eti[0] * vr[2]) * Ct.im;
  b_eti[2].re = (eti[0] * vr[1] - eti[1] * vr[0]) * Ct.re;
  b_eti[2].im = (eti[0] * vr[1] - eti[1] * vr[0]) * Ct.im;
  for (i = 0; i < 3; i++) {
    bi = b_eti[i].re + eti[i] * b.re;
    bim = b_eti[i].im + eti[i] * b.im;
    Eout[i].re = r * (csfi2.re * bi - csfi2.im * bim);
    Eout[i].im = r * (csfi2.re * bim + csfi2.im * bi);
  }

  /*  end */
}

/* End of code generation (RefField.c) */
