/*
 * Breakthrough.c
 *
 * Code generation for function 'Breakthrough'
 *
 * C source code generated on: Fri Dec 20 16:15:35 2013
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EffConstruct.h"
#include "Breakthrough.h"
#include "EffConstruct_data.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtBCInfo ef_emlrtBCI = { 1, 6, 28, 37, "wedges", "Breakthrough",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Breakthrough.m",
  0 };

static emlrtDCInfo n_emlrtDCI = { 28, 37, "Breakthrough",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Breakthrough.m",
  1 };

static emlrtBCInfo ff_emlrtBCI = { -1, -1, 28, 29, "wedges", "Breakthrough",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Breakthrough.m",
  0 };

static emlrtDCInfo o_emlrtDCI = { 28, 29, "Breakthrough",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Breakthrough.m",
  1 };

static emlrtBCInfo gf_emlrtBCI = { 1, 6, 27, 30, "vnfaces", "Breakthrough",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Breakthrough.m",
  0 };

static emlrtDCInfo p_emlrtDCI = { 27, 30, "Breakthrough",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Breakthrough.m",
  1 };

static emlrtBCInfo hf_emlrtBCI = { -1, -1, 27, 22, "vnfaces", "Breakthrough",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Breakthrough.m",
  0 };

static emlrtDCInfo q_emlrtDCI = { 27, 22, "Breakthrough",
  "C:/Mingming/Master Thesis/Supervision/Xuhong_Summary/Ray tracing_subdivision/Breakthrough.m",
  1 };

/* Function Declarations */

/* Function Definitions */
void Breakthrough(const real_T face[2], const real_T Pnneg_re[3], const real_T
                  Pnpos_re[3], real_T Pbreak[3])
{
  real_T n[3];
  real_T wedges_re[3];
  int32_T i;
  static const int8_T iv3[3] = { 0, 0, 1 };

  int32_T i6;
  real_T num;
  real_T den;

  /*  Calculates the breakthrough point in the face                                 */
  /*  Pneg : point on the negative normal vector side                           */
  /*  Ppos : point on the positive normal vector side  */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History:  2011.9.19 */
  /*  Updated by: Xuhong Li <xuhong@ftw.at> */
  /*  History: 2013.08.01 */
  /*  if(face(1) == 0) */
  if ((face[0] == 0.0) && (face[1] == 0.0)) {
    for (i = 0; i < 3; i++) {
      n[i] = (real_T)iv3[i];
      wedges_re[i] = -Pnpos_re[i];
      Pbreak[i] = Pnneg_re[i] - Pnpos_re[i];
    }
  } else {
    i6 = (int32_T)emlrtIntegerCheckFastR2012b(face[1], &p_emlrtDCI,
      emlrtRootTLSGlobal);
    emlrtDynamicBoundsCheckFastR2012b(i6, 1, 6, &gf_emlrtBCI, emlrtRootTLSGlobal);
    i6 = vnfaces.size[0];
    i = (int32_T)emlrtIntegerCheckFastR2012b(face[0], &q_emlrtDCI,
      emlrtRootTLSGlobal);
    emlrtDynamicBoundsCheckFastR2012b(i, 1, i6, &hf_emlrtBCI, emlrtRootTLSGlobal);
    for (i6 = 0; i6 < 3; i6++) {
      n[i6] = vnfaces.data[(((int32_T)face[0] + vnfaces.size[0] * ((int32_T)
        face[1] - 1)) + vnfaces.size[0] * vnfaces.size[1] * i6) - 1];
    }

    i6 = (int32_T)emlrtIntegerCheckFastR2012b(face[1], &n_emlrtDCI,
      emlrtRootTLSGlobal);
    emlrtDynamicBoundsCheckFastR2012b(i6, 1, 6, &ef_emlrtBCI, emlrtRootTLSGlobal);
    i6 = wedges->size[0];
    i = (int32_T)emlrtIntegerCheckFastR2012b(face[0], &o_emlrtDCI,
      emlrtRootTLSGlobal);
    i = emlrtDynamicBoundsCheckFastR2012b(i, 1, i6, &ff_emlrtBCI,
      emlrtRootTLSGlobal);
    for (i6 = 0; i6 < 3; i6++) {
      num = wedges->data[(((i + wedges->size[0] * ((int32_T)face[1] - 1)) +
                           (wedges->size[0] * wedges->size[1] << 1)) +
                          wedges->size[0] * wedges->size[1] * wedges->size[2] *
                          i6) - 1];
      num -= Pnpos_re[i6];
      Pbreak[i6] = Pnneg_re[i6] - Pnpos_re[i6];
      wedges_re[i6] = num;
    }
  }

  /* num = dot(n,rp); */
  /* den = dot(n,ri); */
  num = 0.0;
  den = 0.0;
  for (i = 0; i < 3; i++) {
    num += n[i] * wedges_re[i];
    den += n[i] * Pbreak[i];
  }

  num /= den;
  for (i6 = 0; i6 < 3; i6++) {
    Pbreak[i6] = Pnpos_re[i6] + num * Pbreak[i6];
  }
}

/* End of code generation (Breakthrough.c) */
