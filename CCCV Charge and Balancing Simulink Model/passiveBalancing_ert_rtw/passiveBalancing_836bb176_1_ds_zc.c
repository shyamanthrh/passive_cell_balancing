/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'passiveBalancing/Solver Configuration'.
 */

#include "ne_ds.h"
#include "passiveBalancing_836bb176_1_ds_zc.h"
#include "passiveBalancing_836bb176_1_ds_sys_struct.h"
#include "passiveBalancing_836bb176_1_ds_externals.h"
#include "passiveBalancing_836bb176_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T passiveBalancing_836bb176_1_ds_zc(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t4, NeDsMethodOutput *t5)
{
  PmRealVector out;
  real_T FET1_diode_v;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T X_idx_15;
  real_T X_idx_17;
  real_T X_idx_18;
  real_T X_idx_22;
  real_T X_idx_23;
  real_T X_idx_24;
  real_T X_idx_25;
  real_T X_idx_26;
  real_T X_idx_27;
  real_T X_idx_28;
  real_T X_idx_29;
  real_T X_idx_30;
  real_T X_idx_31;
  real_T X_idx_32;
  real_T X_idx_33;
  real_T X_idx_34;
  real_T X_idx_38;
  real_T X_idx_39;
  real_T X_idx_40;
  real_T X_idx_41;
  real_T X_idx_42;
  real_T X_idx_43;
  real_T X_idx_44;
  real_T X_idx_45;
  real_T X_idx_46;
  real_T X_idx_47;
  real_T X_idx_48;
  real_T X_idx_49;
  real_T X_idx_53;
  real_T X_idx_54;
  real_T X_idx_55;
  real_T X_idx_56;
  real_T X_idx_57;
  real_T X_idx_58;
  real_T X_idx_59;
  real_T X_idx_60;
  real_T X_idx_61;
  real_T X_idx_62;
  int32_T M_idx_23;
  int32_T M_idx_38;
  int32_T M_idx_41;
  (void)LC;
  M_idx_23 = t4->mM.mX[23];
  M_idx_38 = t4->mM.mX[38];
  M_idx_41 = t4->mM.mX[41];
  U_idx_1 = t4->mU.mX[1];
  U_idx_2 = t4->mU.mX[2];
  U_idx_3 = t4->mU.mX[3];
  X_idx_15 = t4->mX.mX[15];
  X_idx_17 = t4->mX.mX[17];
  X_idx_18 = t4->mX.mX[18];
  X_idx_22 = t4->mX.mX[22];
  X_idx_23 = t4->mX.mX[23];
  X_idx_24 = t4->mX.mX[24];
  X_idx_25 = t4->mX.mX[25];
  X_idx_26 = t4->mX.mX[26];
  X_idx_27 = t4->mX.mX[27];
  X_idx_28 = t4->mX.mX[28];
  X_idx_29 = t4->mX.mX[29];
  X_idx_30 = t4->mX.mX[30];
  X_idx_31 = t4->mX.mX[31];
  X_idx_32 = t4->mX.mX[32];
  X_idx_33 = t4->mX.mX[33];
  X_idx_34 = t4->mX.mX[34];
  X_idx_38 = t4->mX.mX[38];
  X_idx_39 = t4->mX.mX[39];
  X_idx_40 = t4->mX.mX[40];
  X_idx_41 = t4->mX.mX[41];
  X_idx_42 = t4->mX.mX[42];
  X_idx_43 = t4->mX.mX[43];
  X_idx_44 = t4->mX.mX[44];
  X_idx_45 = t4->mX.mX[45];
  X_idx_46 = t4->mX.mX[46];
  X_idx_47 = t4->mX.mX[47];
  X_idx_48 = t4->mX.mX[48];
  X_idx_49 = t4->mX.mX[49];
  X_idx_53 = t4->mX.mX[53];
  X_idx_54 = t4->mX.mX[54];
  X_idx_55 = t4->mX.mX[55];
  X_idx_56 = t4->mX.mX[56];
  X_idx_57 = t4->mX.mX[57];
  X_idx_58 = t4->mX.mX[58];
  X_idx_59 = t4->mX.mX[59];
  X_idx_60 = t4->mX.mX[60];
  X_idx_61 = t4->mX.mX[61];
  X_idx_62 = t4->mX.mX[62];
  out = t5->mZC;
  FET1_diode_v = -X_idx_17 + X_idx_15;
  X_idx_15 = -X_idx_32 + X_idx_34;
  if (M_idx_23 == 0) {
    X_idx_17 = -pmf_get_inf() - FET1_diode_v;
  } else {
    X_idx_17 = 0.0;
  }

  if (M_idx_38 == 0) {
    X_idx_32 = -pmf_get_inf() - X_idx_15;
  } else {
    X_idx_32 = 0.0;
  }

  if (M_idx_41 == 0) {
    X_idx_34 = -pmf_get_inf() - (-X_idx_48);
  } else {
    X_idx_34 = 0.0;
  }

  out.mX[0] = X_idx_31;
  out.mX[1] = X_idx_23;
  out.mX[2] = X_idx_22;
  out.mX[3] = X_idx_30 - 0.1;
  out.mX[4] = X_idx_24;
  out.mX[5] = X_idx_27;
  out.mX[6] = X_idx_25;
  out.mX[7] = X_idx_28;
  out.mX[8] = X_idx_26;
  out.mX[9] = X_idx_29;
  out.mX[10] = X_idx_47;
  out.mX[11] = X_idx_39;
  out.mX[12] = X_idx_38;
  out.mX[13] = X_idx_46 - 0.1;
  out.mX[14] = X_idx_40;
  out.mX[15] = X_idx_43;
  out.mX[16] = X_idx_41;
  out.mX[17] = X_idx_44;
  out.mX[18] = X_idx_42;
  out.mX[19] = X_idx_45;
  out.mX[20] = X_idx_62;
  out.mX[21] = X_idx_54;
  out.mX[22] = X_idx_53;
  out.mX[23] = X_idx_61 - 0.1;
  out.mX[24] = X_idx_55;
  out.mX[25] = X_idx_58;
  out.mX[26] = X_idx_56;
  out.mX[27] = X_idx_59;
  out.mX[28] = X_idx_57;
  out.mX[29] = X_idx_60;
  out.mX[30] = FET1_diode_v - 0.8;
  out.mX[31] = X_idx_17;
  out.mX[32] = X_idx_15 - 0.8;
  out.mX[33] = X_idx_32;
  out.mX[34] = -X_idx_48 - 0.8;
  out.mX[35] = X_idx_34;
  out.mX[36] = X_idx_18 - 0.6;
  out.mX[37] = X_idx_33 - 0.6;
  out.mX[38] = X_idx_49 - 0.6;
  out.mX[39] = U_idx_1 - 0.9;
  out.mX[40] = U_idx_2 - 0.9;
  out.mX[41] = U_idx_3 - 0.9;
  (void)LC;
  (void)t5;
  return 0;
}
