#include <Arduino.h>
#include <Arduino_FreeRTOS.h>
#include <queue.h>


/*
 * File: rtwtypes.h
 *
 * Code generated for Simulink model 'Tinkercad'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Fri Jul  5 17:38:12 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTWTYPES_H
#define RTWTYPES_H

/* Logical type definitions */
#if (!defined(__cplusplus))
#ifndef false
#define false                          (0U)
#endif

#ifndef true
#define true                           (1U)
#endif
#endif

/*=======================================================================*
 * Target hardware information
 *   Device type: Intel->x86-64 (Windows64)
 *   Number of bits:     char:   8    short:   16    int:  32
 *                       long:  32    long long:  64
 *                       native word size:  64
 *   Byte ordering: LittleEndian
 *   Signed integer division rounds to: Zero
 *   Shift right on a signed integer as arithmetic shift: on
 *=======================================================================*/

/*=======================================================================*
 * Fixed width word size data types:                                     *
 *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
 *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
 *   real32_T, real64_T           - 32 and 64 bit floating point numbers *
 *=======================================================================*/
typedef signed char int8_T;
typedef unsigned char uint8_T;
typedef short int16_T;
typedef unsigned short uint16_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef long long int64_T;
typedef unsigned long long uint64_T;
typedef float real32_T;
typedef double real64_T;

/*===========================================================================*
 * Generic type definitions: boolean_T, char_T, byte_T, int_T, uint_T,       *
 *                           real_T, time_T, ulong_T, ulonglong_T.           *
 *===========================================================================*/
typedef double real_T;
typedef double time_T;
typedef unsigned char boolean_T;
typedef int int_T;
typedef unsigned int uint_T;
typedef unsigned long ulong_T;
typedef unsigned long long ulonglong_T;
typedef char char_T;
typedef unsigned char uchar_T;
typedef char_T byte_T;

/*=======================================================================*
 * Min and Max:                                                          *
 *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
 *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
 *=======================================================================*/
#define MAX_int8_T                     ((int8_T)(127))
#define MIN_int8_T                     ((int8_T)(-128))
#define MAX_uint8_T                    ((uint8_T)(255U))
#define MAX_int16_T                    ((int16_T)(32767))
#define MIN_int16_T                    ((int16_T)(-32768))
#define MAX_uint16_T                   ((uint16_T)(65535U))
#define MAX_int32_T                    ((int32_T)(2147483647))
#define MIN_int32_T                    ((int32_T)(-2147483647-1))
#define MAX_uint32_T                   ((uint32_T)(0xFFFFFFFFU))
#define MAX_int64_T                    ((int64_T)(9223372036854775807LL))
#define MIN_int64_T                    ((int64_T)(-9223372036854775807LL-1LL))
#define MAX_uint64_T                   ((uint64_T)(0xFFFFFFFFFFFFFFFFULL))

/* Block D-Work pointer type */
typedef void * pointer_T;

#endif                                 /* RTWTYPES_H */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */


/*
 * File: Tinkercad.h
 *
 * Code generated for Simulink model 'Tinkercad'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Fri Jul  5 17:38:12 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Tinkercad_h_
#define RTW_HEADER_Tinkercad_h_
#ifndef Tinkercad_COMMON_INCLUDES_
#define Tinkercad_COMMON_INCLUDES_
#endif                                 /* Tinkercad_COMMON_INCLUDES_ */

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
  uint8_T is_active_c1_Tinkercad;      /* '<Root>/Move Process' */
  uint8_T is_c1_Tinkercad;             /* '<Root>/Move Process' */
  uint8_T is_active_c3_Tinkercad;      /* '<Root>/Front light Controller' */
  uint8_T is_c3_Tinkercad;             /* '<Root>/Front light Controller' */
  uint8_T is_active_c6_Tinkercad;      /* '<Root>/Distance Detacter' */
  uint8_T is_c6_Tinkercad;             /* '<Root>/Distance Detacter' */
  uint8_T is_active_c2_Tinkercad;      /* '<Root>/DOOR & Belt Alert' */
  uint8_T is_c2_Tinkercad;             /* '<Root>/DOOR & Belt Alert' */
  uint8_T is_active_c7_Tinkercad;      /* '<Root>/Break Manager' */
  uint8_T is_c7_Tinkercad;             /* '<Root>/Break Manager' */
  uint8_T temporalCounter_i1;          /* '<Root>/Break Manager' */
  uint8_T is_active_c4_Tinkercad;      /* '<Root>/Battary information' */
  uint8_T is_c4_Tinkercad;             /* '<Root>/Battary information' */
  uint8_T is_active_c5_Tinkercad;      /* '<Root>/Battary Reducer' */
  uint8_T is_c5_Tinkercad;             /* '<Root>/Battary Reducer' */
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
extern void Tinkercad_initialize(void);
extern void Tinkercad_step(void);

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
 * '<Root>' : 'Tinkercad'
 * '<S1>'   : 'Tinkercad/Battary Reducer'
 * '<S2>'   : 'Tinkercad/Battary information'
 * '<S3>'   : 'Tinkercad/Break Manager'
 * '<S4>'   : 'Tinkercad/DOOR & Belt Alert'
 * '<S5>'   : 'Tinkercad/Distance Detacter'
 * '<S6>'   : 'Tinkercad/Front light Controller'
 * '<S7>'   : 'Tinkercad/Move Process'
 */
