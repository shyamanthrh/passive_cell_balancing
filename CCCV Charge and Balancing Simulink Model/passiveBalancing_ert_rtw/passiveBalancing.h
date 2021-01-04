/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: passiveBalancing.h
 *
 * Code generated for Simulink model 'passiveBalancing'.
 *
 * Model version                  : 3.19
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Mon Jan  4 22:03:15 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_passiveBalancing_h_
#define RTW_HEADER_passiveBalancing_h_
#include <math.h>
#include <string.h>
#ifndef passiveBalancing_COMMON_INCLUDES_
#define passiveBalancing_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "nesl_rtw.h"
#include "passiveBalancing_836bb176_1_gateway.h"
#endif                                 /* passiveBalancing_COMMON_INCLUDES_ */

#include "passiveBalancing_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T INPUT_1_1_1[4];               /* '<S86>/INPUT_1_1_1' */
  real_T INPUT_3_1_1[4];               /* '<S86>/INPUT_3_1_1' */
  real_T INPUT_2_1_1[4];               /* '<S86>/INPUT_2_1_1' */
  real_T INPUT_4_1_1[4];               /* '<S86>/INPUT_4_1_1' */
  real_T STATE_1[108];                 /* '<S86>/STATE_1' */
  real_T OUTPUT_1_0[7];                /* '<S86>/OUTPUT_1_0' */
  real_T s1;                           /* '<Root>/balancing logic' */
  real_T s2;                           /* '<Root>/balancing logic' */
  real_T s3;                           /* '<Root>/balancing logic' */
  real_T MODE;                         /* '<S12>/Chart' */
} B_passiveBalancing_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay1_DSTATE;            /* '<S12>/Unit Delay1' */
  real_T UnitDelay2_DSTATE;            /* '<S12>/Unit Delay2' */
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  real_T Integrator_DSTATE;            /* '<S54>/Integrator' */
  real_T Filter_DSTATE;                /* '<S49>/Filter' */
  real_T INPUT_1_1_1_Discrete[2];      /* '<S86>/INPUT_1_1_1' */
  real_T INPUT_3_1_1_Discrete[2];      /* '<S86>/INPUT_3_1_1' */
  real_T INPUT_2_1_1_Discrete[2];      /* '<S86>/INPUT_2_1_1' */
  real_T INPUT_4_1_1_Discrete[2];      /* '<S86>/INPUT_4_1_1' */
  real_T STATE_1_Discrete[66];         /* '<S86>/STATE_1' */
  real_T OUTPUT_1_0_Discrete;          /* '<S86>/OUTPUT_1_0' */
  real_T OUTPUT_1_1_Discrete;          /* '<S86>/OUTPUT_1_1' */
  void* STATE_1_Simulator;             /* '<S86>/STATE_1' */
  void* STATE_1_SimData;               /* '<S86>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S86>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S86>/STATE_1' */
  void* STATE_1_TsIndex;               /* '<S86>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S86>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S86>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S86>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S86>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsIndex;            /* '<S86>/OUTPUT_1_0' */
  void* OUTPUT_1_1_Simulator;          /* '<S86>/OUTPUT_1_1' */
  void* OUTPUT_1_1_SimData;            /* '<S86>/OUTPUT_1_1' */
  void* OUTPUT_1_1_DiagMgr;            /* '<S86>/OUTPUT_1_1' */
  void* OUTPUT_1_1_ZcLogger;           /* '<S86>/OUTPUT_1_1' */
  void* OUTPUT_1_1_TsIndex;            /* '<S86>/OUTPUT_1_1' */
  int_T STATE_1_Modes[42];             /* '<S86>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S86>/OUTPUT_1_0' */
  int_T OUTPUT_1_1_Modes;              /* '<S86>/OUTPUT_1_1' */
  uint16_T temporalCounter_i1;         /* '<S12>/Chart' */
  uint8_T is_active_c1_passiveBalancing;/* '<Root>/balancing logic' */
  uint8_T is_c1_passiveBalancing;      /* '<Root>/balancing logic' */
  uint8_T is_balancing;                /* '<Root>/balancing logic' */
  uint8_T temporalCounter_i1_p;        /* '<Root>/balancing logic' */
  uint8_T is_active_c3_passiveBalancing;/* '<S12>/Chart' */
  uint8_T is_c3_passiveBalancing;      /* '<S12>/Chart' */
  boolean_T STATE_1_FirstOutput;       /* '<S86>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S86>/OUTPUT_1_0' */
  boolean_T OUTPUT_1_1_FirstOutput;    /* '<S86>/OUTPUT_1_1' */
} DW_passiveBalancing_T;

