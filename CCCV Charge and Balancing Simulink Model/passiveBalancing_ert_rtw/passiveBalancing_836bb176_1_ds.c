/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'passiveBalancing/Solver Configuration'.
 */
/* passiveBalancing_836bb176_1_ds.c - body for module passiveBalancing_836bb176_1_ds */

#include "ne_ds.h"
#include "passiveBalancing_836bb176_1_ds_zc.h"
#include "passiveBalancing_836bb176_1_ds_tdxy_p.h"
#include "passiveBalancing_836bb176_1_ds_y.h"
#include "passiveBalancing_836bb176_1_ds_eq_tol.h"
#include "passiveBalancing_836bb176_1_ds_qx_p.h"
#include "passiveBalancing_836bb176_1_ds_obs_all.h"
#include "passiveBalancing_836bb176_1_ds_obs_exp.h"
#include "passiveBalancing_836bb176_1_ds_mode.h"
#include "passiveBalancing_836bb176_1_ds_var_tol.h"
#include "passiveBalancing_836bb176_1_ds_dxm_p.h"
#include "passiveBalancing_836bb176_1_ds_m.h"
#include "passiveBalancing_836bb176_1_ds_log.h"
#include "passiveBalancing_836bb176_1_ds_imax.h"
#include "passiveBalancing_836bb176_1_ds_obs_act.h"
#include "passiveBalancing_836bb176_1_ds_imin.h"
#include "passiveBalancing_836bb176_1_ds_dxicrm_p.h"
#include "passiveBalancing_836bb176_1_ds_mdxy_p.h"
#include "passiveBalancing_836bb176_1_ds_dxy_p.h"
#include "passiveBalancing_836bb176_1_ds_icrm_p.h"
#include "passiveBalancing_836bb176_1_ds_vpf.h"
#include "passiveBalancing_836bb176_1_ds_m_p.h"
#include "passiveBalancing_836bb176_1_ds_dxm.h"
#include "passiveBalancing_836bb176_1_ds_lv.h"
#include "passiveBalancing_836bb176_1_ds_dnf_v_x.h"
#include "passiveBalancing_836bb176_1_ds_slf.h"
#include "passiveBalancing_836bb176_1_ds_tdxf_p.h"
#include "passiveBalancing_836bb176_1_ds_a_p.h"
#include "passiveBalancing_836bb176_1_ds_slv.h"
#include "passiveBalancing_836bb176_1_ds_vmf.h"
#include "passiveBalancing_836bb176_1_ds_dxf_p.h"
#include "passiveBalancing_836bb176_1_ds_ic.h"
#include "passiveBalancing_836bb176_1_ds_slf0.h"
#include "passiveBalancing_836bb176_1_ds_dxf.h"
#include "passiveBalancing_836bb176_1_ds_f.h"
#include "passiveBalancing_836bb176_1_ds_dxicr_p.h"
#include "passiveBalancing_836bb176_1_ds_obs_il.h"
#include "passiveBalancing_836bb176_1_ds_a.h"
#include "passiveBalancing_836bb176_1_ds_dxdelt_p.h"
#include "passiveBalancing_836bb176_1_ds_duf.h"
#include "passiveBalancing_836bb176_1_ds_assert.h"
#include "passiveBalancing_836bb176_1_ds.h"
#include "ssc_ml_fun.h"
#include "passiveBalancing_836bb176_1_ds_external_struct.h"
#include "passiveBalancing_836bb176_1_ds_sys_struct.h"
#include "passiveBalancing_836bb176_1_ds_externals.h"

static int32_T ds_vmm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ddm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dum_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dum(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dtm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dpm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dpm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_b_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_b(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_c_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_c(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_duf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ddf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dpdxf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_dpdxf(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dwf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dwf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_tduf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dnf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dnf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_icr(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_icr_im(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_id(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_il(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_tduicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icrm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dxicrm(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicrm(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_tduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_duy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dty_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dty(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_cache_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_cache_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_update_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update2_r(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_update2_i(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_lock_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock2_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_lock2_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_sfo(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_sfp(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_init_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_init_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_passert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_iassert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_del_t(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v0(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_tmax(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dp_l(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_j(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qx(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qu(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qt(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_q1(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qu_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_q1_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dpm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dpm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dpdxf_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dpdxf(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dwf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dwf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_lock_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lock_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lock2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_lock2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static void release_reference(NeDynamicSystem *ds);
static void get_reference(NeDynamicSystem *ds);
static NeDynamicSystem *diagnostics(NeDynamicSystem *ds, boolean_T);
static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out, boolean_T kp);
static NeEquationData s_equation_data[66] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)1", 2U, 0U,
    TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)1", 2U, 2U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)1",
    1U, 4U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)1", 1U, 5U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)1",
    1U, 6U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)2", 2U, 7U, TRUE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)2",
    2U, 9U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)2", 1U, 11U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)2",
    1U, 12U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)2", 1U, 13U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)3",
    2U, 14U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)3", 2U, 16U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)3",
    1U, 18U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)3", 1U, 19U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)3",
    1U, 20U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)1", 1U, 21U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)1",
    1U, 22U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)1", 1U, 23U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)1",
    1U, 24U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)1", 1U, 25U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)1",
    1U, 26U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)1", 1U, 27U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)1",
    1U, 28U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)1", 1U, 29U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)1",
    1U, 30U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)1", 1U, 31U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)1",
    1U, 32U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)1", 1U, 33U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)1",
    1U, 34U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)2", 1U, 35U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)2",
    1U, 36U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)2", 1U, 37U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)2",
    1U, 38U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)2", 1U, 39U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)2",
    1U, 40U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)2", 1U, 41U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)2",
    1U, 42U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)2", 1U, 43U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)2",
    1U, 44U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)2", 1U, 45U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)2",
    1U, 46U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)2", 1U, 47U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)2",
    1U, 48U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)3", 1U, 49U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)3",
    1U, 50U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)3", 1U, 51U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)3",
    1U, 52U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)3", 1U, 53U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)3",
    1U, 54U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)3", 1U, 55U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)3",
    1U, 56U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)3", 1U, 57U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)3",
    1U, 58U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)3", 1U, 59U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)3",
    1U, 60U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/Battery (Table-Based)3", 1U, 61U, FALSE, 1.0, "1", }, { "",
    0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/Battery (Table-Based)3",
    1U, 62U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/D1", 3U, 63U, TRUE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "passiveBalancing/D2", 3U, 66U, TRUE, 1.0, "1", },
    { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/D3", 3U, 69U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/FET1",
    5U, 72U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/FET1", 3U, 77U, TRUE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "passiveBalancing/FET2", 5U, 80U, TRUE, 1.0, "1", },
  { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/FET2", 3U, 85U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME, "passiveBalancing/FET3",
    5U, 88U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "passiveBalancing/FET3", 3U, 93U, TRUE, 1.0, "1", } };

static NeICRData s_icr_data[6] = { { "", 0U, 0,
    "passiveBalancing/Battery (Table-Based)1", 1U, 0U, }, { "", 0U, 0,
    "passiveBalancing/Battery (Table-Based)1", 1U, 1U, }, { "", 0U, 0,
    "passiveBalancing/Battery (Table-Based)2", 1U, 2U, }, { "", 0U, 0,
    "passiveBalancing/Battery (Table-Based)2", 1U, 3U, }, { "", 0U, 0,
    "passiveBalancing/Battery (Table-Based)3", 1U, 4U, }, { "", 0U, 0,
    "passiveBalancing/Battery (Table-Based)3", 1U, 5U, } };

