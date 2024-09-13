/*
 * sys_stat.c
 *
 *  Created on: Sep 9, 2024
 *      Author: Felipe
 */


#include <sys_stat.h>
#include <main.h>
#include <stdio.h>

void sys_stat(uint8_t state) {
    uint32_t startTime = HAL_GetTick();  // Get the start time
    uint32_t flashInterval = 0;          // Flash interval will depend on state
    uint32_t duration = 3000;            // Total duration for flashing in milliseconds

    if (state == 1) {
        flashInterval = 125;  // 4Hz frequency: 125ms ON, 125ms OFF
    }

    while (HAL_GetTick() - startTime < duration) {
        if (state == 0) {
            // For correct password (state == 0), just keep the LED ON for 3 seconds
        	printf("Clave correcta");
            HAL_GPIO_WritePin(SYSTEM_LED_GPIO_Port, SYSTEM_LED_Pin, 1);  // LED ON
            HAL_Delay(duration);  // Keep it on for the duration (3 seconds)
            break;  // Exit loop
        }
        else if (state == 1) {
            // For incorrect password (state == 1), flash with 4Hz frequency
        	printf("Clave incorrecta");
            HAL_GPIO_TogglePin(SYSTEM_LED_GPIO_Port, SYSTEM_LED_Pin);  // Toggle LED
            HAL_Delay(flashInterval);  // Delay for half the period (125ms)
        }
    }
}