/* Continuous states (default storage) */
typedef struct {
  real_T TransferFcn1_CSTATE;          /* '<Root>/Transfer Fcn1' */
  real_T TransferFcn2_CSTATE;          /* '<Root>/Transfer Fcn2' */
  real_T TransferFcn3_CSTATE;          /* '<Root>/Transfer Fcn3' */
} X_passiveBalancing_T;

/* State derivatives (default storage) */
typedef struct {
  real_T TransferFcn1_CSTATE;          /* '<Root>/Transfer Fcn1' */
  real_T TransferFcn2_CSTATE;          /* '<Root>/Transfer Fcn2' */
  real_T TransferFcn3_CSTATE;          /* '<Root>/Transfer Fcn3' */
} XDot_passiveBalancing_T;

/* State disabled  */
typedef struct {
  boolean_T TransferFcn1_CSTATE;       /* '<Root>/Transfer Fcn1' */
  boolean_T TransferFcn2_CSTATE;       /* '<Root>/Transfer Fcn2' */
  boolean_T TransferFcn3_CSTATE;       /* '<Root>/Transfer Fcn3' */
} XDis_passiveBalancing_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Real-time Model Data Structure */
struct tag_RTM_passiveBalancing_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_passiveBalancing_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[3];
  real_T odeF[3][3];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block signals (default storage) */
extern B_passiveBalancing_T passiveBalancing_B;

/* Continuous states (default storage) */
extern X_passiveBalancing_T passiveBalancing_X;

/* Block states (default storage) */
extern DW_passiveBalancing_T passiveBalancing_DW;

/* Model entry point functions */
extern void passiveBalancing_initialize(void);
extern void passiveBalancing_step(void);
extern void passiveBalancing_terminate(void);

