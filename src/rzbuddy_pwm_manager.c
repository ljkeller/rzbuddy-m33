/*
 * rzbuddy_pwm_manager.c
 *
 *  Created on: Jul 23, 2024
 *      Author: Lucas
 */

#include "FreeRTOS.h"
#include "task.h"

#include "bsp_api.h" /** For writing & reading pins */
#include "hal_data.h"

#include "rzbuddy_pwm_manager.h"
#include "rzbuddy_state.h" /** For accessing globals / consts */

/** TODO: Make compile fail if the servo values are invalid */
//static const TickType_t SERVO_COMM_PERIOD_MS = 20;
//static const TickType_t SERVO_PULSE_WIDTH_FAST_PERIOD_MS = 1;
/** TODO: Experiment with a slower pulse width value */
//static const TickType_t SERVO_PULSE_WIDTH_SLOW_PERIOD_MS = 1;
static const TickType_t SERVO_ROTATION_PERIOD_MS = 600;

/** MIN_NUDGE_TIME_MS tuned arbitrarily */
//static const TickType_t MIN_NUDGE_TIME_MS = 80;
fsp_err_t rzbuddy_dispense()
{
    fsp_err_t retval = FSP_SUCCESS;

    retval = R_GPT_Start (&g_timer_servo_ctrl);
    if (retval != FSP_SUCCESS)
        return retval;

//    TickType_t start_tick = xTaskGetTickCount();
//    TickType_t current_tick = start_tick;
//    TickType_t ticks_to_pwm = pdMS_TO_TICKS(SERVO_ROTATION_PERIOD_MS);

    /** TODO: Run inside of RTOS task */
    vTaskDelay (pdMS_TO_TICKS(SERVO_ROTATION_PERIOD_MS));

    // software PWM for one rotation
//    while ((current_tick - start_tick) < ticks_to_pwm)
//    {
//        R_BSP_PinWrite(RZBUDDY_SERVO_GPIO, BSP_IO_LEVEL_HIGH);
//        vTaskDelay(SERVO_PULSE_WIDTH_FAST_PERIOD_MS / portTICK_PERIOD_MS);
//        R_BSP_PinWrite(RZBUDDY_SERVO_GPIO, BSP_IO_LEVEL_LOW);
//
//        vTaskDelay((SERVO_COMM_PERIOD_MS - SERVO_PULSE_WIDTH_FAST_PERIOD_MS) / portTICK_PERIOD_MS);
//        current_tick = xTaskGetTickCount();
//    }

// TODO: RESET GPIO HERE? Throttle on the calling side?
    return R_GPT_Stop (&g_timer_servo_ctrl);
}

fsp_err_t rzbuddy_pwm_nudge()
{
    fsp_err_t retval = FSP_SUCCESS;

    /** starting timer because this function should only be called when nudge trigger happens */
    retval = R_GPT_Start (&g_timer_servo_ctrl);
    if (retval != FSP_SUCCESS)
        return retval;

    /** This polling isn't necessary if we configure interrupts */
    while (R_BSP_PinRead (RZBUDDY_NUDGE_GPIO) == BSP_IO_LEVEL_LOW)
        // user switch is low on press
        ;

    return R_GPT_Stop (&g_timer_servo_ctrl);
}
