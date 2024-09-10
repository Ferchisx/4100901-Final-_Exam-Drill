/*
 * oled.c
 *
 *  Created on: Sep 9, 2024
 *      Author: Felipe
 */
#include <main.h>
#include <oled.h>

void print(uint8_t key_pressed){
	char key_string[2];
	key_string[0] = key_pressed;  // Place the key character in the string
	key_string[1] = '\0';  // Null-terminate the string
	ssd1306_WriteString(key_string, Font_7x10, White);
	ssd1306_UpdateScreen();
}