static NeVariableData s_variable_data[66] = { { "Battery_Table_Based1.charge",
    0U, 0, "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, TRUE, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Charge", }, { "Battery_Table_Based1.num_cycles",
    0U, 0, "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, TRUE, FALSE,
    1U, 1U, NE_INIT_MODE_MANDATORY, "Discharge cycles", }, {
    "Battery_Table_Based1.vrc1", 0U, 0,
    "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "vrc1", }, { "Battery_Table_Based1.vrc2", 0U, 0,
    "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "vrc2", }, { "Battery_Table_Based1.vrc3", 0U, 0,
    "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "vrc3", }, { "Battery_Table_Based2.charge", 0U,
    0, "passiveBalancing/Battery (Table-Based)2", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Charge", }, { "Battery_Table_Based2.num_cycles", 0U,
    0, "passiveBalancing/Battery (Table-Based)2", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Discharge cycles", }, {
    "Battery_Table_Based2.vrc1", 0U, 0,
    "passiveBalancing/Battery (Table-Based)2", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "vrc1", }, { "Battery_Table_Based2.vrc2", 0U, 0,
    "passiveBalancing/Battery (Table-Based)2", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "vrc2", }, { "Battery_Table_Based2.vrc3", 0U, 0,
    "passiveBalancing/Battery (Table-Based)2", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "vrc3", }, { "Battery_Table_Based3.charge", 0U,
    0, "passiveBalancing/Battery (Table-Based)3", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Charge", }, { "Battery_Table_Based3.num_cycles", 0U,
    0, "passiveBalancing/Battery (Table-Based)3", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Discharge cycles", }, {
    "Battery_Table_Based3.vrc1", 0U, 0,
    "passiveBalancing/Battery (Table-Based)3", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "vrc1", }, { "Battery_Table_Based3.vrc2", 0U, 0,
    "passiveBalancing/Battery (Table-Based)3", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "vrc2", }, { "Battery_Table_Based3.vrc3", 0U, 0,
    "passiveBalancing/Battery (Table-Based)3", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "vrc3", }, { "Battery_Table_Based1.n.v", 0U, 1,
    "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Voltage", }, { "Battery_Table_Based1.v", 0U, 0,
    "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Voltage", }, { "D1.n.v", 0U, 1,
    "passiveBalancing/D1", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, { "D1.v", 0U, 0, "passiveBalancing/D1", 1.0,
    "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Battery_Table_Based1.xG1", 0U, 0, "passiveBalancing/Battery (Table-Based)1",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R1(SOC,T,N)", },
    { "Battery_Table_Based1.xG2", 0U, 0,
    "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "1/R2(SOC,T,N)", }, { "Battery_Table_Based1.xG3", 0U,
    0, "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, FALSE, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "1/R3(SOC,T,N)", }, { "Battery_Table_Based1.xR0",
    0U, 0, "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Battery_Table_Based1.xVint", 0U, 0,
    "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Faded and temperature adjusted no-load voltage", },
    { "Battery_Table_Based1.private.xR1", 0U, 0,
    "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Battery_Table_Based1.private.xR2", 0U, 0,
    "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Battery_Table_Based1.private.xR3", 0U, 0,
    "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Battery_Table_Based1.private.xtau1", 0U, 0,
    "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Faded and temperature adjusted first time constant",
  }, { "Battery_Table_Based1.private.xtau2", 0U, 0,
    "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Faded and temperature adjusted second time constant",
  }, { "Battery_Table_Based1.private.xtau3", 0U, 0,
    "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Faded and temperature adjusted third time constant",
  }, { "Battery_Table_Based1.stateOfCharge", 0U, 0,
    "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "State of charge", }, {
    "Battery_Table_Based1.xqnom", 0U, 0,
    "passiveBalancing/Battery (Table-Based)1", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Faded and temperature adjusted ampere-hour rating",
  }, { "D2.n.v", 0U, 1, "passiveBalancing/D2", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Voltage", }, { "D2.v", 0U, 0, "passiveBalancing/D2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Battery_Table_Based2.n.v", 0U, 1, "passiveBalancing/Battery (Table-Based)2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Battery_Table_Based2.xG1", 0U, 0, "passiveBalancing/Battery (Table-Based)2",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R1(SOC,T,N)", },
    { "Battery_Table_Based2.xG2", 0U, 0,
    "passiveBalancing/Battery (Table-Based)2", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "1/R2(SOC,T,N)", }, { "Battery_Table_Based2.xG3", 0U,
    0, "passiveBalancing/Battery (Table-Based)2", 1.0, "1", 0.0, FALSE, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "1/R3(SOC,T,N)", }, { "Battery_Table_Based2.xR0",
    0U, 0, "passiveBalancing/Battery (Table-Based)2", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Battery_Table_Based2.xVint", 0U, 0,
    "passiveBalancing/Battery (Table-Based)2", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Faded and temperature adjusted no-load voltage", },
    { "Battery_Table_Based2.private.xR1", 0U, 0,
    "passiveBalancing/Battery (Table-Based)2", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Battery_Table_Based2.private.xR2", 0U, 0,
    "passiveBalancing/Battery (Table-Based)2", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Battery_Table_Based2.private.xR3", 0U, 0,
    "passiveBalancing/Battery (Table-Based)2", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Battery_Table_Based2.private.xtau1", 0U, 0,
    "passiveBalancing/Battery (Table-Based)2", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Faded and temperature adjusted first time constant",
  }, { "Battery_Table_Based2.private.xtau2", 0U, 0,
    "passiveBalancing/Battery (Table-Based)2", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Faded and temperature adjusted second time constant",
  }, { "Battery_Table_Based2.private.xtau3", 0U, 0,
    "passiveBalancing/Battery (Table-Based)2", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Faded and temperature adjusted third time constant",
  }, { "Battery_Table_Based2.stateOfCharge", 0U, 0,
    "passiveBalancing/Battery (Table-Based)2", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "State of charge", }, {
    "Battery_Table_Based2.xqnom", 0U, 0,
    "passiveBalancing/Battery (Table-Based)2", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Faded and temperature adjusted ampere-hour rating",
  }, { "D3.n.v", 0U, 1, "passiveBalancing/D3", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Voltage", }, { "D3.v", 0U, 0, "passiveBalancing/D3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Battery_Table_Based3.xG1", 0U, 0, "passiveBalancing/Battery (Table-Based)3",
    1.0, "1", 0.0, FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "1/R1(SOC,T,N)", },
    { "Battery_Table_Based3.xG2", 0U, 0,
    "passiveBalancing/Battery (Table-Based)3", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "1/R2(SOC,T,N)", }, { "Battery_Table_Based3.xG3", 0U,
    0, "passiveBalancing/Battery (Table-Based)3", 1.0, "1", 0.0, FALSE, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "1/R3(SOC,T,N)", }, { "Battery_Table_Based3.xR0",
    0U, 0, "passiveBalancing/Battery (Table-Based)3", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Battery_Table_Based3.xVint", 0U, 0,
    "passiveBalancing/Battery (Table-Based)3", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Faded and temperature adjusted no-load voltage", },
    { "Battery_Table_Based3.private.xR1", 0U, 0,
    "passiveBalancing/Battery (Table-Based)3", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Battery_Table_Based3.private.xR2", 0U, 0,
    "passiveBalancing/Battery (Table-Based)3", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Battery_Table_Based3.private.xR3", 0U, 0,
    "passiveBalancing/Battery (Table-Based)3", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Battery_Table_Based3.private.xtau1", 0U, 0,
    "passiveBalancing/Battery (Table-Based)3", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Faded and temperature adjusted first time constant",
  }, { "Battery_Table_Based3.private.xtau2", 0U, 0,
    "passiveBalancing/Battery (Table-Based)3", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Faded and temperature adjusted second time constant",
  }, { "Battery_Table_Based3.private.xtau3", 0U, 0,
    "passiveBalancing/Battery (Table-Based)3", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Faded and temperature adjusted third time constant",
  }, { "Battery_Table_Based3.stateOfCharge", 0U, 0,
    "passiveBalancing/Battery (Table-Based)3", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "State of charge", }, {
    "Battery_Table_Based3.xqnom", 0U, 0,
    "passiveBalancing/Battery (Table-Based)3", 1.0, "1", 0.0, FALSE, FALSE, 1U,
    1U, NE_INIT_MODE_NONE, "Faded and temperature adjusted ampere-hour rating",
  }, { "FET1.mosfet_equation.i", 0U, 0, "passiveBalancing/FET1", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i", }, { "FET2.mosfet_equation.i",
    0U, 0, "passiveBalancing/FET2", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", }, { "FET3.mosfet_equation.i", 0U, 0,
    "passiveBalancing/FET3", 1.0, "1", 0.0, FALSE, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "i", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[195] = { {
    "Battery_Table_Based1.charge", "passiveBalancing/Battery (Table-Based)1", 1U,
    1U, "hr*A", 1.0e-6, "C", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, {
    "Battery_Table_Based1.i", "passiveBalancing/Battery (Table-Based)1", 1U, 1U,
    "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Battery_Table_Based1.n.v", "passiveBalancing/Battery (Table-Based)1", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Battery_Table_Based1.num_cycles", "passiveBalancing/Battery (Table-Based)1",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Battery_Table_Based1.p.v", "passiveBalancing/Battery (Table-Based)1", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Battery_Table_Based1.power_dissipated",
    "passiveBalancing/Battery (Table-Based)1", 1U, 1U, "W", 1.0e-6, "kW",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Battery_Table_Based1.stateOfCharge",
    "passiveBalancing/Battery (Table-Based)1", 1U, 1U, "1", 1.0e-6, "1",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Battery_Table_Based1.v", "passiveBalancing/Battery (Table-Based)1", 1U, 1U,
    "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Battery_Table_Based1.vrc1", "passiveBalancing/Battery (Table-Based)1", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, {
    "Battery_Table_Based1.vrc2", "passiveBalancing/Battery (Table-Based)1", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, {
    "Battery_Table_Based1.vrc3", "passiveBalancing/Battery (Table-Based)1", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, {
    "Battery_Table_Based1.vrc4", "passiveBalancing/Battery (Table-Based)1", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, {
    "Battery_Table_Based1.vrc5", "passiveBalancing/Battery (Table-Based)1", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, {
    "Battery_Table_Based1.xG1", "passiveBalancing/Battery (Table-Based)1", 1U,
    1U, "1/Ohm", 1.0e-6, "S", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Battery_Table_Based1.xG2", "passiveBalancing/Battery (Table-Based)1", 1U,
    1U, "1/Ohm", 1.0e-6, "S", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Battery_Table_Based1.xG3", "passiveBalancing/Battery (Table-Based)1", 1U,
    1U, "1/Ohm", 1.0e-6, "S", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Battery_Table_Based1.xG4", "passiveBalancing/Battery (Table-Based)1", 1U,
    1U, "1/Ohm", 1.0e-6, "S", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Battery_Table_Based1.xG5", "passiveBalancing/Battery (Table-Based)1", 1U,
    1U, "1/Ohm", 1.0e-6, "S", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Battery_Table_Based1.xGsd", "passiveBalancing/Battery (Table-Based)1", 1U,
    1U, "1/Ohm", 1.0e-6, "S", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Battery_Table_Based1.xR0", "passiveBalancing/Battery (Table-Based)1", 1U,
    1U, "Ohm", 1.0e-6, "Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Battery_Table_Based1.xVint", "passiveBalancing/Battery (Table-Based)1", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Battery_Table_Based1.xqnom", "passiveBalancing/Battery (Table-Based)1", 1U,
    1U, "hr*A", 1.0e-6, "C", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Battery_Table_Based1.private.xR1",
    "passiveBalancing/Battery (Table-Based)1", 1U, 1U, "Ohm", 1.0e-6, "Ohm",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Battery_Table_Based1.private.xR2",
    "passiveBalancing/Battery (Table-Based)1", 1U, 1U, "Ohm", 1.0e-6, "Ohm",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Battery_Table_Based1.private.xR3",
    "passiveBalancing/Battery (Table-Based)1", 1U, 1U, "Ohm", 1.0e-6, "Ohm",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Battery_Table_Based1.private.xtau1",
    "passiveBalancing/Battery (Table-Based)1", 1U, 1U, "s", 1.0e-6, "s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first time constant", }, {
    "Battery_Table_Based1.private.xtau2",
    "passiveBalancing/Battery (Table-Based)1", 1U, 1U, "s", 1.0e-6, "s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second time constant", }, {
    "Battery_Table_Based1.private.xtau3",
    "passiveBalancing/Battery (Table-Based)1", 1U, 1U, "s", 1.0e-6, "s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third time constant", }, {
    "Battery_Table_Based1.soc", "passiveBalancing/Battery (Table-Based)1", 1U,
    1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Battery_Table_Based2.charge", "passiveBalancing/Battery (Table-Based)2", 1U,
    1U, "hr*A", 1.0e-6, "C", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, {
    "Battery_Table_Based2.i", "passiveBalancing/Battery (Table-Based)2", 1U, 1U,
    "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Battery_Table_Based2.n.v", "passiveBalancing/Battery (Table-Based)2", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Battery_Table_Based2.num_cycles", "passiveBalancing/Battery (Table-Based)2",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Battery_Table_Based2.p.v", "passiveBalancing/Battery (Table-Based)2", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Battery_Table_Based2.power_dissipated",
    "passiveBalancing/Battery (Table-Based)2", 1U, 1U, "W", 1.0e-6, "kW",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Battery_Table_Based2.stateOfCharge",
    "passiveBalancing/Battery (Table-Based)2", 1U, 1U, "1", 1.0e-6, "1",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Battery_Table_Based2.v", "passiveBalancing/Battery (Table-Based)2", 1U, 1U,
    "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Battery_Table_Based2.vrc1", "passiveBalancing/Battery (Table-Based)2", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, {
    "Battery_Table_Based2.vrc2", "passiveBalancing/Battery (Table-Based)2", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, {
    "Battery_Table_Based2.vrc3", "passiveBalancing/Battery (Table-Based)2", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, {
    "Battery_Table_Based2.vrc4", "passiveBalancing/Battery (Table-Based)2", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, {
    "Battery_Table_Based2.vrc5", "passiveBalancing/Battery (Table-Based)2", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, {
    "Battery_Table_Based2.xG1", "passiveBalancing/Battery (Table-Based)2", 1U,
    1U, "1/Ohm", 1.0e-6, "S", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Battery_Table_Based2.xG2", "passiveBalancing/Battery (Table-Based)2", 1U,
    1U, "1/Ohm", 1.0e-6, "S", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Battery_Table_Based2.xG3", "passiveBalancing/Battery (Table-Based)2", 1U,
    1U, "1/Ohm", 1.0e-6, "S", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Battery_Table_Based2.xG4", "passiveBalancing/Battery (Table-Based)2", 1U,
    1U, "1/Ohm", 1.0e-6, "S", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Battery_Table_Based2.xG5", "passiveBalancing/Battery (Table-Based)2", 1U,
    1U, "1/Ohm", 1.0e-6, "S", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Battery_Table_Based2.xGsd", "passiveBalancing/Battery (Table-Based)2", 1U,
    1U, "1/Ohm", 1.0e-6, "S", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Battery_Table_Based2.xR0", "passiveBalancing/Battery (Table-Based)2", 1U,
    1U, "Ohm", 1.0e-6, "Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Battery_Table_Based2.xVint", "passiveBalancing/Battery (Table-Based)2", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Battery_Table_Based2.xqnom", "passiveBalancing/Battery (Table-Based)2", 1U,
    1U, "hr*A", 1.0e-6, "C", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Battery_Table_Based2.private.xR1",
    "passiveBalancing/Battery (Table-Based)2", 1U, 1U, "Ohm", 1.0e-6, "Ohm",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Battery_Table_Based2.private.xR2",
    "passiveBalancing/Battery (Table-Based)2", 1U, 1U, "Ohm", 1.0e-6, "Ohm",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Battery_Table_Based2.private.xR3",
    "passiveBalancing/Battery (Table-Based)2", 1U, 1U, "Ohm", 1.0e-6, "Ohm",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Battery_Table_Based2.private.xtau1",
    "passiveBalancing/Battery (Table-Based)2", 1U, 1U, "s", 1.0e-6, "s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first time constant", }, {
    "Battery_Table_Based2.private.xtau2",
    "passiveBalancing/Battery (Table-Based)2", 1U, 1U, "s", 1.0e-6, "s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second time constant", }, {
    "Battery_Table_Based2.private.xtau3",
    "passiveBalancing/Battery (Table-Based)2", 1U, 1U, "s", 1.0e-6, "s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third time constant", }, {
    "Battery_Table_Based2.soc", "passiveBalancing/Battery (Table-Based)2", 1U,
    1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Battery_Table_Based3.charge", "passiveBalancing/Battery (Table-Based)3", 1U,
    1U, "hr*A", 1.0e-6, "C", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, {
    "Battery_Table_Based3.i", "passiveBalancing/Battery (Table-Based)3", 1U, 1U,
    "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Battery_Table_Based3.n.v", "passiveBalancing/Battery (Table-Based)3", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Battery_Table_Based3.num_cycles", "passiveBalancing/Battery (Table-Based)3",
    1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Battery_Table_Based3.p.v", "passiveBalancing/Battery (Table-Based)3", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Battery_Table_Based3.power_dissipated",
    "passiveBalancing/Battery (Table-Based)3", 1U, 1U, "W", 1.0e-6, "kW",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Battery_Table_Based3.stateOfCharge",
    "passiveBalancing/Battery (Table-Based)3", 1U, 1U, "1", 1.0e-6, "1",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Battery_Table_Based3.v", "passiveBalancing/Battery (Table-Based)3", 1U, 1U,
    "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Battery_Table_Based3.vrc1", "passiveBalancing/Battery (Table-Based)3", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, {
    "Battery_Table_Based3.vrc2", "passiveBalancing/Battery (Table-Based)3", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, {
    "Battery_Table_Based3.vrc3", "passiveBalancing/Battery (Table-Based)3", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, {
    "Battery_Table_Based3.vrc4", "passiveBalancing/Battery (Table-Based)3", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, {
    "Battery_Table_Based3.vrc5", "passiveBalancing/Battery (Table-Based)3", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_MANDATORY, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, {
    "Battery_Table_Based3.xG1", "passiveBalancing/Battery (Table-Based)3", 1U,
    1U, "1/Ohm", 1.0e-6, "S", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R1(SOC,T,N)", }, {
    "Battery_Table_Based3.xG2", "passiveBalancing/Battery (Table-Based)3", 1U,
    1U, "1/Ohm", 1.0e-6, "S", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R2(SOC,T,N)", }, {
    "Battery_Table_Based3.xG3", "passiveBalancing/Battery (Table-Based)3", 1U,
    1U, "1/Ohm", 1.0e-6, "S", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R3(SOC,T,N)", }, {
    "Battery_Table_Based3.xG4", "passiveBalancing/Battery (Table-Based)3", 1U,
    1U, "1/Ohm", 1.0e-6, "S", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R4(SOC,T,N)", }, {
    "Battery_Table_Based3.xG5", "passiveBalancing/Battery (Table-Based)3", 1U,
    1U, "1/Ohm", 1.0e-6, "S", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/R5(SOC,T,N)", }, {
    "Battery_Table_Based3.xGsd", "passiveBalancing/Battery (Table-Based)3", 1U,
    1U, "1/Ohm", 1.0e-6, "S", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "1/Rleak(T,N)", }, {
    "Battery_Table_Based3.xR0", "passiveBalancing/Battery (Table-Based)3", 1U,
    1U, "Ohm", 1.0e-6, "Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted terminal resistance", }, {
    "Battery_Table_Based3.xVint", "passiveBalancing/Battery (Table-Based)3", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted no-load voltage", }, {
    "Battery_Table_Based3.xqnom", "passiveBalancing/Battery (Table-Based)3", 1U,
    1U, "hr*A", 1.0e-6, "C", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted ampere-hour rating", }, {
    "Battery_Table_Based3.private.xR1",
    "passiveBalancing/Battery (Table-Based)3", 1U, 1U, "Ohm", 1.0e-6, "Ohm",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first polarization resistance", }, {
    "Battery_Table_Based3.private.xR2",
    "passiveBalancing/Battery (Table-Based)3", 1U, 1U, "Ohm", 1.0e-6, "Ohm",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second polarization resistance", }, {
    "Battery_Table_Based3.private.xR3",
    "passiveBalancing/Battery (Table-Based)3", 1U, 1U, "Ohm", 1.0e-6, "Ohm",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third polarization resistance", }, {
    "Battery_Table_Based3.private.xtau1",
    "passiveBalancing/Battery (Table-Based)3", 1U, 1U, "s", 1.0e-6, "s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted first time constant", }, {
    "Battery_Table_Based3.private.xtau2",
    "passiveBalancing/Battery (Table-Based)3", 1U, 1U, "s", 1.0e-6, "s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted second time constant", }, {
    "Battery_Table_Based3.private.xtau3",
    "passiveBalancing/Battery (Table-Based)3", 1U, 1U, "s", 1.0e-6, "s",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Faded and temperature adjusted third time constant", }, {
    "Battery_Table_Based3.soc", "passiveBalancing/Battery (Table-Based)3", 1U,
    1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, { "Current_Sensor.I",
    "passiveBalancing/Current Sensor", 1U, 1U, "A", 1.0e-6, "A",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, { "Current_Sensor.i1",
    "passiveBalancing/Current Sensor", 1U, 1U, "A", 1.0e-6, "A",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "Current_Sensor.n.v",
    "passiveBalancing/Current Sensor", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Current_Sensor.p.v",
    "passiveBalancing/Current Sensor", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Current_Sensor1.I",
    "passiveBalancing/Current Sensor1", 1U, 1U, "A", 1.0e-6, "A",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, { "Current_Sensor1.i1",
    "passiveBalancing/Current Sensor1", 1U, 1U, "A", 1.0e-6, "A",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "Current_Sensor1.n.v",
    "passiveBalancing/Current Sensor1", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Current_Sensor1.p.v",
    "passiveBalancing/Current Sensor1", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Current_Sensor2.I",
    "passiveBalancing/Current Sensor2", 1U, 1U, "A", 1.0e-6, "A",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, { "Current_Sensor2.i1",
    "passiveBalancing/Current Sensor2", 1U, 1U, "A", 1.0e-6, "A",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "Current_Sensor2.n.v",
    "passiveBalancing/Current Sensor2", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Current_Sensor2.p.v",
    "passiveBalancing/Current Sensor2", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "D1.i",
    "passiveBalancing/D1", 1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Current", }, { "D1.n.v", "passiveBalancing/D1", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "D1.p.v",
    "passiveBalancing/D1", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "D1.v", "passiveBalancing/D1", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "D2.i",
    "passiveBalancing/D2", 1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Current", }, { "D2.n.v", "passiveBalancing/D2", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "D2.p.v",
    "passiveBalancing/D2", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "D2.v", "passiveBalancing/D2", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "D3.i",
    "passiveBalancing/D3", 1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Current", }, { "D3.n.v", "passiveBalancing/D3", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "D3.p.v",
    "passiveBalancing/D3", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "D3.v", "passiveBalancing/D3", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Electrical_Reference.V.v", "passiveBalancing/Electrical Reference", 1U, 1U,
    "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "FET1.D.v",
    "passiveBalancing/FET1", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "FET1.G", "passiveBalancing/FET1", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, { "FET1.S.v",
    "passiveBalancing/FET1", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "FET1.diode.Tsim", "passiveBalancing/FET1", 1U, 1U, "K",
    1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, { "FET1.diode.i",
    "passiveBalancing/FET1", 1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Current", }, { "FET1.diode.i_capacitor", "passiveBalancing/FET1", 1U, 1U,
    "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "FET1.diode.n.v", "passiveBalancing/FET1", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "FET1.diode.p.v",
    "passiveBalancing/FET1", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "FET1.diode.power_dissipated", "passiveBalancing/FET1", 1U,
    1U, "W", 1.0e-6, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "FET1.diode.v", "passiveBalancing/FET1", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "FET1.diode.v_capacitor",
    "passiveBalancing/FET1", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Junction capacitance voltage", }, { "FET1.mosfet_equation.G",
    "passiveBalancing/FET1", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", },
  { "FET1.mosfet_equation.i", "passiveBalancing/FET1", 1U, 1U, "A", 1.0e-6, "A",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, { "FET1.mosfet_equation.isOn",
    "passiveBalancing/FET1", 1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn",
  }, { "FET1.mosfet_equation.n.v", "passiveBalancing/FET1", 1U, 1U, "V", 1.0e-6,
    "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "FET1.mosfet_equation.p.v", "passiveBalancing/FET1", 1U, 1U, "V", 1.0e-6,
    "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "FET1.mosfet_equation.v",
    "passiveBalancing/FET1", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", },
    { "FET1.mosfet_equation.power_dissipated", "passiveBalancing/FET1", 1U, 1U,
    "W", 1.0e-6, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, { "FET2.D.v",
    "passiveBalancing/FET2", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "FET2.G", "passiveBalancing/FET2", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, { "FET2.S.v",
    "passiveBalancing/FET2", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "FET2.diode.Tsim", "passiveBalancing/FET2", 1U, 1U, "K",
    1.0e-6, "K", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, { "FET2.diode.i",
    "passiveBalancing/FET2", 1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Current", }, { "FET2.diode.i_capacitor", "passiveBalancing/FET2", 1U, 1U,
    "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "FET2.diode.n.v", "passiveBalancing/FET2", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "FET2.diode.p.v",
    "passiveBalancing/FET2", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "FET2.diode.power_dissipated", "passiveBalancing/FET2", 1U,
    1U, "W", 1.0e-6, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "FET2.diode.v", "passiveBalancing/FET2", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "FET2.diode.v_capacitor",
    "passiveBalancing/FET2", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Junction capacitance voltage", }, { "FET2.mosfet_equation.G",
    "passiveBalancing/FET2", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", },
  { "FET2.mosfet_equation.i", "passiveBalancing/FET2", 1U, 1U, "A", 1.0e-6, "A",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, { "FET2.mosfet_equation.isOn",
    "passiveBalancing/FET2", 1U, 1U, "1", 1.0e-6, "1", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn",
  }, { "FET2.mosfet_equation.n.v", "passiveBalancing/FET2", 1U, 1U, "V", 1.0e-6,
    "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "FET2.mosfet_equation.p.v", "passiveBalancing/FET2", 1U, 1U, "V", 1.0e-6,
    "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "FET2.mosfet_equation.v",
    "passiveBalancing/FET2", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", },
    { "FET2.mosfet_equation.power_dissipated", "passiveBalancing/FET2", 1U, 1U,
    "W", 1.0e-6, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, { "FET3.D.v",
    "passiveBalancing/FET3", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "FET3.G", "passiveBalancing/FET3", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, { "FET3.S.v",
    "passiveBalancing/FET3", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage",
  }, { "FET3.diode.Tsim", "passiveBalancing/FET3", 1U, 1U, "K", 1.0e-6, "K",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, { "FET3.diode.i",
    "passiveBalancing/FET3", 1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Current", }, { "FET3.diode.i_capacitor", "passiveBalancing/FET3", 1U, 1U,
    "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "FET3.diode.n.v", "passiveBalancing/FET3", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "FET3.diode.p.v",
    "passiveBalancing/FET3", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage",
  }, { "FET3.diode.power_dissipated", "passiveBalancing/FET3", 1U, 1U, "W",
    1.0e-6, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, { "FET3.diode.v",
    "passiveBalancing/FET3", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "FET3.diode.v_capacitor", "passiveBalancing/FET3", 1U, 1U,
    "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "FET3.mosfet_equation.G", "passiveBalancing/FET3", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, { "FET3.mosfet_equation.i",
    "passiveBalancing/FET3", 1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", },
    { "FET3.mosfet_equation.isOn", "passiveBalancing/FET3", 1U, 1U, "1", 1.0e-6,
    "1", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, { "FET3.mosfet_equation.n.v",
    "passiveBalancing/FET3", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage",
  }, { "FET3.mosfet_equation.p.v", "passiveBalancing/FET3", 1U, 1U, "V", 1.0e-6,
    "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "FET3.mosfet_equation.v",
    "passiveBalancing/FET3", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", },
    { "FET3.mosfet_equation.power_dissipated", "passiveBalancing/FET3", 1U, 1U,
    "W", 1.0e-6, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, { "I_TOT.head.v",
    "passiveBalancing/I_TOT", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "I_TOT.i", "passiveBalancing/I_TOT", 1U, 1U, "A", 1.0e-6,
    "A", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, { "I_TOT.iT",
    "passiveBalancing/I_TOT", 1U, 1U, "A", 1.0e-6, "A", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "iT", },
  { "I_TOT.tail.v", "passiveBalancing/I_TOT", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "I_TOT.v",
    "passiveBalancing/I_TOT", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", },
    { "R1.i", "passiveBalancing/R1", 1U, 1U, "A", 1.0e-6, "A",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "R1.n.v",
    "passiveBalancing/R1", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "R1.p.v", "passiveBalancing/R1", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "R1.v",
    "passiveBalancing/R1", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "R2.i", "passiveBalancing/R2", 1U, 1U, "A", 1.0e-6, "A",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "R2.n.v",
    "passiveBalancing/R2", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "R2.p.v", "passiveBalancing/R2", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "R2.v",
    "passiveBalancing/R2", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "R3.i", "passiveBalancing/R3", 1U, 1U, "A", 1.0e-6, "A",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, { "R3.n.v",
    "passiveBalancing/R3", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "R3.p.v", "passiveBalancing/R3", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "R3.v",
    "passiveBalancing/R3", 1U, 1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Voltage", }, { "Voltage_Sensor1.V", "passiveBalancing/Voltage Sensor1", 1U,
    1U, "V", 1.0e-6, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Voltage_Sensor1.n.v",
    "passiveBalancing/Voltage Sensor1", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Voltage_Sensor1.p.v",
    "passiveBalancing/Voltage Sensor1", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Voltage_Sensor2.V",
    "passiveBalancing/Voltage Sensor2", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Voltage_Sensor2.n.v",
    "passiveBalancing/Voltage Sensor2", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Voltage_Sensor2.p.v",
    "passiveBalancing/Voltage Sensor2", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Voltage_Sensor3.V",
    "passiveBalancing/Voltage Sensor3", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Voltage_Sensor3.n.v",
    "passiveBalancing/Voltage Sensor3", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Voltage_Sensor3.p.v",
    "passiveBalancing/Voltage Sensor3", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Voltage_Sensor4.V",
    "passiveBalancing/Voltage Sensor4", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Voltage_Sensor4.n.v",
    "passiveBalancing/Voltage Sensor4", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Voltage_Sensor4.p.v",
    "passiveBalancing/Voltage Sensor4", 1U, 1U, "V", 1.0e-6, "V",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", } };

static NeModeData *s_major_mode_data = NULL;
static NeZCData s_zc_data[42] = { { "passiveBalancing/Battery (Table-Based)1",
    1U, 0U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)1", 1U, 1U,
    "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_TRUE, }, { "passiveBalancing/Battery (Table-Based)1", 1U, 2U,
    "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)1", 1U, 3U,
    "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_TRUE, }, { "passiveBalancing/Battery (Table-Based)1", 1U, 4U,
    "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)1", 1U, 5U,
    "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)1", 1U, 6U,
    "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)1", 1U, 7U,
    "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)1", 1U, 8U,
    "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)1", 1U, 9U,
    "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)2", 1U, 10U,
    "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)2", 1U, 11U,
    "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_TRUE, }, { "passiveBalancing/Battery (Table-Based)2", 1U, 12U,
    "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)2", 1U, 13U,
    "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_TRUE, }, { "passiveBalancing/Battery (Table-Based)2", 1U, 14U,
    "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)2", 1U, 15U,
    "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)2", 1U, 16U,
    "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)2", 1U, 17U,
    "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)2", 1U, 18U,
    "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)2", 1U, 19U,
    "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)3", 1U, 20U,
    "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)3", 1U, 21U,
    "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_TRUE, }, { "passiveBalancing/Battery (Table-Based)3", 1U, 22U,
    "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)3", 1U, 23U,
    "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_TRUE, }, { "passiveBalancing/Battery (Table-Based)3", 1U, 24U,
    "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)3", 1U, 25U,
    "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)3", 1U, 26U,
    "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)3", 1U, 27U,
    "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)3", 1U, 28U,
    "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/Battery (Table-Based)3", 1U, 29U,
    "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/FET1", 1U, 30U, "FET1.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/FET1", 1U, 31U, "FET1.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/FET2", 1U, 32U, "FET2.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/FET2", 1U, 33U, "FET2.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/FET3", 1U, 34U, "FET3.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/FET3", 1U, 35U, "FET3.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/D1", 1U, 36U, "D1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/D2", 1U, 37U, "D2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/D3", 1U, 38U, "D3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/FET1", 1U, 39U,
    "FET1.mosfet_equation",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/FET2", 1U, 40U,
    "FET2.mosfet_equation",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "passiveBalancing/FET3", 1U, 41U,
    "FET3.mosfet_equation",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    NE_ZC_TYPE_FALSE, } };

static NeRange s_range[42] = { {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    25U, 8U, 25U, 14U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    25U, 8U, 25U, 14U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    25U, 8U, 25U, 14U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData s_assert_data[111] = { {
    "passiveBalancing/Battery (Table-Based)1", 1U, 0U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 1U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 2U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 3U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 4U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted first polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 5U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted first time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 6U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted second polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 7U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted second time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 8U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted third polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 9U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted third time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 10U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 11U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 12U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 13U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 14U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted first polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 15U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted first time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 16U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted second polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 17U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted second time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 18U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted third polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 19U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted third time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 20U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted ampere-hour rating must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 21U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted no-load voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 22U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 23U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "State of charge must be greater than or equal to minimum value of the Vector of state-of-charge values, SOC.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqual", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 24U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted first polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 25U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted first time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 26U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted second polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 27U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted second time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 28U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted third polarization resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 29U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE,
    "Faded and temperature adjusted third time constant must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 30U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 31U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 32U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 33U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 34U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 35U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 36U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 37U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 38U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 39U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 40U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 41U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 42U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 43U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 44U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 45U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 46U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 47U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 48U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 49U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 50U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 51U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 52U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 53U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 54U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 55U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 56U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 57U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 58U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 59U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 60U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 61U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 62U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 63U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 64U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:expr:analyze:RequireArgumentNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 65U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:expr:analyze:RequireArgumentNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 66U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 67U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:expr:analyze:RequireArgumentNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 68U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 69U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:expr:analyze:RequireArgumentNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 70U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/Battery (Table-Based)1", 1U, 71U, "Battery_Table_Based1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:expr:analyze:RequireArgumentNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 72U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 73U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:expr:analyze:RequireArgumentNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 74U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:expr:analyze:RequireArgumentNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 75U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 76U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:expr:analyze:RequireArgumentNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 77U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 78U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:expr:analyze:RequireArgumentNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 79U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/Battery (Table-Based)2", 1U, 80U, "Battery_Table_Based2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:expr:analyze:RequireArgumentNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 81U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 82U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:expr:analyze:RequireArgumentNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 83U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:expr:analyze:RequireArgumentNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 84U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 85U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:expr:analyze:RequireArgumentNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 86U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 87U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:expr:analyze:RequireArgumentNonnegative", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 88U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/Battery (Table-Based)3", 1U, 89U, "Battery_Table_Based3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    FALSE, "Argument of sqrt must be nonnegative.",
    "physmod:common:mf:expr:analyze:RequireArgumentNonnegative", }, {
    "passiveBalancing/D1", 1U, 90U, "D1",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/D2", 1U, 91U, "D2",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/D3", 1U, 92U, "D3",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/FET1", 1U, 93U, "FET1.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/FET1", 1U, 94U, "FET1.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/FET1", 1U, 95U, "FET1.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/FET1", 1U, 96U, "FET1.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/FET1", 1U, 97U, "FET1.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/FET1", 1U, 98U, "FET1.mosfet_equation",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/FET2", 1U, 99U, "FET2.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/FET2", 1U, 100U, "FET2.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/FET2", 1U, 101U, "FET2.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/FET2", 1U, 102U, "FET2.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/FET2", 1U, 103U, "FET2.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/FET2", 1U, 104U, "FET2.mosfet_equation",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/FET3", 1U, 105U, "FET3.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/FET3", 1U, 106U, "FET3.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/FET3", 1U, 107U, "FET3.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/FET3", 1U, 108U, "FET3.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/FET3", 1U, 109U, "FET3.diode",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "passiveBalancing/FET3", 1U, 110U, "FET3.mosfet_equation",
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", } };

static NeRange s_assert_range[111] = { {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    26U, 34U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    26U, 34U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    26U, 34U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData *s_param_assert_data = NULL;
static NeRange *s_param_assert_range = NULL;
static NeAssertData *s_initial_assert_data = NULL;
static NeRange *s_initial_assert_range = NULL;
static NeRange s_equation_range[96] = { {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    25U, 8U, 25U, 14U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    26U, 7U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    28U, 7U, 28U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    25U, 8U, 25U, 14U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    26U, 7U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    28U, 7U, 28U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    25U, 8U, 25U, 14U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    26U, 7U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc",
    28U, 7U, 28U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeRange s_icr_range[6] = { {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2020b/toolbox/physmod/elec/library/m/+ee/+sources/table_battery_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData *s_real_parameter_data = NULL;
static real_T s_constant_table0[30] = { 0.0064772810728473, 0.00361737977004768,
  0.00344585619669106, 0.00315346597824661, 0.0020941069241121,
  0.00191509386455154, 0.000572834619148222, 0.0011388683546271,
  0.00101072488301601, 0.00109338554767636, 0.00265301875816448,
  0.00111981676039765, 0.00161752813625906, 0.00130153280759591,
  0.0017547138943708, 0.000370366587789619, 0.000925138687019395,
  0.000867792101494099, 0.000662353437832612, 0.000329888238858683,
  0.00382437341121983, 0.00335084458017034, 6.99540921903032e-5,
  0.0012866080749013, 0.000316666511381357, 0.000335793536625847,
  0.000330091526981303, 0.000801284291305556, 1.76827486513599e-5,
  7.93589066577793e-5 };

static real_T s_constant_table1[30] = { 701.994643225609, 925.823429071832,
  789.333229923387, 654.594564127694, 541.309382097595, 689.289031846017,
  601.673035616931, 466.377911573388, 329.012511634609, 499.9609118488,
  650.007334256828, 649.8549409055, 938.725273795671, 349.419044951255,
  983.444269794273, 958.570032564448, 962.088556655044, 402.220930598748,
  405.712600993442, 568.259886582724, 4085.79825438844, 4973.41475833222,
  279.002198521502, 894.440824445244, 2138.18581380245, 882.678111947643,
  358.867760831677, 253.373956799259, 527.026256725996, 628.42296933896 };

static real_T s_constant_table2[30] = { 3.48407194875853, 3.55418080716149,
  3.6044040443123, 3.64321489304947, 3.68502177847119, 3.74422605890089,
  3.82967867350671, 3.94315917033962, 4.05943812577673, 4.19049029477082,
  3.49373906253632, 3.5525957055852, 3.61410230902054, 3.64896659680084,
  3.68864192779988, 3.74398921633946, 3.83940080415011, 3.94854312702762,
  4.06094828281537, 4.19030181290971, 3.50592874552606, 3.55508312112845,
  3.61515360383738, 3.65685703896214, 3.69639679484736, 3.75105784288072,
  3.85325138336218, 3.9560833530956, 4.06565632904983, 4.18799231154579 };

static real_T s_constant_table3[30] = { 0.0164025520353838, 0.0119600956597842,
  0.0119853068610826, 0.0111330643324705, 0.011822289585725, 0.0116748342939053,
  0.0112768580015193, 0.0118933795996695, 0.0120321348242062, 0.0124098156482057,
  0.00991391593917779, 0.00875043635238341, 0.00832297953681552,
  0.00872061850253288, 0.00795909444960185, 0.00856548056926203,
  0.00843330788647423, 0.00850334186162495, 0.00846602435735512,
  0.00846539753229566, 0.00933168437168862, 0.00956154423893035,
  0.00854455182155223, 0.00956139374993682, 0.0088075479017961,
  0.00938193010301517, 0.00996649091964517, 0.00960019659194077,
  0.00963753251603531, 0.00929821710866923 };

static real_T s_constant_table4[30] = { 0.00470517937000299, 0.00290275050725254,
  0.00173884757466172, 0.00166867739185738, 0.000922417169458259,
  0.00120601315196432, 0.00134107014418335, 0.00102728323615524,
  0.0010711264474031, 0.00109762911159868, 0.000293638394729167,
  0.00090641529499803, 0.001265081388855, 0.000314621823867429,
  0.00115254740207724, 0.000484496431848577, 0.000722662778209487,
  0.000788593565891369, 0.000808964645885711, 0.00079463216317268,
  0.000948546678306262, 0.000287127543931831, 0.0011835504769641,
  0.000269194023197089, 0.00061595796224652, 0.00026371910508476,
  4.84440937939109e-5, 0.00028748237598432, 0.000207425991333054,
  0.000106864004690497 };

static real_T s_constant_table5[30] = { 13.58716055813, 12.5481735435305,
  7.48337010487386, 9.44542449719648, 9.24780665009956, 13.0193706450093,
  11.2694049052077, 10.5849479160592, 9.25375749656255, 10.0189550950196,
  9.71544043458337, 12.1200192117783, 12.0370710856561, 10.9054745144726,
  9.25131458132309, 13.4646058128269, 10.2523357120003, 10.0421839086956,
  9.65077226703459, 10.0848834113777, 4.31542721208131, 22.7640233955017,
  8.29042934523224, 9.511135920973, 4.68694878468948, 7.7306550639129,
  10.8430353394808, 10.9678971839482, 11.6975516144793, 9.8777442533331 };

static real_T s_constant_table6[30] = { 0.000684064694305059, 0.0025199126996688,
  0.00146068562126075, 0.00169830619514015, 0.00167031143922319,
  0.000940978707058922, 0.000987171552806869, 0.00105023394930685,
  0.00104040490708932, 0.000906032230510198, 0.00097942088657254,
  0.000998429425096649, 0.00101421826179247, 0.00108683386499324,
  0.000980618529905995, 0.000878005470765354, 0.000893842003198636,
  0.000992613735542309, 0.000868081363505911, 0.000913369768442737,
  0.000510171787438108, 0.000143514073100964, 0.000570655533199722,
  0.000208423134005952, 0.000651263003556613, 0.000327115321338108,
  9.25394354022508e-5, 0.000107350277866256, 9.60282071092013e-5,
  0.000476753719169488 };

static real_T s_constant_table7[30] = { 50.0886429204366, 74.6890198323087,
  97.3437456249129, 69.5883917264204, 84.2274457727954, 85.6679398764468,
  91.0542017364846, 105.401951521745, 96.5977974872106, 93.3993331962355,
  61.4453898981661, 50.4659345461731, 84.5850607625997, 54.8647909590588,
  55.6603698124908, 66.7955372911173, 92.0037411543702, 81.0404007236597,
  90.8335209230926, 104.582879809587, 145.884876037851, 86.1376304381821,
  46.7659950347051, 95.8259882470036, 49.8887181712856, 100.658737711864,
  98.7286168651434, 142.45956812463, 115.401022170525, 83.7886054703847 };

static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM_P.mNumCol = 66;
  out->mM_P.mNumRow = 66;
  out->mM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
  out->mM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM.mN = 15;
  out->mM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 15);
  return out;
}

static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMM.mN = 15;
  out->mVMM.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    15);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 66;
  out->mDXM_P.mNumRow = 15;
  out->mDXM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
  out->mDXM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    18);
  return out;
}

static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM.mN = 18;
  out->mDXM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 18);
  return out;
}

static NeDsMethodOutput *ds_output_ddm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDM_P.mNumCol = 0;
  out->mDDM_P.mNumRow = 15;
  out->mDDM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDM.mN = 0;
  out->mDDM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM_P.mNumCol = 4;
  out->mDUM_P.mNumRow = 15;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mDUM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM.mN = 0;
  out->mDUM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM_P.mNumCol = 1;
  out->mDTM_P.mNumRow = 15;
  out->mDTM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM.mN = 0;
  out->mDTM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPM_P.mNumCol = 0;
  out->mDPM_P.mNumRow = 15;
  out->mDPM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDPM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dpm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPM.mN = 0;
  out->mDPM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA_P.mNumCol = 66;
  out->mA_P.mNumRow = 66;
  out->mA_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
  out->mA_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    98);
  return out;
}

static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA.mN = 98;
  out->mA.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 98);
  return out;
}

static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB_P.mNumCol = 4;
  out->mB_P.mNumRow = 66;
  out->mB_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mB_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  return out;
}

static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB.mN = 12;
  out->mB.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 12);
  return out;
}

static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC_P.mNumCol = 1;
  out->mC_P.mNumRow = 66;
  out->mC_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mC_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC.mN = 0;
  out->mC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mF.mN = 66;
  out->mF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 66);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 66;
  out->mVMF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    66);
  return out;
}

static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVPF.mN = 66;
  out->mVPF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    66);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 66;
  out->mSLF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    66);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 66;
  out->mSLF0.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 66);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 66;
  out->mDXF_P.mNumRow = 66;
  out->mDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
  out->mDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    133);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 133;
  out->mDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 133);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 4;
  out->mDUF_P.mNumRow = 66;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  return out;
}

static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF.mN = 6;
  out->mDUF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 6);
  return out;
}

static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF_P.mNumCol = 1;
  out->mDTF_P.mNumRow = 66;
  out->mDTF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF.mN = 0;
  out->mDTF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF_P.mNumCol = 0;
  out->mDDF_P.mNumRow = 66;
  out->mDDF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF.mN = 0;
  out->mDDF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpdxf_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPDXF_P.mNumCol = 0;
  out->mDPDXF_P.mNumRow = 133;
  out->mDPDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDPDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpdxf(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPDXF.mN = 0;
  out->mDPDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dwf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDWF_P.mNumCol = 0;
  out->mDWF_P.mNumRow = 66;
  out->mDWF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDWF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dwf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDWF.mN = 0;
  out->mDWF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUF_P.mNumCol = 4;
  out->mTDUF_P.mNumRow = 66;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mTDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    21);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 66;
  out->mTDXF_P.mNumRow = 66;
  out->mTDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
  out->mTDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    237);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 9;
  out->mDNF_P.mNumRow = 66;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    10);
  out->mDNF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF.mN = 0;
  out->mDNF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_V_X.mN = 66;
  out->mDNF_V_X.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 66);
  return out;
}

static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIC.mN = 66;
  out->mIC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 66);
  return out;
}

static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR.mN = 6;
  out->mICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 6);
  return out;
}

static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IM.mN = 6;
  out->mICR_IM.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    6);
  return out;
}

static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_ID.mN = 6;
  out->mICR_ID.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 6);
  return out;
}

static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IL.mN = 6;
  out->mICR_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 6);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR.mN = 0;
  out->mDXICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR_P.mNumCol = 66;
  out->mDXICR_P.mNumRow = 6;
  out->mDXICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 67);
  out->mDXICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICR.mN = 0;
  out->mDDICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICR_P.mNumCol = 0;
  out->mDDICR_P.mNumRow = 6;
  out->mDDICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUICR_P.mNumCol = 4;
  out->mTDUICR_P.mNumRow = 6;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 5);
  out->mTDUICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM_P.mNumCol = 66;
  out->mICRM_P.mNumRow = 6;
  out->mICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
  out->mICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_icrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM.mN = 0;
  out->mICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICRM_P.mNumCol = 66;
  out->mDXICRM_P.mNumRow = 0;
  out->mDXICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 67);
  out->mDXICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICRM.mN = 0;
  out->mDXICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICRM_P.mNumCol = 0;
  out->mDDICRM_P.mNumRow = 0;
  out->mDDICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICRM.mN = 0;
  out->mDDICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDUY_P.mNumCol = 4;
  out->mMDUY_P.mNumRow = 10;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mMDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDXY_P.mNumCol = 66;
  out->mMDXY_P.mNumRow = 10;
  out->mMDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
  out->mMDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUY_P.mNumCol = 4;
  out->mTDUY_P.mNumRow = 10;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mTDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  return out;
}

static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXY_P.mNumCol = 66;
  out->mTDXY_P.mNumRow = 10;
  out->mTDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
  out->mTDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    20);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 10;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 10);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 66;
  out->mDXY_P.mNumRow = 10;
  out->mDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
  out->mDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    20);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 20;
  out->mDXY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 20);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 4;
  out->mDUY_P.mNumRow = 10;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    3);
  return out;
}

static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY.mN = 3;
  out->mDUY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 3);
  return out;
}

static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY_P.mNumCol = 1;
  out->mDTY_P.mNumRow = 10;
  out->mDTY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY.mN = 0;
  out->mDTY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMODE.mN = 42;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    42);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 42;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 42);
  return out;
}

static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_R.mN = 0;
  out->mCACHE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_I.mN = 0;
  out->mCACHE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_R.mN = 0;
  out->mUPDATE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_I.mN = 0;
  out->mUPDATE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_update2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE2_R.mN = 0;
  out->mUPDATE2_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE2_I.mN = 0;
  out->mUPDATE2_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK_R.mN = 0;
  out->mLOCK_R.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK_I.mN = 0;
  out->mLOCK_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK2_R.mN = 0;
  out->mLOCK2_R.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK2_I.mN = 0;
  out->mLOCK2_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFO.mN = 0;
  out->mSFO.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFP.mN = 0;
  out->mSFP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_R.mN = 0;
  out->mINIT_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_I.mN = 0;
  out->mINIT_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOG.mN = 195;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 195);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 111;
  out->mASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    111);
  return out;
}

static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mPASSERT.mN = 0;
  out->mPASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIASSERT.mN = 0;
  out->mIASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_T.mN = 0;
  out->mDEL_T.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V.mN = 0;
  out->mDEL_V.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V0.mN = 0;
  out->mDEL_V0.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_TMAX.mN = 0;
  out->mDEL_TMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT_P.mNumCol = 66;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 67);
  out->mDXDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT.mN = 0;
  out->mDXDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT_P.mNumCol = 4;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 5);
  out->mDUDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT.mN = 0;
  out->mDUDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT_P.mNumCol = 1;
  out->mDTDELT_P.mNumRow = 0;
  out->mDTDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 2);
  out->mDTDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT.mN = 0;
  out->mDTDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_EXP.mN = 195;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    195);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 195;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    195);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 195;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    195);
  return out;
}

