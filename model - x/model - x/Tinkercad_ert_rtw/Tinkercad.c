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

#include "Tinkercad.h"
#include "rtwtypes.h"

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
