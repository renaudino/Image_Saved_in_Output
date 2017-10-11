/*
 * Construct.c
 *
 * Code generation for function 'Construct'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Construct.h"
#include "Construct_emxutil.h"
#include "PointsImages.h"
#include "Construct_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 26,    /* lineNo */
  "Construct",                         /* fcnName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m"/* pathName */
};

static emlrtRTEInfo e_emlrtRTEI = { 1, /* lineNo */
  10,                                  /* colNo */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 18,/* lineNo */
  1,                                   /* colNo */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 20,/* lineNo */
  9,                                   /* colNo */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  3,                                   /* colNo */
  "M",                                 /* aName */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo h_emlrtRTEI = { 24,/* lineNo */
  12,                                  /* colNo */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m"/* pName */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  14,                                  /* colNo */
  "Mtrun",                             /* aName */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 38,    /* lineNo */
  18,                                  /* colNo */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  18,                                  /* colNo */
  "Mtrun",                             /* aName */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 38,  /* lineNo */
  20,                                  /* colNo */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  20,                                  /* colNo */
  "Mtrun",                             /* aName */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  14,                                  /* colNo */
  "Mtrun",                             /* aName */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 39,  /* lineNo */
  18,                                  /* colNo */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  18,                                  /* colNo */
  "Mtrun",                             /* aName */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 39,  /* lineNo */
  20,                                  /* colNo */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  20,                                  /* colNo */
  "Mtrun",                             /* aName */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 18,  /* lineNo */
  11,                                  /* colNo */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 18,  /* lineNo */
  11,                                  /* colNo */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  16,                                  /* colNo */
  "M",                                 /* aName */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  29,                                  /* colNo */
  "Nbrimg",                            /* aName */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  15,                                  /* colNo */
  "Nbrimg",                            /* aName */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  14,                                  /* colNo */
  "Mtrun",                             /* aName */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  16,                                  /* colNo */
  "Mtrun",                             /* aName */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  19,                                  /* colNo */
  "M",                                 /* aName */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  10,                                  /* colNo */
  "M",                                 /* aName */
  "Construct",                         /* fName */
  "Z:\\Matlab Server\\Olivier\\ray tracing\\Image Saved in Output\\Construct.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void Construct(const emlrtStack *sp, real_T OrdRef)
{
  emxArray_real_T *M;
  int32_T i0;
  real_T d0;
  int32_T loop_ub;
  int32_T i;
  real_T b;
  real_T mid[2];
  int32_T j;
  real_T pnbr;
  int32_T i1;
  real_T a;
  int32_T i2;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &M, 1, &f_emlrtRTEI, true);

  /*  Build the image tree */
  /*  Authors: Francesco Mani <francesco.mani@uclouvain.be> and Mingming Gan <gan@ftw.at> */
  /*  History: 2011.9.21 */
  /*  Updated by: Xuhong Li <xuhong@ftw.at> */
  /*  History: 2013.08.01 */
  /*  Build the image tree in level order from 1 to OrdRef+1, instead of using recursion  */
  /*  Mtrun: 1   -----   flag, empty or not */
  /*         2~3 -----   face, 2--block index 3--surface index */
  /*         4~6 -----   point coordinates */
  /*         7   -----   Nbfaces, number of images of current point  */
  /*         8~9 -----   previous level */
  i0 = M->size[0];
  if (!(OrdRef + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(OrdRef + 1.0, &f_emlrtDCI, sp);
  }

  d0 = OrdRef + 1.0;
  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &e_emlrtDCI, sp);
  }

  M->size[0] = (int32_T)d0;
  emxEnsureCapacity(sp, (emxArray__common *)M, i0, sizeof(real_T), &e_emlrtRTEI);
  if (!(OrdRef + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(OrdRef + 1.0, &f_emlrtDCI, sp);
  }

  d0 = OrdRef + 1.0;
  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &e_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d0;
  for (i0 = 0; i0 < loop_ub; i0++) {
    M->data[i0] = 0.0;
  }

  /*  image points number in each level */
  i0 = (int32_T)(OrdRef + 1.0);
  if (!(1 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &emlrtBCI, sp);
  }

  M->data[0] = 1.0;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, OrdRef, mxDOUBLE_CLASS, (int32_T)
    OrdRef, &g_emlrtRTEI, sp);
  i = 0;
  while (i <= (int32_T)OrdRef - 1) {
    b = 0.0;
    mid[0] = 1.0 + (real_T)i;

    /*  level */
    i0 = M->size[0];
    if (!((i + 1 >= 1) && (i + 1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, i0, &h_emlrtBCI, sp);
    }

    d0 = M->data[i];
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, M->data[i], mxDOUBLE_CLASS, (int32_T)
      M->data[i], &h_emlrtRTEI, sp);
    j = 0;
    while (j <= (int32_T)d0 - 1) {
      mid[1] = 1.0 + (real_T)j;

      /*  point index */
      st.site = &emlrtRSI;
      pnbr = PointsImages(&st, mid);

      /*  Number of image points for current point */
      i0 = Nbrimg->size[0];
      i1 = (int32_T)((1.0 + (real_T)i) + 1.0);
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &i_emlrtBCI, sp);
      }

      i0 = Nbrimg->size[0];
      loop_ub = (int32_T)((1.0 + (real_T)i) + 1.0);
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &j_emlrtBCI, sp);
      }

      Nbrimg->data[loop_ub - 1] = Nbrimg->data[i1 - 1] + pnbr;
      i0 = Mtrun->size[0];
      if (!((i + 1 >= 1) && (i + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, i0, &k_emlrtBCI, sp);
      }

      i0 = Mtrun->size[1];
      if (!((j + 1 >= 1) && (j + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, i0, &l_emlrtBCI, sp);
      }

      Mtrun->data[(i + Mtrun->size[0] * j) + Mtrun->size[0] * Mtrun->size[1] * 6]
        = pnbr;
      if (1.0 + (real_T)j == 1.0) {
        /*  corresponding images points index in next level */
        a = 1.0;
        b = pnbr;
      } else {
        a = b + 1.0;
        b += pnbr;
      }

      if (a > b) {
        i1 = 1;
        i0 = 1;
      } else {
        if (a != (int32_T)muDoubleScalarFloor(a)) {
          emlrtIntegerCheckR2012b(a, &emlrtDCI, sp);
        }

        i0 = Mtrun->size[1];
        i1 = (int32_T)a;
        if (!((i1 >= 1) && (i1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &c_emlrtBCI, sp);
        }

        if (b != (int32_T)muDoubleScalarFloor(b)) {
          emlrtIntegerCheckR2012b(b, &b_emlrtDCI, sp);
        }

        i0 = Mtrun->size[1];
        loop_ub = (int32_T)b;
        if (!((loop_ub >= 1) && (loop_ub <= i0))) {
          emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &d_emlrtBCI, sp);
        }

        i0 = loop_ub + 1;
      }

      loop_ub = Mtrun->size[0];
      i2 = (int32_T)((1.0 + (real_T)i) + 1.0);
      if (!((i2 >= 1) && (i2 <= loop_ub))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, loop_ub, &b_emlrtBCI, sp);
      }

      loop_ub = i0 - i1;
      for (i0 = 0; i0 < loop_ub; i0++) {
        Mtrun->data[(((int32_T)((1.0 + (real_T)i) + 1.0) + Mtrun->size[0] * ((i1
          + i0) - 1)) + Mtrun->size[0] * Mtrun->size[1] * 7) - 1] = 1.0 +
          (real_T)i;
      }

      /*   previous level */
      if (a > b) {
        i1 = 1;
        i0 = 1;
      } else {
        if (a != (int32_T)muDoubleScalarFloor(a)) {
          emlrtIntegerCheckR2012b(a, &c_emlrtDCI, sp);
        }

        i0 = Mtrun->size[1];
        i1 = (int32_T)a;
        if (!((i1 >= 1) && (i1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &f_emlrtBCI, sp);
        }

        if (b != (int32_T)muDoubleScalarFloor(b)) {
          emlrtIntegerCheckR2012b(b, &d_emlrtDCI, sp);
        }

        i0 = Mtrun->size[1];
        loop_ub = (int32_T)b;
        if (!((loop_ub >= 1) && (loop_ub <= i0))) {
          emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &g_emlrtBCI, sp);
        }

        i0 = loop_ub + 1;
      }

      loop_ub = Mtrun->size[0];
      i2 = (int32_T)((1.0 + (real_T)i) + 1.0);
      if (!((i2 >= 1) && (i2 <= loop_ub))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, loop_ub, &e_emlrtBCI, sp);
      }

      loop_ub = i0 - i1;
      for (i0 = 0; i0 < loop_ub; i0++) {
        Mtrun->data[(((int32_T)((1.0 + (real_T)i) + 1.0) + Mtrun->size[0] * ((i1
          + i0) - 1)) + (Mtrun->size[0] * Mtrun->size[1] << 3)) - 1] = 1.0 +
          (real_T)j;
      }

      /*   previous level */
      i0 = M->size[0];
      i1 = (int32_T)((1.0 + (real_T)i) + 1.0);
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &m_emlrtBCI, sp);
      }

      i0 = M->size[0];
      loop_ub = (int32_T)((1.0 + (real_T)i) + 1.0);
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &n_emlrtBCI, sp);
      }

      M->data[loop_ub - 1] = M->data[i1 - 1] + pnbr;
      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&M);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (Construct.c) */
