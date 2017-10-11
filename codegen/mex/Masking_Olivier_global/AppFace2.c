/*
 * AppFace2.c
 *
 * Code generation for function 'AppFace2'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Masking_Olivier_global.h"
#include "AppFace2.h"
#include "norm.h"

/* Function Definitions */
real_T AppFace2(const real_T point_re[3], const real_T p_mat[12])
{
  real_T appface;
  int32_T k;
  real_T p21[3];
  real_T n[3];
  real_T p41[3];
  real_T y;
  real_T s;
  real_T b_n;
  int32_T j;
  real_T b2[3];
  real_T b_p21[9];
  real_T c_p21[9];
  real_T b_point_re[3];
  real_T pmat0[12];
  real_T pmat0e[10];
  real_T d_p21[12];
  real_T e_p21[12];
  int32_T i3;
  boolean_T angle_sign[4];

  /*  Function APPFACE checks if the point POINT_RE lies in the four-sided polygon which is defined by four points  */
  /*  in the matrix P_MAT. Logical 1 is returned if the query point lies in the same plane as the four polygon  */
  /*  points and if it is inside the polygon, logical 0 is returned otherwise. The algorithm for checking if the query  */
  /*  point is in a polygon (in 2D space) can be found at: */
  /*   */
  /*  "An Efficient Test for a Point to Be in a Convex Polygon" from the Wolfram Demonstrations Project */
  /*   http://demonstrations.wolfram.com/AnEfficientTestForAPointToBeInAConvexPolygon/ */
  /*  Define vectors spanning the plane in which the polygon lives */
  for (k = 0; k < 3; k++) {
    p21[k] = p_mat[3 + k] - p_mat[k];
    p41[k] = p_mat[9 + k] - p_mat[k];
  }

  /*  Calculating the planes normal vector and normalizing it */
  n[0] = p21[1] * p41[2] - p21[2] * p41[1];
  n[1] = p21[2] * p41[0] - p21[0] * p41[2];
  n[2] = p21[0] * p41[1] - p21[1] * p41[0];
  y = norm(n);

  /*  If the vector to the query point and the normal vector are not othogonal, the query point is not within  */
  /*  the plane or the polygon */
  s = 0.0;
  for (k = 0; k < 3; k++) {
    b_n = n[k] / y;
    s += b_n * (point_re[k] - p_mat[k]);
    n[k] = b_n;
  }

  if (muDoubleScalarAbs(s) > 1.0E-6) {
    appface = 0.0;
  } else {
    /*  Calculate the center of mass for the polygon */
    /*  Calculate the orthogonal basis vectors for the new coordinate system */
    y = norm(p21);
    for (j = 0; j < 3; j++) {
      s = p_mat[j];
      for (k = 0; k < 3; k++) {
        s += p_mat[j + (k + 1) * 3];
      }

      p41[j] = s / 4.0;
      p21[j] /= y;
    }

    b2[0] = p21[1] * n[2] - p21[2] * n[1];
    b2[1] = p21[2] * n[0] - p21[0] * n[2];
    b2[2] = p21[0] * n[1] - p21[1] * n[0];

    /*  Transform the shifted polygon with new basis vectors */
    /*  Actual algorithm checking if the query point lies within the polygon, first shift the coordinate system such that  */
    /*  the query point coincides with the coordinate origin */
    for (k = 0; k < 3; k++) {
      b_p21[3 * k] = p21[k];
      b_p21[1 + 3 * k] = b2[k];
      b_p21[2 + 3 * k] = n[k];
      for (j = 0; j < 4; j++) {
        pmat0[k + 3 * j] = p_mat[k + 3 * j] - p41[k];
      }

      c_p21[3 * k] = p21[k];
      c_p21[1 + 3 * k] = b2[k];
      c_p21[2 + 3 * k] = n[k];
      b_point_re[k] = point_re[k] - p41[k];
    }

    for (k = 0; k < 3; k++) {
      p21[k] = 0.0;
      for (j = 0; j < 3; j++) {
        p21[k] += c_p21[k + 3 * j] * b_point_re[j];
      }

      for (j = 0; j < 4; j++) {
        d_p21[k + 3 * j] = 0.0;
        for (i3 = 0; i3 < 3; i3++) {
          d_p21[k + 3 * j] += b_p21[k + 3 * i3] * pmat0[i3 + 3 * j];
        }

        e_p21[k + 3 * j] = p21[k];
      }
    }

    /*  Only consider two dimensions and add the first point as last point */
    for (k = 0; k < 4; k++) {
      for (j = 0; j < 3; j++) {
        pmat0[j + 3 * k] = d_p21[j + 3 * k] - e_p21[j + 3 * k];
      }

      for (j = 0; j < 2; j++) {
        pmat0e[j + (k << 1)] = pmat0[j + 3 * k];
      }
    }

    for (k = 0; k < 2; k++) {
      pmat0e[8 + k] = pmat0[k];
    }

    /*  Check if the angles between two vertices of the polygon (has to be counterclockwisely defined!) change sign */
    for (k = 0; k < 4; k++) {
      angle_sign[k] = (pmat0e[(1 + k) << 1] * pmat0e[1 + (k << 1)] - pmat0e[k <<
                       1] * pmat0e[1 + ((1 + k) << 1)] >= 0.0);
    }

    /*  If no angle sign change occured, query point is within polygon */
    y = angle_sign[0];
    for (k = 0; k < 3; k++) {
      y += (real_T)angle_sign[k + 1];
    }

    if (y == 4.0) {
      appface = 1.0;

      /*  If angle sign change occured, query point is not within polygon */
    } else {
      appface = 0.0;
    }
  }

  return appface;
}

/* End of code generation (AppFace2.c) */
