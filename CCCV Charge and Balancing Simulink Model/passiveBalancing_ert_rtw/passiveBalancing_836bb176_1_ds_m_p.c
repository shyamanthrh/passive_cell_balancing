/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'passiveBalancing/Solver Configuration'.
 */

#include "ne_ds.h"
#include "passiveBalancing_836bb176_1_ds_m_p.h"
#include "passiveBalancing_836bb176_1_ds_sys_struct.h"
#include "passiveBalancing_836bb176_1_ds_externals.h"
#include "passiveBalancing_836bb176_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T passiveBalancing_836bb176_1_ds_m_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mM_P;
  out.mNumCol = 66ULL;
  out.mNumRow = 66ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 4;
  out.mJc[5] = 5;
  out.mJc[6] = 6;
  out.mJc[7] = 7;
  out.mJc[8] = 8;
  out.mJc[9] = 9;
  out.mJc[10] = 10;
  out.mJc[11] = 11;
  out.mJc[12] = 12;
  out.mJc[13] = 13;
  out.mJc[14] = 14;
  out.mJc[15] = 15;
  out.mJc[16] = 15;
  out.mJc[17] = 15;
  out.mJc[18] = 15;
  out.mJc[19] = 15;
  out.mJc[20] = 15;
  out.mJc[21] = 15;
  out.mJc[22] = 15;
  out.mJc[23] = 15;
  out.mJc[24] = 15;
  out.mJc[25] = 15;
  out.mJc[26] = 15;
  out.mJc[27] = 15;
  out.mJc[28] = 15;
  out.mJc[29] = 15;
  out.mJc[30] = 15;
  out.mJc[31] = 15;
  out.mJc[32] = 15;
  out.mJc[33] = 15;
  out.mJc[34] = 15;
  out.mJc[35] = 15;
  out.mJc[36] = 15;
  out.mJc[37] = 15;
  out.mJc[38] = 15;
  out.mJc[39] = 15;
  out.mJc[40] = 15;
  out.mJc[41] = 15;
  out.mJc[42] = 15;
  out.mJc[43] = 15;
  out.mJc[44] = 15;
  out.mJc[45] = 15;
  out.mJc[46] = 15;
  out.mJc[47] = 15;
  out.mJc[48] = 15;
  out.mJc[49] = 15;
  out.mJc[50] = 15;
  out.mJc[51] = 15;
  out.mJc[52] = 15;
  out.mJc[53] = 15;
  out.mJc[54] = 15;
  out.mJc[55] = 15;
  out.mJc[56] = 15;
  out.mJc[57] = 15;
  out.mJc[58] = 15;
  out.mJc[59] = 15;
  out.mJc[60] = 15;
  out.mJc[61] = 15;
  out.mJc[62] = 15;
  out.mJc[63] = 15;
  out.mJc[64] = 15;
  out.mJc[65] = 15;
  out.mJc[66] = 15;
  out.mIr[0] = 0;
  out.mIr[1] = 1;
  out.mIr[2] = 2;
  out.mIr[3] = 3;
  out.mIr[4] = 4;
  out.mIr[5] = 5;
  out.mIr[6] = 6;
  out.mIr[7] = 7;
  out.mIr[8] = 8;
  out.mIr[9] = 9;
  out.mIr[10] = 10;
  out.mIr[11] = 11;
  out.mIr[12] = 12;
  out.mIr[13] = 13;
  out.mIr[14] = 14;
  (void)LC;
  (void)t2;
  return 0;
}
