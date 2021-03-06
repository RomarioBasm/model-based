/*
 * File: lab_one_task_two.h
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

#ifndef RTW_HEADER_lab_one_task_two_h_
#define RTW_HEADER_lab_one_task_two_h_
#include <string.h>
#include <stddef.h>
#ifndef lab_one_task_two_COMMON_INCLUDES_
# define lab_one_task_two_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* lab_one_task_two_COMMON_INCLUDES_ */

#include "lab_one_task_two_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T operand1;                  /* '<Root>/operand1 ' */
  boolean_T operand2;                  /* '<Root>/operand2 ' */
} ExtU_lab_one_task_two_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T AND;                       /* '<Root>/AND ' */
  boolean_T OR;                        /* '<Root>/OR ' */
  boolean_T XOR;                       /* '<Root>/XOR' */
  boolean_T XNOR;                      /* '<Root>/XNOR ' */
  boolean_T NOT1;                      /* '<Root>/NOT 1 ' */
  boolean_T NOT2;                      /* '<Root>/NOT 2 ' */
} ExtY_lab_one_task_two_T;

/* Real-time Model Data Structure */
struct tag_RTM_lab_one_task_two_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_lab_one_task_two_T lab_one_task_two_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_lab_one_task_two_T lab_one_task_two_Y;

/* Model entry point functions */
extern void lab_one_task_two_initialize(void);
extern void lab_one_task_two_step(void);
extern void lab_one_task_two_terminate(void);

/* Real-time Model object */
extern RT_MODEL_lab_one_task_two_T *const lab_one_task_two_M;

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
 * '<Root>' : 'lab_one_task_two'
 */
#endif                                 /* RTW_HEADER_lab_one_task_two_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