static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_IL.mN = 195;
  out->mOBS_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 195);
  return out;
}

static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_L.mN = 0;
  out->mDP_L.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_I.mN = 0;
  out->mDP_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_J.mN = 0;
  out->mDP_J.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_R.mN = 0;
  out->mDP_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX.mN = 0;
  out->mQX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU.mN = 0;
  out->mQU.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT.mN = 0;
  out->mQT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1.mN = 0;
  out->mQ1.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX_P.mNumCol = 66;
  out->mQX_P.mNumRow = 66;
  out->mQX_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    67);
  out->mQX_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU_P.mNumCol = 4;
  out->mQU_P.mNumRow = 66;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mQU_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT_P.mNumCol = 1;
  out->mQT_P.mNumRow = 66;
  out->mQT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1_P.mNumCol = 1;
  out->mQ1_P.mNumRow = 66;
  out->mQ1_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQ1_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVAR_TOL.mN = 66;
  out->mVAR_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    66);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 66;
  out->mEQ_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    66);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 66;
  out->mLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    66);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 66;
  out->mSLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    66);
  return out;
}

static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMIN.mN = 66;
  out->mIMIN.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 66);
  return out;
}

static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMAX.mN = 66;
  out->mIMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 66);
  return out;
}

static void release_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  if (--_ds->mRefCnt == 0) {
    _ds->mAlloc.mFreeFcn(&_ds->mAlloc, _ds);
  }
}

