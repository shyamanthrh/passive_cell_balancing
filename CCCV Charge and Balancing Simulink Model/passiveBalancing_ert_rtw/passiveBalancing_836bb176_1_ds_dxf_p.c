/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'passiveBalancing/Solver Configuration'.
 */

#include "ne_ds.h"
#include "passiveBalancing_836bb176_1_ds_dxf_p.h"
#include "passiveBalancing_836bb176_1_ds_sys_struct.h"
#include "passiveBalancing_836bb176_1_ds_externals.h"
#include "passiveBalancing_836bb176_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T passiveBalancing_836bb176_1_ds_dxf_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static int32_T _cg_const_2[133] = { 16, 17, 18, 19, 21, 24, 27, 2, 3, 4, 30,
    31, 32, 33, 35, 38, 41, 7, 8, 9, 44, 45, 46, 47, 49, 52, 55, 12, 13, 14, 1,
    6, 15, 29, 57, 58, 60, 61, 62, 1, 15, 57, 60, 1, 15, 57, 60, 61, 1, 15, 57,
    60, 2, 3, 4, 15, 20, 23, 26, 18, 19, 21, 22, 24, 25, 27, 28, 1, 16, 6, 29,
    58, 62, 63, 6, 29, 58, 62, 11, 43, 59, 62, 63, 64, 7, 8, 9, 29, 34, 37, 40,
    32, 33, 35, 36, 38, 39, 41, 42, 6, 30, 11, 43, 59, 64, 65, 11, 43, 59, 64,
    12, 13, 14, 43, 48, 51, 54, 46, 47, 49, 50, 52, 53, 55, 56, 11, 44, 60, 61,
    62, 63, 64, 65 };

  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  (void)LC;
  out = t2->mDXF_P;
  out.mNumCol = 66ULL;
  out.mNumRow = 66ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 7;
  out.mJc[3] = 8;
  out.mJc[4] = 9;
  out.mJc[5] = 10;
  out.mJc[6] = 11;
  out.mJc[7] = 17;
  out.mJc[8] = 18;
  out.mJc[9] = 19;
  out.mJc[10] = 20;
  out.mJc[11] = 21;
  out.mJc[12] = 27;
  out.mJc[13] = 28;
  out.mJc[14] = 29;
  out.mJc[15] = 30;
  out.mJc[16] = 39;
  out.mJc[17] = 43;
  out.mJc[18] = 48;
  out.mJc[19] = 52;
  out.mJc[20] = 53;
  out.mJc[21] = 54;
  out.mJc[22] = 55;
  out.mJc[23] = 56;
  out.mJc[24] = 56;
  out.mJc[25] = 57;
  out.mJc[26] = 58;
  out.mJc[27] = 59;
  out.mJc[28] = 59;
  out.mJc[29] = 59;
  out.mJc[30] = 59;
  out.mJc[31] = 67;
  out.mJc[32] = 69;
  out.mJc[33] = 74;
  out.mJc[34] = 78;
  out.mJc[35] = 84;
  out.mJc[36] = 85;
  out.mJc[37] = 86;
  out.mJc[38] = 87;
  out.mJc[39] = 88;
  out.mJc[40] = 88;
  out.mJc[41] = 89;
  out.mJc[42] = 90;
  out.mJc[43] = 91;
  out.mJc[44] = 91;
  out.mJc[45] = 91;
  out.mJc[46] = 91;
  out.mJc[47] = 99;
  out.mJc[48] = 101;
  out.mJc[49] = 106;
  out.mJc[50] = 110;
  out.mJc[51] = 111;
  out.mJc[52] = 112;
  out.mJc[53] = 113;
  out.mJc[54] = 114;
  out.mJc[55] = 114;
  out.mJc[56] = 115;
  out.mJc[57] = 116;
  out.mJc[58] = 117;
  out.mJc[59] = 117;
  out.mJc[60] = 117;
  out.mJc[61] = 117;
  out.mJc[62] = 125;
  out.mJc[63] = 127;
  out.mJc[64] = 129;
  out.mJc[65] = 131;
  out.mJc[66] = 133;
  for (b = 0; b < 133; b++) {
    out.mIr[b] = _cg_const_2[b];
  }

  (void)LC;
  (void)t2;
  return 0;
}
