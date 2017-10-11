/*
 * BlockingTEST.c
 *
 * Code generation for function 'BlockingTEST'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "BlockingTEST.h"
#include "BlockingTEST_data.h"

/* Function Definitions */
double BlockingTEST(const double P1_re[3], const double P2_re[3])
{
  double blk;
  double i;
  double P1[3];
  double P2[3];
  double dp[3];
  int k;
  int j;
  double d0;
  double dtr;
  double t;
  double point[3];
  double d1;
  double n[3];
  double p2[3];
  double p3[3];
  double v[3];
  double VectP1[3];
  double VectP4[3];
  boolean_T guard1 = false;
  double u;
  double b_VectP1;
  int af;

  /*  Check if the two points are blocked */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History:  2011.9.20 */
  /*  Updated by: Xuhong Li <xuhong@ftw.at> */
  /*  History: 2013.08.01 */
  blk = 0.0;
  i = 1.0;
  for (k = 0; k < 3; k++) {
    dp[k] = P2_re[k] - P1_re[k];
    P1[k] = P1_re[k];
    P2[k] = P2_re[k];
  }

  while ((i <= Nblock) && (blk != 1.0)) {
    j = 0;
    while ((j + 1 <= 6) && (blk != 1.0)) {
      d0 = 0.0;
      for (k = 0; k < 3; k++) {
        d0 += dp[k] * vnfaces[(((int)i + 150 * j) + 900 * k) - 1];
      }

      if (fabs(d0) > 0.001) {
        dtr = ((P1[0] - P2[0]) * ((wedges[((int)i + 150 * j) + 3599] - wedges
                 [((int)i + 150 * j) + 5399]) * (wedges[((int)i + 150 * j) +
                 8099] - wedges[((int)i + 150 * j) + 8999]) - (wedges[((int)i +
                  150 * j) + 4499] - wedges[((int)i + 150 * j) + 5399]) *
                (wedges[((int)i + 150 * j) + 7199] - wedges[((int)i + 150 * j) +
                 8999])) - (P1[1] - P2[1]) * ((wedges[((int)i + 150 * j) - 1] -
                 wedges[((int)i + 150 * j) + 1799]) * (wedges[((int)i + 150 * j)
                 + 8099] - wedges[((int)i + 150 * j) + 8999]) - (wedges[((int)i
                  + 150 * j) + 899] - wedges[((int)i + 150 * j) + 1799]) *
                (wedges[((int)i + 150 * j) + 7199] - wedges[((int)i + 150 * j) +
                 8999]))) + (P1[2] - P2[2]) * ((wedges[((int)i + 150 * j) - 1] -
          wedges[((int)i + 150 * j) + 1799]) * (wedges[((int)i + 150 * j) + 4499]
          - wedges[((int)i + 150 * j) + 5399]) - (wedges[((int)i + 150 * j) +
          899] - wedges[((int)i + 150 * j) + 1799]) * (wedges[((int)i + 150 * j)
          + 3599] - wedges[((int)i + 150 * j) + 5399]));
        if (dtr == 0.0) {
        } else {
          t = (((P1[0] - wedges[((int)i + 150 * j) + 1799]) * ((wedges[((int)i +
                   150 * j) + 3599] - wedges[((int)i + 150 * j) + 5399]) *
                 (wedges[((int)i + 150 * j) + 8099] - wedges[((int)i + 150 * j)
                  + 8999]) - (wedges[((int)i + 150 * j) + 4499] - wedges[((int)i
                   + 150 * j) + 5399]) * (wedges[((int)i + 150 * j) + 7199] -
                  wedges[((int)i + 150 * j) + 8999])) + (P1[1] - wedges[((int)i
                  + 150 * j) + 5399]) * ((wedges[((int)i + 150 * j) + 899] -
                  wedges[((int)i + 150 * j) + 1799]) * (wedges[((int)i + 150 * j)
                  + 7199] - wedges[((int)i + 150 * j) + 8999]) - (wedges[((int)i
                   + 150 * j) - 1] - wedges[((int)i + 150 * j) + 1799]) *
                 (wedges[((int)i + 150 * j) + 8099] - wedges[((int)i + 150 * j)
                  + 8999]))) + (P1[2] - wedges[((int)i + 150 * j) + 8999]) *
               ((wedges[((int)i + 150 * j) - 1] - wedges[((int)i + 150 * j) +
                 1799]) * (wedges[((int)i + 150 * j) + 4499] - wedges[((int)i +
                  150 * j) + 5399]) - (wedges[((int)i + 150 * j) + 899] -
                 wedges[((int)i + 150 * j) + 1799]) * (wedges[((int)i + 150 * j)
                 + 3599] - wedges[((int)i + 150 * j) + 5399]))) / dtr;
          if ((t > -1.0E-6) && (t < 1.000001)) {
            /*  Calculates if the point belongs to the face */
            /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
            /*  History:  2011.9.19 */
            for (k = 0; k < 3; k++) {
              point[k] = P1[k] + t * (P2[k] - P1[k]);
            }

            /* p1(:,1) = wedges(face(1),face(2),1,:); */
            /* p2(:,1) = wedges(face(1),face(2),2,:); */
            /* p3(:,1) = wedges(face(1),face(2),4,:); */
            /* u(:,1) = wedges(face(1),face(2),2,:) - wedges(face(1),face(2),1,:); */
            /* v(:,1) = wedges(face(1),face(2),4,:) - wedges(face(1),face(2),1,:); */
            /* resu1 = dot(VectP1,u); */
            /* resu2 = dot(VectP2,u); */
            /* resu1 = dot(VectP1,v); */
            /* resu2 = dot(VectP4,v); */
            d0 = 0.0;
            d1 = 0.0;
            for (k = 0; k < 3; k++) {
              u = wedges[(((int)i + 150 * j) + 3600 * k) + 899] - wedges[(((int)
                i + 150 * j) + 3600 * k) - 1];
              v[k] = wedges[(((int)i + 150 * j) + 3600 * k) + 2699] - wedges
                [(((int)i + 150 * j) + 3600 * k) - 1];
              b_VectP1 = wedges[(((int)i + 150 * j) + 3600 * k) - 1] - point[k];
              VectP4[k] = wedges[(((int)i + 150 * j) + 3600 * k) + 2699] -
                point[k];
              d0 += b_VectP1 * u;
              d1 += (wedges[(((int)i + 150 * j) + 3600 * k) + 899] - point[k]) *
                u;
              n[k] = wedges[(((int)i + 150 * j) + 3600 * k) - 1];
              p2[k] = wedges[(((int)i + 150 * j) + 3600 * k) + 899];
              p3[k] = wedges[(((int)i + 150 * j) + 3600 * k) + 2699];
              VectP1[k] = b_VectP1;
            }

            guard1 = false;
            if (d0 * d1 <= 1.0E-10) {
              d0 = 0.0;
              d1 = 0.0;
              for (k = 0; k < 3; k++) {
                d0 += VectP1[k] * v[k];
                d1 += VectP4[k] * v[k];
              }

              if ((d0 * d1 <= 1.0E-10) && (fabs((((p2[1] - n[1]) * (p3[2] - n[2])
                      - (p3[1] - n[1]) * (p2[2] - n[2])) * (point[0] - n[0]) +
                     ((p2[2] - n[2]) * (p3[0] - n[0]) - (p3[2] - n[2]) * (p2[0]
                       - n[0])) * (point[1] - n[1])) + ((p2[0] - n[0]) * (p3[1]
                      - n[1]) - (p3[0] - n[0]) * (p2[1] - n[1])) * (point[2] -
                     n[2])) <= 1.0E-8)) {
                af = 1;
              } else {
                guard1 = true;
              }
            } else {
              guard1 = true;
            }

            if (guard1) {
              af = 0;
            }

            if ((af == 1) && ((MSKFlag[(int)i - 1] == 1.0) || (CEP[(int)i - 1] ==
                  1.0)) && (fabs(t) > 1.0E-6) && (fabs(t - 1.0) > 1.0E-6)) {
              /*  masking if the block does not allow penetration or if it is a PEC */
              blk = 1.0;
            }
          }
        }
      }

      j++;
    }

    i++;
  }

  return blk;
}

/* End of code generation (BlockingTEST.c) */