#endif                                 /* RTW_HEADER_Tinkercad_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * File: Tinkercad.c
 *
 * Code generated for Simulink model 'Tinkercad'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Fri Jul  5 17:38:12 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */


/* Named constants for Chart: '<Root>/Battary Reducer' */
#define IN_Battery_reduser             ((uint8_T)1U)
#define IN_No_battery_reduse           ((uint8_T)2U)

/* Named constants for Chart: '<Root>/Battary information' */
#define IN_low_battery                 ((uint8_T)1U)
#define IN_not_low_battery             ((uint8_T)2U)

/* Named constants for Chart: '<Root>/Break Manager' */
#define IN_Change_speed                ((uint8_T)1U)
#define IN_alarm_on                    ((uint8_T)2U)
#define IN_hard_break                  ((uint8_T)3U)
#define IN_idel                        ((uint8_T)4U)
#define IN_low_break                   ((uint8_T)5U)
#define IN_mid_break                   ((uint8_T)6U)
#define IN_speed_cal                   ((uint8_T)7U)
#define IN_speed_fall                  ((uint8_T)8U)
#define IN_speed_rise                  ((uint8_T)9U)

/* Named constants for Chart: '<Root>/DOOR & Belt Alert' */
#define IN_b_alarm_off                 ((uint8_T)1U)
#define IN_b_alarm_on                  ((uint8_T)2U)
#define IN_d_alarm_off                 ((uint8_T)3U)
#define IN_d_alarm_on                  ((uint8_T)4U)
#define IN_idel_l                      ((uint8_T)5U)

/* Named constants for Chart: '<Root>/Distance Detacter' */
#define IN_alarm                       ((uint8_T)1U)
#define IN_safe                        ((uint8_T)2U)

/* Named constants for Chart: '<Root>/Front light Controller' */
#define IN_Light_on                    ((uint8_T)1U)
#define IN_light_off                   ((uint8_T)2U)