static void get_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  ++_ds->mRefCnt;
}

static NeDynamicSystem *diagnostics(NeDynamicSystem *ds, boolean_T kp)
{
  _NeDynamicSystem *_ds = (_NeDynamicSystem *)ds;
  (void) kp;
  ne_ds_get_reference(&_ds->mBase);
  return &_ds->mBase;
}

static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out, boolean_T kp)
{
  (void)ds;
  (void)kp;
  memcpy(out->mX, in->mX.mX, sizeof(real_T)*out->mN);
}

NeDynamicSystem *passiveBalancing_836bb176_1_dae_ds(PmAllocator *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static NeDsIoInfo input_info[4];
  static NeDsIoInfo output_info[10];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 66;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 15;
  ds->mNumEquations = 66;
  ds->mNumICResiduals = 6;
  ds->mNumModes = 42;
  ds->mNumMajorModes = 0;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 0;
  ds->mNumObservables = 195;
  ds->mNumObservableElements = 195;
  ds->mNumZcs = 42;
  ds->mNumAsserts = 111;
  ds->mNumAssertRanges = 111;
  ds->mNumParamAsserts = 0;
  ds->mNumParamAssertRanges = 0;
  ds->mNumInitialAsserts = 0;
  ds->mNumInitialAssertRanges = 0;
  ds->mNumRanges = 42;
  ds->mNumEquationRanges = 96;
  ds->mNumICRRanges = 6;
  ds->mNumFundamentalSamples = 0;
  ds->mNumDelays = 0;
  ds->mNumLogicalParameters = 0;
  ds->mNumIntegerParameters = 0;
  ds->mNumIndexParameters = 0;
  ds->mNumRealParameters = 0;
  ds->mNumLogicalDerivedParameters = 0;
  ds->mNumIntegerDerivedParameters = 0;
  ds->mNumIndexDerivedParameters = 0;
  ds->mNumRealDerivedParameters = 0;
  ds->mIsOutputLinear = TRUE;
  ds->mIsOutputSwitchedLinear = TRUE;

  /* setup ios */
  ds->mNumIo[NE_INPUT_IO_TYPE] = 4;
  input_info[0].mIdentifier = "I_TOT.iT";
  input_info[0].mM = 1;
  input_info[0].mN = 1;
  input_info[0].mName = "I_TOT.iT";
  input_info[0].mUnit = "A";
  input_info[1].mIdentifier = "FET1.G";
  input_info[1].mM = 1;
  input_info[1].mN = 1;
  input_info[1].mName = "FET1.G";
  input_info[1].mUnit = "V";
  input_info[2].mIdentifier = "FET2.G";
  input_info[2].mM = 1;
  input_info[2].mN = 1;
  input_info[2].mName = "FET2.G";
  input_info[2].mUnit = "V";
  input_info[3].mIdentifier = "FET3.G";
  input_info[3].mM = 1;
  input_info[3].mN = 1;
  input_info[3].mName = "FET3.G";
  input_info[3].mUnit = "V";
  ds->mIo[NE_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[NE_OUTPUT_IO_TYPE] = 10;
  output_info[0].mIdentifier = "Battery_Table_Based1.soc";
  output_info[0].mM = 1;
  output_info[0].mN = 1;
  output_info[0].mName = "Battery_Table_Based1.soc";
  output_info[0].mUnit = "1";
  output_info[1].mIdentifier = "Battery_Table_Based2.soc";
  output_info[1].mM = 1;
  output_info[1].mN = 1;
  output_info[1].mName = "Battery_Table_Based2.soc";
  output_info[1].mUnit = "1";
  output_info[2].mIdentifier = "Battery_Table_Based3.soc";
  output_info[2].mM = 1;
  output_info[2].mN = 1;
  output_info[2].mName = "Battery_Table_Based3.soc";
  output_info[2].mUnit = "1";
  output_info[3].mIdentifier = "Current_Sensor.I";
  output_info[3].mM = 1;
  output_info[3].mN = 1;
  output_info[3].mName = "Current_Sensor.I";
  output_info[3].mUnit = "A";
  output_info[4].mIdentifier = "Current_Sensor1.I";
  output_info[4].mM = 1;
  output_info[4].mN = 1;
  output_info[4].mName = "Current_Sensor1.I";
  output_info[4].mUnit = "A";
  output_info[5].mIdentifier = "Current_Sensor2.I";
  output_info[5].mM = 1;
  output_info[5].mN = 1;
  output_info[5].mName = "Current_Sensor2.I";
  output_info[5].mUnit = "A";
  output_info[6].mIdentifier = "Voltage_Sensor1.V";
  output_info[6].mM = 1;
  output_info[6].mN = 1;
  output_info[6].mName = "Voltage_Sensor1.V";
  output_info[6].mUnit = "V";
  output_info[7].mIdentifier = "Voltage_Sensor2.V";
  output_info[7].mM = 1;
  output_info[7].mN = 1;
  output_info[7].mName = "Voltage_Sensor2.V";
  output_info[7].mUnit = "V";
  output_info[8].mIdentifier = "Voltage_Sensor3.V";
  output_info[8].mM = 1;
  output_info[8].mN = 1;
  output_info[8].mName = "Voltage_Sensor3.V";
  output_info[8].mUnit = "V";
  output_info[9].mIdentifier = "Voltage_Sensor4.V";
  output_info[9].mM = 1;
  output_info[9].mN = 1;
  output_info[9].mName = "Voltage_Sensor4.V";
  output_info[9].mUnit = "V";
  ds->mIo[NE_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mMethods[NE_DS_METHOD_M_P] = passiveBalancing_836bb176_1_ds_m_p;
  ds->mMakeOutput[NE_DS_METHOD_M_P] = ds_output_m_p;
  ds->mMethods[NE_DS_METHOD_M] = passiveBalancing_836bb176_1_ds_m;
  ds->mMakeOutput[NE_DS_METHOD_M] = ds_output_m;
  ds->mMethods[NE_DS_METHOD_VMM] = ds_vmm;
  ds->mMakeOutput[NE_DS_METHOD_VMM] = ds_output_vmm;
  ds->mMethods[NE_DS_METHOD_DXM_P] = passiveBalancing_836bb176_1_ds_dxm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXM_P] = ds_output_dxm_p;
  ds->mMethods[NE_DS_METHOD_DXM] = passiveBalancing_836bb176_1_ds_dxm;
  ds->mMakeOutput[NE_DS_METHOD_DXM] = ds_output_dxm;
  ds->mMethods[NE_DS_METHOD_DDM_P] = ds_ddm_p;
  ds->mMakeOutput[NE_DS_METHOD_DDM_P] = ds_output_ddm_p;
  ds->mMethods[NE_DS_METHOD_DDM] = ds_ddm;
  ds->mMakeOutput[NE_DS_METHOD_DDM] = ds_output_ddm;
  ds->mMethods[NE_DS_METHOD_DUM_P] = ds_dum_p;
  ds->mMakeOutput[NE_DS_METHOD_DUM_P] = ds_output_dum_p;
  ds->mMethods[NE_DS_METHOD_DUM] = ds_dum;
  ds->mMakeOutput[NE_DS_METHOD_DUM] = ds_output_dum;
  ds->mMethods[NE_DS_METHOD_DTM_P] = ds_dtm_p;
  ds->mMakeOutput[NE_DS_METHOD_DTM_P] = ds_output_dtm_p;
  ds->mMethods[NE_DS_METHOD_DTM] = ds_dtm;
  ds->mMakeOutput[NE_DS_METHOD_DTM] = ds_output_dtm;
  ds->mMethods[NE_DS_METHOD_DPM_P] = ds_dpm_p;
  ds->mMakeOutput[NE_DS_METHOD_DPM_P] = ds_output_dpm_p;
  ds->mMethods[NE_DS_METHOD_DPM] = ds_dpm;
  ds->mMakeOutput[NE_DS_METHOD_DPM] = ds_output_dpm;
  ds->mMethods[NE_DS_METHOD_A_P] = passiveBalancing_836bb176_1_ds_a_p;
  ds->mMakeOutput[NE_DS_METHOD_A_P] = ds_output_a_p;
  ds->mMethods[NE_DS_METHOD_A] = passiveBalancing_836bb176_1_ds_a;
  ds->mMakeOutput[NE_DS_METHOD_A] = ds_output_a;
  ds->mMethods[NE_DS_METHOD_B_P] = ds_b_p;
  ds->mMakeOutput[NE_DS_METHOD_B_P] = ds_output_b_p;
  ds->mMethods[NE_DS_METHOD_B] = ds_b;
  ds->mMakeOutput[NE_DS_METHOD_B] = ds_output_b;
  ds->mMethods[NE_DS_METHOD_C_P] = ds_c_p;
  ds->mMakeOutput[NE_DS_METHOD_C_P] = ds_output_c_p;
  ds->mMethods[NE_DS_METHOD_C] = ds_c;
  ds->mMakeOutput[NE_DS_METHOD_C] = ds_output_c;
  ds->mMethods[NE_DS_METHOD_F] = passiveBalancing_836bb176_1_ds_f;
  ds->mMakeOutput[NE_DS_METHOD_F] = ds_output_f;
  ds->mMethods[NE_DS_METHOD_VMF] = passiveBalancing_836bb176_1_ds_vmf;
  ds->mMakeOutput[NE_DS_METHOD_VMF] = ds_output_vmf;
  ds->mMethods[NE_DS_METHOD_VPF] = passiveBalancing_836bb176_1_ds_vpf;
  ds->mMakeOutput[NE_DS_METHOD_VPF] = ds_output_vpf;
  ds->mMethods[NE_DS_METHOD_SLF] = passiveBalancing_836bb176_1_ds_slf;
  ds->mMakeOutput[NE_DS_METHOD_SLF] = ds_output_slf;
  ds->mMethods[NE_DS_METHOD_SLF0] = passiveBalancing_836bb176_1_ds_slf0;
  ds->mMakeOutput[NE_DS_METHOD_SLF0] = ds_output_slf0;
  ds->mMethods[NE_DS_METHOD_DXF_P] = passiveBalancing_836bb176_1_ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] = passiveBalancing_836bb176_1_ds_dxf;
  ds->mMakeOutput[NE_DS_METHOD_DXF] = ds_output_dxf;
  ds->mMethods[NE_DS_METHOD_DUF_P] = ds_duf_p;
  ds->mMakeOutput[NE_DS_METHOD_DUF_P] = ds_output_duf_p;
  ds->mMethods[NE_DS_METHOD_DUF] = passiveBalancing_836bb176_1_ds_duf;
  ds->mMakeOutput[NE_DS_METHOD_DUF] = ds_output_duf;
  ds->mMethods[NE_DS_METHOD_DTF_P] = ds_dtf_p;
  ds->mMakeOutput[NE_DS_METHOD_DTF_P] = ds_output_dtf_p;
  ds->mMethods[NE_DS_METHOD_DTF] = ds_dtf;
  ds->mMakeOutput[NE_DS_METHOD_DTF] = ds_output_dtf;
  ds->mMethods[NE_DS_METHOD_DDF_P] = ds_ddf_p;
  ds->mMakeOutput[NE_DS_METHOD_DDF_P] = ds_output_ddf_p;
  ds->mMethods[NE_DS_METHOD_DDF] = ds_ddf;
  ds->mMakeOutput[NE_DS_METHOD_DDF] = ds_output_ddf;
  ds->mMethods[NE_DS_METHOD_DPDXF_P] = ds_dpdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DPDXF_P] = ds_output_dpdxf_p;
  ds->mMethods[NE_DS_METHOD_DPDXF] = ds_dpdxf;
  ds->mMakeOutput[NE_DS_METHOD_DPDXF] = ds_output_dpdxf;
  ds->mMethods[NE_DS_METHOD_DWF_P] = ds_dwf_p;
  ds->mMakeOutput[NE_DS_METHOD_DWF_P] = ds_output_dwf_p;
  ds->mMethods[NE_DS_METHOD_DWF] = ds_dwf;
  ds->mMakeOutput[NE_DS_METHOD_DWF] = ds_output_dwf;
  ds->mMethods[NE_DS_METHOD_TDUF_P] = ds_tduf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUF_P] = ds_output_tduf_p;
  ds->mMethods[NE_DS_METHOD_TDXF_P] = passiveBalancing_836bb176_1_ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] = ds_dnf_p;
  ds->mMakeOutput[NE_DS_METHOD_DNF_P] = ds_output_dnf_p;
  ds->mMethods[NE_DS_METHOD_DNF] = ds_dnf;
  ds->mMakeOutput[NE_DS_METHOD_DNF] = ds_output_dnf;
  ds->mMethods[NE_DS_METHOD_DNF_V_X] = passiveBalancing_836bb176_1_ds_dnf_v_x;
  ds->mMakeOutput[NE_DS_METHOD_DNF_V_X] = ds_output_dnf_v_x;
  ds->mMethods[NE_DS_METHOD_IC] = passiveBalancing_836bb176_1_ds_ic;
  ds->mMakeOutput[NE_DS_METHOD_IC] = ds_output_ic;
  ds->mMethods[NE_DS_METHOD_ICR] = ds_icr;
  ds->mMakeOutput[NE_DS_METHOD_ICR] = ds_output_icr;
  ds->mMethods[NE_DS_METHOD_ICR_IM] = ds_icr_im;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IM] = ds_output_icr_im;
  ds->mMethods[NE_DS_METHOD_ICR_ID] = ds_icr_id;
  ds->mMakeOutput[NE_DS_METHOD_ICR_ID] = ds_output_icr_id;
  ds->mMethods[NE_DS_METHOD_ICR_IL] = ds_icr_il;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IL] = ds_output_icr_il;
  ds->mMethods[NE_DS_METHOD_DXICR] = ds_dxicr;
  ds->mMakeOutput[NE_DS_METHOD_DXICR] = ds_output_dxicr;
  ds->mMethods[NE_DS_METHOD_DXICR_P] = passiveBalancing_836bb176_1_ds_dxicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICR_P] = ds_output_dxicr_p;
  ds->mMethods[NE_DS_METHOD_DDICR] = ds_ddicr;
  ds->mMakeOutput[NE_DS_METHOD_DDICR] = ds_output_ddicr;
  ds->mMethods[NE_DS_METHOD_DDICR_P] = ds_ddicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICR_P] = ds_output_ddicr_p;
  ds->mMethods[NE_DS_METHOD_TDUICR_P] = ds_tduicr_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUICR_P] = ds_output_tduicr_p;
  ds->mMethods[NE_DS_METHOD_ICRM_P] = passiveBalancing_836bb176_1_ds_icrm_p;
  ds->mMakeOutput[NE_DS_METHOD_ICRM_P] = ds_output_icrm_p;
  ds->mMethods[NE_DS_METHOD_ICRM] = ds_icrm;
  ds->mMakeOutput[NE_DS_METHOD_ICRM] = ds_output_icrm;
  ds->mMethods[NE_DS_METHOD_DXICRM_P] = passiveBalancing_836bb176_1_ds_dxicrm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICRM_P] = ds_output_dxicrm_p;
  ds->mMethods[NE_DS_METHOD_DXICRM] = ds_dxicrm;
  ds->mMakeOutput[NE_DS_METHOD_DXICRM] = ds_output_dxicrm;
  ds->mMethods[NE_DS_METHOD_DDICRM_P] = ds_ddicrm_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICRM_P] = ds_output_ddicrm_p;
  ds->mMethods[NE_DS_METHOD_DDICRM] = ds_ddicrm;
  ds->mMakeOutput[NE_DS_METHOD_DDICRM] = ds_output_ddicrm;
  ds->mMethods[NE_DS_METHOD_MDUY_P] = ds_mduy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDUY_P] = ds_output_mduy_p;
  ds->mMethods[NE_DS_METHOD_MDXY_P] = passiveBalancing_836bb176_1_ds_mdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDXY_P] = ds_output_mdxy_p;
  ds->mMethods[NE_DS_METHOD_TDUY_P] = ds_tduy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] = passiveBalancing_836bb176_1_ds_tdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] = passiveBalancing_836bb176_1_ds_y;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] = passiveBalancing_836bb176_1_ds_dxy_p;
  ds->mMakeOutput[NE_DS_METHOD_DXY_P] = ds_output_dxy_p;
  ds->mMethods[NE_DS_METHOD_DXY] = ds_dxy;
  ds->mMakeOutput[NE_DS_METHOD_DXY] = ds_output_dxy;
  ds->mMethods[NE_DS_METHOD_DUY_P] = ds_duy_p;
  ds->mMakeOutput[NE_DS_METHOD_DUY_P] = ds_output_duy_p;
  ds->mMethods[NE_DS_METHOD_DUY] = ds_duy;
  ds->mMakeOutput[NE_DS_METHOD_DUY] = ds_output_duy;
  ds->mMethods[NE_DS_METHOD_DTY_P] = ds_dty_p;
  ds->mMakeOutput[NE_DS_METHOD_DTY_P] = ds_output_dty_p;
  ds->mMethods[NE_DS_METHOD_DTY] = ds_dty;
  ds->mMakeOutput[NE_DS_METHOD_DTY] = ds_output_dty;
  ds->mMethods[NE_DS_METHOD_MODE] = passiveBalancing_836bb176_1_ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] = passiveBalancing_836bb176_1_ds_zc;
  ds->mMakeOutput[NE_DS_METHOD_ZC] = ds_output_zc;
  ds->mMethods[NE_DS_METHOD_CACHE_R] = ds_cache_r;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_R] = ds_output_cache_r;
  ds->mMethods[NE_DS_METHOD_CACHE_I] = ds_cache_i;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_I] = ds_output_cache_i;
  ds->mMethods[NE_DS_METHOD_UPDATE_R] = ds_update_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_R] = ds_output_update_r;
  ds->mMethods[NE_DS_METHOD_UPDATE_I] = ds_update_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_I] = ds_output_update_i;
  ds->mMethods[NE_DS_METHOD_UPDATE2_R] = ds_update2_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_R] = ds_output_update2_r;
  ds->mMethods[NE_DS_METHOD_UPDATE2_I] = ds_update2_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_I] = ds_output_update2_i;
  ds->mMethods[NE_DS_METHOD_LOCK_R] = ds_lock_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_R] = ds_output_lock_r;
  ds->mMethods[NE_DS_METHOD_LOCK_I] = ds_lock_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_I] = ds_output_lock_i;
  ds->mMethods[NE_DS_METHOD_LOCK2_R] = ds_lock2_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_R] = ds_output_lock2_r;
  ds->mMethods[NE_DS_METHOD_LOCK2_I] = ds_lock2_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_I] = ds_output_lock2_i;
  ds->mMethods[NE_DS_METHOD_SFO] = ds_sfo;
  ds->mMakeOutput[NE_DS_METHOD_SFO] = ds_output_sfo;
  ds->mMethods[NE_DS_METHOD_SFP] = ds_sfp;
  ds->mMakeOutput[NE_DS_METHOD_SFP] = ds_output_sfp;
  ds->mMethods[NE_DS_METHOD_INIT_R] = ds_init_r;
  ds->mMakeOutput[NE_DS_METHOD_INIT_R] = ds_output_init_r;
  ds->mMethods[NE_DS_METHOD_INIT_I] = ds_init_i;
  ds->mMakeOutput[NE_DS_METHOD_INIT_I] = ds_output_init_i;
  ds->mMethods[NE_DS_METHOD_LOG] = passiveBalancing_836bb176_1_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] = passiveBalancing_836bb176_1_ds_assert;
  ds->mMakeOutput[NE_DS_METHOD_ASSERT] = ds_output_assert;
  ds->mMethods[NE_DS_METHOD_PASSERT] = ds_passert;
  ds->mMakeOutput[NE_DS_METHOD_PASSERT] = ds_output_passert;
  ds->mMethods[NE_DS_METHOD_IASSERT] = ds_iassert;
  ds->mMakeOutput[NE_DS_METHOD_IASSERT] = ds_output_iassert;
  ds->mMethods[NE_DS_METHOD_DEL_T] = ds_del_t;
  ds->mMakeOutput[NE_DS_METHOD_DEL_T] = ds_output_del_t;
  ds->mMethods[NE_DS_METHOD_DEL_V] = ds_del_v;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V] = ds_output_del_v;
  ds->mMethods[NE_DS_METHOD_DEL_V0] = ds_del_v0;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V0] = ds_output_del_v0;
  ds->mMethods[NE_DS_METHOD_DEL_TMAX] = ds_del_tmax;
  ds->mMakeOutput[NE_DS_METHOD_DEL_TMAX] = ds_output_del_tmax;
  ds->mMethods[NE_DS_METHOD_DXDELT_P] = passiveBalancing_836bb176_1_ds_dxdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT_P] = ds_output_dxdelt_p;
  ds->mMethods[NE_DS_METHOD_DXDELT] = ds_dxdelt;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT] = ds_output_dxdelt;
  ds->mMethods[NE_DS_METHOD_DUDELT_P] = ds_dudelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT_P] = ds_output_dudelt_p;
  ds->mMethods[NE_DS_METHOD_DUDELT] = ds_dudelt;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT] = ds_output_dudelt;
  ds->mMethods[NE_DS_METHOD_DTDELT_P] = ds_dtdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT_P] = ds_output_dtdelt_p;
  ds->mMethods[NE_DS_METHOD_DTDELT] = ds_dtdelt;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT] = ds_output_dtdelt;
  ds->mMethods[NE_DS_METHOD_OBS_EXP] = passiveBalancing_836bb176_1_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] = passiveBalancing_836bb176_1_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] = passiveBalancing_836bb176_1_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_OBS_IL] = passiveBalancing_836bb176_1_ds_obs_il;
  ds->mMakeOutput[NE_DS_METHOD_OBS_IL] = ds_output_obs_il;
  ds->mMethods[NE_DS_METHOD_DP_L] = ds_dp_l;
  ds->mMakeOutput[NE_DS_METHOD_DP_L] = ds_output_dp_l;
  ds->mMethods[NE_DS_METHOD_DP_I] = ds_dp_i;
  ds->mMakeOutput[NE_DS_METHOD_DP_I] = ds_output_dp_i;
  ds->mMethods[NE_DS_METHOD_DP_J] = ds_dp_j;
  ds->mMakeOutput[NE_DS_METHOD_DP_J] = ds_output_dp_j;
  ds->mMethods[NE_DS_METHOD_DP_R] = ds_dp_r;
  ds->mMakeOutput[NE_DS_METHOD_DP_R] = ds_output_dp_r;
  ds->mMethods[NE_DS_METHOD_QX] = ds_qx;
  ds->mMakeOutput[NE_DS_METHOD_QX] = ds_output_qx;
  ds->mMethods[NE_DS_METHOD_QU] = ds_qu;
  ds->mMakeOutput[NE_DS_METHOD_QU] = ds_output_qu;
  ds->mMethods[NE_DS_METHOD_QT] = ds_qt;
  ds->mMakeOutput[NE_DS_METHOD_QT] = ds_output_qt;
  ds->mMethods[NE_DS_METHOD_Q1] = ds_q1;
  ds->mMakeOutput[NE_DS_METHOD_Q1] = ds_output_q1;
  ds->mMethods[NE_DS_METHOD_QX_P] = passiveBalancing_836bb176_1_ds_qx_p;
  ds->mMakeOutput[NE_DS_METHOD_QX_P] = ds_output_qx_p;
  ds->mMethods[NE_DS_METHOD_QU_P] = ds_qu_p;
  ds->mMakeOutput[NE_DS_METHOD_QU_P] = ds_output_qu_p;
  ds->mMethods[NE_DS_METHOD_QT_P] = ds_qt_p;
  ds->mMakeOutput[NE_DS_METHOD_QT_P] = ds_output_qt_p;
  ds->mMethods[NE_DS_METHOD_Q1_P] = ds_q1_p;
  ds->mMakeOutput[NE_DS_METHOD_Q1_P] = ds_output_q1_p;
  ds->mMethods[NE_DS_METHOD_VAR_TOL] = passiveBalancing_836bb176_1_ds_var_tol;
  ds->mMakeOutput[NE_DS_METHOD_VAR_TOL] = ds_output_var_tol;
  ds->mMethods[NE_DS_METHOD_EQ_TOL] = passiveBalancing_836bb176_1_ds_eq_tol;
  ds->mMakeOutput[NE_DS_METHOD_EQ_TOL] = ds_output_eq_tol;
  ds->mMethods[NE_DS_METHOD_LV] = passiveBalancing_836bb176_1_ds_lv;
  ds->mMakeOutput[NE_DS_METHOD_LV] = ds_output_lv;
  ds->mMethods[NE_DS_METHOD_SLV] = passiveBalancing_836bb176_1_ds_slv;
  ds->mMakeOutput[NE_DS_METHOD_SLV] = ds_output_slv;
  ds->mMethods[NE_DS_METHOD_IMIN] = passiveBalancing_836bb176_1_ds_imin;
  ds->mMakeOutput[NE_DS_METHOD_IMIN] = ds_output_imin;
  ds->mMethods[NE_DS_METHOD_IMAX] = passiveBalancing_836bb176_1_ds_imax;
  ds->mMakeOutput[NE_DS_METHOD_IMAX] = ds_output_imax;

  /* equation data */
  ds->mEquationData = s_equation_data;

  /* icr data */
  ds->mICRData = s_icr_data;

  /* continuous variable data */
  ds->mVariableData = s_variable_data;

  /* discrete variable data */
  ds->mDiscreteData = s_discrete_data;

  /* observable data */
  ds->mObservableData = s_observable_data;

  /* major mode data */
  ds->mMajorModeData = s_major_mode_data;

  /* zc data */
  ds->mZCData = s_zc_data;

  /* ranges */
  ds->mRanges = s_range;

  /* assert data */
  ds->mAssertData = s_assert_data;

  /* assert ranges */
  ds->mAssertRanges = s_assert_range;

  /* param assert data */
  ds->mParamAssertData = s_param_assert_data;

  /* param assert ranges */
  ds->mParamAssertRanges = s_param_assert_range;

  /* initial assert data */
  ds->mInitialAssertData = s_initial_assert_data;

  /* initial assert ranges */
  ds->mInitialAssertRanges = s_initial_assert_range;

  /* equation ranges */
  ds->mEquationRanges = s_equation_range;

  /* icr ranges */
  ds->mICRRanges = s_icr_range;

  /* parameters */
  ds->mLogicalParameters = s_logical_parameter_data;
  ds->mIntegerParameters = s_integer_parameter_data;
  ds->mIndexParameters = s_index_parameter_data;
  ds->mRealParameters = s_real_parameter_data;

  /* constant tables */
  _ds->mTable0 = s_constant_table0;
  _ds->mTable1 = s_constant_table1;
  _ds->mTable2 = s_constant_table2;
  _ds->mTable3 = s_constant_table3;
  _ds->mTable4 = s_constant_table4;
  _ds->mTable5 = s_constant_table5;
  _ds->mTable6 = s_constant_table6;
  _ds->mTable7 = s_constant_table7;
  return (NeDynamicSystem *)_ds;
}

