/*
 * File: lab_two_task_two.c
 *
 * Code generated for Simulink model 'lab_two_task_two'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Feb 12 10:54:30 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "lab_two_task_two.h"
#include "lab_two_task_two_private.h"

/* Block signals (default storage) */
B_lab_two_task_two_T lab_two_task_two_B;

/* External inputs (root inport signals with default storage) */
ExtU_lab_two_task_two_T lab_two_task_two_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_lab_two_task_two_T lab_two_task_two_Y;

/* Real-time model */
RT_MODEL_lab_two_task_two_T lab_two_task_two_M_;
RT_MODEL_lab_two_task_two_T *const lab_two_task_two_M = &lab_two_task_two_M_;

/* Output and update for atomic system: '<Root>/BasicCalculator' */
void lab_two_task_tw_BasicCalculator(real_T rtu_In1, real_T rtu_In2, real_T
  *rty_Out1, real_T *rty_Out2, real_T *rty_Out3, real_T *rty_Out4, real_T
  *rty_Out5, B_BasicCalculator_lab_two_tas_T *localB)
{
  /* Sum: '<S1>/Addition' */
  *rty_Out1 = rtu_In1 + rtu_In2;

  /* If: '<S1>/If' incorporates:
   *  Constant: '<S3>/Constant'
   *  Inport: '<S2>/In1'
   */
  if (rtu_In2 != 0.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    localB->In1 = rtu_In2;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    *rty_Out5 = 1.0;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
  }

  /* End of If: '<S1>/If' */

  /* Product: '<S1>/Divide' */
  *rty_Out4 = rtu_In1 / localB->In1;

  /* Product: '<S1>/Multiplication ' */
  *rty_Out3 = rtu_In1 * rtu_In2;

  /* Sum: '<S1>/Subtraction ' */
  *rty_Out2 = rtu_In1 - rtu_In2;
}

/* Model step function */
void lab_two_task_two_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/BasicCalculator' */

  /* Inport: '<Root>/operand 1 ' incorporates:
   *  Inport: '<Root>/operand 2'
   *  Outport: '<Root>/DIV'
   *  Outport: '<Root>/ERROR '
   *  Outport: '<Root>/MUL'
   *  Outport: '<Root>/SUB'
   *  Outport: '<Root>/SUM'
   */
  lab_two_task_tw_BasicCalculator(lab_two_task_two_U.operand1,
    lab_two_task_two_U.operand2, &lab_two_task_two_Y.SUM,
    &lab_two_task_two_Y.SUB, &lab_two_task_two_Y.MUL, &lab_two_task_two_Y.DIV,
    &lab_two_task_two_Y.ERROR, &lab_two_task_two_B.BasicCalculator);

  /* End of Outputs for SubSystem: '<Root>/BasicCalculator' */
}

/* Model initialize function */
void lab_two_task_two_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(lab_two_task_two_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &lab_two_task_two_B), 0,
                sizeof(B_lab_two_task_two_T));

  /* external inputs */
  (void)memset(&lab_two_task_two_U, 0, sizeof(ExtU_lab_two_task_two_T));

  /* external outputs */
  (void) memset((void *)&lab_two_task_two_Y, 0,
                sizeof(ExtY_lab_two_task_two_T));
}

/* Model terminate function */
void lab_two_task_two_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
