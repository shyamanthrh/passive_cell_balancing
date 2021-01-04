/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: passiveBalancing.c
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

#include "passiveBalancing.h"
#include "passiveBalancing_private.h"

/* Named constants for Chart: '<S12>/Chart' */
#define passiveBalan_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define passiveBalancing_IN_CHARGE     ((uint8_T)1U)
#define passiveBalancing_IN_DISCHARGE  ((uint8_T)2U)
#define passiveBalancing_IN_wait       ((uint8_T)3U)

/* Named constants for Chart: '<Root>/balancing logic' */
#define passiveBalancing_IN_balancing  ((uint8_T)1U)
#define passiveBalancing_IN_cell1_low  ((uint8_T)1U)
#define passiveBalancing_IN_cell2_low  ((uint8_T)2U)
#define passiveBalancing_IN_cell3_low  ((uint8_T)3U)
#define passiveBalancing_IN_finish     ((uint8_T)2U)
#define passiveBalancing_IN_init       ((uint8_T)3U)

/* Block signals (default storage) */
B_passiveBalancing_T passiveBalancing_B;

/* Continuous states */
X_passiveBalancing_T passiveBalancing_X;

/* Block states (default storage) */
DW_passiveBalancing_T passiveBalancing_DW;

/* Real-time model */
static RT_MODEL_passiveBalancing_T passiveBalancing_M_;
RT_MODEL_passiveBalancing_T *const passiveBalancing_M = &passiveBalancing_M_;

/* Forward declaration for local functions */
static real_T passiveBalancing_maximum(const real_T x[3]);
static real_T passiveBalancing_minimum(const real_T x[3]);
static void passiveBalancing_sort(real_T x[3], int32_T idx[3]);
static real_T passiveBalancing_lowestCell(real_T a, real_T b, real_T c);
static void passiv_enter_internal_balancing(const real_T *TransferFcn3, const
  real_T *TransferFcn1, const real_T *TransferFcn2);

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 3;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  passiveBalancing_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  passiveBalancing_step();
  passiveBalancing_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  passiveBalancing_step();
  passiveBalancing_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Function for Chart: '<Root>/balancing logic' */
