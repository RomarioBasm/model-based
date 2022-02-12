/*
 * File: lab_one_task_two.c
 *
 * Code generated for Simulink model 'lab_one_task_two'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Feb 12 10:23:21 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "lab_one_task_two.h"
#include "lab_one_task_two_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_lab_one_task_two_T lab_one_task_two_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_lab_one_task_two_T lab_one_task_two_Y;

/* Real-time model */
RT_MODEL_lab_one_task_two_T lab_one_task_two_M_;
RT_MODEL_lab_one_task_two_T *const lab_one_task_two_M = &lab_one_task_two_M_;

/* Model step function */
void lab_one_task_two_step(void)
{
  /* Outport: '<Root>/AND ' incorporates:
   *  Inport: '<Root>/operand1 '
   *  Inport: '<Root>/operand2 '
   *  Logic: '<Root>/AND'
   */
  lab_one_task_two_Y.AND = (lab_one_task_two_U.operand1 &&
    lab_one_task_two_U.operand2);

  /* Outport: '<Root>/OR ' incorporates:
   *  Inport: '<Root>/operand1 '
   *  Inport: '<Root>/operand2 '
   *  Logic: '<Root>/OR'
   */
  lab_one_task_two_Y.OR = (lab_one_task_two_U.operand1 ||
    lab_one_task_two_U.operand2);

  /* Outport: '<Root>/XOR' incorporates:
   *  Inport: '<Root>/operand1 '
   *  Inport: '<Root>/operand2 '
   *  Logic: '<Root>/XOR1'
   */
  lab_one_task_two_Y.XOR = lab_one_task_two_U.operand1 ^
    lab_one_task_two_U.operand2;

  /* Outport: '<Root>/XNOR ' incorporates:
   *  Inport: '<Root>/operand1 '
   *  Inport: '<Root>/operand2 '
   *  Logic: '<Root>/NXOR'
   */
  lab_one_task_two_Y.XNOR = (lab_one_task_two_U.operand1 ==
    lab_one_task_two_U.operand2);

  /* Outport: '<Root>/NOT 1 ' incorporates:
   *  Inport: '<Root>/operand1 '
   *  Logic: '<Root>/NOT'
   */
  lab_one_task_two_Y.NOT1 = !lab_one_task_two_U.operand1;

  /* Outport: '<Root>/NOT 2 ' incorporates:
   *  Inport: '<Root>/operand2 '
   *  Logic: '<Root>/NOT1'
   */
  lab_one_task_two_Y.NOT2 = !lab_one_task_two_U.operand2;
}

/* Model initialize function */
void lab_one_task_two_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(lab_one_task_two_M, (NULL));

  /* external inputs */
  (void)memset(&lab_one_task_two_U, 0, sizeof(ExtU_lab_one_task_two_T));

  /* external outputs */
  (void) memset((void *)&lab_one_task_two_Y, 0,
                sizeof(ExtY_lab_one_task_two_T));
}

/* Model terminate function */
void lab_one_task_two_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
