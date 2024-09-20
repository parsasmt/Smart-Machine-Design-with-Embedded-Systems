/*
 * File: untitled.h
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Fri Jul  5 17:36:46 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_untitled_h_
#define RTW_HEADER_untitled_h_
#ifndef untitled_COMMON_INCLUDES_
#define untitled_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* untitled_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T c_speed;                      /* '<Root>/Break Manager' */
  real_T last_encode;                  /* '<Root>/Break Manager' */
  real_T static_speed;                 /* '<Root>/Break Manager' */
  real_T timer;                        /* '<Root>/Battary Reducer' */
  uint8_T is_active_c1_untitled;       /* '<Root>/Move Process' */
  uint8_T is_c1_untitled;              /* '<Root>/Move Process' */
  uint8_T is_active_c3_untitled;       /* '<Root>/Front light Controller' */
  uint8_T is_c3_untitled;              /* '<Root>/Front light Controller' */
  uint8_T is_active_c6_untitled;       /* '<Root>/Distance Detacter' */
  uint8_T is_c6_untitled;              /* '<Root>/Distance Detacter' */
  uint8_T is_active_c2_untitled;       /* '<Root>/DOOR & Belt Alert' */
  uint8_T is_c2_untitled;              /* '<Root>/DOOR & Belt Alert' */
  uint8_T is_active_c7_untitled;       /* '<Root>/Break Manager' */
  uint8_T is_c7_untitled;              /* '<Root>/Break Manager' */
  uint8_T temporalCounter_i1;          /* '<Root>/Break Manager' */
  uint8_T is_active_c4_untitled;       /* '<Root>/Battary information' */
  uint8_T is_c4_untitled;              /* '<Root>/Battary information' */
  uint8_T is_active_c5_untitled;       /* '<Root>/Battary Reducer' */
  uint8_T is_c5_untitled;              /* '<Root>/Battary Reducer' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T ultra_sonic_sensor;           /* '<Root>/ultra_sonic_sensor' */
  real_T Encoder_input;                /* '<Root>/Encoder_input' */
  real_T IR_sensor;                    /* '<Root>/IR_sensor' */
  real_T Door_sensor;                  /* '<Root>/Door_sensor' */
  real_T Belt_sensor;                  /* '<Root>/Belt_sensor' */
  real_T MoveSensor;                   /* '<Root>/Move Sensor' */
  real_T Light_sensor;                 /* '<Root>/Light_sensor' */
  real_T battary_energy;               /* '<Root>/battary_energy' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T barrier_alert;                /* '<Root>/barrier_alert' */
  real_T break_power;                  /* '<Root>/break_power' */
  real_T Car_speed;                    /* '<Root>/Car_speed' */
  real_T car_position_x;               /* '<Root>/car_position_x' */
  real_T car_position_y;               /* '<Root>/car_position_y' */
  real_T belt_alarm;                   /* '<Root>/belt_alarm' */
  real_T door_alarm;                   /* '<Root>/door_alarm' */
  real_T battery_info;                 /* '<Root>/battery_info' */
  real_T battery_alarm;                /* '<Root>/battery_alarm' */
  real_T Light;                        /* '<Root>/Light' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void untitled_initialize(void);
extern void untitled_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

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
 * '<Root>' : 'untitled'
 * '<S1>'   : 'untitled/Battary Reducer'
 * '<S2>'   : 'untitled/Battary information'
 * '<S3>'   : 'untitled/Break Manager'
 * '<S4>'   : 'untitled/DOOR & Belt Alert'
 * '<S5>'   : 'untitled/Distance Detacter'
 * '<S6>'   : 'untitled/Front light Controller'
 * '<S7>'   : 'untitled/Move Process'
 */
#endif                                 /* RTW_HEADER_untitled_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