static real_T passiveBalancing_maximum(const real_T x[3])
{
  real_T ex;
  int32_T idx;
  int32_T k;
  boolean_T exitg1;
  if (!rtIsNaN(x[0])) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (!rtIsNaN(x[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = x[0];
  } else {
    ex = x[idx - 1];
    while (idx + 1 <= 3) {
      if (ex < x[idx]) {
        ex = x[idx];
      }

      idx++;
    }
  }

  return ex;
}

/* Function for Chart: '<Root>/balancing logic' */
static real_T passiveBalancing_minimum(const real_T x[3])
{
  real_T ex;
  int32_T idx;
  int32_T k;
  boolean_T exitg1;
  if (!rtIsNaN(x[0])) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (!rtIsNaN(x[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = x[0];
  } else {
    ex = x[idx - 1];
    while (idx + 1 <= 3) {
      if (ex > x[idx]) {
        ex = x[idx];
      }

      idx++;
    }
  }

  return ex;
}

/* Function for Chart: '<Root>/balancing logic' */
static void passiveBalancing_sort(real_T x[3], int32_T idx[3])
{
  real_T b_x_idx_0;
  real_T b_x_idx_1;
  real_T b_x_idx_2;
  b_x_idx_0 = x[0];
  b_x_idx_1 = x[1];
  b_x_idx_2 = x[2];
  if ((x[0] <= x[1]) || rtIsNaN(x[1])) {
    if ((x[1] <= x[2]) || rtIsNaN(x[2])) {
      idx[0] = 1;
      idx[1] = 2;
      idx[2] = 3;
    } else if (x[0] <= x[2]) {
      idx[0] = 1;
      idx[1] = 3;
      idx[2] = 2;
      b_x_idx_1 = x[2];
      b_x_idx_2 = x[1];
    } else {
      idx[0] = 3;
      idx[1] = 1;
      idx[2] = 2;
      b_x_idx_2 = x[1];
      b_x_idx_1 = x[0];
      b_x_idx_0 = x[2];
    }
  } else if ((x[0] <= x[2]) || rtIsNaN(x[2])) {
    idx[0] = 2;
    idx[1] = 1;
    idx[2] = 3;
    b_x_idx_0 = x[1];
    b_x_idx_1 = x[0];
  } else if (x[1] <= x[2]) {
    idx[0] = 2;
    idx[1] = 3;
    idx[2] = 1;
    b_x_idx_0 = x[1];
    b_x_idx_1 = x[2];
    b_x_idx_2 = x[0];
  } else {
    idx[0] = 3;
    idx[1] = 2;
    idx[2] = 1;
    b_x_idx_0 = x[2];
    b_x_idx_2 = x[0];
  }

  x[0] = b_x_idx_0;
  x[1] = b_x_idx_1;
  x[2] = b_x_idx_2;
}

/* Function for Chart: '<Root>/balancing logic' */
static real_T passiveBalancing_lowestCell(real_T a, real_T b, real_T c)
{
  real_T x[3];
  int32_T iidx[3];
  x[0] = a;
  x[1] = b;
  x[2] = c;
  passiveBalancing_sort(x, iidx);
  return iidx[0];
}

/* Function for Chart: '<Root>/balancing logic' */
static void passiv_enter_internal_balancing(const real_T *TransferFcn3, const
  real_T *TransferFcn1, const real_T *TransferFcn2)
{
  real_T lowest;
  lowest = passiveBalancing_lowestCell(*TransferFcn2, *TransferFcn1,
    *TransferFcn3);
  if (lowest == 3.0) {
    passiveBalancing_DW.is_balancing = passiveBalancing_IN_cell3_low;
    passiveBalancing_B.s1 = 1.0;
    passiveBalancing_B.s2 = 1.0;
    passiveBalancing_B.s3 = 0.0;
  } else if (lowest == 1.0) {
    passiveBalancing_DW.is_balancing = passiveBalancing_IN_cell1_low;
    passiveBalancing_B.s2 = 1.0;
    passiveBalancing_B.s3 = 1.0;
    passiveBalancing_B.s1 = 0.0;
  } else {
    if (lowest == 2.0) {
      passiveBalancing_DW.is_balancing = passiveBalancing_IN_cell2_low;
      passiveBalancing_B.s1 = 1.0;
      passiveBalancing_B.s3 = 1.0;
      passiveBalancing_B.s2 = 0.0;
    }
  }
}

/* Model step function */
void passiveBalancing_step(void)
{
  /* local block i/o variables */
  real_T rtb_FilterCoefficient;
  real_T rtb_Switch_m;
  if (rtmIsMajorTimeStep(passiveBalancing_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&passiveBalancing_M->solverInfo,
                          ((passiveBalancing_M->Timing.clockTick0+1)*
      passiveBalancing_M->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(passiveBalancing_M)) {
    passiveBalancing_M->Timing.t[0] = rtsiGetT(&passiveBalancing_M->solverInfo);
  }

  {
    NeslSimulationData *simulationData;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    real_T tmp_3[124];
    real_T tmp_5[124];
    real_T tmp_0[16];
    real_T TransferFcn2_0[3];
    real_T TransferFcn2_1[3];
    real_T rtb_OUTPUT_1_1[3];
    real_T TransferFcn1;
    real_T TransferFcn2;
    real_T TransferFcn3;
    real_T rtb_DeadZone;
    real_T rtb_Sum;
    real_T rtb_SumI1;
    real_T rtb_Switch;
    real_T time;
    real_T time_0;
    real_T time_1;
    int32_T tmp_2;
    int_T tmp_4[6];
    int_T tmp_6[6];
    int_T tmp_1[5];
    boolean_T tmp;

    /* TransferFcn: '<Root>/Transfer Fcn1' */
    TransferFcn1 = 0.0016666666666666668 *
      passiveBalancing_X.TransferFcn1_CSTATE;

    /* TransferFcn: '<Root>/Transfer Fcn2' */
    TransferFcn2 = 0.0016666666666666668 *
      passiveBalancing_X.TransferFcn2_CSTATE;

    /* TransferFcn: '<Root>/Transfer Fcn3' */
    TransferFcn3 = 0.0016666666666666668 *
      passiveBalancing_X.TransferFcn3_CSTATE;
    if (rtmIsMajorTimeStep(passiveBalancing_M)) {
      /* Chart: '<S12>/Chart' incorporates:
       *  UnitDelay: '<S12>/Unit Delay1'
       *  UnitDelay: '<S12>/Unit Delay2'
       */
      if (passiveBalancing_DW.temporalCounter_i1 < 8191U) {
        passiveBalancing_DW.temporalCounter_i1++;
      }

      if (passiveBalancing_DW.is_active_c3_passiveBalancing == 0U) {
        passiveBalancing_DW.is_active_c3_passiveBalancing = 1U;
        passiveBalancing_DW.is_c3_passiveBalancing = passiveBalancing_IN_wait;
      } else {
        switch (passiveBalancing_DW.is_c3_passiveBalancing) {
         case passiveBalancing_IN_CHARGE:
          if ((passiveBalancing_DW.UnitDelay1_DSTATE > 0.99) ||
              (passiveBalancing_DW.temporalCounter_i1 >= 5000U)) {
            passiveBalancing_DW.is_c3_passiveBalancing =
              passiveBalancing_IN_DISCHARGE;
          } else {
            passiveBalancing_B.MODE = 1.0;
          }
          break;

         case passiveBalancing_IN_DISCHARGE:
          if (passiveBalancing_DW.UnitDelay2_DSTATE < 0.3) {
            passiveBalancing_DW.is_c3_passiveBalancing =
              passiveBalancing_IN_CHARGE;
            passiveBalancing_DW.temporalCounter_i1 = 0U;
          } else {
            passiveBalancing_B.MODE = 2.0;
          }
          break;

         default:
          /* case IN_wait: */
          if (passiveBalancing_DW.UnitDelay1_DSTATE < 0.5) {
            passiveBalancing_DW.is_c3_passiveBalancing =
              passiveBalancing_IN_CHARGE;
            passiveBalancing_DW.temporalCounter_i1 = 0U;
          } else {
            if (passiveBalancing_DW.UnitDelay1_DSTATE >= 0.5) {
              passiveBalancing_DW.is_c3_passiveBalancing =
                passiveBalancing_IN_DISCHARGE;
            }
          }
          break;
        }
      }

      /* End of Chart: '<S12>/Chart' */

      /* Sum: '<S1>/Sum' incorporates:
       *  Constant: '<S1>/V_TOP'
       *  UnitDelay: '<S1>/Unit Delay'
       */
      rtb_DeadZone = 4.1 - passiveBalancing_DW.UnitDelay_DSTATE;

      /* Gain: '<S57>/Filter Coefficient' incorporates:
       *  Constant: '<S1>/V_TOP'
       *  DiscreteIntegrator: '<S49>/Filter'
       *  Gain: '<S48>/Derivative Gain'
       *  Sum: '<S1>/Sum'
       *  Sum: '<S49>/SumD'
       *  UnitDelay: '<S1>/Unit Delay'
       */
      rtb_FilterCoefficient = ((4.1 - passiveBalancing_DW.UnitDelay_DSTATE) *
        0.0 - passiveBalancing_DW.Filter_DSTATE) * 100.0;

      /* Sum: '<S63>/Sum' incorporates:
       *  Constant: '<S1>/V_TOP'
       *  DiscreteIntegrator: '<S54>/Integrator'
       *  Gain: '<S59>/Proportional Gain'
       *  Sum: '<S1>/Sum'
       *  UnitDelay: '<S1>/Unit Delay'
       */
      rtb_Sum = ((4.1 - passiveBalancing_DW.UnitDelay_DSTATE) * 100.0 +
                 passiveBalancing_DW.Integrator_DSTATE) + rtb_FilterCoefficient;

      /* Saturate: '<S61>/Saturation' */
      if (rtb_Sum <= 0.0) {
        rtb_SumI1 = 0.0;
      } else {
        rtb_SumI1 = rtb_Sum;
      }

      /* End of Saturate: '<S61>/Saturation' */

      /* Switch: '<S1>/Switch' incorporates:
       *  Constant: '<S19>/Constant'
       *  Constant: '<S1>/I_CC'
       *  RelationalOperator: '<S19>/Compare'
       *  UnitDelay: '<S1>/Unit Delay'
       */
      if (passiveBalancing_DW.UnitDelay_DSTATE < 4.1) {
        rtb_Switch = 4.0;
      } else {
        rtb_Switch = rtb_SumI1;
      }

      /* End of Switch: '<S1>/Switch' */

      /* SimscapeInputBlock: '<S86>/INPUT_1_1_1' */
      if (rtmIsMajorTimeStep(passiveBalancing_M)) {
        /* MultiPortSwitch: '<S1>/Multiport Switch' incorporates:
         *  Constant: '<S1>/Discharge'
         */
        if ((int32_T)passiveBalancing_B.MODE == 1) {
          passiveBalancing_B.INPUT_1_1_1[0] = rtb_Switch;
        } else {
          passiveBalancing_B.INPUT_1_1_1[0] = -4.0;
        }

        /* End of MultiPortSwitch: '<S1>/Multiport Switch' */
        passiveBalancing_B.INPUT_1_1_1[1] = 0.0;
        passiveBalancing_B.INPUT_1_1_1[2] = 0.0;
        passiveBalancing_DW.INPUT_1_1_1_Discrete[0] =
          !(passiveBalancing_B.INPUT_1_1_1[0] ==
            passiveBalancing_DW.INPUT_1_1_1_Discrete[1]);
        passiveBalancing_DW.INPUT_1_1_1_Discrete[1] =
          passiveBalancing_B.INPUT_1_1_1[0];
        passiveBalancing_B.INPUT_1_1_1[0] =
          passiveBalancing_DW.INPUT_1_1_1_Discrete[1];
        passiveBalancing_B.INPUT_1_1_1[3] =
          passiveBalancing_DW.INPUT_1_1_1_Discrete[0];
      }

      /* End of SimscapeInputBlock: '<S86>/INPUT_1_1_1' */

      /* Chart: '<Root>/balancing logic' */
      if (passiveBalancing_DW.temporalCounter_i1_p < 1U) {
        passiveBalancing_DW.temporalCounter_i1_p++;
      }

      if (passiveBalancing_DW.is_active_c1_passiveBalancing == 0U) {
        passiveBalancing_DW.is_active_c1_passiveBalancing = 1U;
        passiveBalancing_DW.is_c1_passiveBalancing = passiveBalancing_IN_init;
        passiveBalancing_B.s1 = 0.0;
        passiveBalancing_B.s2 = 0.0;
        passiveBalancing_B.s3 = 0.0;
      } else {
        switch (passiveBalancing_DW.is_c1_passiveBalancing) {
         case passiveBalancing_IN_balancing:
          TransferFcn2_0[0] = TransferFcn2;
          TransferFcn2_0[1] = TransferFcn1;
          TransferFcn2_0[2] = TransferFcn3;
          TransferFcn2_1[0] = TransferFcn2;
          TransferFcn2_1[1] = TransferFcn1;
          TransferFcn2_1[2] = TransferFcn3;
          if (fabs(passiveBalancing_maximum(TransferFcn2_0) -
                   passiveBalancing_minimum(TransferFcn2_1)) < 0.01) {
            switch (passiveBalancing_DW.is_balancing) {
             case passiveBalancing_IN_cell1_low:
              passiveBalancing_B.s1 = 0.0;
              passiveBalancing_B.s3 = 0.0;
              passiveBalancing_B.s2 = 0.0;
              passiveBalancing_DW.is_balancing = passiveBalan_IN_NO_ACTIVE_CHILD;
              break;

             case passiveBalancing_IN_cell2_low:
              passiveBalancing_B.s1 = 0.0;
              passiveBalancing_B.s3 = 0.0;
              passiveBalancing_B.s2 = 0.0;
              passiveBalancing_DW.is_balancing = passiveBalan_IN_NO_ACTIVE_CHILD;
              break;

             case passiveBalancing_IN_cell3_low:
              passiveBalancing_B.s1 = 0.0;
              passiveBalancing_B.s2 = 0.0;
              passiveBalancing_B.s3 = 0.0;
              passiveBalancing_DW.is_balancing = passiveBalan_IN_NO_ACTIVE_CHILD;
              break;
            }

            passiveBalancing_DW.is_c1_passiveBalancing =
              passiveBalancing_IN_finish;
            passiveBalancing_DW.temporalCounter_i1_p = 0U;
            passiveBalancing_B.s1 = 0.0;
            passiveBalancing_B.s2 = 0.0;
            passiveBalancing_B.s3 = 0.0;
          } else {
            TransferFcn1 = passiveBalancing_lowestCell(TransferFcn2,
              TransferFcn1, TransferFcn3);
            switch (passiveBalancing_DW.is_balancing) {
             case passiveBalancing_IN_cell1_low:
              if (TransferFcn1 == 2.0) {
                passiveBalancing_DW.is_balancing = passiveBalancing_IN_cell2_low;
                passiveBalancing_B.s1 = 1.0;
                passiveBalancing_B.s3 = 1.0;
                passiveBalancing_B.s2 = 0.0;
              } else {
                if (TransferFcn1 == 3.0) {
                  passiveBalancing_DW.is_balancing =
                    passiveBalancing_IN_cell3_low;
                  passiveBalancing_B.s1 = 1.0;
                  passiveBalancing_B.s2 = 1.0;
                  passiveBalancing_B.s3 = 0.0;
                }
              }
              break;

             case passiveBalancing_IN_cell2_low:
              if (TransferFcn1 == 3.0) {
                passiveBalancing_DW.is_balancing = passiveBalancing_IN_cell3_low;
                passiveBalancing_B.s1 = 1.0;
                passiveBalancing_B.s2 = 1.0;
                passiveBalancing_B.s3 = 0.0;
              } else {
                if (TransferFcn1 == 1.0) {
                  passiveBalancing_DW.is_balancing =
                    passiveBalancing_IN_cell1_low;
                  passiveBalancing_B.s2 = 1.0;
                  passiveBalancing_B.s3 = 1.0;
                  passiveBalancing_B.s1 = 0.0;
                }
              }
              break;

             default:
              /* case IN_cell3_low: */
              if (TransferFcn1 == 2.0) {
                passiveBalancing_DW.is_balancing = passiveBalancing_IN_cell2_low;
                passiveBalancing_B.s1 = 1.0;
                passiveBalancing_B.s3 = 1.0;
                passiveBalancing_B.s2 = 0.0;
              } else {
                if (TransferFcn1 == 1.0) {
                  passiveBalancing_DW.is_balancing =
                    passiveBalancing_IN_cell1_low;
                  passiveBalancing_B.s2 = 1.0;
                  passiveBalancing_B.s3 = 1.0;
                  passiveBalancing_B.s1 = 0.0;
                }
              }
              break;
            }
          }
          break;

         case passiveBalancing_IN_finish:
          TransferFcn2_0[0] = TransferFcn2;
          TransferFcn2_0[1] = TransferFcn1;
          TransferFcn2_0[2] = TransferFcn3;
          TransferFcn2_1[0] = TransferFcn2;
          TransferFcn2_1[1] = TransferFcn1;
          TransferFcn2_1[2] = TransferFcn3;
          if ((fabs(passiveBalancing_maximum(TransferFcn2_0) -
                    passiveBalancing_minimum(TransferFcn2_1)) > 0.01) &&
              (passiveBalancing_DW.temporalCounter_i1_p >= 1U)) {
            passiveBalancing_DW.is_c1_passiveBalancing =
              passiveBalancing_IN_balancing;
            passiv_enter_internal_balancing(&TransferFcn3, &TransferFcn1,
              &TransferFcn2);
          }
          break;

         default:
          /* case IN_init: */
          TransferFcn2_0[0] = TransferFcn2;
          TransferFcn2_0[1] = TransferFcn1;
          TransferFcn2_0[2] = TransferFcn3;
          TransferFcn2_1[0] = TransferFcn2;
          TransferFcn2_1[1] = TransferFcn1;
          TransferFcn2_1[2] = TransferFcn3;
          if (fabs(passiveBalancing_maximum(TransferFcn2_0) -
                   passiveBalancing_minimum(TransferFcn2_1)) > 0.01) {
            passiveBalancing_DW.is_c1_passiveBalancing =
              passiveBalancing_IN_balancing;
            passiv_enter_internal_balancing(&TransferFcn3, &TransferFcn1,
              &TransferFcn2);
          }
          break;
        }
      }

      /* End of Chart: '<Root>/balancing logic' */

      /* SimscapeInputBlock: '<S86>/INPUT_3_1_1' */
      if (rtmIsMajorTimeStep(passiveBalancing_M)) {
        passiveBalancing_B.INPUT_3_1_1[0] = passiveBalancing_B.s1;
        passiveBalancing_B.INPUT_3_1_1[1] = 0.0;
        passiveBalancing_B.INPUT_3_1_1[2] = 0.0;
        passiveBalancing_DW.INPUT_3_1_1_Discrete[0] =
          !(passiveBalancing_B.INPUT_3_1_1[0] ==
            passiveBalancing_DW.INPUT_3_1_1_Discrete[1]);
        passiveBalancing_DW.INPUT_3_1_1_Discrete[1] =
          passiveBalancing_B.INPUT_3_1_1[0];
        passiveBalancing_B.INPUT_3_1_1[0] =
          passiveBalancing_DW.INPUT_3_1_1_Discrete[1];
        passiveBalancing_B.INPUT_3_1_1[3] =
          passiveBalancing_DW.INPUT_3_1_1_Discrete[0];

        /* SimscapeInputBlock: '<S86>/INPUT_2_1_1' */
        passiveBalancing_B.INPUT_2_1_1[0] = passiveBalancing_B.s2;
        passiveBalancing_B.INPUT_2_1_1[1] = 0.0;
        passiveBalancing_B.INPUT_2_1_1[2] = 0.0;
        passiveBalancing_DW.INPUT_2_1_1_Discrete[0] =
          !(passiveBalancing_B.INPUT_2_1_1[0] ==
            passiveBalancing_DW.INPUT_2_1_1_Discrete[1]);
        passiveBalancing_DW.INPUT_2_1_1_Discrete[1] =
          passiveBalancing_B.INPUT_2_1_1[0];
        passiveBalancing_B.INPUT_2_1_1[0] =
          passiveBalancing_DW.INPUT_2_1_1_Discrete[1];
        passiveBalancing_B.INPUT_2_1_1[3] =
          passiveBalancing_DW.INPUT_2_1_1_Discrete[0];

        /* SimscapeInputBlock: '<S86>/INPUT_4_1_1' */
        passiveBalancing_B.INPUT_4_1_1[0] = passiveBalancing_B.s3;
        passiveBalancing_B.INPUT_4_1_1[1] = 0.0;
        passiveBalancing_B.INPUT_4_1_1[2] = 0.0;
        passiveBalancing_DW.INPUT_4_1_1_Discrete[0] =
          !(passiveBalancing_B.INPUT_4_1_1[0] ==
            passiveBalancing_DW.INPUT_4_1_1_Discrete[1]);
        passiveBalancing_DW.INPUT_4_1_1_Discrete[1] =
          passiveBalancing_B.INPUT_4_1_1[0];
        passiveBalancing_B.INPUT_4_1_1[0] =
          passiveBalancing_DW.INPUT_4_1_1_Discrete[1];
        passiveBalancing_B.INPUT_4_1_1[3] =
          passiveBalancing_DW.INPUT_4_1_1_Discrete[0];
      }

      /* End of SimscapeInputBlock: '<S86>/INPUT_3_1_1' */

      /* SimscapeExecutionBlock: '<S86>/STATE_1' incorporates:
       *  SimscapeExecutionBlock: '<S86>/OUTPUT_1_0'
       *  SimscapeExecutionBlock: '<S86>/OUTPUT_1_1'
       */
      simulationData = (NeslSimulationData *)passiveBalancing_DW.STATE_1_SimData;
      TransferFcn1 = passiveBalancing_M->Timing.t[0];
      time = TransferFcn1;
      simulationData->mData->mTime.mN = 1;
      simulationData->mData->mTime.mX = &time;
      simulationData->mData->mContStates.mN = 0;
      simulationData->mData->mContStates.mX = NULL;
      simulationData->mData->mDiscStates.mN = 66;
      simulationData->mData->mDiscStates.mX =
        &passiveBalancing_DW.STATE_1_Discrete[0];
      simulationData->mData->mModeVector.mN = 42;
      simulationData->mData->mModeVector.mX =
        &passiveBalancing_DW.STATE_1_Modes[0];
      tmp = false;
      simulationData->mData->mFoundZcEvents = tmp;
      simulationData->mData->mIsMajorTimeStep = true;
      tmp = false;
      simulationData->mData->mIsSolverAssertCheck = tmp;
      simulationData->mData->mIsSolverCheckingCIC = false;
      simulationData->mData->mIsComputingJacobian = false;
      simulationData->mData->mIsEvaluatingF0 = false;
      simulationData->mData->mIsSolverRequestingReset = false;
      tmp_1[0] = 0;
      tmp_0[0] = passiveBalancing_B.INPUT_1_1_1[0];
      tmp_0[1] = passiveBalancing_B.INPUT_1_1_1[1];
      tmp_0[2] = passiveBalancing_B.INPUT_1_1_1[2];
      tmp_0[3] = passiveBalancing_B.INPUT_1_1_1[3];
      tmp_1[1] = 4;
      tmp_0[4] = passiveBalancing_B.INPUT_3_1_1[0];
      tmp_0[5] = passiveBalancing_B.INPUT_3_1_1[1];
      tmp_0[6] = passiveBalancing_B.INPUT_3_1_1[2];
      tmp_0[7] = passiveBalancing_B.INPUT_3_1_1[3];
      tmp_1[2] = 8;
      tmp_0[8] = passiveBalancing_B.INPUT_2_1_1[0];
      tmp_0[9] = passiveBalancing_B.INPUT_2_1_1[1];
      tmp_0[10] = passiveBalancing_B.INPUT_2_1_1[2];
      tmp_0[11] = passiveBalancing_B.INPUT_2_1_1[3];
      tmp_1[3] = 12;
      tmp_0[12] = passiveBalancing_B.INPUT_4_1_1[0];
      tmp_0[13] = passiveBalancing_B.INPUT_4_1_1[1];
      tmp_0[14] = passiveBalancing_B.INPUT_4_1_1[2];
      tmp_0[15] = passiveBalancing_B.INPUT_4_1_1[3];
      tmp_1[4] = 16;
      simulationData->mData->mInputValues.mN = 16;
      simulationData->mData->mInputValues.mX = &tmp_0[0];
      simulationData->mData->mInputOffsets.mN = 5;
      simulationData->mData->mInputOffsets.mX = &tmp_1[0];
      simulationData->mData->mOutputs.mN = 108;
      simulationData->mData->mOutputs.mX = &passiveBalancing_B.STATE_1[0];
      simulationData->mData->mSampleHits.mN = 0;
      simulationData->mData->mSampleHits.mX = NULL;
      tmp = rtmIsMajorTimeStep(passiveBalancing_M);
      simulationData->mData->mIsFundamentalSampleHit = tmp;
      simulationData->mData->mTolerances.mN = 0;
      simulationData->mData->mTolerances.mX = NULL;
      simulationData->mData->mCstateHasChanged = false;
      diagnosticManager = (NeuDiagnosticManager *)
        passiveBalancing_DW.STATE_1_DiagMgr;
      diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
      tmp_2 = ne_simulator_method((NeslSimulator *)
        passiveBalancing_DW.STATE_1_Simulator, NESL_SIM_OUTPUTS, simulationData,
        diagnosticManager);
      if (tmp_2 != 0) {
        tmp = error_buffer_is_empty(rtmGetErrorStatus(passiveBalancing_M));
        if (tmp) {
          msg = rtw_diagnostics_msg(diagnosticTree);
          rtmSetErrorStatus(passiveBalancing_M, msg);
        }
      }

      /* End of SimscapeExecutionBlock: '<S86>/STATE_1' */

      /* SimscapeExecutionBlock: '<S86>/OUTPUT_1_0' */
      simulationData = (NeslSimulationData *)
        passiveBalancing_DW.OUTPUT_1_0_SimData;
      time_0 = TransferFcn1;
      simulationData->mData->mTime.mN = 1;
      simulationData->mData->mTime.mX = &time_0;
      simulationData->mData->mContStates.mN = 0;
      simulationData->mData->mContStates.mX = NULL;
      simulationData->mData->mDiscStates.mN = 0;
      simulationData->mData->mDiscStates.mX =
        &passiveBalancing_DW.OUTPUT_1_0_Discrete;
      simulationData->mData->mModeVector.mN = 0;
      simulationData->mData->mModeVector.mX =
        &passiveBalancing_DW.OUTPUT_1_0_Modes;
      tmp = false;
      simulationData->mData->mFoundZcEvents = tmp;
      simulationData->mData->mIsMajorTimeStep = true;
      tmp = false;
      simulationData->mData->mIsSolverAssertCheck = tmp;
      simulationData->mData->mIsSolverCheckingCIC = false;
      simulationData->mData->mIsComputingJacobian = false;
      simulationData->mData->mIsEvaluatingF0 = false;
      simulationData->mData->mIsSolverRequestingReset = false;
      tmp_4[0] = 0;
      tmp_3[0] = passiveBalancing_B.INPUT_1_1_1[0];
      tmp_3[1] = passiveBalancing_B.INPUT_1_1_1[1];
      tmp_3[2] = passiveBalancing_B.INPUT_1_1_1[2];
      tmp_3[3] = passiveBalancing_B.INPUT_1_1_1[3];
      tmp_4[1] = 4;
      tmp_3[4] = passiveBalancing_B.INPUT_3_1_1[0];
      tmp_3[5] = passiveBalancing_B.INPUT_3_1_1[1];
      tmp_3[6] = passiveBalancing_B.INPUT_3_1_1[2];
      tmp_3[7] = passiveBalancing_B.INPUT_3_1_1[3];
      tmp_4[2] = 8;
      tmp_3[8] = passiveBalancing_B.INPUT_2_1_1[0];
      tmp_3[9] = passiveBalancing_B.INPUT_2_1_1[1];
      tmp_3[10] = passiveBalancing_B.INPUT_2_1_1[2];
      tmp_3[11] = passiveBalancing_B.INPUT_2_1_1[3];
      tmp_4[3] = 12;
      tmp_3[12] = passiveBalancing_B.INPUT_4_1_1[0];
      tmp_3[13] = passiveBalancing_B.INPUT_4_1_1[1];
      tmp_3[14] = passiveBalancing_B.INPUT_4_1_1[2];
      tmp_3[15] = passiveBalancing_B.INPUT_4_1_1[3];
      tmp_4[4] = 16;
      memcpy(&tmp_3[16], &passiveBalancing_B.STATE_1[0], 108U * sizeof(real_T));
      tmp_4[5] = 124;
      simulationData->mData->mInputValues.mN = 124;
      simulationData->mData->mInputValues.mX = &tmp_3[0];
      simulationData->mData->mInputOffsets.mN = 6;
      simulationData->mData->mInputOffsets.mX = &tmp_4[0];
      simulationData->mData->mOutputs.mN = 7;
      simulationData->mData->mOutputs.mX = &passiveBalancing_B.OUTPUT_1_0[0];
      simulationData->mData->mSampleHits.mN = 0;
      simulationData->mData->mSampleHits.mX = NULL;
      tmp = rtmIsMajorTimeStep(passiveBalancing_M);
      simulationData->mData->mIsFundamentalSampleHit = tmp;
      simulationData->mData->mTolerances.mN = 0;
      simulationData->mData->mTolerances.mX = NULL;
      simulationData->mData->mCstateHasChanged = false;
      diagnosticManager = (NeuDiagnosticManager *)
        passiveBalancing_DW.OUTPUT_1_0_DiagMgr;
      diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
      tmp_2 = ne_simulator_method((NeslSimulator *)
        passiveBalancing_DW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS,
        simulationData, diagnosticManager);
      if (tmp_2 != 0) {
        tmp = error_buffer_is_empty(rtmGetErrorStatus(passiveBalancing_M));
        if (tmp) {
          msg = rtw_diagnostics_msg(diagnosticTree);
          rtmSetErrorStatus(passiveBalancing_M, msg);
        }
      }

      /* SimscapeExecutionBlock: '<S86>/OUTPUT_1_1' */
      simulationData = (NeslSimulationData *)
        passiveBalancing_DW.OUTPUT_1_1_SimData;
      time_1 = TransferFcn1;
      simulationData->mData->mTime.mN = 1;
      simulationData->mData->mTime.mX = &time_1;
      simulationData->mData->mContStates.mN = 0;
      simulationData->mData->mContStates.mX = NULL;
      simulationData->mData->mDiscStates.mN = 0;
      simulationData->mData->mDiscStates.mX =
        &passiveBalancing_DW.OUTPUT_1_1_Discrete;
      simulationData->mData->mModeVector.mN = 0;
      simulationData->mData->mModeVector.mX =
        &passiveBalancing_DW.OUTPUT_1_1_Modes;
      tmp = false;
      simulationData->mData->mFoundZcEvents = tmp;
      simulationData->mData->mIsMajorTimeStep = true;
      tmp = false;
      simulationData->mData->mIsSolverAssertCheck = tmp;
      simulationData->mData->mIsSolverCheckingCIC = false;
      simulationData->mData->mIsComputingJacobian = false;
      simulationData->mData->mIsEvaluatingF0 = false;
      simulationData->mData->mIsSolverRequestingReset = false;
      tmp_6[0] = 0;
      tmp_5[0] = passiveBalancing_B.INPUT_1_1_1[0];
      tmp_5[1] = passiveBalancing_B.INPUT_1_1_1[1];
      tmp_5[2] = passiveBalancing_B.INPUT_1_1_1[2];
      tmp_5[3] = passiveBalancing_B.INPUT_1_1_1[3];
      tmp_6[1] = 4;
      tmp_5[4] = passiveBalancing_B.INPUT_3_1_1[0];
      tmp_5[5] = passiveBalancing_B.INPUT_3_1_1[1];
      tmp_5[6] = passiveBalancing_B.INPUT_3_1_1[2];
      tmp_5[7] = passiveBalancing_B.INPUT_3_1_1[3];
      tmp_6[2] = 8;
      tmp_5[8] = passiveBalancing_B.INPUT_2_1_1[0];
      tmp_5[9] = passiveBalancing_B.INPUT_2_1_1[1];
      tmp_5[10] = passiveBalancing_B.INPUT_2_1_1[2];
      tmp_5[11] = passiveBalancing_B.INPUT_2_1_1[3];
      tmp_6[3] = 12;
      tmp_5[12] = passiveBalancing_B.INPUT_4_1_1[0];
      tmp_5[13] = passiveBalancing_B.INPUT_4_1_1[1];
      tmp_5[14] = passiveBalancing_B.INPUT_4_1_1[2];
      tmp_5[15] = passiveBalancing_B.INPUT_4_1_1[3];
      tmp_6[4] = 16;
      memcpy(&tmp_5[16], &passiveBalancing_B.STATE_1[0], 108U * sizeof(real_T));
      tmp_6[5] = 124;
      simulationData->mData->mInputValues.mN = 124;
      simulationData->mData->mInputValues.mX = &tmp_5[0];
      simulationData->mData->mInputOffsets.mN = 6;
      simulationData->mData->mInputOffsets.mX = &tmp_6[0];
      simulationData->mData->mOutputs.mN = 3;
      simulationData->mData->mOutputs.mX = &rtb_OUTPUT_1_1[0];
      simulationData->mData->mSampleHits.mN = 0;
      simulationData->mData->mSampleHits.mX = NULL;
      tmp = rtmIsMajorTimeStep(passiveBalancing_M);
      simulationData->mData->mIsFundamentalSampleHit = tmp;
      simulationData->mData->mTolerances.mN = 0;
      simulationData->mData->mTolerances.mX = NULL;
      simulationData->mData->mCstateHasChanged = false;
      diagnosticManager = (NeuDiagnosticManager *)
        passiveBalancing_DW.OUTPUT_1_1_DiagMgr;
      diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
      tmp_2 = ne_simulator_method((NeslSimulator *)
        passiveBalancing_DW.OUTPUT_1_1_Simulator, NESL_SIM_OUTPUTS,
        simulationData, diagnosticManager);
      if (tmp_2 != 0) {
        tmp = error_buffer_is_empty(rtmGetErrorStatus(passiveBalancing_M));
        if (tmp) {
          msg = rtw_diagnostics_msg(diagnosticTree);
          rtmSetErrorStatus(passiveBalancing_M, msg);
        }
      }

      /* MinMax: '<S12>/Max' */
      TransferFcn2 = passiveBalancing_B.OUTPUT_1_0[0];
      TransferFcn1 = passiveBalancing_B.OUTPUT_1_0[1];
      if ((TransferFcn2 > TransferFcn1) || rtIsNaN(TransferFcn1)) {
        TransferFcn1 = TransferFcn2;
      }

      passiveBalancing_DW.UnitDelay1_DSTATE = passiveBalancing_B.OUTPUT_1_0[2];
      if ((TransferFcn1 > passiveBalancing_DW.UnitDelay1_DSTATE) || rtIsNaN
          (passiveBalancing_DW.UnitDelay1_DSTATE)) {
        /* UnitDelay: '<S12>/Unit Delay1' */
        passiveBalancing_DW.UnitDelay1_DSTATE = TransferFcn1;
      }

      /* End of MinMax: '<S12>/Max' */

      /* MinMax: '<S12>/Max1' */
      TransferFcn2 = passiveBalancing_B.OUTPUT_1_0[0];
      TransferFcn1 = passiveBalancing_B.OUTPUT_1_0[1];
      if ((TransferFcn2 < TransferFcn1) || rtIsNaN(TransferFcn1)) {
        TransferFcn1 = TransferFcn2;
      }

      passiveBalancing_DW.UnitDelay2_DSTATE = passiveBalancing_B.OUTPUT_1_0[2];
      if ((TransferFcn1 < passiveBalancing_DW.UnitDelay2_DSTATE) || rtIsNaN
          (passiveBalancing_DW.UnitDelay2_DSTATE)) {
        /* UnitDelay: '<S12>/Unit Delay2' */
        passiveBalancing_DW.UnitDelay2_DSTATE = TransferFcn1;
      }

      /* End of MinMax: '<S12>/Max1' */

      /* MinMax: '<S12>/Max2' */
      TransferFcn2 = passiveBalancing_B.OUTPUT_1_0[4];
      TransferFcn1 = passiveBalancing_B.OUTPUT_1_0[5];
      if ((TransferFcn2 > TransferFcn1) || rtIsNaN(TransferFcn1)) {
        TransferFcn1 = TransferFcn2;
      }

      passiveBalancing_DW.UnitDelay_DSTATE = passiveBalancing_B.OUTPUT_1_0[6];
      if ((TransferFcn1 > passiveBalancing_DW.UnitDelay_DSTATE) || rtIsNaN
          (passiveBalancing_DW.UnitDelay_DSTATE)) {
        /* UnitDelay: '<S1>/Unit Delay' */
        passiveBalancing_DW.UnitDelay_DSTATE = TransferFcn1;
      }

      /* End of MinMax: '<S12>/Max2' */

      /* Sum: '<S66>/SumI1' incorporates:
       *  Gain: '<S51>/Integral Gain'
       *  Sum: '<S65>/SumI3'
       */
      rtb_SumI1 = 10.0 * rtb_DeadZone + (rtb_Switch - rtb_SumI1);

      /* DeadZone: '<S47>/DeadZone' */
      if (rtb_Sum >= 0.0) {
        rtb_DeadZone = 0.0;
      } else {
        rtb_DeadZone = rtb_Sum;
      }

      /* End of DeadZone: '<S47>/DeadZone' */

      /* Signum: '<S45>/SignPreSat' */
      if (rtb_DeadZone < 0.0) {
        /* DataTypeConversion: '<S45>/DataTypeConv1' */
        rtb_Switch = -1.0;
      } else if (rtb_DeadZone == 0.0) {
        /* DataTypeConversion: '<S45>/DataTypeConv1' */
        rtb_Switch = 0.0;
      } else {
        /* DataTypeConversion: '<S45>/DataTypeConv1' */
        rtb_Switch = (rtNaN);
      }

      /* End of Signum: '<S45>/SignPreSat' */

      /* DataTypeConversion: '<S45>/DataTypeConv1' */
      if (rtIsNaN(rtb_Switch)) {
        rtb_Switch = 0.0;
      } else {
        rtb_Switch = fmod(rtb_Switch, 256.0);
      }

      /* Signum: '<S45>/SignPreIntegrator' */
      if (rtb_SumI1 < 0.0) {
        /* DataTypeConversion: '<S45>/DataTypeConv2' */
        TransferFcn1 = -1.0;
      } else if (rtb_SumI1 > 0.0) {
        /* DataTypeConversion: '<S45>/DataTypeConv2' */
        TransferFcn1 = 1.0;
      } else if (rtb_SumI1 == 0.0) {
        /* DataTypeConversion: '<S45>/DataTypeConv2' */
        TransferFcn1 = 0.0;
      } else {
        /* DataTypeConversion: '<S45>/DataTypeConv2' */
        TransferFcn1 = (rtNaN);
      }

      /* End of Signum: '<S45>/SignPreIntegrator' */

      /* DataTypeConversion: '<S45>/DataTypeConv2' */
      if (rtIsNaN(TransferFcn1)) {
        TransferFcn1 = 0.0;
      } else {
        TransferFcn1 = fmod(TransferFcn1, 256.0);
      }

      /* Switch: '<S45>/Switch' incorporates:
       *  DataTypeConversion: '<S45>/DataTypeConv1'
       *  DataTypeConversion: '<S45>/DataTypeConv2'
       *  Gain: '<S45>/ZeroGain'
       *  Logic: '<S45>/AND3'
       *  RelationalOperator: '<S45>/Equal1'
       *  RelationalOperator: '<S45>/NotEqual'
       */
      if ((0.0 * rtb_Sum != rtb_DeadZone) && ((rtb_Switch < 0.0 ? (int32_T)
            (int8_T)-(int8_T)(uint8_T)-rtb_Switch : (int32_T)(int8_T)(uint8_T)
            rtb_Switch) == (TransferFcn1 < 0.0 ? (int32_T)(int8_T)-(int8_T)
                            (uint8_T)-TransferFcn1 : (int32_T)(int8_T)(uint8_T)
                            TransferFcn1))) {
        /* Switch: '<S45>/Switch' incorporates:
         *  Constant: '<S45>/Constant1'
         */
        rtb_Switch_m = 0.0;
      } else {
        /* Switch: '<S45>/Switch' */
        rtb_Switch_m = rtb_SumI1;
      }

      /* End of Switch: '<S45>/Switch' */
    }
  }

  if (rtmIsMajorTimeStep(passiveBalancing_M)) {
    NeslSimulationData *simulationData;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    real_T tmp_0[16];
    real_T time;
    int32_T tmp_2;
    int_T tmp_1[5];
    boolean_T tmp;
    if (rtmIsMajorTimeStep(passiveBalancing_M)) {
      /* Update for DiscreteIntegrator: '<S54>/Integrator' */
      passiveBalancing_DW.Integrator_DSTATE += rtb_Switch_m;

      /* Update for DiscreteIntegrator: '<S49>/Filter' */
      passiveBalancing_DW.Filter_DSTATE += rtb_FilterCoefficient;

      /* Update for SimscapeExecutionBlock: '<S86>/STATE_1' */
      simulationData = (NeslSimulationData *)passiveBalancing_DW.STATE_1_SimData;
      time = passiveBalancing_M->Timing.t[0];
      simulationData->mData->mTime.mN = 1;
      simulationData->mData->mTime.mX = &time;
      simulationData->mData->mContStates.mN = 0;
      simulationData->mData->mContStates.mX = NULL;
      simulationData->mData->mDiscStates.mN = 66;
      simulationData->mData->mDiscStates.mX =
        &passiveBalancing_DW.STATE_1_Discrete[0];
      simulationData->mData->mModeVector.mN = 42;
      simulationData->mData->mModeVector.mX =
        &passiveBalancing_DW.STATE_1_Modes[0];
      tmp = false;
      simulationData->mData->mFoundZcEvents = tmp;
      simulationData->mData->mIsMajorTimeStep = true;
      tmp = false;
      simulationData->mData->mIsSolverAssertCheck = tmp;
      simulationData->mData->mIsSolverCheckingCIC = false;
      simulationData->mData->mIsComputingJacobian = false;
      simulationData->mData->mIsEvaluatingF0 = false;
      simulationData->mData->mIsSolverRequestingReset = false;
      tmp_1[0] = 0;
      tmp_0[0] = passiveBalancing_B.INPUT_1_1_1[0];
      tmp_0[1] = passiveBalancing_B.INPUT_1_1_1[1];
      tmp_0[2] = passiveBalancing_B.INPUT_1_1_1[2];
      tmp_0[3] = passiveBalancing_B.INPUT_1_1_1[3];
      tmp_1[1] = 4;
      tmp_0[4] = passiveBalancing_B.INPUT_3_1_1[0];
      tmp_0[5] = passiveBalancing_B.INPUT_3_1_1[1];
      tmp_0[6] = passiveBalancing_B.INPUT_3_1_1[2];
      tmp_0[7] = passiveBalancing_B.INPUT_3_1_1[3];
      tmp_1[2] = 8;
      tmp_0[8] = passiveBalancing_B.INPUT_2_1_1[0];
      tmp_0[9] = passiveBalancing_B.INPUT_2_1_1[1];
      tmp_0[10] = passiveBalancing_B.INPUT_2_1_1[2];
      tmp_0[11] = passiveBalancing_B.INPUT_2_1_1[3];
      tmp_1[3] = 12;
      tmp_0[12] = passiveBalancing_B.INPUT_4_1_1[0];
      tmp_0[13] = passiveBalancing_B.INPUT_4_1_1[1];
      tmp_0[14] = passiveBalancing_B.INPUT_4_1_1[2];
      tmp_0[15] = passiveBalancing_B.INPUT_4_1_1[3];
      tmp_1[4] = 16;
      simulationData->mData->mInputValues.mN = 16;
      simulationData->mData->mInputValues.mX = &tmp_0[0];
      simulationData->mData->mInputOffsets.mN = 5;
      simulationData->mData->mInputOffsets.mX = &tmp_1[0];
      diagnosticManager = (NeuDiagnosticManager *)
        passiveBalancing_DW.STATE_1_DiagMgr;
      diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
      tmp_2 = ne_simulator_method((NeslSimulator *)
        passiveBalancing_DW.STATE_1_Simulator, NESL_SIM_UPDATE, simulationData,
        diagnosticManager);
      if (tmp_2 != 0) {
        tmp = error_buffer_is_empty(rtmGetErrorStatus(passiveBalancing_M));
        if (tmp) {
          msg = rtw_diagnostics_msg(diagnosticTree);
          rtmSetErrorStatus(passiveBalancing_M, msg);
        }
      }

      /* End of Update for SimscapeExecutionBlock: '<S86>/STATE_1' */
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(passiveBalancing_M)) {
    rt_ertODEUpdateContinuousStates(&passiveBalancing_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++passiveBalancing_M->Timing.clockTick0;
    passiveBalancing_M->Timing.t[0] = rtsiGetSolverStopTime
      (&passiveBalancing_M->solverInfo);

    {
      /* Update absolute timer for sample time: [1.0s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 1.0, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      passiveBalancing_M->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void passiveBalancing_derivatives(void)
{
  XDot_passiveBalancing_T *_rtXdot;
  _rtXdot = ((XDot_passiveBalancing_T *) passiveBalancing_M->derivs);

  /* Derivatives for TransferFcn: '<Root>/Transfer Fcn1' */
  _rtXdot->TransferFcn1_CSTATE = 0.0;
  _rtXdot->TransferFcn1_CSTATE += -0.0016666666666666668 *
    passiveBalancing_X.TransferFcn1_CSTATE;
  _rtXdot->TransferFcn1_CSTATE += passiveBalancing_B.OUTPUT_1_0[5];

  /* Derivatives for TransferFcn: '<Root>/Transfer Fcn2' */
  _rtXdot->TransferFcn2_CSTATE = 0.0;
  _rtXdot->TransferFcn2_CSTATE += -0.0016666666666666668 *
    passiveBalancing_X.TransferFcn2_CSTATE;
  _rtXdot->TransferFcn2_CSTATE += passiveBalancing_B.OUTPUT_1_0[4];

  /* Derivatives for TransferFcn: '<Root>/Transfer Fcn3' */
  _rtXdot->TransferFcn3_CSTATE = 0.0;
  _rtXdot->TransferFcn3_CSTATE += -0.0016666666666666668 *
    passiveBalancing_X.TransferFcn3_CSTATE;
  _rtXdot->TransferFcn3_CSTATE += passiveBalancing_B.OUTPUT_1_0[6];
}

/* Model initialize function */
void passiveBalancing_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&passiveBalancing_M->solverInfo,
                          &passiveBalancing_M->Timing.simTimeStep);
    rtsiSetTPtr(&passiveBalancing_M->solverInfo, &rtmGetTPtr(passiveBalancing_M));
    rtsiSetStepSizePtr(&passiveBalancing_M->solverInfo,
                       &passiveBalancing_M->Timing.stepSize0);
    rtsiSetdXPtr(&passiveBalancing_M->solverInfo, &passiveBalancing_M->derivs);
    rtsiSetContStatesPtr(&passiveBalancing_M->solverInfo, (real_T **)
                         &passiveBalancing_M->contStates);
    rtsiSetNumContStatesPtr(&passiveBalancing_M->solverInfo,
      &passiveBalancing_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&passiveBalancing_M->solverInfo,
      &passiveBalancing_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&passiveBalancing_M->solverInfo,
      &passiveBalancing_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&passiveBalancing_M->solverInfo,
      &passiveBalancing_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&passiveBalancing_M->solverInfo, (&rtmGetErrorStatus
      (passiveBalancing_M)));
    rtsiSetRTModelPtr(&passiveBalancing_M->solverInfo, passiveBalancing_M);
  }

  rtsiSetSimTimeStep(&passiveBalancing_M->solverInfo, MAJOR_TIME_STEP);
  passiveBalancing_M->intgData.y = passiveBalancing_M->odeY;
  passiveBalancing_M->intgData.f[0] = passiveBalancing_M->odeF[0];
  passiveBalancing_M->intgData.f[1] = passiveBalancing_M->odeF[1];
  passiveBalancing_M->intgData.f[2] = passiveBalancing_M->odeF[2];
  passiveBalancing_M->contStates = ((X_passiveBalancing_T *) &passiveBalancing_X);
  rtsiSetSolverData(&passiveBalancing_M->solverInfo, (void *)
                    &passiveBalancing_M->intgData);
  rtsiSetSolverName(&passiveBalancing_M->solverInfo,"ode3");
  rtmSetTPtr(passiveBalancing_M, &passiveBalancing_M->Timing.tArray[0]);
  passiveBalancing_M->Timing.stepSize0 = 1.0;

  {
    NeModelParameters modelParameters;
    NeModelParameters modelParameters_0;
    NeModelParameters modelParameters_1;
    NeslSimulationData *tmp_1;
    NeslSimulator *tmp;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    real_T tmp_2;
    int32_T tmp_3;
    boolean_T tmp_0;

    /* Start for SimscapeExecutionBlock: '<S86>/STATE_1' */
    tmp = nesl_lease_simulator("passiveBalancing/Solver Configuration_1", 0, 0);
    passiveBalancing_DW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(passiveBalancing_DW.STATE_1_Simulator);
    if (tmp_0) {
      passiveBalancing_836bb176_1_gateway();
      tmp = nesl_lease_simulator("passiveBalancing/Solver Configuration_1", 0, 0);
      passiveBalancing_DW.STATE_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    passiveBalancing_DW.STATE_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    passiveBalancing_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters.mSolverTolerance = 0.001;
    modelParameters.mVariableStepSolver = false;
    modelParameters.mIsUsingODEN = false;
    modelParameters.mFixedStepSize = 0.001;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters.mRTWModifiedTimeStamp = 5.3169844E+8;
    tmp_2 = 0.001;
    modelParameters.mSolverTolerance = tmp_2;
    tmp_2 = 1.0;
    modelParameters.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters.mIsUsingODEN = tmp_0;
    modelParameters.mLoadInitialState = false;
    diagnosticManager = (NeuDiagnosticManager *)
      passiveBalancing_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)
      passiveBalancing_DW.STATE_1_Simulator, &modelParameters, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(passiveBalancing_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(passiveBalancing_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S86>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S86>/OUTPUT_1_0' */
    tmp = nesl_lease_simulator("passiveBalancing/Solver Configuration_1", 1, 0);
    passiveBalancing_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(passiveBalancing_DW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      passiveBalancing_836bb176_1_gateway();
      tmp = nesl_lease_simulator("passiveBalancing/Solver Configuration_1", 1, 0);
      passiveBalancing_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    passiveBalancing_DW.OUTPUT_1_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    passiveBalancing_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_0.mSolverTolerance = 0.001;
    modelParameters_0.mVariableStepSolver = false;
    modelParameters_0.mIsUsingODEN = false;
    modelParameters_0.mFixedStepSize = 0.001;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_0.mRTWModifiedTimeStamp = 5.3169844E+8;
    tmp_2 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_2;
    tmp_2 = 1.0;
    modelParameters_0.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_0.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_0.mIsUsingODEN = tmp_0;
    modelParameters_0.mLoadInitialState = false;
    diagnosticManager = (NeuDiagnosticManager *)
      passiveBalancing_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)
      passiveBalancing_DW.OUTPUT_1_0_Simulator, &modelParameters_0,
      diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(passiveBalancing_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(passiveBalancing_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S86>/OUTPUT_1_0' */

    /* Start for SimscapeExecutionBlock: '<S86>/OUTPUT_1_1' */
    tmp = nesl_lease_simulator("passiveBalancing/Solver Configuration_1", 1, 1);
    passiveBalancing_DW.OUTPUT_1_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(passiveBalancing_DW.OUTPUT_1_1_Simulator);
    if (tmp_0) {
      passiveBalancing_836bb176_1_gateway();
      tmp = nesl_lease_simulator("passiveBalancing/Solver Configuration_1", 1, 1);
      passiveBalancing_DW.OUTPUT_1_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    passiveBalancing_DW.OUTPUT_1_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    passiveBalancing_DW.OUTPUT_1_1_DiagMgr = (void *)diagnosticManager;
    modelParameters_1.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_1.mSolverTolerance = 0.001;
    modelParameters_1.mVariableStepSolver = false;
    modelParameters_1.mIsUsingODEN = false;
    modelParameters_1.mFixedStepSize = 0.001;
    modelParameters_1.mStartTime = 0.0;
    modelParameters_1.mLoadInitialState = false;
    modelParameters_1.mUseSimState = false;
    modelParameters_1.mLinTrimCompile = false;
    modelParameters_1.mLoggingMode = SSC_LOGGING_ALL;
    modelParameters_1.mRTWModifiedTimeStamp = 5.3169844E+8;
    tmp_2 = 0.001;
    modelParameters_1.mSolverTolerance = tmp_2;
    tmp_2 = 1.0;
    modelParameters_1.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_1.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_1.mIsUsingODEN = tmp_0;
    modelParameters_1.mLoadInitialState = false;
    diagnosticManager = (NeuDiagnosticManager *)
      passiveBalancing_DW.OUTPUT_1_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)
      passiveBalancing_DW.OUTPUT_1_1_Simulator, &modelParameters_1,
      diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(passiveBalancing_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(passiveBalancing_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S86>/OUTPUT_1_1' */

    /* InitializeConditions for MinMax: '<S12>/Max' incorporates:
     *  UnitDelay: '<S12>/Unit Delay1'
     */
    passiveBalancing_DW.UnitDelay1_DSTATE = 1.0;

    /* InitializeConditions for MinMax: '<S12>/Max1' incorporates:
     *  UnitDelay: '<S12>/Unit Delay2'
     */
    passiveBalancing_DW.UnitDelay2_DSTATE = 1.0;

    /* InitializeConditions for DiscreteIntegrator: '<S54>/Integrator' */
    passiveBalancing_DW.Integrator_DSTATE = 10.0;

    /* InitializeConditions for TransferFcn: '<Root>/Transfer Fcn1' */
    passiveBalancing_X.TransferFcn1_CSTATE = 0.0;

    /* InitializeConditions for TransferFcn: '<Root>/Transfer Fcn2' */
    passiveBalancing_X.TransferFcn2_CSTATE = 0.0;

    /* InitializeConditions for TransferFcn: '<Root>/Transfer Fcn3' */
    passiveBalancing_X.TransferFcn3_CSTATE = 0.0;
  }
}

/* Model terminate function */
void passiveBalancing_terminate(void)
{
  /* Terminate for SimscapeExecutionBlock: '<S86>/STATE_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    passiveBalancing_DW.STATE_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    passiveBalancing_DW.STATE_1_SimData);
  nesl_erase_simulator("passiveBalancing/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S86>/OUTPUT_1_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    passiveBalancing_DW.OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    passiveBalancing_DW.OUTPUT_1_0_SimData);
  nesl_erase_simulator("passiveBalancing/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S86>/OUTPUT_1_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    passiveBalancing_DW.OUTPUT_1_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    passiveBalancing_DW.OUTPUT_1_1_SimData);
  nesl_erase_simulator("passiveBalancing/Solver Configuration_1");
  nesl_destroy_registry();
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
