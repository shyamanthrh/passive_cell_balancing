/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'passiveBalancing/Solver Configuration'.
 */

#include "ne_ds.h"
#include "passiveBalancing_836bb176_1_ds_dxm_p.h"
#include "passiveBalancing_836bb176_1_ds_sys_struct.h"
#include "passiveBalancing_836bb176_1_ds_externals.h"
#include "passiveBalancing_836bb176_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T passiveBalancing_836bb176_1_ds_dxm_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDXM_P;
  out.mNumCol = 66ULL;
  out.mNumRow = 15ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 1;
  out.mJc[21] = 2;
  out.mJc[22] = 3;
  out.mJc[23] = 3;
  out.mJc[24] = 3;
  out.mJc[25] = 3;
  out.mJc[26] = 3;
  out.mJc[27] = 3;
  out.mJc[28] = 4;
  out.mJc[29] = 5;
  out.mJc[30] = 6;
  out.mJc[31] = 6;
  out.mJc[32] = 6;
  out.mJc[33] = 6;
  out.mJc[34] = 6;
  out.mJc[35] = 6;
  out.mJc[36] = 7;
  out.mJc[37] = 8;
  out.mJc[38] = 9;
  out.mJc[39] = 9;
  out.mJc[40] = 9;
  out.mJc[41] = 9;
  out.mJc[42] = 9;
  out.mJc[43] = 9;
  out.mJc[44] = 10;
  out.mJc[45] = 11;
  out.mJc[46] = 12;
  out.mJc[47] = 12;
  out.mJc[48] = 12;
  out.mJc[49] = 12;
  out.mJc[50] = 12;
  out.mJc[51] = 13;
  out.mJc[52] = 14;
  out.mJc[53] = 15;
  out.mJc[54] = 15;
  out.mJc[55] = 15;
  out.mJc[56] = 15;
  out.mJc[57] = 15;
  out.mJc[58] = 15;
  out.mJc[59] = 16;
  out.mJc[60] = 17;
  out.mJc[61] = 18;
  out.mJc[62] = 18;
  out.mJc[63] = 18;
  out.mJc[64] = 18;
  out.mJc[65] = 18;
  out.mJc[66] = 18;
  out.mIr[0] = 2;
  out.mIr[1] = 3;
  out.mIr[2] = 4;
  out.mIr[3] = 2;
  out.mIr[4] = 3;
  out.mIr[5] = 4;
  out.mIr[6] = 7;
  out.mIr[7] = 8;
  out.mIr[8] = 9;
  out.mIr[9] = 7;
  out.mIr[10] = 8;
  out.mIr[11] = 9;
  out.mIr[12] = 12;
  out.mIr[13] = 13;
  out.mIr[14] = 14;
  out.mIr[15] = 12;
  out.mIr[16] = 13;
  out.mIr[17] = 14;
  (void)LC;
  (void)t2;
  return 0;
}
