/* generated thread source file - do not edit */
#include <rzbuddy_thread.h>

static StaticTask_t rzbuddy_thread_memory;
#if defined(__ARMCC_VERSION)           /* AC6 compiler */
                static uint8_t blinky_thread_stack[512] BSP_PLACE_IN_SECTION(BSP_UNINIT_SECTION_PREFIX ".stack.thread") BSP_ALIGN_VARIABLE(BSP_STACK_ALIGNMENT);
                #else
static uint8_t rzbuddy_thread_stack[512] BSP_PLACE_IN_SECTION(BSP_UNINIT_SECTION_PREFIX ".stack.rzbuddy_thread") BSP_ALIGN_VARIABLE(BSP_STACK_ALIGNMENT);
#endif
static void rzbuddy_thread_func(void *pvParameters);

const rm_freertos_port_parameters_t rzbuddy_thread_parameters =
{ .p_context = (void*) NULL, };

/** This is a generic thread create, if you wanted to add more threads you'd want to track with a Semaphore at the start of this func */
void rzbuddy_thread_create(void)
{
    TaskHandle_t rzbuddy_thread;
    /* Initialize each kernel object. */
    rzbuddy_thread = xTaskCreateStatic (rzbuddy_thread_func, (const char*) "Rzbuddy Thread", 512 / 4, // In words, not bytes
                                       (void*) &rzbuddy_thread_parameters, //pvParameters
                                       1, (StackType_t*) &rzbuddy_thread_stack, (StaticTask_t*) &rzbuddy_thread_memory);

    if (NULL == rzbuddy_thread)
    {
        handle_error(FSP_ERR_INVALID_STATE);
    }

}

static void rzbuddy_thread_func(void *pvParameters)
{
    /* Initialize common components here */

#if (1 == BSP_TZ_NONSECURE_BUILD)
                    /* When FreeRTOS is used in a non-secure TrustZone application, portALLOCATE_SECURE_CONTEXT must be called prior
                     * to calling any non-secure callable function in a thread. The parameter is unused in the FSP implementation.
                     * If no slots are available then configASSERT() will be called from vPortSVCHandler_C(). If this occurs, the
                     * application will need to either increase the value of the "Process Stack Slots" Property in the rm_tz_context
                     * module in the secure project or decrease the number of threads in the non-secure project that are allocating
                     * a secure context. Users can control which threads allocate a secure context via the Properties tab when
                     * selecting each thread. Note that the idle thread in FreeRTOS requires a secure context so the application
                     * will need at least 1 secure context even if no user threads make secure calls. */
                     portALLOCATE_SECURE_CONTEXT(0);
                    #endif

    /* Enter user code for this thread. Pass task handle. */
    rzbuddy_thread_entry (pvParameters);
}