/* Real-time Model object */
extern RT_MODEL_passiveBalancing_T *const passiveBalancing_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S12>/SOC' : Unused code path elimination
 * Block '<S12>/V I' : Unused code path elimination
 * Block '<S12>/voltages currents' : Unused code path elimination
 * Block '<S65>/Kt' : Eliminated nontunable gain of 1
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'passiveBalancing'
 * '<S1>'   : 'passiveBalancing/CCCV // Discharge'
 * '<S2>'   : 'passiveBalancing/PS-Simulink Converter1'
 * '<S3>'   : 'passiveBalancing/PS-Simulink Converter10'
 * '<S4>'   : 'passiveBalancing/PS-Simulink Converter13'
 * '<S5>'   : 'passiveBalancing/PS-Simulink Converter2'
 * '<S6>'   : 'passiveBalancing/PS-Simulink Converter3'
 * '<S7>'   : 'passiveBalancing/PS-Simulink Converter4'
 * '<S8>'   : 'passiveBalancing/PS-Simulink Converter5'
 * '<S9>'   : 'passiveBalancing/PS-Simulink Converter6'
 * '<S10>'  : 'passiveBalancing/PS-Simulink Converter7'
 * '<S11>'  : 'passiveBalancing/PS-Simulink Converter8'
 * '<S12>'  : 'passiveBalancing/Scopes'
 * '<S13>'  : 'passiveBalancing/Simulink-PS Converter'
 * '<S14>'  : 'passiveBalancing/Simulink-PS Converter1'
 * '<S15>'  : 'passiveBalancing/Simulink-PS Converter2'
 * '<S16>'  : 'passiveBalancing/Simulink-PS Converter3'
 * '<S17>'  : 'passiveBalancing/Solver Configuration'
 * '<S18>'  : 'passiveBalancing/balancing logic'
 * '<S19>'  : 'passiveBalancing/CCCV // Discharge/Compare To Constant2'
 * '<S20>'  : 'passiveBalancing/CCCV // Discharge/PID Controller'
 * '<S21>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Anti-windup'
 * '<S22>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/D Gain'
 * '<S23>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Filter'
 * '<S24>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Filter ICs'
 * '<S25>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/I Gain'
 * '<S26>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Ideal P Gain'
 * '<S27>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Ideal P Gain Fdbk'
 * '<S28>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Integrator'
 * '<S29>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Integrator ICs'
 * '<S30>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/N Copy'
 * '<S31>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/N Gain'
 * '<S32>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/P Copy'
 * '<S33>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Parallel P Gain'
 * '<S34>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Reset Signal'
 * '<S35>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Saturation'
 * '<S36>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Saturation Fdbk'
 * '<S37>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Sum'
 * '<S38>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Sum Fdbk'
 * '<S39>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Tracking Mode'
 * '<S40>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Tracking Mode Sum'
 * '<S41>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Tsamp - Integral'
 * '<S42>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Tsamp - Ngain'
 * '<S43>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/postSat Signal'
 * '<S44>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/preSat Signal'
 * '<S45>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S46>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S47>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S48>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/D Gain/Internal Parameters'
 * '<S49>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S50>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S51>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/I Gain/Internal Parameters'
 * '<S52>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Ideal P Gain/Passthrough'
 * '<S53>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S54>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Integrator/Discrete'
 * '<S55>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Integrator ICs/Internal IC'
 * '<S56>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/N Copy/Disabled'
 * '<S57>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/N Gain/Internal Parameters'
 * '<S58>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/P Copy/Disabled'
 * '<S59>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S60>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Reset Signal/Disabled'
 * '<S61>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Saturation/Enabled'
 * '<S62>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Saturation Fdbk/Disabled'
 * '<S63>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Sum/Sum_PID'
 * '<S64>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Sum Fdbk/Disabled'
 * '<S65>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Tracking Mode/Enabled'
 * '<S66>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Tracking Mode Sum/Tracking Mode'
 * '<S67>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Tsamp - Integral/Passthrough'
 * '<S68>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S69>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/postSat Signal/Forward_Path'
 * '<S70>'  : 'passiveBalancing/CCCV // Discharge/PID Controller/preSat Signal/Forward_Path'
 * '<S71>'  : 'passiveBalancing/PS-Simulink Converter1/EVAL_KEY'
 * '<S72>'  : 'passiveBalancing/PS-Simulink Converter10/EVAL_KEY'
 * '<S73>'  : 'passiveBalancing/PS-Simulink Converter13/EVAL_KEY'
 * '<S74>'  : 'passiveBalancing/PS-Simulink Converter2/EVAL_KEY'
 * '<S75>'  : 'passiveBalancing/PS-Simulink Converter3/EVAL_KEY'
 * '<S76>'  : 'passiveBalancing/PS-Simulink Converter4/EVAL_KEY'
 * '<S77>'  : 'passiveBalancing/PS-Simulink Converter5/EVAL_KEY'
 * '<S78>'  : 'passiveBalancing/PS-Simulink Converter6/EVAL_KEY'
 * '<S79>'  : 'passiveBalancing/PS-Simulink Converter7/EVAL_KEY'
 * '<S80>'  : 'passiveBalancing/PS-Simulink Converter8/EVAL_KEY'
 * '<S81>'  : 'passiveBalancing/Scopes/Chart'
 * '<S82>'  : 'passiveBalancing/Simulink-PS Converter/EVAL_KEY'
 * '<S83>'  : 'passiveBalancing/Simulink-PS Converter1/EVAL_KEY'
 * '<S84>'  : 'passiveBalancing/Simulink-PS Converter2/EVAL_KEY'
 * '<S85>'  : 'passiveBalancing/Simulink-PS Converter3/EVAL_KEY'
 * '<S86>'  : 'passiveBalancing/Solver Configuration/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_passiveBalancing_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
