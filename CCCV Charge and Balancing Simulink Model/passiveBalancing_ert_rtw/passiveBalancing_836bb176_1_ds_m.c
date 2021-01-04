/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'passiveBalancing/Solver Configuration'.
 */

#include "ne_ds.h"
#include "passiveBalancing_836bb176_1_ds_m.h"
#include "passiveBalancing_836bb176_1_ds_sys_struct.h"
#include "passiveBalancing_836bb176_1_ds_externals.h"
#include "passiveBalancing_836bb176_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T passiveBalancing_836bb176_1_ds_m(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T X_idx_19;
  real_T X_idx_20;
  real_T X_idx_21;
  real_T X_idx_27;
  real_T X_idx_28;
  real_T X_idx_29;
  real_T X_idx_35;
  real_T X_idx_36;
  real_T X_idx_37;
  real_T X_idx_43;
  real_T X_idx_44;
  real_T X_idx_45;
  real_T X_idx_50;
  real_T X_idx_51;
  real_T X_idx_52;
  real_T X_idx_58;
  real_T X_idx_59;
  real_T X_idx_60;
  (void)LC;
  X_idx_19 = t1->mX.mX[19];
  X_idx_20 = t1->mX.mX[20];
  X_idx_21 = t1->mX.mX[21];
  X_idx_27 = t1->mX.mX[27];
  X_idx_28 = t1->mX.mX[28];
  X_idx_29 = t1->mX.mX[29];
  X_idx_35 = t1->mX.mX[35];
  X_idx_36 = t1->mX.mX[36];
  X_idx_37 = t1->mX.mX[37];
  X_idx_43 = t1->mX.mX[43];
  X_idx_44 = t1->mX.mX[44];
  X_idx_45 = t1->mX.mX[45];
  X_idx_50 = t1->mX.mX[50];
  X_idx_51 = t1->mX.mX[51];
  X_idx_52 = t1->mX.mX[52];
  X_idx_58 = t1->mX.mX[58];
  X_idx_59 = t1->mX.mX[59];
  X_idx_60 = t1->mX.mX[60];
  out = t2->mM;
  out.mX[0] = 1.0;
  out.mX[1] = 1.0;
  out.mX[2] = X_idx_27 * X_idx_19;
  out.mX[3] = X_idx_28 * X_idx_20;
  out.mX[4] = X_idx_29 * X_idx_21;
  out.mX[5] = 1.0;
  out.mX[6] = 1.0;
  out.mX[7] = X_idx_43 * X_idx_35;
  out.mX[8] = X_idx_44 * X_idx_36;
  out.mX[9] = X_idx_45 * X_idx_37;
  out.mX[10] = 1.0;
  out.mX[11] = 1.0;
  out.mX[12] = X_idx_58 * X_idx_50;
  out.mX[13] = X_idx_59 * X_idx_51;
  out.mX[14] = X_idx_60 * X_idx_52;
  (void)LC;
  (void)t2;
  return 0;
}
