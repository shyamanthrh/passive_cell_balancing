/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'passiveBalancing/Solver Configuration'.
 */

#include "ne_ds.h"
#include "passiveBalancing_836bb176_1_ds_tdxy_p.h"
#include "passiveBalancing_836bb176_1_ds_sys_struct.h"
#include "passiveBalancing_836bb176_1_ds_externals.h"
#include "passiveBalancing_836bb176_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T passiveBalancing_836bb176_1_ds_tdxy_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mTDXY_P;
  out.mNumCol = 66ULL;
  out.mNumRow = 10ULL;
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
  out.mJc[16] = 5;
  out.mJc[17] = 8;
  out.mJc[18] = 9;
  out.mJc[19] = 10;
  out.mJc[20] = 10;
  out.mJc[21] = 10;
  out.mJc[22] = 10;
  out.mJc[23] = 10;
  out.mJc[24] = 10;
  out.mJc[25] = 10;
  out.mJc[26] = 10;
  out.mJc[27] = 10;
  out.mJc[28] = 10;
  out.mJc[29] = 10;
  out.mJc[30] = 10;
  out.mJc[31] = 11;
  out.mJc[32] = 11;
  out.mJc[33] = 12;
  out.mJc[34] = 13;
  out.mJc[35] = 16;
  out.mJc[36] = 16;
  out.mJc[37] = 16;
  out.mJc[38] = 16;
  out.mJc[39] = 16;
  out.mJc[40] = 16;
  out.mJc[41] = 16;
  out.mJc[42] = 16;
  out.mJc[43] = 16;
  out.mJc[44] = 16;
  out.mJc[45] = 16;
  out.mJc[46] = 16;
  out.mJc[47] = 17;
  out.mJc[48] = 17;
  out.mJc[49] = 18;
  out.mJc[50] = 19;
  out.mJc[51] = 19;
  out.mJc[52] = 19;
  out.mJc[53] = 19;
  out.mJc[54] = 19;
  out.mJc[55] = 19;
  out.mJc[56] = 19;
  out.mJc[57] = 19;
  out.mJc[58] = 19;
  out.mJc[59] = 19;
  out.mJc[60] = 19;
  out.mJc[61] = 19;
  out.mJc[62] = 20;
  out.mJc[63] = 20;
  out.mJc[64] = 20;
  out.mJc[65] = 20;
  out.mJc[66] = 20;
  out.mIr[0] = 3;
  out.mIr[1] = 4;
  out.mIr[2] = 6;
  out.mIr[3] = 7;
  out.mIr[4] = 8;
  out.mIr[5] = 3;
  out.mIr[6] = 6;
  out.mIr[7] = 7;
  out.mIr[8] = 3;
  out.mIr[9] = 3;
  out.mIr[10] = 0;
  out.mIr[11] = 4;
  out.mIr[12] = 4;
  out.mIr[13] = 5;
  out.mIr[14] = 8;
  out.mIr[15] = 9;
  out.mIr[16] = 1;
  out.mIr[17] = 5;
  out.mIr[18] = 5;
  out.mIr[19] = 2;
  (void)LC;
  (void)t2;
  return 0;
}