static int32_T ds_passert (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_iassert (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_del_v (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_del_v0 (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_del_tmax (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_del_t (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxdelt (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dudelt (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dudelt_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDUDELT_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dtdelt (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dtdelt_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDTDELT_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_cache_r (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_init_r (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_update_r (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_lock_r (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_cache_i (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_init_i (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_update_i (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_lock_i (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_update2_r (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_lock2_r (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_update2_i (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_lock2_i (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_sfp (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_sfo (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_duf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDUF_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 66ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 6;
  out.mJc[2] = 6;
  out.mJc[3] = 6;
  out.mJc[4] = 6;
  out.mIr[0] = 1;
  out.mIr[1] = 6;
  out.mIr[2] = 11;
  out.mIr[3] = 15;
  out.mIr[4] = 29;
  out.mIr[5] = 43;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dtf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dtf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDTF_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 66ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDDF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 66ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_b (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mB;
  out.mX[0] = 1.0;
  out.mX[1] = 1.0;
  out.mX[2] = 1.0;
  out.mX[3] = 1.0;
  out.mX[4] = 1.0;
  out.mX[5] = 1.0;
  out.mX[6] = 1.0;
  out.mX[7] = 1.0;
  out.mX[8] = 1.0;
  out.mX[9] = 1.0;
  out.mX[10] = 1.0;
  out.mX[11] = 1.0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_b_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mB_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 66ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 12;
  out.mJc[2] = 12;
  out.mJc[3] = 12;
  out.mJc[4] = 12;
  out.mIr[0] = 0;
  out.mIr[1] = 2;
  out.mIr[2] = 3;
  out.mIr[3] = 4;
  out.mIr[4] = 5;
  out.mIr[5] = 7;
  out.mIr[6] = 8;
  out.mIr[7] = 9;
  out.mIr[8] = 10;
  out.mIr[9] = 12;
  out.mIr[10] = 13;
  out.mIr[11] = 14;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_c (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_c_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mC_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 66ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_tduf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mTDUF_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 66ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 18;
  out.mJc[2] = 19;
  out.mJc[3] = 20;
  out.mJc[4] = 21;
  out.mIr[0] = 0;
  out.mIr[1] = 1;
  out.mIr[2] = 2;
  out.mIr[3] = 3;
  out.mIr[4] = 4;
  out.mIr[5] = 5;
  out.mIr[6] = 6;
  out.mIr[7] = 7;
  out.mIr[8] = 8;
  out.mIr[9] = 9;
  out.mIr[10] = 10;
  out.mIr[11] = 11;
  out.mIr[12] = 12;
  out.mIr[13] = 13;
  out.mIr[14] = 14;
  out.mIr[15] = 15;
  out.mIr[16] = 29;
  out.mIr[17] = 43;
  out.mIr[18] = 61;
  out.mIr[19] = 63;
  out.mIr[20] = 65;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dwf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dwf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDWF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 66ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dpdxf (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dpdxf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDPDXF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 133ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dnf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dnf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDNF_P;
  out.mNumCol = 9ULL;
  out.mNumRow = 66ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_icr (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mICR;
  out.mX[0] = 0.0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = 0.0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_icr_im (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  (void)t1;
  (void)LC;
  out = t2->mICR_IM;
  out.mX[0] = 3;
  out.mX[1] = 3;
  out.mX[2] = 3;
  out.mX[3] = 3;
  out.mX[4] = 3;
  out.mX[5] = 3;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_icr_id (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mICR_ID;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_icr_il (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mICR_IL;
  out.mX[0] = true;
  out.mX[1] = true;
  out.mX[2] = true;
  out.mX[3] = true;
  out.mX[4] = true;
  out.mX[5] = true;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxicr (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddicr (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddicr_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDDICR_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_tduicr_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mTDUICR_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_icrm (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxicrm (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddicrm (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddicrm_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDDICRM_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_ddm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDDM_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 15ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dum (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dum_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDUM_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 15ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dtm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dtm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDTM_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 15ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dpm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dpm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDPM_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 15ULL;
  out.mJc[0] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_vmm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mVMM;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = true;
  out.mX[3] = true;
  out.mX[4] = true;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = true;
  out.mX[8] = true;
  out.mX[9] = true;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = true;
  out.mX[13] = true;
  out.mX[14] = true;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dp_l (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dp_i (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dp_j (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dp_r (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_qx (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_qu (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_qt (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_q1 (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_qu_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mQU_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 66ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_qt_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mQT_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 66ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_q1_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mQ1_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 66ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dxy (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mDXY;
  out.mX[0] = -0.05;
  out.mX[1] = -0.05;
  out.mX[2] = 1.0;
  out.mX[3] = 0.0;
  out.mX[4] = 1.0;
  out.mX[5] = -0.05;
  out.mX[6] = 1.0;
  out.mX[7] = 1.0;
  out.mX[8] = 0.05;
  out.mX[9] = 0.05;
  out.mX[10] = 1.0;
  out.mX[11] = 0.05;
  out.mX[12] = 0.05;
  out.mX[13] = -0.05;
  out.mX[14] = -1.0;
  out.mX[15] = 1.0;
  out.mX[16] = 1.0;
  out.mX[17] = 0.05;
  out.mX[18] = 0.05;
  out.mX[19] = 1.0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_duy (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mDUY;
  out.mX[0] = 1.0;
  out.mX[1] = 1.0;
  out.mX[2] = 1.0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_duy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDUY_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 10ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 3;
  out.mJc[2] = 3;
  out.mJc[3] = 3;
  out.mJc[4] = 3;
  out.mIr[0] = 3;
  out.mIr[1] = 4;
  out.mIr[2] = 5;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_mduy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mMDUY_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 10ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_tduy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mTDUY_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 10ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 3;
  out.mJc[2] = 3;
  out.mJc[3] = 3;
  out.mJc[4] = 3;
  out.mIr[0] = 3;
  out.mIr[1] = 4;
  out.mIr[2] = 5;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dty (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *t2)
{
  (void)t1;
  (void)LC;
  (void)LC;
  (void)t2;
  return 0;
}

static int32_T ds_dty_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mDTY_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 10ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)LC;
  (void)t2;
  return 0;
}
