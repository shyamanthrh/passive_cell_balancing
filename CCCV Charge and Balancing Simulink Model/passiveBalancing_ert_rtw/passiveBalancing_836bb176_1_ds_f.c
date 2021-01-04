/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'passiveBalancing/Solver Configuration'.
 */

#include "ne_ds.h"
#include "passiveBalancing_836bb176_1_ds_f.h"
#include "passiveBalancing_836bb176_1_ds_sys_struct.h"
#include "passiveBalancing_836bb176_1_ds_externals.h"
#include "passiveBalancing_836bb176_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T passiveBalancing_836bb176_1_ds_f(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t145, NeDsMethodOutput *t146)
{
  ETTS0 c_efOut;
  ETTS0 d_efOut;
  ETTS0 e_efOut;
  ETTS0 efOut;
  PmRealVector out;
  real_T nonscalar0[10];
  real_T nonscalar1[3];
  real_T nonscalar2[3];
  real_T t46[2];
  real_T t47[2];
  real_T ab_efOut[1];
  real_T b_efOut[1];
  real_T bb_efOut[1];
  real_T cb_efOut[1];
  real_T db_efOut[1];
  real_T f_efOut[1];
  real_T g_efOut[1];
  real_T h_efOut[1];
  real_T i_efOut[1];
  real_T j_efOut[1];
  real_T k_efOut[1];
  real_T l_efOut[1];
  real_T m_efOut[1];
  real_T n_efOut[1];
  real_T o_efOut[1];
  real_T p_efOut[1];
  real_T q_efOut[1];
  real_T r_efOut[1];
  real_T s_efOut[1];
  real_T t15[1];
  real_T t20[1];
  real_T t_efOut[1];
  real_T u_efOut[1];
  real_T v_efOut[1];
  real_T w_efOut[1];
  real_T x_efOut[1];
  real_T y_efOut[1];
  real_T Battery_Table_Based2_i;
  real_T Battery_Table_Based3_i;
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
  real_T X_idx_63;
  real_T X_idx_64;
  real_T X_idx_65;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T X_idx_9;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t14;
  real_T t7;
  real_T t8;
  real_T t82;
  real_T t9;
  size_t t48[1];
  size_t _in1ivar;
  size_t g__in1ivar;
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
  M_idx_0 = t145->mM.mX[0];
  M_idx_1 = t145->mM.mX[1];
  M_idx_2 = t145->mM.mX[2];
  M_idx_3 = t145->mM.mX[3];
  M_idx_12 = t145->mM.mX[12];
  M_idx_23 = t145->mM.mX[23];
  M_idx_34 = t145->mM.mX[34];
  M_idx_37 = t145->mM.mX[37];
  M_idx_38 = t145->mM.mX[38];
  M_idx_39 = t145->mM.mX[39];
  M_idx_40 = t145->mM.mX[40];
  M_idx_41 = t145->mM.mX[41];
  U_idx_0 = t145->mU.mX[0];
  X_idx_0 = t145->mX.mX[0];
  X_idx_2 = t145->mX.mX[2];
  X_idx_3 = t145->mX.mX[3];
  X_idx_4 = t145->mX.mX[4];
  X_idx_5 = t145->mX.mX[5];
  X_idx_7 = t145->mX.mX[7];
  X_idx_8 = t145->mX.mX[8];
  X_idx_9 = t145->mX.mX[9];
  X_idx_10 = t145->mX.mX[10];
  X_idx_12 = t145->mX.mX[12];
  X_idx_13 = t145->mX.mX[13];
  X_idx_14 = t145->mX.mX[14];
  X_idx_15 = t145->mX.mX[15];
  X_idx_16 = t145->mX.mX[16];
  X_idx_17 = t145->mX.mX[17];
  X_idx_18 = t145->mX.mX[18];
  X_idx_19 = t145->mX.mX[19];
  X_idx_20 = t145->mX.mX[20];
  X_idx_21 = t145->mX.mX[21];
  X_idx_22 = t145->mX.mX[22];
  X_idx_24 = t145->mX.mX[24];
  X_idx_25 = t145->mX.mX[25];
  X_idx_26 = t145->mX.mX[26];
  X_idx_30 = t145->mX.mX[30];
  X_idx_31 = t145->mX.mX[31];
  X_idx_32 = t145->mX.mX[32];
  X_idx_33 = t145->mX.mX[33];
  X_idx_34 = t145->mX.mX[34];
  X_idx_35 = t145->mX.mX[35];
  X_idx_36 = t145->mX.mX[36];
  X_idx_37 = t145->mX.mX[37];
  X_idx_38 = t145->mX.mX[38];
  X_idx_40 = t145->mX.mX[40];
  X_idx_41 = t145->mX.mX[41];
  X_idx_42 = t145->mX.mX[42];
  X_idx_46 = t145->mX.mX[46];
  X_idx_47 = t145->mX.mX[47];
  X_idx_48 = t145->mX.mX[48];
  X_idx_49 = t145->mX.mX[49];
  X_idx_50 = t145->mX.mX[50];
  X_idx_51 = t145->mX.mX[51];
  X_idx_52 = t145->mX.mX[52];
  X_idx_53 = t145->mX.mX[53];
  X_idx_55 = t145->mX.mX[55];
  X_idx_56 = t145->mX.mX[56];
  X_idx_57 = t145->mX.mX[57];
  X_idx_61 = t145->mX.mX[61];
  X_idx_62 = t145->mX.mX[62];
  X_idx_63 = t145->mX.mX[63];
  X_idx_64 = t145->mX.mX[64];
  X_idx_65 = t145->mX.mX[65];
  out = t146->mF;
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
  nonscalar2[0] = 6566.219707447116;
  nonscalar2[1] = 7259.4000000000005;
  nonscalar2[2] = 8379.8119729281243;
  t82 = (((X_idx_15 * -0.05 + X_idx_16 * -0.05) + X_idx_17 * 0.05) + X_idx_18 *
         0.05) + U_idx_0;
  Battery_Table_Based2_i = ((X_idx_15 * -0.05 + X_idx_32 * 0.05) + X_idx_33 *
    0.05) + U_idx_0;
  Battery_Table_Based3_i = ((X_idx_34 * -0.05 + X_idx_48 * 0.05) + X_idx_49 *
    0.05) + U_idx_0;
  t7 = ((X_idx_15 * 0.05 + X_idx_16 * 0.05) + X_idx_17 * -0.05) + X_idx_18 *
    -0.05;
  t8 = (X_idx_15 * 0.05 + X_idx_32 * -0.05) + X_idx_33 * -0.05;
  t9 = (X_idx_34 * 0.05 + X_idx_48 * -0.05) + X_idx_49 * -0.05;
  t10 = (((X_idx_15 * -0.05 + X_idx_16 * -0.05) + X_idx_17 * 0.05) + X_idx_18 *
         0.05) + X_idx_63;
  t11 = -X_idx_17 + X_idx_15;
  t12 = -X_idx_15 + X_idx_17;
  X_idx_15 = ((X_idx_15 * -0.05 + X_idx_32 * 0.05) + X_idx_33 * 0.05) + X_idx_64;
  t14 = -X_idx_32 + X_idx_34;
  X_idx_17 = -X_idx_34 + X_idx_32;
  X_idx_16 = ((X_idx_34 * -0.05 + X_idx_48 * 0.05) + X_idx_49 * 0.05) + X_idx_65;
  t15[0] = 298.15;
  _in1ivar = 3ULL;
  tlu2_linear_linear_prelookup((void *)&efOut.mField0, (void *)&efOut.mField1,
    (void *)&efOut.mField2, (void *)nonscalar1, (void *)t15, (void *)&_in1ivar);
  _in1ivar = 3ULL;
  tlu2_1d_linear_linear_value((void *)&b_efOut, (void *)efOut.mField0, (void *)
    efOut.mField1, (void *)efOut.mField2, (void *)nonscalar2, (void *)&_in1ivar);
  t20[0ULL] = X_idx_30;
  _in1ivar = 10ULL;
  tlu2_linear_linear_prelookup((void *)&c_efOut.mField0, (void *)
    &c_efOut.mField1, (void *)&c_efOut.mField2, (void *)nonscalar0, (void *)t20,
    (void *)&_in1ivar);
  t46[0ULL] = efOut.mField0[0ULL];
  t46[1ULL] = efOut.mField0[1ULL];
  t47[0ULL] = efOut.mField1[0ULL];
  t47[1ULL] = efOut.mField1[1ULL];
  t48[0ULL] = efOut.mField2[0ULL];
  t20[0ULL] = X_idx_46;
  _in1ivar = 10ULL;
  tlu2_linear_linear_prelookup((void *)&d_efOut.mField0, (void *)
    &d_efOut.mField1, (void *)&d_efOut.mField2, (void *)nonscalar0, (void *)t20,
    (void *)&_in1ivar);
  t20[0ULL] = X_idx_61;
  _in1ivar = 10ULL;
  tlu2_linear_linear_prelookup((void *)&e_efOut.mField0, (void *)
    &e_efOut.mField1, (void *)&e_efOut.mField2, (void *)nonscalar0, (void *)t20,
    (void *)&_in1ivar);
  if (M_idx_0 != 0) {
    U_idx_0 = t7 - (X_idx_18 - 0.59999999819999994) / 0.3;
  } else {
    U_idx_0 = t7 - X_idx_18 * 1.0E-8;
  }

  if (M_idx_1 != 0) {
    t7 = t8 - (X_idx_33 - 0.59999999819999994) / 0.3;
  } else {
    t7 = t8 - X_idx_33 * 1.0E-8;
  }

  if (M_idx_12 != 0) {
    t8 = t9 - (X_idx_49 - 0.59999999819999994) / 0.3;
  } else {
    t8 = t9 - X_idx_49 * 1.0E-8;
  }

  if (M_idx_23 != 0) {
    t9 = t10 - (t11 - 0.799999992) / 0.001;
  } else if (M_idx_34 != 0) {
    t9 = t10 - (t11 + pmf_get_inf()) / 0.3;
  } else {
    t9 = t10 - t11 * 1.0E-5;
  }

  if (M_idx_37 != 0) {
    t10 = t12 - X_idx_63 * 0.01;
  } else {
    t10 = t12 - X_idx_63 / 1.0E-6;
  }

  if (M_idx_38 != 0) {
    t11 = X_idx_15 - (t14 - 0.799999992) / 0.001;
  } else if (M_idx_39 != 0) {
    t11 = X_idx_15 - (t14 + pmf_get_inf()) / 0.3;
  } else {
    t11 = X_idx_15 - t14 * 1.0E-5;
  }

  if (M_idx_40 != 0) {
    t12 = X_idx_17 - X_idx_64 * 0.01;
  } else {
    t12 = X_idx_17 - X_idx_64 / 1.0E-6;
  }

  if (M_idx_41 != 0) {
    X_idx_15 = X_idx_16 - (-X_idx_48 - 0.799999992) / 0.001;
  } else if (M_idx_2 != 0) {
    X_idx_15 = X_idx_16 - (-X_idx_48 + pmf_get_inf()) / 0.3;
  } else {
    X_idx_15 = X_idx_16 - -X_idx_48 * 1.0E-5;
  }

  if (M_idx_3 != 0) {
    t14 = X_idx_48 - X_idx_65 * 0.01;
  } else {
    t14 = X_idx_48 - X_idx_65 / 1.0E-6;
  }

  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&f_efOut, (void *)c_efOut.mField0, (void *)
    c_efOut.mField1, (void *)c_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable2, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&g_efOut, (void *)c_efOut.mField0, (void *)
    c_efOut.mField1, (void *)c_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable3, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&h_efOut, (void *)c_efOut.mField0, (void *)
    c_efOut.mField1, (void *)c_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable4, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&i_efOut, (void *)c_efOut.mField0, (void *)
    c_efOut.mField1, (void *)c_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable5, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&j_efOut, (void *)c_efOut.mField0, (void *)
    c_efOut.mField1, (void *)c_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable6, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&k_efOut, (void *)c_efOut.mField0, (void *)
    c_efOut.mField1, (void *)c_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable7, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&l_efOut, (void *)c_efOut.mField0, (void *)
    c_efOut.mField1, (void *)c_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable0, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&m_efOut, (void *)c_efOut.mField0, (void *)
    c_efOut.mField1, (void *)c_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable1, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&n_efOut, (void *)d_efOut.mField0, (void *)
    d_efOut.mField1, (void *)d_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable2, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&o_efOut, (void *)d_efOut.mField0, (void *)
    d_efOut.mField1, (void *)d_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable3, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&p_efOut, (void *)d_efOut.mField0, (void *)
    d_efOut.mField1, (void *)d_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable4, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&q_efOut, (void *)d_efOut.mField0, (void *)
    d_efOut.mField1, (void *)d_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable5, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&r_efOut, (void *)d_efOut.mField0, (void *)
    d_efOut.mField1, (void *)d_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable6, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&s_efOut, (void *)d_efOut.mField0, (void *)
    d_efOut.mField1, (void *)d_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable7, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&t_efOut, (void *)d_efOut.mField0, (void *)
    d_efOut.mField1, (void *)d_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable0, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&u_efOut, (void *)d_efOut.mField0, (void *)
    d_efOut.mField1, (void *)d_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable1, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&v_efOut, (void *)e_efOut.mField0, (void *)
    e_efOut.mField1, (void *)e_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable2, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&w_efOut, (void *)e_efOut.mField0, (void *)
    e_efOut.mField1, (void *)e_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable3, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&x_efOut, (void *)e_efOut.mField0, (void *)
    e_efOut.mField1, (void *)e_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable4, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&y_efOut, (void *)e_efOut.mField0, (void *)
    e_efOut.mField1, (void *)e_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable5, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&ab_efOut, (void *)e_efOut.mField0, (void *)
    e_efOut.mField1, (void *)e_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable6, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&bb_efOut, (void *)e_efOut.mField0, (void *)
    e_efOut.mField1, (void *)e_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable7, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&cb_efOut, (void *)e_efOut.mField0, (void *)
    e_efOut.mField1, (void *)e_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable0, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  _in1ivar = 10ULL;
  g__in1ivar = 3ULL;
  tlu2_2d_linear_linear_value((void *)&db_efOut, (void *)e_efOut.mField0, (void *)
    e_efOut.mField1, (void *)e_efOut.mField2, (void *)t46, (void *)t47, (void *)
    t48, (void *)((_NeDynamicSystem*)(LC))->mTable1, (void *)&_in1ivar, (void *)
    &g__in1ivar);
  out.mX[0] = -0.0;
  out.mX[1] = -t82 * (real_T)(t82 < 0.0) / (X_idx_31 == 0.0 ? 1.0E-16 : X_idx_31);
  out.mX[2] = -(X_idx_2 * X_idx_19);
  out.mX[3] = -(X_idx_3 * X_idx_20);
  out.mX[4] = -(X_idx_4 * X_idx_21);
  out.mX[5] = -0.0;
  out.mX[6] = -Battery_Table_Based2_i * (real_T)(Battery_Table_Based2_i < 0.0) /
    (X_idx_47 == 0.0 ? 1.0E-16 : X_idx_47);
  out.mX[7] = -(X_idx_7 * X_idx_35);
  out.mX[8] = -(X_idx_8 * X_idx_36);
  out.mX[9] = -(X_idx_9 * X_idx_37);
  out.mX[10] = -0.0;
  out.mX[11] = -Battery_Table_Based3_i * (real_T)(Battery_Table_Based3_i < 0.0) /
    (X_idx_62 == 0.0 ? 1.0E-16 : X_idx_62);
  out.mX[12] = -(X_idx_12 * X_idx_50);
  out.mX[13] = -(X_idx_13 * X_idx_51);
  out.mX[14] = -(X_idx_14 * X_idx_52);
  out.mX[15] = -(t82 * X_idx_22);
  out.mX[16] = -(X_idx_0 / (X_idx_31 == 0.0 ? 1.0E-16 : X_idx_31));
  out.mX[17] = -b_efOut[0];
  out.mX[18] = -f_efOut[0] / 1.1169711082936988;
  out.mX[19] = -g_efOut[0];
  out.mX[20] = -(1.0 / (X_idx_24 == 0.0 ? 1.0E-16 : X_idx_24));
  out.mX[21] = -h_efOut[0];
  out.mX[22] = -i_efOut[0] / 1.1114512361298345;
  out.mX[23] = -(1.0 / (X_idx_25 == 0.0 ? 1.0E-16 : X_idx_25));
  out.mX[24] = -j_efOut[0];
  out.mX[25] = -k_efOut[0] / 5.8020366104842651;
  out.mX[26] = -(1.0 / (X_idx_26 == 0.0 ? 1.0E-16 : X_idx_26));
  out.mX[27] = -l_efOut[0];
  out.mX[28] = -m_efOut[0] / 710.31827777704757;
  out.mX[29] = -(Battery_Table_Based2_i * X_idx_38);
  out.mX[30] = -(X_idx_5 / (X_idx_47 == 0.0 ? 1.0E-16 : X_idx_47));
  out.mX[31] = -b_efOut[0];
  out.mX[32] = -n_efOut[0];
  out.mX[33] = -o_efOut[0];
  out.mX[34] = -(1.0 / (X_idx_40 == 0.0 ? 1.0E-16 : X_idx_40));
  out.mX[35] = -p_efOut[0];
  out.mX[36] = -q_efOut[0] / 36.806096071590162;
  out.mX[37] = -(1.0 / (X_idx_41 == 0.0 ? 1.0E-16 : X_idx_41));
  out.mX[38] = -r_efOut[0];
  out.mX[39] = -s_efOut[0] / 157.46435811450692;
  out.mX[40] = -(1.0 / (X_idx_42 == 0.0 ? 1.0E-16 : X_idx_42));
  out.mX[41] = -t_efOut[0];
  out.mX[42] = -u_efOut[0] / 9569.5039028505162;
  out.mX[43] = -(Battery_Table_Based3_i * X_idx_53);
  out.mX[44] = -(X_idx_10 / (X_idx_62 == 0.0 ? 1.0E-16 : X_idx_62));
  out.mX[45] = -b_efOut[0];
  out.mX[46] = -v_efOut[0];
  out.mX[47] = -w_efOut[0];
  out.mX[48] = -(1.0 / (X_idx_55 == 0.0 ? 1.0E-16 : X_idx_55));
  out.mX[49] = -x_efOut[0];
  out.mX[50] = -y_efOut[0] / 39.208949934337141;
  out.mX[51] = -(1.0 / (X_idx_56 == 0.0 ? 1.0E-16 : X_idx_56));
  out.mX[52] = -ab_efOut[0];
  out.mX[53] = -bb_efOut[0] / 210.43880494114478;
  out.mX[54] = -(1.0 / (X_idx_57 == 0.0 ? 1.0E-16 : X_idx_57));
  out.mX[55] = -cb_efOut[0];
  out.mX[56] = -db_efOut[0] / 3325.3260338607074;
  out.mX[57] = U_idx_0;
  out.mX[58] = t7;
  out.mX[59] = t8;
  out.mX[60] = t9;
  out.mX[61] = t10 / 1.0E+6;
  out.mX[62] = t11;
  out.mX[63] = t12 / 1.0E+6;
  out.mX[64] = X_idx_15;
  out.mX[65] = t14 / 1.0E+6;
  (void)LC;
  (void)t146;
  return 0;
}
