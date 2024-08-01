#include "hal_data.h"

#include "rzbuddy_entry.h"
#include "rzbuddy_pwm_manager.h"
#include "rzbuddy_state.h"

FSP_CPP_HEADER
#include "rzbuddy_pwm_manager.h"
#include "rzbuddy_state.h"
FSP_CPP_FOOTER

void rzbuddy_thread_entry(__attribute__((unused)) void * pvParameters)
{
    fsp_err_t err = FSP_SUCCESS;
    gpio_handler_mapping_t const gpio_mappings[2] =
    {
    { .gpio_pin = RZBUDDY_FEED_GPIO, .gpio_trigger = BSP_IO_LEVEL_HIGH, .handler = rzbuddy_dispense },
      { .gpio_pin = RZBUDDY_NUDGE_GPIO, .gpio_trigger = BSP_IO_LEVEL_LOW, .handler = rzbuddy_pwm_nudge } // default low
    };

    size_t n_mappings = sizeof(gpio_mappings) / sizeof(gpio_mappings[0]);
    while (1)
    {
        // Traverse the mappings and handle signals forever
        for (size_t i = 0; i < n_mappings; i++)
        {
            if (gpio_mappings[i].handler == NULL)
                continue;

            if (R_BSP_PinRead ((bsp_io_port_pin_t) gpio_mappings[i].gpio_pin) == gpio_mappings[i].gpio_trigger)
            {
                err = gpio_mappings[i].handler ();
                handle_error (err);
            }
        }
    }
}

void handle_error(fsp_err_t err)
{
    while (err != FSP_SUCCESS)
        ;
}
