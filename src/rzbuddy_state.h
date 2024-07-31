/*
 * rzbuddy_state.h
 *
 *  Created on: Jul 23, 2024
 *      Author: Lucas Keller
 */

#ifndef RZBUDDY_STATE_H_
#define RZBUDDY_STATE_H_

#include <stdint.h>
#include "bsp_api.h"

/** Read from this GPIO to determine if PWM needs nudged forward. */
extern const bsp_io_port_pin_t RZBUDDY_NUDGE_GPIO;

/** Read from this GPIO to determine if a feed cycle needs initiated. */
extern const bsp_io_port_pin_t RZBUDDY_FEED_GPIO;

/** Write to this GPIO to increment servo. */
extern const bsp_io_port_pin_t RZBUDDY_SERVO_GPIO;

extern const bsp_io_port_pin_t RZBUDDY_GREEN_GPIO;

/** The FSM maintaining RZBuddy can only be in these modes. */
typedef enum e_rzbuddy_state
{
    IDLE,  ///< waiting to transition
    FEED,  ///< feeding the animal
    NUDGE, ///< nudging PWM forward slowly
    ERR,   ///< error state
} rzbuddy_state_t;

#endif /* RZBUDDY_STATE_H_ */
