/*
 * File: lab_two_task_two.h
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

#ifndef RTW_HEADER_lab_two_task_two_h_
#define RTW_HEADER_lab_two_task_two_h_
#include <string.h>
#include <stddef.h>
#ifndef lab_two_task_two_COMMON_INCLUDES_
# define lab_two_task_two_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* lab_two_task_two_COMMON_INCLUDES_ */

#include "lab_two_task_two_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<Root>/BasicCalculator' */
typedef struct {
  real_T In1;                          /* '<S2>/In1' */
} B_BasicCalculator_lab_two_tas_T;

/* Block signals (default storage) */
typedef struct {
  B_BasicCalculator_lab_two_tas_T BasicCalculator;/* '<Root>/BasicCalculator' */
} B_lab_two_task_two_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T operand1;                     /* '<Root>/operand 1 ' */
  real_T operand2;                     /* '<Root>/operand 2' */
} ExtU_lab_two_task_two_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T SUM;                          /* '<Root>/SUM' */
  real_T SUB;                          /* '<Root>/SUB' */
  real_T MUL;                          /* '<Root>/MUL' */
  real_T DIV;                          /* '<Root>/DIV' */
  real_T ERROR;                        /* '<Root>/ERROR ' */
} ExtY_lab_two_task_two_T;

/* Real-time Model Data Structure */
struct tag_RTM_lab_two_task_two_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_lab_two_task_two_T lab_two_task_two_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_lab_two_task_two_T lab_two_task_two_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_lab_two_task_two_T lab_two_task_two_Y;

/* Model entry point functions */
extern void lab_two_task_two_initialize(void);
extern void lab_two_task_two_step(void);
extern void lab_two_task_two_terminate(void);

/* Real-time Model object */
extern RT_MODEL_lab_two_task_two_T *const lab_two_task_two_M;

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
 * '<Root>' : 'lab_two_task_two'
 * '<S1>'   : 'lab_two_task_two/BasicCalculator'
 * '<S2>'   : 'lab_two_task_two/BasicCalculator/If Action Subsystem'
 * '<S3>'   : 'lab_two_task_two/BasicCalculator/If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_lab_two_task_two_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
