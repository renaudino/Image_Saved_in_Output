/*
 * PointsImagesm_initialize.c
 *
 * Code generation for function 'PointsImagesm_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PointsImagesm.h"
#include "PointsImagesm_initialize.h"
#include "PointsImagesm_emxutil.h"
#include "_coder_PointsImagesm_mex.h"
#include "PointsImagesm_data.h"

/* Named Constants */
#define b_Nblock                       (0.0)
#define b_Nreflx                       (5.0)

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 10, 46, "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 10, 8, "PointsImagesm",
  "\\\\s3store2.d03.arc.local\\FSSQT1601\\Alumni\\Mingming Gan\\Image Saved in Output\\PointsImagesm.m"
};

/* Function Declarations */
static void PointsImagesm_once(const emlrtStack *sp);

/* Function Definitions */
static void PointsImagesm_once(const emlrtStack *sp)
{
  int32_T i;
  Nbrimg.size[0] = 0;
  emxInit_real_T(sp, &Mtrun, 3, &emlrtRTEI, false);
  emxInit_real_T1(sp, &wedges, 4, &b_emlrtRTEI, false);
  vnfaces.size[2] = 0;
  recept_dirty = 0U;
  Nreflx_dirty = 0U;
  DBIMAGES_dirty = 0U;
  vnfaces_dirty = 0U;
  Nblock_dirty = 0U;
  wedges_dirty = 0U;
  Mtrun_dirty = 0U;
  Nbrimg_dirty = 0U;
  for (i = 0; i < 3; i++) {
    recept[i] = 0.0;
  }

  Nreflx = b_Nreflx;
  memset(&DBIMAGES[0], 0, 9U * sizeof(real_T));
  vnfaces.size[0] = 150;
  vnfaces.size[1] = 6;
  vnfaces.size[2] = 3;
  memset(&vnfaces.data[0], 0, 2700U * sizeof(real_T));
  Nblock = b_Nblock;
  i = wedges->size[0] * wedges->size[1] * wedges->size[2] * wedges->size[3];
  wedges->size[0] = 150;
  wedges->size[1] = 6;
  wedges->size[2] = 4;
  wedges->size[3] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)wedges, i, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 10800; i++) {
    wedges->data[i] = 0.0;
  }

  i = Mtrun->size[0] * Mtrun->size[1] * Mtrun->size[2];
  Mtrun->size[0] = 5;
  Mtrun->size[1] = 5;
  Mtrun->size[2] = 9;
  emxEnsureCapacity(sp, (emxArray__common *)Mtrun, i, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  for (i = 0; i < 225; i++) {
    Mtrun->data[i] = 0.0;
  }

  Nbrimg.size[0] = 10;
  memset(&Nbrimg.data[0], 0, 10U * sizeof(real_T));
}

void PointsImagesm_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    PointsImagesm_once(&st);
  }
}

/* End of code generation (PointsImagesm_initialize.c) */
