/*
 * File: lab_one_task_one.c
 *
 * Code generated for Simulink model 'lab_one_task_one'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Feb 12 10:11:57 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "lab_one_task_one.h"
#include "lab_one_task_one_private.h"

/* Block signals (default storage) */
B_lab_one_task_one_T lab_one_task_one_B;

/* External inputs (root inport signals with default storage) */
ExtU_lab_one_task_one_T lab_one_task_one_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_lab_one_task_one_T lab_one_task_one_Y;

/* Real-time model */
RT_MODEL_lab_one_task_one_T lab_one_task_one_M_;
RT_MODEL_lab_one_task_one_T *const lab_one_task_one_M = &lab_one_task_one_M_;

/* Model step function */
void lab_one_task_one_step(void)
{
  /* Outport: '<Root>/SUM' incorporates:
   *  Inport: '<Root>/operand 1 '
   *  Inport: '<Root>/operand 2'
   *  Sum: '<Root>/Addition'
   */
  lab_one_task_one_Y.SUM = lab_one_task_one_U.operand1 +
    lab_one_task_one_U.operand2;

  /* Outport: '<Root>/SUB' incorporates:
   *  Inport: '<Root>/operand 1 '
   *  Inport: '<Root>/operand 2'
   *  Sum: '<Root>/Subtraction '
   */
  lab_one_task_one_Y.SUB = lab_one_task_one_U.operand1 -
    lab_one_task_one_U.operand2;

  /* Outport: '<Root>/MUL' incorporates:
   *  Inport: '<Root>/operand 1 '
   *  Inport: '<Root>/operand 2'
   *  Product: '<Root>/Multiplication '
   */
  lab_one_task_one_Y.MUL = lab_one_task_one_U.operand1 *
    lab_one_task_one_U.operand2;

  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/operand 2'
   *  Inport: '<S1>/In1'
   */
  if (lab_one_task_one_U.operand2 != 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    lab_one_task_one_B.In1_f = lab_one_task_one_U.operand2;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Outport: '<Root>/ERROR ' incorporates:
     *  Constant: '<Root>/Inf'
     *  Inport: '<S2>/In1'
     */
    lab_one_task_one_Y.ERROR = (rtInf);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  }

  /* End of If: '<Root>/If' */

  /* Outport: '<Root>/DIV' incorporates:
   *  Inport: '<Root>/operand 1 '
   *  Product: '<Root>/Divide'
   */
  lab_one_task_one_Y.DIV = lab_one_task_one_U.operand1 /
    lab_one_task_one_B.In1_f;
}

/* Model initialize function */
void lab_one_task_one_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(lab_one_task_one_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &lab_one_task_one_B), 0,
                sizeof(B_lab_one_task_one_T));

  /* external inputs */
  (void)memset(&lab_one_task_one_U, 0, sizeof(ExtU_lab_one_task_one_T));

  /* external outputs */
  (void) memset((void *)&lab_one_task_one_Y, 0,
                sizeof(ExtY_lab_one_task_one_T));
}

/* Model terminate function */
void lab_one_task_one_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
