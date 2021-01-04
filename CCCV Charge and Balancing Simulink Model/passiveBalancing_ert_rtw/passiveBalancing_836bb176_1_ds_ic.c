/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'passiveBalancing/Solver Configuration'.
 */

#include "ne_ds.h"
#include "passiveBalancing_836bb176_1_ds_ic.h"
#include "passiveBalancing_836bb176_1_ds_sys_struct.h"
#include "passiveBalancing_836bb176_1_ds_externals.h"
#include "passiveBalancing_836bb176_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T passiveBalancing_836bb176_1_ds_ic(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mIC;
  out.mX[0] = 0.0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = 0.0;
  out.mX[6] = 0.0;
  out.mX[7] = 0.0;
  out.mX[8] = 0.0;
  out.mX[9] = 0.0;
  out.mX[10] = 0.0;
  out.mX[11] = 0.0;
  out.mX[12] = 0.0;
  out.mX[13] = 0.0;
  out.mX[14] = 0.0;
  out.mX[15] = 0.0;
  out.mX[16] = 0.0;
  out.mX[17] = 0.0;
  out.mX[18] = 0.0;
  out.mX[19] = 0.0;
  out.mX[20] = 0.0;
  out.mX[21] = 0.0;
  out.mX[22] = 1.0;
  out.mX[23] = 1.0;
  out.mX[24] = 1.0;
  out.mX[25] = 1.0;
  out.mX[26] = 1.0;
  out.mX[27] = 1.0;
  out.mX[28] = 1.0;
  out.mX[29] = 1.0;
  out.mX[30] = 0.8;
  out.mX[31] = 3600.0;
  out.mX[32] = 0.0;
  out.mX[33] = 0.0;
  out.mX[34] = 0.0;
  out.mX[35] = 0.0;
  out.mX[36] = 0.0;
  out.mX[37] = 0.0;
  out.mX[38] = 1.0;
  out.mX[39] = 1.0;
  out.mX[40] = 1.0;
  out.mX[41] = 1.0;
  out.mX[42] = 1.0;
  out.mX[43] = 1.0;
  out.mX[44] = 1.0;
  out.mX[45] = 1.0;
  out.mX[46] = 0.2;
  out.mX[47] = 3600.0;
  out.mX[48] = 0.0;
  out.mX[49] = 0.0;
  out.mX[50] = 0.0;
  out.mX[51] = 0.0;
  out.mX[52] = 0.0;
  out.mX[53] = 1.0;
  out.mX[54] = 1.0;
  out.mX[55] = 1.0;
  out.mX[56] = 1.0;
  out.mX[57] = 1.0;
  out.mX[58] = 1.0;
  out.mX[59] = 1.0;
  out.mX[60] = 1.0;
  out.mX[61] = 0.5;
  out.mX[62] = 3600.0;
  out.mX[63] = 0.0;
  out.mX[64] = 0.0;
  out.mX[65] = 0.0;
  (void)LC;
  (void)t2;
  return 0;
}
