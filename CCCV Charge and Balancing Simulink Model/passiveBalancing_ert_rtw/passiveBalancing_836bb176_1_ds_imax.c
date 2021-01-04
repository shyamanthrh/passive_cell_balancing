/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'passiveBalancing/Solver Configuration'.
 */

#include "ne_ds.h"
#include "passiveBalancing_836bb176_1_ds_imax.h"
#include "passiveBalancing_836bb176_1_ds_sys_struct.h"
#include "passiveBalancing_836bb176_1_ds_externals.h"
#include "passiveBalancing_836bb176_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T passiveBalancing_836bb176_1_ds_imax(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mIMAX;
  out.mX[0] = pmf_get_inf();
  out.mX[1] = pmf_get_inf();
  out.mX[2] = pmf_get_inf();
  out.mX[3] = pmf_get_inf();
  out.mX[4] = pmf_get_inf();
  out.mX[5] = pmf_get_inf();
  out.mX[6] = pmf_get_inf();
  out.mX[7] = pmf_get_inf();
  out.mX[8] = pmf_get_inf();
  out.mX[9] = pmf_get_inf();
  out.mX[10] = pmf_get_inf();
  out.mX[11] = pmf_get_inf();
  out.mX[12] = pmf_get_inf();
  out.mX[13] = pmf_get_inf();
  out.mX[14] = pmf_get_inf();
  out.mX[15] = pmf_get_inf();
  out.mX[16] = pmf_get_inf();
  out.mX[17] = pmf_get_inf();
  out.mX[18] = pmf_get_inf();
  out.mX[19] = pmf_get_inf();
  out.mX[20] = pmf_get_inf();
  out.mX[21] = pmf_get_inf();
  out.mX[22] = pmf_get_inf();
  out.mX[23] = pmf_get_inf();
  out.mX[24] = pmf_get_inf();
  out.mX[25] = pmf_get_inf();
  out.mX[26] = pmf_get_inf();
  out.mX[27] = pmf_get_inf();
  out.mX[28] = pmf_get_inf();
  out.mX[29] = pmf_get_inf();
  out.mX[30] = pmf_get_inf();
  out.mX[31] = pmf_get_inf();
  out.mX[32] = pmf_get_inf();
  out.mX[33] = pmf_get_inf();
  out.mX[34] = pmf_get_inf();
  out.mX[35] = pmf_get_inf();
  out.mX[36] = pmf_get_inf();
  out.mX[37] = pmf_get_inf();
  out.mX[38] = pmf_get_inf();
  out.mX[39] = pmf_get_inf();
  out.mX[40] = pmf_get_inf();
  out.mX[41] = pmf_get_inf();
  out.mX[42] = pmf_get_inf();
  out.mX[43] = pmf_get_inf();
  out.mX[44] = pmf_get_inf();
  out.mX[45] = pmf_get_inf();
  out.mX[46] = pmf_get_inf();
  out.mX[47] = pmf_get_inf();
  out.mX[48] = pmf_get_inf();
  out.mX[49] = pmf_get_inf();
  out.mX[50] = pmf_get_inf();
  out.mX[51] = pmf_get_inf();
  out.mX[52] = pmf_get_inf();
  out.mX[53] = pmf_get_inf();
  out.mX[54] = pmf_get_inf();
  out.mX[55] = pmf_get_inf();
  out.mX[56] = pmf_get_inf();
  out.mX[57] = pmf_get_inf();
  out.mX[58] = pmf_get_inf();
  out.mX[59] = pmf_get_inf();
  out.mX[60] = pmf_get_inf();
  out.mX[61] = pmf_get_inf();
  out.mX[62] = pmf_get_inf();
  out.mX[63] = pmf_get_inf();
  out.mX[64] = pmf_get_inf();
  out.mX[65] = pmf_get_inf();
  (void)LC;
  (void)t2;
  return 0;
}
