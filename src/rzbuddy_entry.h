/*
 * rzbudy_entry.h
 *
 *  Created on: Jul 31, 2024
 *      Author: Lucas
 */

#ifndef RZBUDDY_ENTRY_H_
#define RZBUDDY_ENTRY_H_

void rzbuddy_thread_entry(__attribute__((unused)) void *pvParameters);
void handle_error(fsp_err_t err);

#endif /* RZBUDDY_ENTRY_H_ */
