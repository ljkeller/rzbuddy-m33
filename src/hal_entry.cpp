#include "hal_data.h"

FSP_CPP_HEADER
#include "task.h"

#include "rzbuddy_thread.h"
#include "rzbuddy_entry.h"
// ** RTOS related */
//void vApplicationGetIdleTaskMemory(StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer,
//        uint32_t *pulIdleTaskStackSize) BSP_WEAK_REFERENCE;
//void vApplicationGetTimerTaskMemory(StaticTask_t **ppxTimerTaskTCBBuffer, StackType_t **ppxTimerTaskStackBuffer,
//        uint32_t *pulTimerTaskStackSize) BSP_WEAK_REFERENCE;
FSP_CPP_FOOTER


void R_BSP_WarmStart(bsp_warm_start_event_t event);
void handle_rzbuddy_state();

/*******************************************************************************************************************//**
 * This is the first non-generated file, essentially our main
 **********************************************************************************************************************/
void hal_entry(void)
{
    /* Initializes GPT module. */
    handle_error (R_GPT_Open (&g_timer_servo_ctrl, &g_timer_servo_cfg));
    handle_error (R_GPT_Start (&g_timer_servo_ctrl));

//    rzbuddy_thread_create();

//    vTaskStartScheduler ();
    while (1)
        ;
}

/*******************************************************************************************************************//**
 * This function is called at various points during the startup process.  This implementation uses the event that is
 * called right before main() to set up the pins.
 *
 * @param[in]  event    Where at in the start up process the code is currently at
 **********************************************************************************************************************/
void R_BSP_WarmStart(bsp_warm_start_event_t event)
{
    if (BSP_WARM_START_RESET == event)
    {
    }

    if (BSP_WARM_START_POST_C == event)
    {
        /* C runtime environment and system clocks are setup. */

        /* Configure pins. */
        R_IOPORT_Open (&g_ioport_ctrl, &g_bsp_pin_cfg);
    }
}

/* Implementation of vApplicationGetIdleTaskMemory() to provide the memory that is
 * used by the Idle task. */
//void vApplicationGetIdleTaskMemory(StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer,
//        uint32_t *pulIdleTaskStackSize)
//{
//    /* If the buffers to be provided to the Idle task are declared inside this
//     * function then they must be declared static - otherwise they will be allocated on
//     * the stack and so not exists after this function exits. */
//    static StaticTask_t xIdleTaskTCB;
//    static StackType_t uxIdleTaskStack[ configMINIMAL_STACK_SIZE];
//
//    /* Pass out a pointer to the StaticTask_t structure in which the Idle
//     * task's state will be stored. */
//    *ppxIdleTaskTCBBuffer = &xIdleTaskTCB;
//
//    /* Pass out the array that will be used as the Idle task's stack. */
//    *ppxIdleTaskStackBuffer = uxIdleTaskStack;
//
//    /* Pass out the size of the array pointed to by *ppxIdleTaskStackBuffer.
//     * Note that, as the array is necessarily of type StackType_t,
//     * configMINIMAL_STACK_SIZE is specified in words, not bytes. */
//    *pulIdleTaskStackSize = configMINIMAL_STACK_SIZE;
//}
//
///* Implementation of vApplicationGetTimerTaskMemory() to provide the memory that is
// * used by the RTOS daemon/time task. */
//void vApplicationGetTimerTaskMemory(StaticTask_t **ppxTimerTaskTCBBuffer, StackType_t **ppxTimerTaskStackBuffer,
//        uint32_t *pulTimerTaskStackSize)
//{
//    /* If the buffers to be provided to the Timer task are declared inside this
//     * function then they must be declared static - otherwise they will be allocated on
//     * the stack and so not exists after this function exits. */
//    static StaticTask_t xTimerTaskTCB;
//    static StackType_t uxTimerTaskStack[ configMINIMAL_STACK_SIZE];
//
//    /* Pass out a pointer to the StaticTask_t structure in which the Idle
//     * task's state will be stored. */
//    *ppxTimerTaskTCBBuffer = &xTimerTaskTCB;
//
//    /* Pass out the array that will be used as the Timer task's stack. */
//    *ppxTimerTaskStackBuffer = uxTimerTaskStack;
//
//    /* Pass out the size of the array pointed to by *ppxTimerTaskStackBuffer.
//     * Note that, as the array is necessarily of type StackType_t,
//     * configMINIMAL_STACK_SIZE is specified in words, not bytes. */
//    *pulTimerTaskStackSize = configMINIMAL_STACK_SIZE;
//}
