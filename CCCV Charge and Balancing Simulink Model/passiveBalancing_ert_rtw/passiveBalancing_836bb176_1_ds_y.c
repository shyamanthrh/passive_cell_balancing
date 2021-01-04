/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'passiveBalancing/Solver Configuration'.
 */

#include "ne_ds.h"
#include "passiveBalancing_836bb176_1_ds_y.h"
#include "passiveBalancing_836bb176_1_ds_sys_struct.h"
#include "passiveBalancing_836bb176_1_ds_externals.h"
#include "passiveBalancing_836bb176_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T passiveBalancing_836bb176_1_ds_y(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t5, NeDsMethodOutput *t6)
{
  PmRealVector out;
  real_T U_idx_0;
  real_T Voltage_Sensor1_V;
  real_T Voltage_Sensor2_V;
  real_T X_idx_15;
  real_T X_idx_16;
  real_T X_idx_17;
  real_T X_idx_18;
  real_T X_idx_30;
  real_T X_idx_32;
  real_T X_idx_33;
  real_T X_idx_34;
  real_T X_idx_46;
  real_T X_idx_48;
  real_T X_idx_49;
  real_T X_idx_61;
  (void)LC;
  U_idx_0 = t5->mU.mX[0];
  X_idx_15 = t5->mX.mX[15];
  X_idx_16 = t5->mX.mX[16];
  X_idx_17 = t5->mX.mX[17];
  X_idx_18 = t5->mX.mX[18];
  X_idx_30 = t5->mX.mX[30];
  X_idx_32 = t5->mX.mX[32];
  X_idx_33 = t5->mX.mX[33];
  X_idx_34 = t5->mX.mX[34];
  X_idx_46 = t5->mX.mX[46];
  X_idx_48 = t5->mX.mX[48];
  X_idx_49 = t5->mX.mX[49];
  X_idx_61 = t5->mX.mX[61];
  out = t6->mY;
  Voltage_Sensor2_V = X_idx_15 + X_idx_16;
  Voltage_Sensor1_V = -Voltage_Sensor2_V / -1.0;
  Voltage_Sensor2_V = -(Voltage_Sensor2_V - X_idx_15) / -1.0;
  out.mX[0] = X_idx_30;
  out.mX[1] = X_idx_46;
  out.mX[2] = X_idx_61;
  out.mX[3] = (((X_idx_15 * -0.05 + X_idx_16 * -0.05) + X_idx_17 * 0.05) +
               X_idx_18 * 0.05) + U_idx_0;
  out.mX[4] = ((X_idx_15 * -0.05 + X_idx_32 * 0.05) + X_idx_33 * 0.05) + U_idx_0;
  out.mX[5] = ((X_idx_34 * -0.05 + X_idx_48 * 0.05) + X_idx_49 * 0.05) + U_idx_0;
  out.mX[6] = Voltage_Sensor1_V;
  out.mX[7] = Voltage_Sensor2_V;
  out.mX[8] = -(X_idx_15 - X_idx_34) / -1.0;
  out.mX[9] = -X_idx_34 / -1.0;
  (void)LC;
  (void)t6;
  return 0;
}
