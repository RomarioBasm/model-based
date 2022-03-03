/*
 * File: lab_two_task_three.c
 *
 * Code generated for Simulink model 'lab_two_task_three'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Mar  3 15:03:49 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "lab_two_task_three.h"
#include "lab_two_task_three_private.h"

/* External outputs (root outports fed by signals with default storage) */
ExtY_lab_two_task_three_T lab_two_task_three_Y;

/* Real-time model */
RT_MODEL_lab_two_task_three_T lab_two_task_three_M_;
RT_MODEL_lab_two_task_three_T *const lab_two_task_three_M =
  &lab_two_task_three_M_;

/* Model step function */
void lab_two_task_three_step(void)
{
  /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S2>/Action Port'
   */
  /* If: '<Root>/If' incorporates:
   *  ASCIIToString: '<Root>/ASCII to String'
   *  Constant: '<S2>/Constant'
   *  Outport: '<Root>/Out1'
   */
  lab_two_task_three_Y.Out1[0] = 'B';

  /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */

  /* ASCIIToString: '<Root>/ASCII to String' incorporates:
   *  Outport: '<Root>/Out1'
   */
  lab_two_task_three_Y.Out1[1] = '\x00';
}

/* Model initialize function */
void lab_two_task_three_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(lab_two_task_three_M, (NULL));

  /* external outputs */
  (void) memset(&lab_two_task_three_Y.Out1[0], 0,
                256U*sizeof(char_T));
}

/* Model terminate function */
void lab_two_task_three_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
