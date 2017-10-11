/*
 * scatterers.c
 *
 * Code generation for function 'scatterers'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "scatterers.h"
#include "scatterers_emxutil.h"
#include "dispointsQP.h"
#include "scatterers_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 27,    /* lineNo */
  "scatterers",                        /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\scatterers.m"/* pathName */
};

static emlrtRTEInfo d_emlrtRTEI = { 1, /* lineNo */
  34,                                  /* colNo */
  "scatterers",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\scatterers.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 31,/* lineNo */
  21,                                  /* colNo */
  "scatterers",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\scatterers.m"/* pName */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  36,                                  /* lineNo */
  21,                                  /* colNo */
  "scatterers",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\scatterers.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  35,                                  /* lineNo */
  21,                                  /* colNo */
  "scatterers",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\scatterers.m"/* pName */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  29,                                  /* lineNo */
  21,                                  /* colNo */
  "scatterers",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\scatterers.m"/* pName */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  43,                                  /* colNo */
  "vnfaces",                           /* aName */
  "scatterers",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\scatterers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  91,                                  /* colNo */
  "wedges",                            /* aName */
  "scatterers",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\scatterers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  75,                                  /* colNo */
  "wedges",                            /* aName */
  "scatterers",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\scatterers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  59,                                  /* colNo */
  "wedges",                            /* aName */
  "scatterers",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\scatterers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  22,                                  /* lineNo */
  43,                                  /* colNo */
  "wedges",                            /* aName */
  "scatterers",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\scatterers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo l_emlrtRTEI = { 18,/* lineNo */
  9,                                   /* colNo */
  "scatterers",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\scatterers.m"/* pName */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  20,                                  /* colNo */
  "DSFlag",                            /* aName */
  "scatterers",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\scatterers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  25,                                  /* colNo */
  "PDS",                               /* aName */
  "scatterers",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\scatterers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  25,                                  /* colNo */
  "FDS",                               /* aName */
  "scatterers",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\scatterers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  26,                                  /* colNo */
  "Area",                              /* aName */
  "scatterers",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\scatterers.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
real_T scatterers(const emlrtStack *sp, real_T ebl, const real_T vtx_re[3],
                  emxArray_real_T *PDS, emxArray_real_T *FDS, emxArray_real_T
                  *Area)
{
  real_T DSN;
  int32_T i7;
  int32_T i;
  emxArray_real_T *faces;
  emxArray_real_T *points;
  emxArray_real_T *space;
  int32_T i8;
  int32_T j;
  int32_T i9;
  real_T y;
  real_T cntpt[3];
  int32_T b_i;
  int32_T k;
  real_T vnfaces_re;
  int32_T loop_ub;
  int32_T iv6[2];
  int32_T tmp_data[10000];
  int32_T b_tmp_data[10000];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  (OR): modified on 16.11.2016 */
  /*  Searches for the blocks and faces which experience scattering: calculating scattering points */
  /*  locations --- 'dispoints' */
  /*   */
  /*  Author: Xuhong Li <xuhong@ftw.at> */
  /*   */
  /*  History: 2013.10.10 */
  DSN = 0.0;
  i7 = (int32_T)Nblock;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, Nblock, mxDOUBLE_CLASS, (int32_T)
    Nblock, &l_emlrtRTEI, sp);
  i = 0;
  emxInit_real_T3(sp, &faces, 2, &h_emlrtRTEI, true);
  emxInit_real_T3(sp, &points, 2, &d_emlrtRTEI, true);
  emxInit_real_T(sp, &space, 1, &d_emlrtRTEI, true);
  while (i <= i7 - 1) {
    if (1.0 + (real_T)i != ebl) {
      i8 = DSFlag->size[0];
      if (!((i + 1 >= 1) && (i + 1 <= i8))) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, i8, &r_emlrtBCI, sp);
      }

      if (DSFlag->data[i] == 1.0) {
        j = 0;
        while (j < 6) {
          i8 = wedges->size[0];
          i9 = i + 1;
          if (!((i9 >= 1) && (i9 <= i8))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, i8, &q_emlrtBCI, sp);
          }

          i8 = wedges->size[0];
          i9 = i + 1;
          if (!((i9 >= 1) && (i9 <= i8))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, i8, &p_emlrtBCI, sp);
          }

          i8 = wedges->size[0];
          i9 = i + 1;
          if (!((i9 >= 1) && (i9 <= i8))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, i8, &o_emlrtBCI, sp);
          }

          i8 = wedges->size[0];
          i9 = i + 1;
          if (!((i9 >= 1) && (i9 <= i8))) {
            emlrtDynamicBoundsCheckR2012b(i9, 1, i8, &n_emlrtBCI, sp);
          }

          /*  (OR): centroids */
          for (i8 = 0; i8 < 3; i8++) {
            y = (((wedges->data[(i + wedges->size[0] * j) + wedges->size[0] *
                   wedges->size[1] * wedges->size[2] * i8] + wedges->data[((i +
                     wedges->size[0] * j) + wedges->size[0] * wedges->size[1]) +
                   wedges->size[0] * wedges->size[1] * wedges->size[2] * i8]) +
                  wedges->data[((i + wedges->size[0] * j) + (wedges->size[0] *
                    wedges->size[1] << 1)) + wedges->size[0] * wedges->size[1] *
                  wedges->size[2] * i8]) + wedges->data[((i + wedges->size[0] *
                   j) + wedges->size[0] * wedges->size[1] * 3) + wedges->size[0]
                 * wedges->size[1] * wedges->size[2] * i8]) / 4.0;
            y = vtx_re[i8] - y;
            cntpt[i8] = y;
          }

          i8 = vnfaces->size[0];
          if (!((i + 1 >= 1) && (i + 1 <= i8))) {
            emlrtDynamicBoundsCheckR2012b(i + 1, 1, i8, &m_emlrtBCI, sp);
          }

          b_i = i + 1;
          y = 0.0;
          for (k = 0; k < 3; k++) {
            vnfaces_re = vnfaces->data[((b_i + vnfaces->size[0] * j) +
              vnfaces->size[0] * vnfaces->size[1] * k) - 1];
            y += vnfaces_re * cntpt[k];
          }

          if (y > 0.0) {
            /* (dot(vnfaces_re,difftest) > 0) */
            st.site = &emlrtRSI;
            dispointsQP(&st, 1.0 + (real_T)i, 1.0 + (real_T)j, vtx_re, points,
                        &y, space);
            b_i = PDS->size[0];
            loop_ub = (int32_T)muDoubleScalarFloor(y - 1.0);
            for (i8 = 0; i8 <= loop_ub; i8++) {
              i9 = (int32_T)(DSN + (1.0 + (real_T)i8));
              if (!((i9 >= 1) && (i9 <= b_i))) {
                emlrtDynamicBoundsCheckR2012b(i9, 1, b_i, &s_emlrtBCI, sp);
              }

              tmp_data[i8] = i9 - 1;
            }

            iv6[0] = (int32_T)muDoubleScalarFloor(y - 1.0) + 1;
            iv6[1] = 3;
            emlrtSubAssignSizeCheckR2012b(iv6, 2, *(int32_T (*)[2])points->size,
              2, &c_emlrtECI, sp);
            for (i8 = 0; i8 < 3; i8++) {
              loop_ub = points->size[0];
              for (i9 = 0; i9 < loop_ub; i9++) {
                PDS->data[tmp_data[i9] + PDS->size[0] * i8] = points->data[i9 +
                  points->size[0] * i8];
              }
            }

            i8 = faces->size[0] * faces->size[1];
            faces->size[0] = (int32_T)y;
            faces->size[1] = 2;
            emxEnsureCapacity(sp, (emxArray__common *)faces, i8, sizeof(real_T),
                              &d_emlrtRTEI);
            loop_ub = (int32_T)y << 1;
            for (i8 = 0; i8 < loop_ub; i8++) {
              faces->data[i8] = 0.0;
            }

            loop_ub = (int32_T)y;
            for (i8 = 0; i8 < loop_ub; i8++) {
              faces->data[i8] = 1.0 + (real_T)i;
            }

            loop_ub = faces->size[0];
            for (i8 = 0; i8 < loop_ub; i8++) {
              faces->data[i8 + faces->size[0]] = 1.0 + (real_T)j;
            }

            b_i = FDS->size[0];
            loop_ub = (int32_T)muDoubleScalarFloor(y - 1.0);
            for (i8 = 0; i8 <= loop_ub; i8++) {
              i9 = (int32_T)(DSN + (1.0 + (real_T)i8));
              if (!((i9 >= 1) && (i9 <= b_i))) {
                emlrtDynamicBoundsCheckR2012b(i9, 1, b_i, &t_emlrtBCI, sp);
              }

              tmp_data[i8] = i9 - 1;
            }

            iv6[0] = (int32_T)muDoubleScalarFloor(y - 1.0) + 1;
            iv6[1] = 2;
            emlrtSubAssignSizeCheckR2012b(iv6, 2, *(int32_T (*)[2])faces->size,
              2, &b_emlrtECI, sp);
            for (i8 = 0; i8 < 2; i8++) {
              loop_ub = faces->size[0];
              for (i9 = 0; i9 < loop_ub; i9++) {
                FDS->data[tmp_data[i9] + FDS->size[0] * i8] = faces->data[i9 +
                  faces->size[0] * i8];
              }
            }

            /*  surface index */
            b_i = Area->size[1];
            k = (int32_T)muDoubleScalarFloor(y - 1.0) + 1;
            loop_ub = (int32_T)muDoubleScalarFloor(y - 1.0);
            for (i8 = 0; i8 <= loop_ub; i8++) {
              i9 = (int32_T)(DSN + (1.0 + (real_T)i8));
              if (!((i9 >= 1) && (i9 <= b_i))) {
                emlrtDynamicBoundsCheckR2012b(i9, 1, b_i, &u_emlrtBCI, sp);
              }

              b_tmp_data[i8] = i9;
            }

            i8 = space->size[0];
            if (k != i8) {
              emlrtSizeEqCheck1DR2012b(k, i8, &emlrtECI, sp);
            }

            for (i8 = 0; i8 < k; i8++) {
              Area->data[b_tmp_data[i8] - 1] = space->data[i8];
            }

            /*  tile size */
            DSN += y;

            /*  tile number on corresponding surface */
          }

          j++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }
      }
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&space);
  emxFree_real_T(&points);
  emxFree_real_T(&faces);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return DSN;
}

/* End of code generation (scatterers.c) */
