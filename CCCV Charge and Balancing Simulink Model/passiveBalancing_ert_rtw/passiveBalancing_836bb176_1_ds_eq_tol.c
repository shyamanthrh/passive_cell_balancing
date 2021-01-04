/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'passiveBalancing/Solver Configuration'.
 */

#include "ne_ds.h"
#include "passiveBalancing_836bb176_1_ds_eq_tol.h"
#include "passiveBalancing_836bb176_1_ds_sys_struct.h"
#include "passiveBalancing_836bb176_1_ds_externals.h"
#include "passiveBalancing_836bb176_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T passiveBalancing_836bb176_1_ds_eq_tol(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mEQ_TOL;
  out.mX[0] = 1.0E-9;
  out.mX[1] = 1.0E-9;
  out.mX[2] = 1.0E-9;
  out.mX[3] = 1.0E-9;
  out.mX[4] = 1.0E-9;
  out.mX[5] = 1.0E-9;
  out.mX[6] = 1.0E-9;
  out.mX[7] = 1.0E-9;
  out.mX[8] = 1.0E-9;
  out.mX[9] = 1.0E-9;
  out.mX[10] = 1.0E-9;
  out.mX[11] = 1.0E-9;
  out.mX[12] = 1.0E-9;
  out.mX[13] = 1.0E-9;
  out.mX[14] = 1.0E-9;
  out.mX[15] = 1.0E-9;
  out.mX[16] = 1.0E-9;
  out.mX[17] = 1.0E-9;
  out.mX[18] = 1.0E-9;
  out.mX[19] = 1.0E-9;
  out.mX[20] = 1.0E-9;
  out.mX[21] = 1.0E-9;
  out.mX[22] = 1.0E-9;
  out.mX[23] = 1.0E-9;
  out.mX[24] = 1.0E-9;
  out.mX[25] = 1.0E-9;
  out.mX[26] = 1.0E-9;
  out.mX[27] = 1.0E-9;
  out.mX[28] = 1.0E-9;
  out.mX[29] = 1.0E-9;
  out.mX[30] = 1.0E-9;
  out.mX[31] = 1.0E-9;
  out.mX[32] = 1.0E-9;
  out.mX[33] = 1.0E-9;
  out.mX[34] = 1.0E-9;
  out.mX[35] = 1.0E-9;
  out.mX[36] = 1.0E-9;
  out.mX[37] = 1.0E-9;
  out.mX[38] = 1.0E-9;
  out.mX[39] = 1.0E-9;
  out.mX[40] = 1.0E-9;
  out.mX[41] = 1.0E-9;
  out.mX[42] = 1.0E-9;
  out.mX[43] = 1.0E-9;
  out.mX[44] = 1.0E-9;
  out.mX[45] = 1.0E-9;
  out.mX[46] = 1.0E-9;
  out.mX[47] = 1.0E-9;
  out.mX[48] = 1.0E-9;
  out.mX[49] = 1.0E-9;
  out.mX[50] = 1.0E-9;
  out.mX[51] = 1.0E-9;
  out.mX[52] = 1.0E-9;
  out.mX[53] = 1.0E-9;
  out.mX[54] = 1.0E-9;
  out.mX[55] = 1.0E-9;
  out.mX[56] = 1.0E-9;
  out.mX[57] = 1.0E-9;
  out.mX[58] = 1.0E-9;
  out.mX[59] = 1.0E-9;
  out.mX[60] = 1.0E-9;
  out.mX[61] = 1.0E-9;
  out.mX[62] = 1.0E-9;
  out.mX[63] = 1.0E-9;
  out.mX[64] = 1.0E-9;
  out.mX[65] = 1.0E-9;
  (void)LC;
  (void)t2;
  return 0;
}
