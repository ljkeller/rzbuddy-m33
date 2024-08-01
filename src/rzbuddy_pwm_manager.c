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

/** TODO: Make compile fail if the servo values are invalid? */
static const TickType_t SERVO_ROTATION_PERIOD_MS = 600;
/** MIN_NUDGE_TIME_MS tuned arbitrarily */
static const TickType_t MIN_NUDGE_TIME_MS = 40;

fsp_err_t rzbuddy_dispense()
{
    fsp_err_t retval = FSP_SUCCESS;

    retval = R_GPT_Start (&g_timer_servo_ctrl);
    if (retval != FSP_SUCCESS)
        return retval;

    vTaskDelay (pdMS_TO_TICKS(SERVO_ROTATION_PERIOD_MS));

    retval = R_GPT_Stop (&g_timer_servo_ctrl);
    if (retval != FSP_SUCCESS)
        return retval;

    // Calling side will trigger a feed event, then have to modulate the LED to
    // get another feed event
    while (R_BSP_PinRead(RZBUDDY_FEED_GPIO) == BSP_IO_LEVEL_HIGH)
        ;

    return FSP_SUCCESS;
}

fsp_err_t rzbuddy_pwm_nudge()
{
    fsp_err_t retval = FSP_SUCCESS;

    /** starting timer because this function should only be called when nudge trigger happens */
    retval = R_GPT_Start (&g_timer_servo_ctrl);
    if (retval != FSP_SUCCESS)
        return retval;

    // user switch is low on press
    while (R_BSP_PinRead (RZBUDDY_NUDGE_GPIO) == BSP_IO_LEVEL_LOW)
    {
        vTaskDelay (pdMS_TO_TICKS(MIN_NUDGE_TIME_MS));
    }

    return R_GPT_Stop (&g_timer_servo_ctrl);
}
