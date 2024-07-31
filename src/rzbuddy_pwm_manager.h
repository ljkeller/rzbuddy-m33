/*
 * rzbuddy_pwm_manager.h
 *
 *  Created on: Jul 23, 2024
 *      Author: Lucas
 */

#ifndef RZBUDDY_PWM_MANAGER_H_
#define RZBUDDY_PWM_MANAGER_H_

#include <stdint.h>

/** Create a mapping between GPIO 'signals' and functions to handle them */
typedef struct st_gpio_to_handler
{
    bsp_io_port_pin_t const gpio_pin;
    uint32_t const gpio_trigger;
    fsp_err_t (*const handler)();
} gpio_handler_mapping_t;

/** Trigger one rotation of the RZBuddy feeding mechanism */
fsp_err_t rzbuddy_dispense();

/** 'Nudge' the servo forward slowly while the user sends the appropriate signal. Useful
 *   for adjusting the feeding mechanism on RZBuddy
 */
fsp_err_t rzbuddy_pwm_nudge();

#endif /* RZBUDDY_PWM_MANAGER_H_ */
