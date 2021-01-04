/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'passiveBalancing/Solver Configuration'.
 */

#include "ne_ds.h"
#include "passiveBalancing_836bb176_1_ds_mode.h"
#include "passiveBalancing_836bb176_1_ds_sys_struct.h"
#include "passiveBalancing_836bb176_1_ds_externals.h"
#include "passiveBalancing_836bb176_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T passiveBalancing_836bb176_1_ds_mode(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
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
  (void)LC;
  U_idx_1 = t1->mU.mX[1];
  U_idx_2 = t1->mU.mX[2];
  U_idx_3 = t1->mU.mX[3];
  X_idx_15 = t1->mX.mX[15];
  X_idx_17 = t1->mX.mX[17];
  X_idx_18 = t1->mX.mX[18];
  X_idx_22 = t1->mX.mX[22];
  X_idx_23 = t1->mX.mX[23];
  X_idx_24 = t1->mX.mX[24];
  X_idx_25 = t1->mX.mX[25];
  X_idx_26 = t1->mX.mX[26];
  X_idx_27 = t1->mX.mX[27];
  X_idx_28 = t1->mX.mX[28];
  X_idx_29 = t1->mX.mX[29];
  X_idx_30 = t1->mX.mX[30];
  X_idx_31 = t1->mX.mX[31];
  X_idx_32 = t1->mX.mX[32];
  X_idx_33 = t1->mX.mX[33];
  X_idx_34 = t1->mX.mX[34];
  X_idx_38 = t1->mX.mX[38];
  X_idx_39 = t1->mX.mX[39];
  X_idx_40 = t1->mX.mX[40];
  X_idx_41 = t1->mX.mX[41];
  X_idx_42 = t1->mX.mX[42];
  X_idx_43 = t1->mX.mX[43];
  X_idx_44 = t1->mX.mX[44];
  X_idx_45 = t1->mX.mX[45];
  X_idx_46 = t1->mX.mX[46];
  X_idx_47 = t1->mX.mX[47];
  X_idx_48 = t1->mX.mX[48];
  X_idx_49 = t1->mX.mX[49];
  X_idx_53 = t1->mX.mX[53];
  X_idx_54 = t1->mX.mX[54];
  X_idx_55 = t1->mX.mX[55];
  X_idx_56 = t1->mX.mX[56];
  X_idx_57 = t1->mX.mX[57];
  X_idx_58 = t1->mX.mX[58];
  X_idx_59 = t1->mX.mX[59];
  X_idx_60 = t1->mX.mX[60];
  X_idx_61 = t1->mX.mX[61];
  X_idx_62 = t1->mX.mX[62];
  out = t2->mMODE;
  X_idx_17 = -X_idx_17 + X_idx_15;
  X_idx_15 = -X_idx_32 + X_idx_34;
  out.mX[0] = (int32_T)(X_idx_18 > 0.6);
  out.mX[1] = (int32_T)(X_idx_33 > 0.6);
  out.mX[2] = (int32_T)(-X_idx_48 < -pmf_get_inf());
  out.mX[3] = (int32_T)(U_idx_3 > 0.9);
  out.mX[4] = (int32_T)(X_idx_31 > 0.0);
  out.mX[5] = (int32_T)(X_idx_23 >= 0.0);
  out.mX[6] = (int32_T)(X_idx_22 > 0.0);
  out.mX[7] = (int32_T)(X_idx_30 >= 0.1);
  out.mX[8] = (int32_T)(X_idx_24 > 0.0);
  out.mX[9] = (int32_T)(X_idx_27 > 0.0);
  out.mX[10] = (int32_T)(X_idx_25 > 0.0);
  out.mX[11] = (int32_T)(X_idx_28 > 0.0);
  out.mX[12] = (int32_T)(X_idx_49 > 0.6);
  out.mX[13] = (int32_T)(X_idx_26 > 0.0);
  out.mX[14] = (int32_T)(X_idx_29 > 0.0);
  out.mX[15] = (int32_T)(X_idx_47 > 0.0);
  out.mX[16] = (int32_T)(X_idx_39 >= 0.0);
  out.mX[17] = (int32_T)(X_idx_38 > 0.0);
  out.mX[18] = (int32_T)(X_idx_46 >= 0.1);
  out.mX[19] = (int32_T)(X_idx_40 > 0.0);
  out.mX[20] = (int32_T)(X_idx_43 > 0.0);
  out.mX[21] = (int32_T)(X_idx_41 > 0.0);
  out.mX[22] = (int32_T)(X_idx_44 > 0.0);
  out.mX[23] = (int32_T)(X_idx_17 > 0.8);
  out.mX[24] = (int32_T)(X_idx_42 > 0.0);
  out.mX[25] = (int32_T)(X_idx_45 > 0.0);
  out.mX[26] = (int32_T)(X_idx_62 > 0.0);
  out.mX[27] = (int32_T)(X_idx_54 >= 0.0);
  out.mX[28] = (int32_T)(X_idx_53 > 0.0);
  out.mX[29] = (int32_T)(X_idx_61 >= 0.1);
  out.mX[30] = (int32_T)(X_idx_55 > 0.0);
  out.mX[31] = (int32_T)(X_idx_58 > 0.0);
  out.mX[32] = (int32_T)(X_idx_56 > 0.0);
  out.mX[33] = (int32_T)(X_idx_59 > 0.0);
  out.mX[34] = (int32_T)(X_idx_17 < -pmf_get_inf());
  out.mX[35] = (int32_T)(X_idx_57 > 0.0);
  out.mX[36] = (int32_T)(X_idx_60 > 0.0);
  out.mX[37] = (int32_T)(U_idx_1 > 0.9);
  out.mX[38] = (int32_T)(X_idx_15 > 0.8);
  out.mX[39] = (int32_T)(X_idx_15 < -pmf_get_inf());
  out.mX[40] = (int32_T)(U_idx_2 > 0.9);
  out.mX[41] = (int32_T)(-X_idx_48 > 0.8);
  (void)LC;
  (void)t2;
  return 0;
}
