/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'passiveBalancing/Solver Configuration'.
 */

#include "ne_ds.h"
#include "passiveBalancing_836bb176_1_ds_obs_il.h"
#include "passiveBalancing_836bb176_1_ds_sys_struct.h"
#include "passiveBalancing_836bb176_1_ds_externals.h"
#include "passiveBalancing_836bb176_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T passiveBalancing_836bb176_1_ds_obs_il(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static boolean_T _cg_const_1[195] = { true, false, true, true, true, false,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, false,
    true, true, true, false, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, false, true, true, true, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, true, true, false, false,
    true, true, false, false, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, false, true, true, true,
    true, true, true, false, true, true, false, true, false, true, true, true,
    false, true, false, true, true, true, true, true, true, false, true, true,
    false, true, false, true, true, true, false, true, false, true, true, true,
    true, true, true, false, true, true, false, true, false, true, true, true,
    false, true, false, false, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true };

  PmBoolVector out;
  int32_T b;
  boolean_T t0[195];
  (void)t1;
  (void)LC;
  out = t2->mOBS_IL;
  for (b = 0; b < 195; b++) {
    t0[b] = _cg_const_1[b];
  }

  for (b = 0; b < 195; b++) {
    out.mX[b] = t0[b];
  }

  (void)LC;
  (void)t2;
  return 0;
}
