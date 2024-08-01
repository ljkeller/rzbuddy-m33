/* generated thread header file - do not edit */
#ifndef RZBUDDY_THREAD_H_
#define RZBUDDY_THREAD_H_
#include "bsp_api.h"
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "hal_data.h"
#ifdef __cplusplus
                extern "C" void rzbuddy_thread_entry(void * pvParameters);
                extern "C" void handle_error(fsp_err_t err);
                void rzbuddy_thread_create();
                #else
extern void rzbuddy_thread_entry(void *pvParameters);
extern void handle_error(fsp_err_t err);
void rzbuddy_thread_create();
#endif
FSP_HEADER
FSP_FOOTER
#endif /* RZBUDDY_THREAD_H_ */
