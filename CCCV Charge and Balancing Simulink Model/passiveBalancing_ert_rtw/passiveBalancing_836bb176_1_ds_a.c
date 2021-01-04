/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'passiveBalancing/Solver Configuration'.
 */

#include "ne_ds.h"
#include "passiveBalancing_836bb176_1_ds_a.h"
#include "passiveBalancing_836bb176_1_ds_sys_struct.h"
#include "passiveBalancing_836bb176_1_ds_externals.h"
#include "passiveBalancing_836bb176_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T passiveBalancing_836bb176_1_ds_a(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mA;
  out.mX[0] = -1.0;
  out.mX[1] = -1.0;
  out.mX[2] = -1.0;
  out.mX[3] = -1.0;
  out.mX[4] = -1.0;
  out.mX[5] = -1.0;
  out.mX[6] = -1.0;
  out.mX[7] = -1.0;
  out.mX[8] = -1.0;
  out.mX[9] = -0.05;
  out.mX[10] = -0.05;
  out.mX[11] = -0.05;
  out.mX[12] = -0.05;
  out.mX[13] = -0.05;
  out.mX[14] = -0.05;
  out.mX[15] = -0.05;
  out.mX[16] = -0.05;
  out.mX[17] = 1.0;
  out.mX[18] = -0.05;
  out.mX[19] = -0.05;
  out.mX[20] = -0.05;
  out.mX[21] = -0.05;
  out.mX[22] = 1.0;
  out.mX[23] = 0.05;
  out.mX[24] = 0.05;
  out.mX[25] = 0.05;
  out.mX[26] = 0.05;
  out.mX[27] = 0.05;
  out.mX[28] = 0.05;
  out.mX[29] = 0.05;
  out.mX[30] = 0.05;
  out.mX[31] = 1.0;
  out.mX[32] = 1.0;
  out.mX[33] = 1.0;
  out.mX[34] = 1.0;
  out.mX[35] = -0.0;
  out.mX[36] = -1.0;
  out.mX[37] = 0.89527830449223922;
  out.mX[38] = 1.0;
  out.mX[39] = 1.0;
  out.mX[40] = 1.0;
  out.mX[41] = 0.89972458304341174;
  out.mX[42] = 0.17235327302020167;
  out.mX[43] = 0.0014078196088794393;
  out.mX[44] = 1.0;
  out.mX[45] = 1.0;
  out.mX[46] = 0.05;
  out.mX[47] = 0.05;
  out.mX[48] = 0.05;
  out.mX[49] = 0.05;
  out.mX[50] = 0.05;
  out.mX[51] = 0.05;
  out.mX[52] = 0.05;
  out.mX[53] = 0.05;
  out.mX[54] = -0.05;
  out.mX[55] = -0.05;
  out.mX[56] = -0.05;
  out.mX[57] = -0.05;
  out.mX[58] = -1.0;
  out.mX[59] = 1.0;
  out.mX[60] = 1.0;
  out.mX[61] = 1.0;
  out.mX[62] = 1.0;
  out.mX[63] = 1.0;
  out.mX[64] = -0.0;
  out.mX[65] = -1.0;
  out.mX[66] = 1.0;
  out.mX[67] = 1.0;
  out.mX[68] = 1.0;
  out.mX[69] = 1.0;
  out.mX[70] = 0.027169412318408814;
  out.mX[71] = 0.0063506434851295515;
  out.mX[72] = 0.00010449862502298839;
  out.mX[73] = 1.0;
  out.mX[74] = 1.0;
  out.mX[75] = 0.05;
  out.mX[76] = 0.05;
  out.mX[77] = 0.05;
  out.mX[78] = 0.05;
  out.mX[79] = 0.05;
  out.mX[80] = 0.05;
  out.mX[81] = 0.05;
  out.mX[82] = 0.05;
  out.mX[83] = 1.0;
  out.mX[84] = 1.0;
  out.mX[85] = 1.0;
  out.mX[86] = 1.0;
  out.mX[87] = -0.0;
  out.mX[88] = -1.0;
  out.mX[89] = 1.0;
  out.mX[90] = 1.0;
  out.mX[91] = 1.0;
  out.mX[92] = 1.0;
  out.mX[93] = 0.025504381057760806;
  out.mX[94] = 0.0047519752845948662;
  out.mX[95] = 0.00030072239227592334;
  out.mX[96] = 1.0;
  out.mX[97] = 1.0;
  (void)LC;
  (void)t2;
  return 0;
}
