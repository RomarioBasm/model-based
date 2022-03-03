/*
 * File: factorial2.h
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

#ifndef RTW_HEADER_factorial2_h_
#define RTW_HEADER_factorial2_h_
#include <stddef.h>
#include <string.h>
#ifndef factorial2_COMMON_INCLUDES_
# define factorial2_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* factorial2_COMMON_INCLUDES_ */

#include "factorial2_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int32_T Delay_DSTATE;                /* '<S1>/Delay' */
} DW_factorial2_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int32_T In1;                         /* '<Root>/In1' */
} ExtU_factorial2_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int32_T Out1;                        /* '<Root>/Out1' */
} ExtY_factorial2_T;

/* Real-time Model Data Structure */
struct tag_RTM_factorial2_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_factorial2_T factorial2_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_factorial2_T factorial2_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_factorial2_T factorial2_Y;

/* Model entry point functions */
extern void factorial2_initialize(void);
extern void factorial2_step(void);
extern void factorial2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_factorial2_T *const factorial2_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
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
 * '<Root>' : 'factorial2'
 * '<S1>'   : 'factorial2/For Iterator Subsystem'
 */
#endif                                 /* RTW_HEADER_factorial2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
