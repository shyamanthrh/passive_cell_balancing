/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'passiveBalancing/Solver Configuration'.
 */

#include "ne_ds.h"
#include "passiveBalancing_836bb176_1_ds_dxf.h"
#include "passiveBalancing_836bb176_1_ds_sys_struct.h"
#include "passiveBalancing_836bb176_1_ds_externals.h"
#include "passiveBalancing_836bb176_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T passiveBalancing_836bb176_1_ds_dxf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t181, NeDsMethodOutput *t182)
{
  ETTS0 b_efOut;
  ETTS0 c_efOut;
  ETTS0 d_efOut;
  ETTS0 efOut;
  PmRealVector out;
  real_T t16[133];
  real_T nonscalar0[10];
  real_T t20[9];
  real_T t32[8];
  real_T t45[8];
  real_T t57[8];
  real_T t17[6];
  real_T t36[6];
  real_T t22[5];
  real_T t34[5];
  real_T t47[5];
  real_T t21[4];
  real_T t23[4];
  real_T t35[4];
  real_T t48[4];
  real_T nonscalar1[3];
  real_T ab_efOut[2];
  real_T bb_efOut[2];
  real_T cb_efOut[2];
  real_T e_efOut[2];
  real_T f_efOut[2];
  real_T g_efOut[2];
  real_T h_efOut[2];
  real_T i_efOut[2];
  real_T j_efOut[2];
  real_T k_efOut[2];
  real_T l_efOut[2];
  real_T m_efOut[2];
  real_T n_efOut[2];
  real_T o_efOut[2];
  real_T p_efOut[2];
  real_T q_efOut[2];
  real_T r_efOut[2];
  real_T s_efOut[2];
  real_T t_efOut[2];
  real_T u_efOut[2];
  real_T v_efOut[2];
  real_T w_efOut[2];
  real_T x_efOut[2];
  real_T y_efOut[2];
  real_T t14[1];
  real_T Battery_Table_Based2_i;
  real_T U_idx_0;
  real_T X_idx_0;
  real_T X_idx_10;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_16;
  real_T X_idx_17;
  real_T X_idx_18;
  real_T X_idx_19;
  real_T X_idx_2;
  real_T X_idx_20;
  real_T X_idx_21;
  real_T X_idx_22;
  real_T X_idx_24;
  real_T X_idx_25;
  real_T X_idx_26;
  real_T X_idx_3;
  real_T X_idx_30;
  real_T X_idx_31;
  real_T X_idx_32;
  real_T X_idx_33;
  real_T X_idx_34;
  real_T X_idx_35;
  real_T X_idx_36;
  real_T X_idx_37;
  real_T X_idx_38;
  real_T X_idx_4;
  real_T X_idx_40;
  real_T X_idx_41;
  real_T X_idx_42;
  real_T X_idx_46;
  real_T X_idx_47;
  real_T X_idx_48;
  real_T X_idx_49;
  real_T X_idx_5;
  real_T X_idx_50;
  real_T X_idx_51;
  real_T X_idx_52;
  real_T X_idx_53;
  real_T X_idx_55;
  real_T X_idx_56;
  real_T X_idx_57;
  real_T X_idx_61;
  real_T X_idx_62;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T X_idx_9;
  real_T t128;
  size_t _in1ivar;
  size_t f__in1ivar;
  int32_T M_idx_0;
  int32_T M_idx_1;
  int32_T M_idx_12;
  int32_T M_idx_2;
  int32_T M_idx_23;
  int32_T M_idx_3;
  int32_T M_idx_34;
  int32_T M_idx_37;
  int32_T M_idx_38;
  int32_T M_idx_39;
  int32_T M_idx_40;
  int32_T M_idx_41;
  M_idx_0 = t181->mM.mX[0];
  M_idx_1 = t181->mM.mX[1];
  M_idx_2 = t181->mM.mX[2];
  M_idx_3 = t181->mM.mX[3];
  M_idx_12 = t181->mM.mX[12];
  M_idx_23 = t181->mM.mX[23];
  M_idx_34 = t181->mM.mX[34];
  M_idx_37 = t181->mM.mX[37];
  M_idx_38 = t181->mM.mX[38];
  M_idx_39 = t181->mM.mX[39];
  M_idx_40 = t181->mM.mX[40];
  M_idx_41 = t181->mM.mX[41];
  U_idx_0 = t181->mU.mX[0];
  X_idx_0 = t181->mX.mX[0];
  X_idx_2 = t181->mX.mX[2];
  X_idx_3 = t181->mX.mX[3];
  X_idx_4 = t181->mX.mX[4];
  X_idx_5 = t181->mX.mX[5];
  X_idx_7 = t181->mX.mX[7];
  X_idx_8 = t181->mX.mX[8];
  X_idx_9 = t181->mX.mX[9];
  X_idx_10 = t181->mX.mX[10];
  X_idx_12 = t181->mX.mX[12];
  X_idx_13 = t181->mX.mX[13];
  X_idx_14 = t181->mX.mX[14];
  X_idx_15 = t181->mX.mX[15];
  X_idx_16 = t181->mX.mX[16];
  X_idx_17 = t181->mX.mX[17];
  X_idx_18 = t181->mX.mX[18];
  X_idx_19 = t181->mX.mX[19];
  X_idx_20 = t181->mX.mX[20];
  X_idx_21 = t181->mX.mX[21];
  X_idx_22 = t181->mX.mX[22];
  X_idx_24 = t181->mX.mX[24];
  X_idx_25 = t181->mX.mX[25];
  X_idx_26 = t181->mX.mX[26];
  X_idx_30 = t181->mX.mX[30];
  X_idx_31 = t181->mX.mX[31];
  X_idx_32 = t181->mX.mX[32];
  X_idx_33 = t181->mX.mX[33];
  X_idx_34 = t181->mX.mX[34];
  X_idx_35 = t181->mX.mX[35];
  X_idx_36 = t181->mX.mX[36];
  X_idx_37 = t181->mX.mX[37];
  X_idx_38 = t181->mX.mX[38];
  X_idx_40 = t181->mX.mX[40];
  X_idx_41 = t181->mX.mX[41];
  X_idx_42 = t181->mX.mX[42];
  X_idx_46 = t181->mX.mX[46];
  X_idx_47 = t181->mX.mX[47];
  X_idx_48 = t181->mX.mX[48];
  X_idx_49 = t181->mX.mX[49];
  X_idx_50 = t181->mX.mX[50];
  X_idx_51 = t181->mX.mX[51];
  X_idx_52 = t181->mX.mX[52];
  X_idx_53 = t181->mX.mX[53];
  X_idx_55 = t181->mX.mX[55];
  X_idx_56 = t181->mX.mX[56];
  X_idx_57 = t181->mX.mX[57];
  X_idx_61 = t181->mX.mX[61];
  X_idx_62 = t181->mX.mX[62];
  out = t182->mDXF;
  nonscalar0[0] = 0.1;
  nonscalar0[1] = 0.2;
  nonscalar0[2] = 0.3;
  nonscalar0[3] = 0.4;
  nonscalar0[4] = 0.5;
  nonscalar0[5] = 0.6;
  nonscalar0[6] = 0.7;
  nonscalar0[7] = 0.8;
  nonscalar0[8] = 0.9;
  nonscalar0[9] = 1.0;
  nonscalar1[0] = 278.15;
  nonscalar1[1] = 293.15;
  nonscalar1[2] = 313.15;
  t128 = (((X_idx_15 * -0.05 + X_idx_16 * -0.05) + X_idx_17 * 0.05) + X_idx_18 *
          0.05) + U_idx_0;
  Battery_Table_Based2_i = ((X_idx_15 * -0.05 + X_idx_32 * 0.05) + X_idx_33 *
    0.05) + U_idx_0;
  X_idx_49 = ((X_idx_34 * -0.05 + X_idx_48 * 0.05) + X_idx_49 * 0.05) + U_idx_0;
  t14[0ULL] = X_idx_30;
  _in1ivar = 10ULL;
  tlu2_linear_linear_prelookup((void *)&efOut.mField0, (void *)&efOut.mField1,
    (void *)&efOut.mField2, (void *)nonscalar0, (void *)t14, (void *)&_in1ivar);
  t14[0] = 298.15;
  _in1ivar = 3ULL;
  tlu2_linear_linear_prelookup((void *)&b_efOut.mField0, (void *)
    &b_efOut.mField1, (void *)&b_efOut.mField2, (void *)nonscalar1, (void *)t14,
    (void *)&_in1ivar);
  t14[0ULL] = X_idx_46;
  _in1ivar = 10ULL;
  tlu2_linear_linear_prelookup((void *)&c_efOut.mField0, (void *)
    &c_efOut.mField1, (void *)&c_efOut.mField2, (void *)nonscalar0, (void *)t14,
    (void *)&_in1ivar);
  t14[0ULL] = X_idx_61;
  _in1ivar = 10ULL;
  tlu2_linear_linear_prelookup((void *)&d_efOut.mField0, (void *)
    &d_efOut.mField1, (void *)&d_efOut.mField2, (void *)nonscalar0, (void *)t14,
    (void *)&_in1ivar);
  if (M_idx_23 != 0) {
    X_idx_16 = -1000.05;
  } else if (M_idx_34 != 0) {
    X_idx_16 = -3.3833333333333333;
  } else {
    X_idx_16 = -0.050010000000000006;
  }

  if (M_idx_23 != 0) {
    X_idx_34 = 1000.05;
  } else if (M_idx_34 != 0) {
    X_idx_34 = 3.3833333333333333;
  } else {
    X_idx_34 = 0.050010000000000006;
  }

  if (M_idx_0 != 0) {
    X_idx_48 = -3.3833333333333333;
  } else {
    X_idx_48 = -0.050000010000000004;
  }

  if (M_idx_38 != 0) {
    X_idx_18 = 1000.05;
  } else if (M_idx_39 != 0) {
    X_idx_18 = 3.3833333333333333;
  } else {
    X_idx_18 = 0.050010000000000006;
  }

  if (M_idx_1 != 0) {
    X_idx_15 = -3.3833333333333333;
  } else {
    X_idx_15 = -0.050000010000000004;
  }

  if (M_idx_38 != 0) {
    X_idx_32 = -1000.0;
  } else if (M_idx_39 != 0) {
    X_idx_32 = -3.3333333333333335;
  } else {
    X_idx_32 = -1.0E-5;
  }

  if (M_idx_41 != 0) {
    X_idx_33 = 1000.05;
  } else if (M_idx_2 != 0) {
    X_idx_33 = 3.3833333333333333;
  } else {
    X_idx_33 = 0.050010000000000006;
  }

  if (M_idx_12 != 0) {
    U_idx_0 = -3.3833333333333333;
  } else {
    U_idx_0 = -0.050000010000000004;
  }

  t17[0] = 0.0;
  t17[1] = 0.0;
  t17[2] = 0.0;
  t17[3] = 0.0;
  t17[4] = 0.0;
  t17[5] = 0.0;
  t20[0ULL] = 0.05 * (1.0 / (X_idx_31 == 0.0 ? 1.0E-16 : X_idx_31)) * (real_T)
    (t128 < 0.0);
  t20[1ULL] = 0.05 * (1.0 / (X_idx_47 == 0.0 ? 1.0E-16 : X_idx_47)) * (real_T)
    (Battery_Table_Based2_i < 0.0);
  t20[2ULL] = -(X_idx_22 * -0.05);
  t20[3ULL] = -(X_idx_38 * -0.05);
  t20[4ULL] = 0.05;
  t20[5ULL] = 0.05;
  t20[6ULL] = X_idx_16;
  t20[7ULL] = -1.0E-6;
  t20[8ULL] = -0.05;
  t21[0ULL] = 0.05 * (1.0 / (X_idx_31 == 0.0 ? 1.0E-16 : X_idx_31)) * (real_T)
    (t128 < 0.0);
  t21[1ULL] = -(X_idx_22 * -0.05);
  t21[2ULL] = 0.05;
  t21[3ULL] = -0.05;
  t22[0ULL] = -0.05 * (1.0 / (X_idx_31 == 0.0 ? 1.0E-16 : X_idx_31)) * (real_T)
    (t128 < 0.0);
  t22[1ULL] = -(X_idx_22 * 0.05);
  t22[2ULL] = -0.05;
  t22[3ULL] = X_idx_34;
  t22[4ULL] = 1.0E-6;
  t23[0ULL] = -0.05 * (1.0 / (X_idx_31 == 0.0 ? 1.0E-16 : X_idx_31)) * (real_T)
    (t128 < 0.0);
  t23[1ULL] = -(X_idx_22 * 0.05);
  t23[2ULL] = X_idx_48;
  t23[3ULL] = 0.05;
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&e_efOut, (void *)efOut.mField0,
    (void *)efOut.mField1, (void *)efOut.mField2, (void *)b_efOut.mField0, (void
    *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)(LC))
    ->mTable2, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&f_efOut, (void *)efOut.mField0,
    (void *)efOut.mField1, (void *)efOut.mField2, (void *)b_efOut.mField0, (void
    *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)(LC))
    ->mTable3, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&g_efOut, (void *)efOut.mField0,
    (void *)efOut.mField1, (void *)efOut.mField2, (void *)b_efOut.mField0, (void
    *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)(LC))
    ->mTable4, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&h_efOut, (void *)efOut.mField0,
    (void *)efOut.mField1, (void *)efOut.mField2, (void *)b_efOut.mField0, (void
    *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)(LC))
    ->mTable5, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&i_efOut, (void *)efOut.mField0,
    (void *)efOut.mField1, (void *)efOut.mField2, (void *)b_efOut.mField0, (void
    *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)(LC))
    ->mTable6, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&j_efOut, (void *)efOut.mField0,
    (void *)efOut.mField1, (void *)efOut.mField2, (void *)b_efOut.mField0, (void
    *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)(LC))
    ->mTable7, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&k_efOut, (void *)efOut.mField0,
    (void *)efOut.mField1, (void *)efOut.mField2, (void *)b_efOut.mField0, (void
    *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)(LC))
    ->mTable0, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&l_efOut, (void *)efOut.mField0,
    (void *)efOut.mField1, (void *)efOut.mField2, (void *)b_efOut.mField0, (void
    *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)(LC))
    ->mTable1, (void *)&_in1ivar, (void *)&f__in1ivar);
  t32[0ULL] = -e_efOut[0] * 0.89527830449223922;
  t32[1ULL] = -f_efOut[0];
  t32[2ULL] = -g_efOut[0];
  t32[3ULL] = -h_efOut[0] * 0.89972458304341174;
  t32[4ULL] = -i_efOut[0];
  t32[5ULL] = -j_efOut[0] * 0.17235327302020167;
  t32[6ULL] = -k_efOut[0];
  t32[7ULL] = -l_efOut[0] * 0.0014078196088794393;
  X_idx_17 = X_idx_31 * X_idx_31;
  X_idx_34 = -(-t128 * (real_T)(t128 < 0.0)) / (X_idx_17 == 0.0 ? 1.0E-16 :
    X_idx_17);
  X_idx_48 = -(-X_idx_0 / (X_idx_17 == 0.0 ? 1.0E-16 : X_idx_17));
  t34[0ULL] = -0.05 * (1.0 / (X_idx_47 == 0.0 ? 1.0E-16 : X_idx_47)) * (real_T)
    (Battery_Table_Based2_i < 0.0);
  t34[1ULL] = -(X_idx_38 * 0.05);
  t34[2ULL] = -0.05;
  t34[3ULL] = X_idx_18;
  t34[4ULL] = 1.0E-6;
  t35[0ULL] = -0.05 * (1.0 / (X_idx_47 == 0.0 ? 1.0E-16 : X_idx_47)) * (real_T)
    (Battery_Table_Based2_i < 0.0);
  t35[1ULL] = -(X_idx_38 * 0.05);
  t35[2ULL] = X_idx_15;
  t35[3ULL] = 0.05;
  t36[0ULL] = 0.05 * (1.0 / (X_idx_62 == 0.0 ? 1.0E-16 : X_idx_62)) * (real_T)
    (X_idx_49 < 0.0);
  t36[1ULL] = -(X_idx_53 * -0.05);
  t36[2ULL] = 0.05;
  t36[3ULL] = X_idx_32;
  t36[4ULL] = -1.0E-6;
  t36[5ULL] = -0.05;
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&m_efOut, (void *)c_efOut.mField0,
    (void *)c_efOut.mField1, (void *)c_efOut.mField2, (void *)b_efOut.mField0,
    (void *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)
    (LC))->mTable2, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&n_efOut, (void *)c_efOut.mField0,
    (void *)c_efOut.mField1, (void *)c_efOut.mField2, (void *)b_efOut.mField0,
    (void *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)
    (LC))->mTable3, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&o_efOut, (void *)c_efOut.mField0,
    (void *)c_efOut.mField1, (void *)c_efOut.mField2, (void *)b_efOut.mField0,
    (void *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)
    (LC))->mTable4, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&p_efOut, (void *)c_efOut.mField0,
    (void *)c_efOut.mField1, (void *)c_efOut.mField2, (void *)b_efOut.mField0,
    (void *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)
    (LC))->mTable5, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&q_efOut, (void *)c_efOut.mField0,
    (void *)c_efOut.mField1, (void *)c_efOut.mField2, (void *)b_efOut.mField0,
    (void *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)
    (LC))->mTable6, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&r_efOut, (void *)c_efOut.mField0,
    (void *)c_efOut.mField1, (void *)c_efOut.mField2, (void *)b_efOut.mField0,
    (void *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)
    (LC))->mTable7, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&s_efOut, (void *)c_efOut.mField0,
    (void *)c_efOut.mField1, (void *)c_efOut.mField2, (void *)b_efOut.mField0,
    (void *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)
    (LC))->mTable0, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&t_efOut, (void *)c_efOut.mField0,
    (void *)c_efOut.mField1, (void *)c_efOut.mField2, (void *)b_efOut.mField0,
    (void *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)
    (LC))->mTable1, (void *)&_in1ivar, (void *)&f__in1ivar);
  t45[0ULL] = -m_efOut[0];
  t45[1ULL] = -n_efOut[0];
  t45[2ULL] = -o_efOut[0];
  t45[3ULL] = -p_efOut[0] * 0.027169412318408814;
  t45[4ULL] = -q_efOut[0];
  t45[5ULL] = -r_efOut[0] * 0.0063506434851295515;
  t45[6ULL] = -s_efOut[0];
  t45[7ULL] = -t_efOut[0] * 0.00010449862502298839;
  X_idx_17 = X_idx_47 * X_idx_47;
  t47[0ULL] = -0.05 * (1.0 / (X_idx_62 == 0.0 ? 1.0E-16 : X_idx_62)) * (real_T)
    (X_idx_49 < 0.0);
  t47[1ULL] = -(X_idx_53 * 0.05);
  t47[2ULL] = -0.05;
  t47[3ULL] = X_idx_33;
  t47[4ULL] = 1.0E-6;
  t48[0ULL] = -0.05 * (1.0 / (X_idx_62 == 0.0 ? 1.0E-16 : X_idx_62)) * (real_T)
    (X_idx_49 < 0.0);
  t48[1ULL] = -(X_idx_53 * 0.05);
  t48[2ULL] = U_idx_0;
  t48[3ULL] = 0.05;
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&u_efOut, (void *)d_efOut.mField0,
    (void *)d_efOut.mField1, (void *)d_efOut.mField2, (void *)b_efOut.mField0,
    (void *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)
    (LC))->mTable2, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&v_efOut, (void *)d_efOut.mField0,
    (void *)d_efOut.mField1, (void *)d_efOut.mField2, (void *)b_efOut.mField0,
    (void *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)
    (LC))->mTable3, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&w_efOut, (void *)d_efOut.mField0,
    (void *)d_efOut.mField1, (void *)d_efOut.mField2, (void *)b_efOut.mField0,
    (void *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)
    (LC))->mTable4, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&x_efOut, (void *)d_efOut.mField0,
    (void *)d_efOut.mField1, (void *)d_efOut.mField2, (void *)b_efOut.mField0,
    (void *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)
    (LC))->mTable5, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&y_efOut, (void *)d_efOut.mField0,
    (void *)d_efOut.mField1, (void *)d_efOut.mField2, (void *)b_efOut.mField0,
    (void *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)
    (LC))->mTable6, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&ab_efOut, (void *)d_efOut.mField0,
    (void *)d_efOut.mField1, (void *)d_efOut.mField2, (void *)b_efOut.mField0,
    (void *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)
    (LC))->mTable7, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&bb_efOut, (void *)d_efOut.mField0,
    (void *)d_efOut.mField1, (void *)d_efOut.mField2, (void *)b_efOut.mField0,
    (void *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)
    (LC))->mTable0, (void *)&_in1ivar, (void *)&f__in1ivar);
  _in1ivar = 10ULL;
  f__in1ivar = 3ULL;
  tlu2_2d_linear_linear_derivatives((void *)&cb_efOut, (void *)d_efOut.mField0,
    (void *)d_efOut.mField1, (void *)d_efOut.mField2, (void *)b_efOut.mField0,
    (void *)b_efOut.mField1, (void *)b_efOut.mField2, (void *)((_NeDynamicSystem*)
    (LC))->mTable1, (void *)&_in1ivar, (void *)&f__in1ivar);
  t57[0ULL] = -u_efOut[0];
  t57[1ULL] = -v_efOut[0];
  t57[2ULL] = -w_efOut[0];
  t57[3ULL] = -x_efOut[0] * 0.025504381057760806;
  t57[4ULL] = -y_efOut[0];
  t57[5ULL] = -ab_efOut[0] * 0.0047519752845948662;
  t57[6ULL] = -bb_efOut[0];
  t57[7ULL] = -cb_efOut[0] * 0.00030072239227592334;
  X_idx_16 = X_idx_62 * X_idx_62;
  t16[0ULL] = -(1.0 / (X_idx_31 == 0.0 ? 1.0E-16 : X_idx_31));
  for (_in1ivar = 0ULL; _in1ivar < 6ULL; _in1ivar++) {
    t16[_in1ivar + 1ULL] = t17[_in1ivar];
  }

  t16[7ULL] = -X_idx_19;
  t16[8ULL] = -X_idx_20;
  t16[9ULL] = -X_idx_21;
  t16[10ULL] = -(1.0 / (X_idx_47 == 0.0 ? 1.0E-16 : X_idx_47));
  for (_in1ivar = 0ULL; _in1ivar < 6ULL; _in1ivar++) {
    t16[_in1ivar + 11ULL] = t17[_in1ivar];
  }

  t16[17ULL] = -X_idx_35;
  t16[18ULL] = -X_idx_36;
  t16[19ULL] = -X_idx_37;
  t16[20ULL] = -(1.0 / (X_idx_62 == 0.0 ? 1.0E-16 : X_idx_62));
  for (_in1ivar = 0ULL; _in1ivar < 6ULL; _in1ivar++) {
    t16[_in1ivar + 21ULL] = t17[_in1ivar];
  }

  t16[27ULL] = -X_idx_50;
  t16[28ULL] = -X_idx_51;
  t16[29ULL] = -X_idx_52;
  for (_in1ivar = 0ULL; _in1ivar < 9ULL; _in1ivar++) {
    t16[_in1ivar + 30ULL] = t20[_in1ivar];
  }

  for (_in1ivar = 0ULL; _in1ivar < 4ULL; _in1ivar++) {
    t16[_in1ivar + 39ULL] = t21[_in1ivar];
  }

  for (_in1ivar = 0ULL; _in1ivar < 5ULL; _in1ivar++) {
    t16[_in1ivar + 43ULL] = t22[_in1ivar];
  }

  for (_in1ivar = 0ULL; _in1ivar < 4ULL; _in1ivar++) {
    t16[_in1ivar + 48ULL] = t23[_in1ivar];
  }

  t16[52ULL] = -X_idx_2;
  t16[53ULL] = -X_idx_3;
  t16[54ULL] = -X_idx_4;
  t16[55ULL] = -t128;
  t128 = X_idx_24 * X_idx_24;
  t16[56ULL] = -(-1.0 / (t128 == 0.0 ? 1.0E-16 : t128));
  t128 = X_idx_25 * X_idx_25;
  t16[57ULL] = -(-1.0 / (t128 == 0.0 ? 1.0E-16 : t128));
  t128 = X_idx_26 * X_idx_26;
  t16[58ULL] = -(-1.0 / (t128 == 0.0 ? 1.0E-16 : t128));
  for (_in1ivar = 0ULL; _in1ivar < 8ULL; _in1ivar++) {
    t16[_in1ivar + 59ULL] = t32[_in1ivar];
  }

  t16[67ULL] = X_idx_34;
  t16[68ULL] = X_idx_48;
  for (_in1ivar = 0ULL; _in1ivar < 5ULL; _in1ivar++) {
    t16[_in1ivar + 69ULL] = t34[_in1ivar];
  }

  for (_in1ivar = 0ULL; _in1ivar < 4ULL; _in1ivar++) {
    t16[_in1ivar + 74ULL] = t35[_in1ivar];
  }

  for (_in1ivar = 0ULL; _in1ivar < 6ULL; _in1ivar++) {
    t16[_in1ivar + 78ULL] = t36[_in1ivar];
  }

  t16[84ULL] = -X_idx_7;
  t16[85ULL] = -X_idx_8;
  t16[86ULL] = -X_idx_9;
  t16[87ULL] = -Battery_Table_Based2_i;
  t128 = X_idx_40 * X_idx_40;
  t16[88ULL] = -(-1.0 / (t128 == 0.0 ? 1.0E-16 : t128));
  t128 = X_idx_41 * X_idx_41;
  t16[89ULL] = -(-1.0 / (t128 == 0.0 ? 1.0E-16 : t128));
  t128 = X_idx_42 * X_idx_42;
  t16[90ULL] = -(-1.0 / (t128 == 0.0 ? 1.0E-16 : t128));
  for (_in1ivar = 0ULL; _in1ivar < 8ULL; _in1ivar++) {
    t16[_in1ivar + 91ULL] = t45[_in1ivar];
  }

  t16[99ULL] = -(-Battery_Table_Based2_i * (real_T)(Battery_Table_Based2_i < 0.0))
    / (X_idx_17 == 0.0 ? 1.0E-16 : X_idx_17);
  t16[100ULL] = -(-X_idx_5 / (X_idx_17 == 0.0 ? 1.0E-16 : X_idx_17));
  for (_in1ivar = 0ULL; _in1ivar < 5ULL; _in1ivar++) {
    t16[_in1ivar + 101ULL] = t47[_in1ivar];
  }

  for (_in1ivar = 0ULL; _in1ivar < 4ULL; _in1ivar++) {
    t16[_in1ivar + 106ULL] = t48[_in1ivar];
  }

  t16[110ULL] = -X_idx_12;
  t16[111ULL] = -X_idx_13;
  t16[112ULL] = -X_idx_14;
  t16[113ULL] = -X_idx_49;
  t128 = X_idx_55 * X_idx_55;
  t16[114ULL] = -(-1.0 / (t128 == 0.0 ? 1.0E-16 : t128));
  t128 = X_idx_56 * X_idx_56;
  t16[115ULL] = -(-1.0 / (t128 == 0.0 ? 1.0E-16 : t128));
  t128 = X_idx_57 * X_idx_57;
  t16[116ULL] = -(-1.0 / (t128 == 0.0 ? 1.0E-16 : t128));
  for (_in1ivar = 0ULL; _in1ivar < 8ULL; _in1ivar++) {
    t16[_in1ivar + 117ULL] = t57[_in1ivar];
  }

  t16[125ULL] = -(-X_idx_49 * (real_T)(X_idx_49 < 0.0)) / (X_idx_16 == 0.0 ?
    1.0E-16 : X_idx_16);
  t16[126ULL] = -(-X_idx_10 / (X_idx_16 == 0.0 ? 1.0E-16 : X_idx_16));
  t16[127ULL] = 1.0;
  t16[128ULL] = (M_idx_37 != 0 ? -0.01 : -1.0E+6) * 1.0E-6;
  t16[129ULL] = 1.0;
  t16[130ULL] = (M_idx_40 != 0 ? -0.01 : -1.0E+6) * 1.0E-6;
  t16[131ULL] = 1.0;
  t16[132ULL] = (M_idx_3 != 0 ? -0.01 : -1.0E+6) * 1.0E-6;
  for (M_idx_0 = 0; M_idx_0 < 133; M_idx_0++) {
    out.mX[M_idx_0] = t16[M_idx_0];
  }

  (void)LC;
  (void)t182;
  return 0;
}
