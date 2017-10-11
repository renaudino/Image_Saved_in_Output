/*
 * sortIdx.c
 *
 * Code generation for function 'sortIdx'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Masking_Olivier_global.h"
#include "sortIdx.h"
#include "eml_int_forloop_overflow_check.h"
#include "Masking_Olivier_global_data.h"

/* Variable Definitions */
static emlrtRSInfo x_emlrtRSI = { 70,  /* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 247, /* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 255,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 256,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 264,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 272,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 329,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 357,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 364,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 436,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 444,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 451,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 498,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 467,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

/* Function Declarations */
static void merge(const emlrtStack *sp, int32_T idx_data[], real_T x_data[],
                  int32_T offset, int32_T np, int32_T nq, int32_T iwork_data[],
                  real_T xwork_data[]);
static void merge_block(const emlrtStack *sp, int32_T idx_data[], real_T x_data[],
  int32_T offset, int32_T n, int32_T preSortLevel, int32_T iwork_data[], real_T
  xwork_data[]);
static void merge_pow2_block(int32_T idx_data[], real_T x_data[], int32_T offset);

/* Function Definitions */
static void merge(const emlrtStack *sp, int32_T idx_data[], real_T x_data[],
                  int32_T offset, int32_T np, int32_T nq, int32_T iwork_data[],
                  real_T xwork_data[])
{
  int32_T n;
  int32_T qend;
  int32_T p;
  int32_T iout;
  int32_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (nq != 0) {
    n = np + nq;
    st.site = &pb_emlrtRSI;
    if ((!(1 > n)) && (n > 2147483646)) {
      b_st.site = &w_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (qend = 0; qend + 1 <= n; qend++) {
      iwork_data[qend] = idx_data[offset + qend];
      xwork_data[qend] = x_data[offset + qend];
    }

    p = 0;
    n = np;
    qend = np + nq;
    iout = offset - 1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork_data[p] <= xwork_data[n]) {
        idx_data[iout] = iwork_data[p];
        x_data[iout] = xwork_data[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx_data[iout] = iwork_data[n];
        x_data[iout] = xwork_data[n];
        if (n + 1 < qend) {
          n++;
        } else {
          n = (iout - p) + 1;
          st.site = &ob_emlrtRSI;
          if ((!(p + 1 > np)) && (np > 2147483646)) {
            b_st.site = &w_emlrtRSI;
            check_forloop_overflow_error(&b_st);
          }

          while (p + 1 <= np) {
            idx_data[n + p] = iwork_data[p];
            x_data[n + p] = xwork_data[p];
            p++;
          }

          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

static void merge_block(const emlrtStack *sp, int32_T idx_data[], real_T x_data[],
  int32_T offset, int32_T n, int32_T preSortLevel, int32_T iwork_data[], real_T
  xwork_data[])
{
  int32_T nPairs;
  int32_T bLen;
  int32_T tailOffset;
  int32_T nTail;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    if ((nPairs & 1) != 0) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        st.site = &kb_emlrtRSI;
        merge(&st, idx_data, x_data, offset + tailOffset, bLen, nTail - bLen,
              iwork_data, xwork_data);
      }
    }

    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 1; nTail <= nPairs; nTail++) {
      st.site = &mb_emlrtRSI;
      merge(&st, idx_data, x_data, offset + (nTail - 1) * tailOffset, bLen, bLen,
            iwork_data, xwork_data);
    }

    bLen = tailOffset;
  }

  if (n > bLen) {
    st.site = &nb_emlrtRSI;
    merge(&st, idx_data, x_data, offset, bLen, n - bLen, iwork_data, xwork_data);
  }
}

static void merge_pow2_block(int32_T idx_data[], real_T x_data[], int32_T offset)
{
  int32_T b;
  int32_T bLen;
  int32_T bLen2;
  int32_T nPairs;
  int32_T k;
  int32_T blockOffset;
  int32_T iout;
  int32_T p;
  int32_T iwork[256];
  int32_T q;
  real_T xwork[256];
  int32_T exitg1;
  for (b = 0; b < 6; b++) {
    bLen = 1 << (b + 2);
    bLen2 = bLen << 1;
    nPairs = 256 >> (b + 3);
    for (k = 1; k <= nPairs; k++) {
      blockOffset = offset + (k - 1) * bLen2;
      for (iout = 0; iout + 1 <= bLen2; iout++) {
        iwork[iout] = idx_data[blockOffset + iout];
        xwork[iout] = x_data[blockOffset + iout];
      }

      p = 0;
      q = bLen;
      iout = blockOffset - 1;
      do {
        exitg1 = 0;
        iout++;
        if (xwork[p] <= xwork[q]) {
          idx_data[iout] = iwork[p];
          x_data[iout] = xwork[p];
          if (p + 1 < bLen) {
            p++;
          } else {
            exitg1 = 1;
          }
        } else {
          idx_data[iout] = iwork[q];
          x_data[iout] = xwork[q];
          if (q + 1 < bLen2) {
            q++;
          } else {
            iout = (iout - p) + 1;
            while (p + 1 <= bLen) {
              idx_data[iout + p] = iwork[p];
              x_data[iout + p] = xwork[p];
              p++;
            }

            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);
    }
  }
}

void sortIdx(const emlrtStack *sp, real_T x_data[], int32_T x_size[1], int32_T
             idx_data[], int32_T idx_size[1])
{
  int16_T unnamed_idx_0;
  int32_T i;
  int32_T ib;
  int32_T n;
  int32_T b_n;
  real_T x4[4];
  int16_T idx4[4];
  int32_T iwork_data[1000];
  int32_T nNaNs;
  real_T xwork_data[1000];
  int32_T k;
  int32_T wOffset;
  int8_T perm[4];
  int32_T i3;
  int32_T i4;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  unnamed_idx_0 = (int16_T)x_size[0];
  idx_size[0] = unnamed_idx_0;
  i = unnamed_idx_0;
  for (ib = 0; ib < i; ib++) {
    idx_data[ib] = 0;
  }

  st.site = &x_emlrtRSI;
  n = x_size[0];
  b_st.site = &y_emlrtRSI;
  b_n = x_size[0];
  for (i = 0; i < 4; i++) {
    x4[i] = 0.0;
    idx4[i] = 0;
  }

  i = unnamed_idx_0;
  for (ib = 0; ib < i; ib++) {
    iwork_data[ib] = 0;
  }

  i = (int16_T)x_size[0];
  for (ib = 0; ib < i; ib++) {
    xwork_data[ib] = 0.0;
  }

  nNaNs = 0;
  ib = 0;
  c_st.site = &eb_emlrtRSI;
  for (k = 0; k + 1 <= b_n; k++) {
    if (muDoubleScalarIsNaN(x_data[k])) {
      idx_data[(b_n - nNaNs) - 1] = k + 1;
      xwork_data[(b_n - nNaNs) - 1] = x_data[k];
      nNaNs++;
    } else {
      ib++;
      idx4[ib - 1] = (int16_T)(k + 1);
      x4[ib - 1] = x_data[k];
      if (ib == 4) {
        i = k - nNaNs;
        if (x4[0] <= x4[1]) {
          ib = 1;
          wOffset = 2;
        } else {
          ib = 2;
          wOffset = 1;
        }

        if (x4[2] <= x4[3]) {
          i3 = 3;
          i4 = 4;
        } else {
          i3 = 4;
          i4 = 3;
        }

        if (x4[ib - 1] <= x4[i3 - 1]) {
          if (x4[wOffset - 1] <= x4[i3 - 1]) {
            perm[0] = (int8_T)ib;
            perm[1] = (int8_T)wOffset;
            perm[2] = (int8_T)i3;
            perm[3] = (int8_T)i4;
          } else if (x4[wOffset - 1] <= x4[i4 - 1]) {
            perm[0] = (int8_T)ib;
            perm[1] = (int8_T)i3;
            perm[2] = (int8_T)wOffset;
            perm[3] = (int8_T)i4;
          } else {
            perm[0] = (int8_T)ib;
            perm[1] = (int8_T)i3;
            perm[2] = (int8_T)i4;
            perm[3] = (int8_T)wOffset;
          }
        } else if (x4[ib - 1] <= x4[i4 - 1]) {
          if (x4[wOffset - 1] <= x4[i4 - 1]) {
            perm[0] = (int8_T)i3;
            perm[1] = (int8_T)ib;
            perm[2] = (int8_T)wOffset;
            perm[3] = (int8_T)i4;
          } else {
            perm[0] = (int8_T)i3;
            perm[1] = (int8_T)ib;
            perm[2] = (int8_T)i4;
            perm[3] = (int8_T)wOffset;
          }
        } else {
          perm[0] = (int8_T)i3;
          perm[1] = (int8_T)i4;
          perm[2] = (int8_T)ib;
          perm[3] = (int8_T)wOffset;
        }

        idx_data[i - 3] = idx4[perm[0] - 1];
        idx_data[i - 2] = idx4[perm[1] - 1];
        idx_data[i - 1] = idx4[perm[2] - 1];
        idx_data[i] = idx4[perm[3] - 1];
        x_data[i - 3] = x4[perm[0] - 1];
        x_data[i - 2] = x4[perm[1] - 1];
        x_data[i - 1] = x4[perm[2] - 1];
        x_data[i] = x4[perm[3] - 1];
        ib = 0;
      }
    }
  }

  wOffset = (b_n - nNaNs) - 1;
  if (ib > 0) {
    for (i = 0; i < 4; i++) {
      perm[i] = 0;
    }

    if (ib == 1) {
      perm[0] = 1;
    } else if (ib == 2) {
      if (x4[0] <= x4[1]) {
        perm[0] = 1;
        perm[1] = 2;
      } else {
        perm[0] = 2;
        perm[1] = 1;
      }
    } else if (x4[0] <= x4[1]) {
      if (x4[1] <= x4[2]) {
        perm[0] = 1;
        perm[1] = 2;
        perm[2] = 3;
      } else if (x4[0] <= x4[2]) {
        perm[0] = 1;
        perm[1] = 3;
        perm[2] = 2;
      } else {
        perm[0] = 3;
        perm[1] = 1;
        perm[2] = 2;
      }
    } else if (x4[0] <= x4[2]) {
      perm[0] = 2;
      perm[1] = 1;
      perm[2] = 3;
    } else if (x4[1] <= x4[2]) {
      perm[0] = 2;
      perm[1] = 3;
      perm[2] = 1;
    } else {
      perm[0] = 3;
      perm[1] = 2;
      perm[2] = 1;
    }

    c_st.site = &fb_emlrtRSI;
    if (ib > 2147483646) {
      d_st.site = &w_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (k = 1; k <= ib; k++) {
      idx_data[(wOffset - ib) + k] = idx4[perm[k - 1] - 1];
      x_data[(wOffset - ib) + k] = x4[perm[k - 1] - 1];
    }
  }

  i = (nNaNs >> 1) + 1;
  c_st.site = &gb_emlrtRSI;
  for (k = 1; k < i; k++) {
    ib = idx_data[wOffset + k];
    idx_data[wOffset + k] = idx_data[b_n - k];
    idx_data[b_n - k] = ib;
    x_data[wOffset + k] = xwork_data[b_n - k];
    x_data[b_n - k] = xwork_data[wOffset + k];
  }

  if ((nNaNs & 1) != 0) {
    x_data[wOffset + i] = xwork_data[wOffset + i];
  }

  wOffset = n - nNaNs;
  i = 2;
  if (wOffset > 1) {
    if (n >= 256) {
      ib = wOffset >> 8;
      if (ib > 0) {
        b_st.site = &ab_emlrtRSI;
        for (i = 1; i <= ib; i++) {
          b_st.site = &bb_emlrtRSI;
          merge_pow2_block(idx_data, x_data, (i - 1) << 8);
        }

        i = ib << 8;
        ib = wOffset - i;
        if (ib > 0) {
          b_st.site = &cb_emlrtRSI;
          merge_block(&b_st, idx_data, x_data, i, ib, 2, iwork_data, xwork_data);
        }

        i = 8;
      }
    }

    b_st.site = &db_emlrtRSI;
    merge_block(&b_st, idx_data, x_data, 0, wOffset, i, iwork_data, xwork_data);
  }
}

/* End of code generation (sortIdx.c) */
