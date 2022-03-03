/*
 * File: lab_three_task_one.c
 *
 * Code generated for Simulink model 'lab_three_task_one'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Mar  3 15:33:15 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "lab_three_task_one.h"
#include "lab_three_task_one_private.h"

/* External outputs (root outports fed by signals with default storage) */
ExtY_lab_three_task_one_T lab_three_task_one_Y;

/* Real-time model */
RT_MODEL_lab_three_task_one_T lab_three_task_one_M_;
RT_MODEL_lab_three_task_one_T *const lab_three_task_one_M =
  &lab_three_task_one_M_;

/* Model step function */
void lab_three_task_one_step(void)
{
  uint8_T b_index;
  int32_T tmp;

  /* Chart: '<Root>/Chart' incorporates:
   *  Constant: '<Root>/Constant'
   */
  /*  factorial */
  b_index = 1U;
  lab_three_task_one_Y.Out1 = 1U;
  while (b_index <= 5) {
    /* NEW_PATTERN */
    tmp = b_index * lab_three_task_one_Y.Out1;
    if (tmp > 65535) {
      tmp = 65535;
    }

    lab_three_task_one_Y.Out1 = (uint16_T)tmp;
    b_index++;
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void lab_three_task_one_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(lab_three_task_one_M, (NULL));

  /* external outputs */
  lab_three_task_one_Y.Out1 = 0U;
}

/* Model terminate function */
void lab_three_task_one_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
