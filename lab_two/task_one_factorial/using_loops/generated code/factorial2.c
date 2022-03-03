/*
 * File: factorial2.c
 *
 * Code generated for Simulink model 'factorial2'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Feb 12 11:29:19 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "factorial2.h"
#include "factorial2_private.h"

/* Block states (default storage) */
DW_factorial2_T factorial2_DW;

/* External inputs (root inport signals with default storage) */
ExtU_factorial2_T factorial2_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_factorial2_T factorial2_Y;

/* Real-time model */
RT_MODEL_factorial2_T factorial2_M_;
RT_MODEL_factorial2_T *const factorial2_M = &factorial2_M_;

/* Model step function */
void factorial2_step(void)
{
  int32_T s1_iter;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* Inport: '<Root>/In1' */
  for (s1_iter = 1; s1_iter <= factorial2_U.In1; s1_iter++) {
    /* Outport: '<Root>/Out1' incorporates:
     *  Delay: '<S1>/Delay'
     *  Product: '<S1>/Multiply'
     */
    factorial2_Y.Out1 = s1_iter * factorial2_DW.Delay_DSTATE;

    /* Update for Delay: '<S1>/Delay' incorporates:
     *  Outport: '<Root>/Out1'
     */
    factorial2_DW.Delay_DSTATE = factorial2_Y.Out1;
  }

  /* End of Inport: '<Root>/In1' */
  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model initialize function */
void factorial2_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(factorial2_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&factorial2_DW, 0,
                sizeof(DW_factorial2_T));

  /* external inputs */
  factorial2_U.In1 = 0;

  /* external outputs */
  factorial2_Y.Out1 = 0;

  /* SystemInitialize for Iterator SubSystem: '<Root>/For Iterator Subsystem' */
  /* InitializeConditions for Delay: '<S1>/Delay' */
  factorial2_DW.Delay_DSTATE = 1;

  /* End of SystemInitialize for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model terminate function */
void factorial2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
