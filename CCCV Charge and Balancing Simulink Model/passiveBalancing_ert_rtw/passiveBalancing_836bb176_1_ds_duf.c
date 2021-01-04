/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'passiveBalancing/Solver Configuration'.
 */

#include "ne_ds.h"
#include "passiveBalancing_836bb176_1_ds_duf.h"
#include "passiveBalancing_836bb176_1_ds_sys_struct.h"
#include "passiveBalancing_836bb176_1_ds_externals.h"
#include "passiveBalancing_836bb176_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T passiveBalancing_836bb176_1_ds_duf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t3, NeDsMethodOutput *t4)
{
  PmRealVector out;
  real_T U_idx_0;
  real_T X_idx_15;
  real_T X_idx_16;
  real_T X_idx_17;
  real_T X_idx_18;
  real_T X_idx_22;
  real_T X_idx_31;
  real_T X_idx_32;
  real_T X_idx_33;
  real_T X_idx_34;
  real_T X_idx_38;
  real_T X_idx_47;
  real_T X_idx_48;
  real_T X_idx_49;
  real_T X_idx_53;
  real_T X_idx_62;
  (void)LC;
  U_idx_0 = t3->mU.mX[0];
  X_idx_15 = t3->mX.mX[15];
  X_idx_16 = t3->mX.mX[16];
  X_idx_17 = t3->mX.mX[17];
  X_idx_18 = t3->mX.mX[18];
  X_idx_22 = t3->mX.mX[22];
  X_idx_31 = t3->mX.mX[31];
  X_idx_32 = t3->mX.mX[32];
  X_idx_33 = t3->mX.mX[33];
  X_idx_34 = t3->mX.mX[34];
  X_idx_38 = t3->mX.mX[38];
  X_idx_47 = t3->mX.mX[47];
  X_idx_48 = t3->mX.mX[48];
  X_idx_49 = t3->mX.mX[49];
  X_idx_53 = t3->mX.mX[53];
  X_idx_62 = t3->mX.mX[62];
  out = t4->mDUF;
  out.mX[0] = -(1.0 / (X_idx_31 == 0.0 ? 1.0E-16 : X_idx_31)) * (real_T)
    ((((X_idx_15 * -0.05 + X_idx_16 * -0.05) + X_idx_17 * 0.05) + X_idx_18 *
      0.05) + U_idx_0 < 0.0);
  out.mX[1] = -(1.0 / (X_idx_47 == 0.0 ? 1.0E-16 : X_idx_47)) * (real_T)
    (((X_idx_15 * -0.05 + X_idx_32 * 0.05) + X_idx_33 * 0.05) + U_idx_0 < 0.0);
  out.mX[2] = -(1.0 / (X_idx_62 == 0.0 ? 1.0E-16 : X_idx_62)) * (real_T)
    (((X_idx_34 * -0.05 + X_idx_48 * 0.05) + X_idx_49 * 0.05) + U_idx_0 < 0.0);
  out.mX[3] = -X_idx_22;
  out.mX[4] = -X_idx_38;
  out.mX[5] = -X_idx_53;
  (void)LC;
  (void)t4;
  return 0;
}
