/*
 * sys_stat.c
 *
 *  Created on: Sep 9, 2024
 *      Author: Felipe
 */


#include <sys_stat.h>
#include <main.h>

void sys_stat(uint8_t state){
	/*The idea of this function is to control the system state based on a flag
	 * that determines whether the password was correct or not; 0 is for correct
	 * and 1 for incorrect*/
	uint32_t time = 3000;
	while(time>0){
		if(state == 0){
			HAL_GPIO_TogglePin(SYSTEM_LED_GPIO_Port, SYSTEM_LED_Pin);
			time = time - HAL_GetTick();
		}
		if(state == 1){
			HAL_GPIO_TogglePin(SYSTEM_LED_GPIO_Port, SYSTEM_LED_Pin);
			time = time - 250;
		}
	}
}
