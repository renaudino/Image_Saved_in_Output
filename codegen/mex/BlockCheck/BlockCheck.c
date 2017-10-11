/*
 * BlockCheck.c
 *
 * Code generation for function 'BlockCheck'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BlockCheck.h"
#include "norm.h"
#include "BlockCheck_data.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  45,                                  /* colNo */
  "wedges",                            /* aName */
  "BlockCheck",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\BlockCheck.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = { 18,/* lineNo */
  9,                                   /* colNo */
  "BlockCheck",                        /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\BlockCheck.m"/* pName */
};

/* Function Definitions */
real_T BlockCheck(const emlrtStack *sp, real_T bl, const real_T p_re[3])
{
  real_T flag;
  int32_T i1;
  real_T p[3];
  int32_T i;
  int32_T j;
  int32_T res;
  int32_T b_j;
  real_T pmat0[12];
  real_T p21[3];
  real_T n[3];
  real_T p41[3];
  real_T y;
  real_T s;
  real_T b_n;
  real_T b2[3];
  real_T b_p21[9];
  real_T c_p21[9];
  real_T b_p[3];
  real_T p_mat[12];
  real_T pmat0e[10];
  real_T d_p21[12];
  real_T e_p21[12];
  int32_T i2;
  boolean_T angle_sign[4];

  /*  Checks if the penetration point belongs to some other block */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History: 2011.9.27 */
  /*  Updated by: Xuhong Li <xuhong@ftw.at> */
  /*  History: 2013.08.01 */
  for (i1 = 0; i1 < 3; i1++) {
    p[i1] = p_re[i1];
  }

  flag = -1.0;
  i1 = (int32_T)Nblock;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, Nblock, mxDOUBLE_CLASS, (int32_T)
    Nblock, &b_emlrtRTEI, sp);
  i = 0;
  while (i <= i1 - 1) {
    if (1.0 + (real_T)i != bl) {
      j = 0;
      while (j < 6) {
        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        /*              res = AppFace(p,f); */
        res = wedges->size[0];
        b_j = i + 1;
        if (!((b_j >= 1) && (b_j <= res))) {
          emlrtDynamicBoundsCheckR2012b(b_j, 1, res, &emlrtBCI, sp);
        }

        for (res = 0; res < 4; res++) {
          for (b_j = 0; b_j < 3; b_j++) {
            pmat0[b_j + 3 * res] = wedges->data[((i + wedges->size[0] * j) +
              wedges->size[0] * wedges->size[1] * res) + wedges->size[0] *
              wedges->size[1] * wedges->size[2] * b_j];
          }
        }

        /*  Function APPFACE checks if the point POINT_RE lies in the four-sided polygon which is defined by four points  */
        /*  in the matrix P_MAT. Logical 1 is returned if the query point lies in the same plane as the four polygon  */
        /*  points and if it is inside the polygon, logical 0 is returned otherwise. The algorithm for checking if the query  */
        /*  point is in a polygon (in 2D space) can be found at: */
        /*   */
        /*  "An Efficient Test for a Point to Be in a Convex Polygon" from the Wolfram Demonstrations Project */
        /*   http://demonstrations.wolfram.com/AnEfficientTestForAPointToBeInAConvexPolygon/ */
        /*  Define vectors spanning the plane in which the polygon lives */
        for (res = 0; res < 3; res++) {
          p21[res] = pmat0[3 + res] - pmat0[res];
          p41[res] = pmat0[9 + res] - pmat0[res];
        }

        /*  Calculating the planes normal vector and normalizing it */
        n[0] = p21[1] * p41[2] - p21[2] * p41[1];
        n[1] = p21[2] * p41[0] - p21[0] * p41[2];
        n[2] = p21[0] * p41[1] - p21[1] * p41[0];
        y = norm(n);

        /*  If the vector to the query point and the normal vector are not othogonal, the query point is not within  */
        /*  the plane or the polygon */
        s = 0.0;
        for (res = 0; res < 3; res++) {
          b_n = n[res] / y;
          s += b_n * (p[res] - pmat0[res]);
          n[res] = b_n;
        }

        if (muDoubleScalarAbs(s) > 1.0E-6) {
          res = 0;
        } else {
          /*  Calculate the center of mass for the polygon */
          /*  Calculate the orthogonal basis vectors for the new coordinate system */
          y = norm(p21);
          for (b_j = 0; b_j < 3; b_j++) {
            s = pmat0[b_j];
            for (res = 0; res < 3; res++) {
              s += pmat0[b_j + (res + 1) * 3];
            }

            p41[b_j] = s / 4.0;
            p21[b_j] /= y;
          }

          b2[0] = p21[1] * n[2] - p21[2] * n[1];
          b2[1] = p21[2] * n[0] - p21[0] * n[2];
          b2[2] = p21[0] * n[1] - p21[1] * n[0];

          /*  Transform the shifted polygon with new basis vectors */
          /*  Actual algorithm checking if the query point lies within the polygon, first shift the coordinate system such that  */
          /*  the query point coincides with the coordinate origin */
          for (res = 0; res < 3; res++) {
            b_p21[3 * res] = p21[res];
            b_p21[1 + 3 * res] = b2[res];
            b_p21[2 + 3 * res] = n[res];
            for (b_j = 0; b_j < 4; b_j++) {
              p_mat[res + 3 * b_j] = pmat0[res + 3 * b_j] - p41[res];
            }

            c_p21[3 * res] = p21[res];
            c_p21[1 + 3 * res] = b2[res];
            c_p21[2 + 3 * res] = n[res];
            b_p[res] = p[res] - p41[res];
          }

          for (res = 0; res < 3; res++) {
            p21[res] = 0.0;
            for (b_j = 0; b_j < 3; b_j++) {
              p21[res] += c_p21[res + 3 * b_j] * b_p[b_j];
            }

            for (b_j = 0; b_j < 4; b_j++) {
              d_p21[res + 3 * b_j] = 0.0;
              for (i2 = 0; i2 < 3; i2++) {
                d_p21[res + 3 * b_j] += b_p21[res + 3 * i2] * p_mat[i2 + 3 * b_j];
              }

              e_p21[res + 3 * b_j] = p21[res];
            }
          }

          /*  Only consider two dimensions and add the first point as last point */
          for (res = 0; res < 4; res++) {
            for (b_j = 0; b_j < 3; b_j++) {
              pmat0[b_j + 3 * res] = d_p21[b_j + 3 * res] - e_p21[b_j + 3 * res];
            }

            for (b_j = 0; b_j < 2; b_j++) {
              pmat0e[b_j + (res << 1)] = pmat0[b_j + 3 * res];
            }
          }

          for (res = 0; res < 2; res++) {
            pmat0e[8 + res] = pmat0[res];
          }

          /*  Check if the angles between two vertices of the polygon (has to be counterclockwisely defined!) change sign */
          for (res = 0; res < 4; res++) {
            angle_sign[res] = (pmat0e[(1 + res) << 1] * pmat0e[1 + (res << 1)] -
                               pmat0e[res << 1] * pmat0e[1 + ((1 + res) << 1)] >=
                               0.0);
          }

          /*  If no angle sign change occured, query point is within polygon */
          y = angle_sign[0];
          for (res = 0; res < 3; res++) {
            y += (real_T)angle_sign[res + 1];
          }

          if (y == 4.0) {
            res = 1;

            /*  If angle sign change occured, query point is not within polygon */
          } else {
            res = 0;
          }
        }

        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        if (res == 1) {
          flag = 1.0 + (real_T)i;
        }

        j++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /*  if (p(3) == 0) */
  /*      if (bl ~= 0) */
  /*          flag = 0; */
  /*      end */
  /*  end */
  return flag;
}

/* End of code generation (BlockCheck.c) */