/* Named constants for Chart: '<Root>/Move Process' */
#define IN_Start_move                  ((uint8_T)1U)
#define IN_Stop_car                    ((uint8_T)2U)
#define IN_straight_down               ((uint8_T)3U)
#define IN_straight_left               ((uint8_T)4U)
#define IN_straight_right              ((uint8_T)5U)
#define IN_straight_up                 ((uint8_T)6U)

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void Tinkercad_step(void)
{
  /* Chart: '<Root>/Distance Detacter' incorporates:
   *  Inport: '<Root>/ultra_sonic_sensor'
   */
  if (rtDW.is_active_c6_Tinkercad == 0U) {
    rtDW.is_active_c6_Tinkercad = 1U;

    /* Outport: '<Root>/barrier_alert' */
    rtY.barrier_alert = 0.0;
    rtDW.is_c6_Tinkercad = IN_safe;
  } else if (rtDW.is_c6_Tinkercad == IN_alarm) {
    if (rtU.ultra_sonic_sensor > 160.0) {
      /* Outport: '<Root>/barrier_alert' */
      rtY.barrier_alert = 0.0;
      rtDW.is_c6_Tinkercad = IN_safe;
    }

    /* case IN_safe: */
  } else if (rtU.ultra_sonic_sensor <= 160.0) {
    /* Outport: '<Root>/barrier_alert' */
    rtY.barrier_alert = 1.0;
    rtDW.is_c6_Tinkercad = IN_alarm;
  }

  /* End of Chart: '<Root>/Distance Detacter' */

  /* Chart: '<Root>/Break Manager' incorporates:
   *  Inport: '<Root>/Encoder_input'
   *  Outport: '<Root>/barrier_alert'
   */
  if (rtDW.temporalCounter_i1 < 15U) {
    rtDW.temporalCounter_i1++;
  }

  if (rtDW.is_active_c7_Tinkercad == 0U) {
    rtDW.is_active_c7_Tinkercad = 1U;

    /* Outport: '<Root>/Car_speed' */
    rtY.Car_speed = 0.0;
    rtDW.static_speed = 5.0;
    rtDW.c_speed = 0.0;
    rtDW.last_encode = 0.0;

    /* Outport: '<Root>/break_power' */
    rtY.break_power = 0.0;
    rtDW.is_c7_Tinkercad = IN_idel;
    rtDW.temporalCounter_i1 = 0U;
  } else {
    switch (rtDW.is_c7_Tinkercad) {
     case IN_Change_speed:
      if (rtU.Encoder_input - rtDW.last_encode > 6.5) {
        rtDW.is_c7_Tinkercad = IN_speed_rise;
      } else if (rtU.Encoder_input - rtDW.last_encode < -6.5) {
        rtDW.is_c7_Tinkercad = IN_speed_fall;
      }
      break;

     case IN_alarm_on:
      if (rtU.Encoder_input < 10.0) {
        /* Outport: '<Root>/break_power' */
        rtY.break_power = 2.0;
        rtDW.is_c7_Tinkercad = IN_low_break;
      } else if ((rtU.Encoder_input > 10.0) && (rtU.Encoder_input < 20.0)) {
        /* Outport: '<Root>/break_power' */
        rtY.break_power = 3.0;
        rtDW.is_c7_Tinkercad = IN_mid_break;
      } else if (rtU.Encoder_input > 20.0) {
        /* Outport: '<Root>/break_power' */
        rtY.break_power = 4.0;
        rtDW.is_c7_Tinkercad = IN_hard_break;
      }
      break;

     case IN_hard_break:
      /* Outport: '<Root>/Car_speed' incorporates:
       *  Outport: '<Root>/break_power'
       */
      rtY.Car_speed = rtDW.static_speed * rtDW.c_speed - rtY.break_power *
        rtDW.c_speed;
      rtDW.is_c7_Tinkercad = IN_idel;
      rtDW.temporalCounter_i1 = 0U;
      break;

     case IN_idel:
      {
        real_T tmp;
        tmp = rtU.Encoder_input - rtDW.last_encode;
        if ((rtDW.temporalCounter_i1 >= 15U) && (tmp <= 6.5) && (tmp >= -6.5)) {
          rtDW.is_c7_Tinkercad = IN_speed_cal;
        } else {
          tmp = rtU.Encoder_input - rtDW.last_encode;
          if ((rtDW.temporalCounter_i1 >= 15U) && ((tmp > 6.5) || (tmp < -6.5)))
          {
            rtDW.is_c7_Tinkercad = IN_Change_speed;
          } else if (rtY.barrier_alert == 1.0) {
            rtDW.is_c7_Tinkercad = IN_alarm_on;
          }
        }
      }
      break;

     case IN_low_break:
      /* Outport: '<Root>/Car_speed' incorporates:
       *  Outport: '<Root>/break_power'
       */
      rtY.Car_speed = rtDW.static_speed * rtDW.c_speed - rtY.break_power *
        rtDW.c_speed;
      rtDW.is_c7_Tinkercad = IN_idel;
      rtDW.temporalCounter_i1 = 0U;
      break;

     case IN_mid_break:
      /* Outport: '<Root>/Car_speed' incorporates:
       *  Outport: '<Root>/break_power'
       */
      rtY.Car_speed = rtDW.static_speed * rtDW.c_speed - rtY.break_power *
        rtDW.c_speed;
      rtDW.is_c7_Tinkercad = IN_idel;
      rtDW.temporalCounter_i1 = 0U;
      break;

     case IN_speed_cal:
      /* Outport: '<Root>/Car_speed' incorporates:
       *  Outport: '<Root>/break_power'
       */
      rtY.Car_speed = rtDW.static_speed * rtDW.c_speed - rtY.break_power *
        rtDW.c_speed;

      /* Outport: '<Root>/break_power' */
      rtY.break_power = 0.0;
      rtDW.is_c7_Tinkercad = IN_idel;
      rtDW.temporalCounter_i1 = 0U;
      break;

     case IN_speed_fall:
      rtDW.last_encode = rtU.Encoder_input;
      rtDW.c_speed--;
      rtDW.is_c7_Tinkercad = IN_idel;
      rtDW.temporalCounter_i1 = 0U;
      break;

     default:
      /* case IN_speed_rise: */
      rtDW.last_encode = rtU.Encoder_input;
      rtDW.c_speed++;
      rtDW.is_c7_Tinkercad = IN_idel;
      rtDW.temporalCounter_i1 = 0U;
      break;
    }
  }

  /* End of Chart: '<Root>/Break Manager' */

  /* Chart: '<Root>/Move Process' incorporates:
   *  Inport: '<Root>/IR_sensor'
   *  Inport: '<Root>/Move Sensor'
   */
  if (rtDW.is_active_c1_Tinkercad == 0U) {
    rtDW.is_active_c1_Tinkercad = 1U;

    /* Outport: '<Root>/car_position_x' */
    rtY.car_position_x = 0.0;

    /* Outport: '<Root>/car_position_y' */
    rtY.car_position_y = 0.0;
    rtDW.is_c1_Tinkercad = IN_Stop_car;
  } else {
    switch (rtDW.is_c1_Tinkercad) {
     case IN_Start_move:
      if (rtU.MoveSensor == 0.0) {
        rtDW.is_c1_Tinkercad = IN_Stop_car;
      } else if (rtU.IR_sensor == 17.0) {
        /* Outport: '<Root>/car_position_y' incorporates:
         *  Outport: '<Root>/Car_speed'
         */
        rtY.car_position_y += rtY.Car_speed;
        rtDW.is_c1_Tinkercad = IN_straight_up;
      } else if (rtU.IR_sensor == 25.0) {
        /* Outport: '<Root>/car_position_y' incorporates:
         *  Outport: '<Root>/Car_speed'
         */
        rtY.car_position_y -= rtY.Car_speed;
        rtDW.is_c1_Tinkercad = IN_straight_down;
      } else if (rtU.IR_sensor == 20.0) {
        /* Outport: '<Root>/car_position_x' incorporates:
         *  Outport: '<Root>/Car_speed'
         */
        rtY.car_position_x -= rtY.Car_speed;
        rtDW.is_c1_Tinkercad = IN_straight_left;
      } else if (rtU.IR_sensor == 22.0) {
        /* Outport: '<Root>/car_position_x' incorporates:
         *  Outport: '<Root>/Car_speed'
         */
        rtY.car_position_x += rtY.Car_speed;
        rtDW.is_c1_Tinkercad = IN_straight_right;
      }
      break;

     case IN_Stop_car:
      if (rtU.MoveSensor == 1.0) {
        rtDW.is_c1_Tinkercad = IN_Start_move;
      }
      break;

     case IN_straight_down:
      if (rtU.IR_sensor != 25.0) {
        rtDW.is_c1_Tinkercad = IN_Start_move;
      } else if (rtU.IR_sensor == 25.0) {
        /* Outport: '<Root>/car_position_y' incorporates:
         *  Outport: '<Root>/Car_speed'
         */
        rtY.car_position_y -= rtY.Car_speed;
        rtDW.is_c1_Tinkercad = IN_straight_down;
      }
      break;

     case IN_straight_left:
      if (rtU.IR_sensor != 20.0) {
        rtDW.is_c1_Tinkercad = IN_Start_move;
      } else if (rtU.IR_sensor == 20.0) {
        /* Outport: '<Root>/car_position_x' incorporates:
         *  Outport: '<Root>/Car_speed'
         */
        rtY.car_position_x -= rtY.Car_speed;
        rtDW.is_c1_Tinkercad = IN_straight_left;
      }
      break;

     case IN_straight_right:
      if (rtU.IR_sensor != 22.0) {
        rtDW.is_c1_Tinkercad = IN_Start_move;
      } else if (rtU.IR_sensor == 22.0) {
        /* Outport: '<Root>/car_position_x' incorporates:
         *  Outport: '<Root>/Car_speed'
         */
        rtY.car_position_x += rtY.Car_speed;
        rtDW.is_c1_Tinkercad = IN_straight_right;
      }
      break;

     default:
      /* case IN_straight_up: */
      if (rtU.IR_sensor != 17.0) {
        rtDW.is_c1_Tinkercad = IN_Start_move;
      } else if (rtU.IR_sensor == 17.0) {
        /* Outport: '<Root>/car_position_y' incorporates:
         *  Outport: '<Root>/Car_speed'
         */
        rtY.car_position_y += rtY.Car_speed;
        rtDW.is_c1_Tinkercad = IN_straight_up;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Move Process' */

  /* Chart: '<Root>/DOOR & Belt Alert' incorporates:
   *  Inport: '<Root>/Belt_sensor'
   *  Inport: '<Root>/Door_sensor'
   *  Inport: '<Root>/Move Sensor'
   *  Outport: '<Root>/belt_alarm'
   *  Outport: '<Root>/door_alarm'
   */
  if (rtDW.is_active_c2_Tinkercad == 0U) {
    rtDW.is_active_c2_Tinkercad = 1U;

    /* Outport: '<Root>/door_alarm' */
    rtY.door_alarm = 0.0;

    /* Outport: '<Root>/belt_alarm' */
    rtY.belt_alarm = 0.0;
    rtDW.is_c2_Tinkercad = IN_idel_l;
  } else {
    switch (rtDW.is_c2_Tinkercad) {
     case IN_b_alarm_off:
      rtDW.is_c2_Tinkercad = IN_idel_l;
      break;

     case IN_b_alarm_on:
      rtDW.is_c2_Tinkercad = IN_idel_l;
      break;

     case IN_d_alarm_off:
      rtDW.is_c2_Tinkercad = IN_idel_l;
      break;

     case IN_d_alarm_on:
      rtDW.is_c2_Tinkercad = IN_idel_l;
      break;

     default:
      /* case IN_idel: */
      if ((rtU.MoveSensor == 1.0) && (rtU.Belt_sensor == 0.0) && (rtY.belt_alarm
           == 0.0)) {
        rtY.belt_alarm = 1.0;
        rtDW.is_c2_Tinkercad = IN_b_alarm_on;
      } else if (((rtU.Belt_sensor == 1.0) && (rtY.belt_alarm == 1.0)) ||
                 ((rtU.MoveSensor == 0.0) && (rtY.belt_alarm == 1.0))) {
        rtY.belt_alarm = 0.0;
        rtDW.is_c2_Tinkercad = IN_b_alarm_off;
      } else if ((rtU.Door_sensor == 1.0) && (rtY.door_alarm == 0.0)) {
        /* Outport: '<Root>/door_alarm' */
        rtY.door_alarm = 1.0;
        rtDW.is_c2_Tinkercad = IN_d_alarm_on;
      } else if ((rtU.Door_sensor == 0.0) && (rtY.door_alarm == 1.0)) {
        /* Outport: '<Root>/door_alarm' */
        rtY.door_alarm = 0.0;
        rtDW.is_c2_Tinkercad = IN_d_alarm_off;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/DOOR & Belt Alert' */

  /* Chart: '<Root>/Battary Reducer' incorporates:
   *  Inport: '<Root>/Move Sensor'
   *  Outport: '<Root>/battery_info'
   */
  if (rtDW.is_active_c5_Tinkercad == 0U) {
    rtDW.is_active_c5_Tinkercad = 1U;

    /* Outport: '<Root>/battery_info' incorporates:
     *  Inport: '<Root>/battary_energy'
     */
    rtY.battery_info = rtU.battary_energy;
    rtDW.is_c5_Tinkercad = IN_No_battery_reduse;
  } else if (rtDW.is_c5_Tinkercad == IN_Battery_reduser) {
    if (rtU.MoveSensor == 0.0) {
      rtDW.is_c5_Tinkercad = IN_No_battery_reduse;
    } else if ((rtDW.timer <= 5000.0) && (rtY.battery_info > 0.0)) {
      rtDW.timer++;
    } else if (rtDW.timer > 5000.0) {
      /* Outport: '<Root>/battery_info' */
      rtY.battery_info--;
      rtDW.timer = 0.0;
    }

    /* case IN_No_battery_reduse: */
  } else if (rtU.MoveSensor == 1.0) {
    rtDW.timer = 0.0;
    rtDW.is_c5_Tinkercad = IN_Battery_reduser;
  }

  /* End of Chart: '<Root>/Battary Reducer' */

  /* Chart: '<Root>/Battary information' incorporates:
   *  Outport: '<Root>/battery_info'
   */
  if (rtDW.is_active_c4_Tinkercad == 0U) {
    rtDW.is_active_c4_Tinkercad = 1U;

    /* Outport: '<Root>/battery_alarm' */
    rtY.battery_alarm = 0.0;
    rtDW.is_c4_Tinkercad = IN_not_low_battery;
  } else if (rtDW.is_c4_Tinkercad == IN_low_battery) {
    if (rtY.battery_info > 20.0) {
      /* Outport: '<Root>/battery_alarm' */
      rtY.battery_alarm = 0.0;
      rtDW.is_c4_Tinkercad = IN_not_low_battery;
    }

    /* case IN_not_low_battery: */
  } else if (rtY.battery_info <= 20.0) {
    /* Outport: '<Root>/battery_alarm' */
    rtY.battery_alarm = 1.0;
    rtDW.is_c4_Tinkercad = IN_low_battery;
  }

  /* End of Chart: '<Root>/Battary information' */

  /* Chart: '<Root>/Front light Controller' incorporates:
   *  Inport: '<Root>/Light_sensor'
   */
  if (rtDW.is_active_c3_Tinkercad == 0U) {
    rtDW.is_active_c3_Tinkercad = 1U;

    /* Outport: '<Root>/Light' */
    rtY.Light = 0.0;
    rtDW.is_c3_Tinkercad = IN_light_off;
  } else if (rtDW.is_c3_Tinkercad == IN_Light_on) {
    if (rtU.Light_sensor >= 0.0) {
      /* Outport: '<Root>/Light' */
      rtY.Light = 0.0;
      rtDW.is_c3_Tinkercad = IN_light_off;
    }

    /* case IN_light_off: */
  } else if (rtU.Light_sensor < 0.0) {
    /* Outport: '<Root>/Light' */
    rtY.Light = 1.0;
    rtDW.is_c3_Tinkercad = IN_Light_on;
  }

  /* End of Chart: '<Root>/Front light Controller' */
}

/* Model initialize function */
void Tinkercad_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */


int DistanceDetectorArray[1]={0};
int BreakManagerArray[2]={0, 0};
int MoveProcessArray[4]={0, 0, 0, 0};
int DoorBeltAlertArray[3]={0, 0, 0};
int BatteryReducerArray[2]={0, 0};
int BatteryInformationArray[2]={0, 0};
int FrontLightControllerArray[1]={0};

int PreviousUltraSonicSensor = 0;   
int PreviousEncoderInput = 0;       
int PreviousIRSensor = 0;        
int PreviousMoveSensor = 0;      
int PreviousDoorSensor = 0;     
int PreviousBeltSensor = 0; 
int PreviousLightSensor = 0;
int PreviousBatteryEnergy = 0;

void UltraSonicSensor(void *pvParameters);
void EncoderInput(void *pvParameters);
void IRSensor(void *pvParameters);
void MoveSensor(void *pvParameters);
void DoorSensor(void *pvParameters);
void BeltSensor(void *pvParameters);
void LightSensor(void *pvParameters);
void BatteryEnergy(void *pvParameters);

void pDistanceDetector(void *pvparameters);
void pBreakManager(void *pvparameters);
void pMoveProcess(void *pvparameters);
void pDoorBeltAlert    (void *pvparameters);
void pBatteryReducer(void *pvparameters);
void pBatteryInformation(void *pvparameters);
void pFrontLightController(void *pvparameters);

QueueHandle_t DistanceDetector;   
QueueHandle_t BreakManager;       
QueueHandle_t MoveProcess;        
QueueHandle_t DoorBeltAlert;      
QueueHandle_t BatteryReducer;     
QueueHandle_t BatteryInformation; 
QueueHandle_t FrontLightController;


void setup(){

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  pinMode(A6, INPUT);
  pinMode(A7, INPUT);

  DistanceDetector      = xQueueCreate(10, sizeof(int));
  BreakManager          = xQueueCreate(10, sizeof(int));
  MoveProcess           = xQueueCreate(10, sizeof(int));
  DoorBeltAlert         = xQueueCreate(10, sizeof(int));
  BatteryReducer        = xQueueCreate(10, sizeof(int));
  BatteryInformation    = xQueueCreate(10, sizeof(int));
  FrontLightController  = xQueueCreate(10, sizeof(int)); 

  if(DistanceDetector!=NULL && BreakManager!=NULL && MoveProcess!=NULL && DoorBeltAlert!=NULL
        && BatteryReducer!= NULL && BatteryInformation!=NULL && FrontLightController!= NULL){

    xTaskCreate(UltraSonicSensor, "UltraSonicSensor", 128, NULL, 1, NULL);      
    xTaskCreate(EncoderInput,     "EncoderInput",     128, NULL, 1, NULL);      
    xTaskCreate(IRSensor,         "IRSensor",         128, NULL, 1, NULL);      
    xTaskCreate(MoveSensor,       "MoveSensor",       128, NULL, 1, NULL);      
    xTaskCreate(DoorSensor,       "DoorSensor",       128, NULL, 1, NULL);      
    xTaskCreate(BeltSensor,       "BeltSensor",       128, NULL, 1, NULL);      
    xTaskCreate(LightSensor,      "LightSensor",      128, NULL, 1, NULL);
    xTaskCreate(BatteryEnergy,    "BatteryEnergy",    128, NULL, 1, NULL);

    xTaskCreate(pDistanceDetector,      "pDistanceDetector",      128, NULL, 6, NULL);
    xTaskCreate(pBreakManager,          "pBreakManager",          128, NULL, 5, NULL);
    xTaskCreate(pMoveProcess,           "pMoveProcess",           128, NULL, 4, NULL);
    xTaskCreate(pDoorBeltAlert,         "pDoorBeltAlert",         128, NULL, 3, NULL);
    xTaskCreate(pBatteryReducer,        "pBatteryReducer",        128, NULL, 3, NULL);
    xTaskCreate(pBatteryInformation,    "pBatteryInformation",    128, NULL, 2, NULL);
    xTaskCreate(pFrontLightController,  "pFrontLightController",  128, NULL, 3, NULL);

  }
}

void loop(){}

void UltraSonicSensor(void *pvParameters){
  (void) pvParameters;

  for(;;){
    int newUltraSonicSensor = analogRead(A0);
    if (newUltraSonicSensor != PreviousUltraSonicSensor){
      PreviousUltraSonicSensor = newUltraSonicSensor;
      DistanceDetectorArray[0] = newUltraSonicSensor;
      BreakManagerArray[0] = newUltraSonicSensor;
      MoveProcessArray[0] = newUltraSonicSensor;
      xQueueSend(DistanceDetector, &DistanceDetectorArray, portMAX_DELAY);
      xQueueSend(BreakManager, &BreakManagerArray, portMAX_DELAY);
      xQueueSend(MoveProcess, &MoveProcessArray, portMAX_DELAY);
    }
    taskYIELD();
  }
}

void EncoderInput(void *pvParameters){
  (void) pvParameters;

  for(;;){
    int newEncoderInput = analogRead(A1);
    if (newEncoderInput != PreviousEncoderInput){
      PreviousEncoderInput = newEncoderInput;
      BreakManagerArray[1] = newEncoderInput;
      MoveProcessArray[1] = newEncoderInput;
      xQueueSend(BreakManager, &BreakManagerArray, portMAX_DELAY);
      xQueueSend(MoveProcess, &MoveProcessArray, portMAX_DELAY);
    }
    taskYIELD();
  }
}

void IRSensor(void *pvParameters){
  (void) pvParameters;

  for(;;){
    int newIRSensor = analogRead(A2);
    if (newIRSensor != PreviousIRSensor){
      PreviousIRSensor = newIRSensor;
      MoveProcessArray[2] = newIRSensor;
      xQueueSend(MoveProcess, &MoveProcessArray, portMAX_DELAY);
    }
    taskYIELD();
  }
}

void MoveSensor(void *pvParameters){
  (void) pvParameters;

  for(;;){
    int newMoveSensor = analogRead(A3);
    if (newMoveSensor != PreviousMoveSensor){
      PreviousMoveSensor = newMoveSensor;
      BatteryInformationArray[0] = newMoveSensor;
      BatteryReducerArray[0] = newMoveSensor;
      DoorBeltAlertArray[2] = newMoveSensor;
      MoveProcessArray[3] = newMoveSensor;
      xQueueSend(MoveProcess, &MoveProcessArray, portMAX_DELAY);
      xQueueSend(DoorBeltAlert, &DoorBeltAlertArray, portMAX_DELAY);
      xQueueSend(BatteryReducer, &BatteryReducerArray, portMAX_DELAY);
      xQueueSend(BatteryInformation, &BatteryInformationArray, portMAX_DELAY);
      
    }
    taskYIELD();
  }
}

void DoorSensor(void *pvParameters){
  (void) pvParameters;

  for(;;){
    int newDoorSensor = analogRead(A4);
    if (newDoorSensor != PreviousDoorSensor){
      PreviousDoorSensor = newDoorSensor;
      DoorBeltAlertArray[0] = newDoorSensor;
      xQueueSend(DoorBeltAlert, &DoorBeltAlertArray, portMAX_DELAY);
    }
    taskYIELD();
  }
}

void BeltSensor(void *pvParameters){
  (void) pvParameters;

  for(;;){
    int newBeltSensor = analogRead(A5);
    if (newBeltSensor != PreviousBeltSensor){
      PreviousBeltSensor = newBeltSensor;
      DoorBeltAlertArray[1] = newBeltSensor;
      xQueueSend(DoorBeltAlert, &DoorBeltAlertArray, portMAX_DELAY);
    }
    taskYIELD();
  }
}

void LightSensor(void *pvParameters){
  (void) pvParameters;

  for(;;){
    int newLightSensor = analogRead(A6);
    if (newLightSensor != PreviousLightSensor){
      PreviousLightSensor = newLightSensor;
      FrontLightControllerArray[0] = newLightSensor;
      xQueueSend(FrontLightController, &FrontLightControllerArray, portMAX_DELAY);
    }
    taskYIELD();
  }
}

void BatteryEnergy(void *pvParameters){
  (void) pvParameters;

  for(;;){
    int newBatteryEnergy = analogRead(A7);
    if (newBatteryEnergy != PreviousBatteryEnergy){
      PreviousBatteryEnergy = newBatteryEnergy;
      BatteryInformationArray[1] = newBatteryEnergy;
      BatteryReducerArray[1] = newBatteryEnergy;
      xQueueSend(BatteryReducer, &BatteryReducerArray, portMAX_DELAY);
      xQueueSend(BatteryInformation, &BatteryInformationArray, portMAX_DELAY);
    }
    taskYIELD();
  }
}

void pDistanceDetector(void *pvparameters){
  (void) pvparameters;

  for(;;){
    if(xQueueReceive(DistanceDetector, &DistanceDetectorArray, portMAX_DELAY) == pdPASS){
      rtU.ultra_sonic_sensor = DistanceDetectorArray[0];
      Tinkercad_step();
    }
  }
}

void pBreakManager(void *pvparameters){
  (void) pvparameters;

  for(;;){
    if(xQueueReceive(BreakManager, &BreakManagerArray, portMAX_DELAY)==pdPASS){
      rtU.Encoder_input = BreakManagerArray[1];
      Tinkercad_step();
    }
  }
}

void pMoveProcess(void *pvparameters){
  (void) pvparameters;

  for(;;){
    if(xQueueReceive(MoveProcess, &MoveProcessArray, portMAX_DELAY)==pdPASS){
      rtU.IR_sensor = MoveProcessArray[2];
      rtU.MoveSensor = MoveProcessArray[3];
      Tinkercad_step();
    }
  }
}

void pDoorBeltAlert(void *pvparameters){
  (void) pvparameters;

  for(;;){
    if(xQueueReceive(DoorBeltAlert, &DoorBeltAlertArray,portMAX_DELAY)==pdPASS){
      rtU.Door_sensor = DoorBeltAlertArray[0];
      rtU.Belt_sensor = DoorBeltAlertArray[1];
      rtU.MoveSensor  = DoorBeltAlertArray[2];
      Tinkercad_step();
    }
  }
}

void pBatteryReducer(void *pvparameters){
  (void) pvparameters;

  for(;;){
    if(xQueueReceive(BatteryReducer, &BatteryReducerArray,portMAX_DELAY)==pdPASS){
      rtU.MoveSensor = BatteryReducerArray[0];
      rtU.battary_energy = BatteryReducerArray[1];
      Tinkercad_step();
    }
  }
}

void pBatteryInformation(void *pvparameters){
  (void) pvparameters;

  for(;;){
    if(xQueueReceive(BatteryInformation, &BatteryInformationArray,portMAX_DELAY)==pdPASS){
      Tinkercad_step();
    }
  }
}

void pFrontLightController(void *pvparameters){
  (void) pvparameters;

  for(;;){
    if(xQueueReceive(FrontLightController, &FrontLightControllerArray,portMAX_DELAY)==pdPASS){
      rtU.Light_sensor = FrontLightControllerArray[0];
      Tinkercad_step();
    }
  }
}