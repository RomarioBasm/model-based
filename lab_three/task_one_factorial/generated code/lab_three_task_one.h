/*
 * File: lab_three_task_one.h
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

#ifndef RTW_HEADER_lab_three_task_one_h_
#define RTW_HEADER_lab_three_task_one_h_
#include <stddef.h>
#ifndef lab_three_task_one_COMMON_INCLUDES_
# define lab_three_task_one_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* lab_three_task_one_COMMON_INCLUDES_ */

#include "lab_three_task_one_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint16_T Out1;                       /* '<Root>/Out1' */
} ExtY_lab_three_task_one_T;

/* Real-time Model Data Structure */
struct tag_RTM_lab_three_task_one_T {
  const char_T * volatile errorStatus;
};

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_lab_three_task_one_T lab_three_task_one_Y;

/* Model entry point functions */
extern void lab_three_task_one_initialize(void);
extern void lab_three_task_one_step(void);
extern void lab_three_task_one_terminate(void);

/* Real-time Model object */
extern RT_MODEL_lab_three_task_one_T *const lab_three_task_one_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
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
 * '<Root>' : 'lab_three_task_one'
 * '<S1>'   : 'lab_three_task_one/Chart'
 */
#endif                                 /* RTW_HEADER_lab_three_task_one_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
