/*
 * Breakthrough.c
 *
 * Code generation for function 'Breakthrough'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct_Image.h"
#include "Breakthrough.h"
#include "EffConstruct_Image_data.h"

/* Variable Definitions */
static emlrtBCInfo bg_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  28,                                  /* lineNo */
  37,                                  /* colNo */
  "wedges",                            /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 28, /* lineNo */
  37,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  29,                                  /* colNo */
  "wedges",                            /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 28, /* lineNo */
  29,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo dg_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  27,                                  /* lineNo */
  30,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 27, /* lineNo */
  30,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo eg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  22,                                  /* colNo */
  "vnfaces",                           /* aName */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Breakthrough.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 27, /* lineNo */
  22,                                  /* colNo */
  "Breakthrough",                      /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output_2\\Breakthrough.m",/* pName */
  1                                    /* checkKind */
};

/* Function Definitions */
void Breakthrough(const emlrtStack *sp, const real_T face[2], const real_T
                  Pnneg_re[3], const real_T Pnpos_re[3], real_T Pbreak[3])
{
  int32_T k;
  int32_T b_face;
  real_T n[3];
  real_T num;
  real_T den;
  real_T wedges_re;
  real_T b_Pbreak;

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
  if (face[1] != (int32_T)muDoubleScalarFloor(face[1])) {
    emlrtIntegerCheckR2012b(face[1], &cb_emlrtDCI, sp);
  }

  k = (int32_T)face[1];
  if (!((k >= 1) && (k <= 6))) {
    emlrtDynamicBoundsCheckR2012b(k, 1, 6, &dg_emlrtBCI, sp);
  }

  k = vnfaces->size[0];
  if (face[0] != (int32_T)muDoubleScalarFloor(face[0])) {
    emlrtIntegerCheckR2012b(face[0], &db_emlrtDCI, sp);
  }

  b_face = (int32_T)face[0];
  if (!((b_face >= 1) && (b_face <= k))) {
    emlrtDynamicBoundsCheckR2012b(b_face, 1, k, &eg_emlrtBCI, sp);
  }

  for (k = 0; k < 3; k++) {
    n[k] = vnfaces->data[((b_face + vnfaces->size[0] * ((int32_T)face[1] - 1)) +
                          vnfaces->size[0] * vnfaces->size[1] * k) - 1];
  }

  if (face[1] != (int32_T)muDoubleScalarFloor(face[1])) {
    emlrtIntegerCheckR2012b(face[1], &ab_emlrtDCI, sp);
  }

  k = (int32_T)face[1];
  if (!((k >= 1) && (k <= 6))) {
    emlrtDynamicBoundsCheckR2012b(k, 1, 6, &bg_emlrtBCI, sp);
  }

  k = wedges->size[0];
  if (face[0] != (int32_T)muDoubleScalarFloor(face[0])) {
    emlrtIntegerCheckR2012b(face[0], &bb_emlrtDCI, sp);
  }

  b_face = (int32_T)face[0];
  if (!((b_face >= 1) && (b_face <= k))) {
    emlrtDynamicBoundsCheckR2012b(b_face, 1, k, &cg_emlrtBCI, sp);
  }

  /*  end */
  num = 0.0;
  den = 0.0;
  for (k = 0; k < 3; k++) {
    wedges_re = wedges->data[(((b_face + wedges->size[0] * ((int32_T)face[1] - 1))
      + (wedges->size[0] * wedges->size[1] << 1)) + wedges->size[0] *
      wedges->size[1] * wedges->size[2] * k) - 1];
    wedges_re -= Pnpos_re[k];
    b_Pbreak = Pnneg_re[k] - Pnpos_re[k];
    num += n[k] * wedges_re;
    den += n[k] * b_Pbreak;
    Pbreak[k] = b_Pbreak;
  }

  num /= den;
  for (k = 0; k < 3; k++) {
    Pbreak[k] = Pnpos_re[k] + num * Pbreak[k];
  }
}

/* End of code generation (Breakthrough.c) */
