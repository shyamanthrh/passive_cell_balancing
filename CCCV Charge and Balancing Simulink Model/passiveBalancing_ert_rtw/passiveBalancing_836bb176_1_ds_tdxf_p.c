/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'passiveBalancing/Solver Configuration'.
 */

#include "ne_ds.h"
#include "passiveBalancing_836bb176_1_ds_tdxf_p.h"
#include "passiveBalancing_836bb176_1_ds_sys_struct.h"
#include "passiveBalancing_836bb176_1_ds_externals.h"
#include "passiveBalancing_836bb176_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T passiveBalancing_836bb176_1_ds_tdxf_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static int32_T _cg_const_2[237] = { 16, 17, 18, 19, 21, 24, 27, 2, 15, 3, 15,
    4, 15, 30, 31, 32, 33, 35, 38, 41, 7, 29, 8, 29, 9, 29, 44, 45, 46, 47, 49,
    52, 55, 12, 43, 13, 43, 14, 43, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 15, 29, 57, 58,
    60, 61, 62, 0, 1, 2, 3, 4, 15, 57, 60, 0, 1, 2, 3, 4, 15, 57, 60, 61, 0, 1,
    2, 3, 4, 15, 57, 60, 2, 20, 3, 23, 4, 26, 15, 19, 0, 15, 18, 20, 21, 23, 24,
    26, 27, 2, 22, 3, 25, 4, 28, 16, 18, 19, 21, 22, 24, 25, 27, 28, 1, 16, 17,
    5, 6, 7, 8, 9, 29, 58, 62, 63, 5, 6, 7, 8, 9, 29, 58, 62, 10, 11, 12, 13, 14,
    29, 43, 59, 62, 63, 64, 7, 34, 8, 37, 9, 40, 29, 33, 5, 29, 32, 34, 35, 37,
    38, 40, 41, 7, 36, 8, 39, 9, 42, 30, 32, 33, 35, 36, 38, 39, 41, 42, 6, 30,
    31, 10, 11, 12, 13, 14, 43, 59, 64, 65, 10, 11, 12, 13, 14, 43, 59, 64, 12,
    48, 13, 51, 14, 54, 43, 47, 10, 43, 46, 48, 49, 51, 52, 54, 55, 12, 50, 13,
    53, 14, 56, 44, 46, 47, 49, 50, 52, 53, 55, 56, 11, 44, 45, 60, 61, 62, 63,
    64, 65 };

  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  (void)LC;
  out = t2->mTDXF_P;
  out.mNumCol = 66ULL;
  out.mNumRow = 66ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 7;
  out.mJc[3] = 9;
  out.mJc[4] = 11;
  out.mJc[5] = 13;
  out.mJc[6] = 14;
  out.mJc[7] = 20;
  out.mJc[8] = 22;
  out.mJc[9] = 24;
  out.mJc[10] = 26;
  out.mJc[11] = 27;
  out.mJc[12] = 33;
  out.mJc[13] = 35;
  out.mJc[14] = 37;
  out.mJc[15] = 39;
  out.mJc[16] = 56;
  out.mJc[17] = 64;
  out.mJc[18] = 73;
  out.mJc[19] = 81;
  out.mJc[20] = 83;
  out.mJc[21] = 85;
  out.mJc[22] = 87;
  out.mJc[23] = 89;
  out.mJc[24] = 92;
  out.mJc[25] = 94;
  out.mJc[26] = 96;
  out.mJc[27] = 98;
  out.mJc[28] = 100;
  out.mJc[29] = 102;
  out.mJc[30] = 104;
  out.mJc[31] = 113;
  out.mJc[32] = 116;
  out.mJc[33] = 125;
  out.mJc[34] = 133;
  out.mJc[35] = 144;
  out.mJc[36] = 146;
  out.mJc[37] = 148;
  out.mJc[38] = 150;
  out.mJc[39] = 152;
  out.mJc[40] = 155;
  out.mJc[41] = 157;
  out.mJc[42] = 159;
  out.mJc[43] = 161;
  out.mJc[44] = 163;
  out.mJc[45] = 165;
  out.mJc[46] = 167;
  out.mJc[47] = 176;
  out.mJc[48] = 179;
  out.mJc[49] = 188;
  out.mJc[50] = 196;
  out.mJc[51] = 198;
  out.mJc[52] = 200;
  out.mJc[53] = 202;
  out.mJc[54] = 204;
  out.mJc[55] = 207;
  out.mJc[56] = 209;
  out.mJc[57] = 211;
  out.mJc[58] = 213;
  out.mJc[59] = 215;
  out.mJc[60] = 217;
  out.mJc[61] = 219;
  out.mJc[62] = 228;
  out.mJc[63] = 231;
  out.mJc[64] = 233;
  out.mJc[65] = 235;
  out.mJc[66] = 237;
  for (b = 0; b < 237; b++) {
    out.mIr[b] = _cg_const_2[b];
  }

  (void)LC;
  (void)t2;
  return 0;
}
