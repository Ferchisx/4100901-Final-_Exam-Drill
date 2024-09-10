/*
 * oled.c
 *
 *  Created on: Sep 9, 2024
 *      Author: Felipe
 */
#include <main.h>
#include <oled.h>
#include <sys_stat.h>

char num[2];		/*Control de la tecla ingresada individual*/
char input_id[11];	/*Variable para guardar todo el ID*/
int digit = 0;		/*Variable de control para guardar los números*/
uint8_t state;

uint8_t comparation(void){
	char my_id[] = "1056120378";
	ssd1306_Reset();
	if(strcmp(input_id, my_id)==0){
		ssd1306_WriteString("Success", Font_7x10, White);
		return 1;
	}else{
		ssd1306_WriteString("Error", Font_7x10, White);
		return 0;
	}
}

uint8_t digits(uint8_t key_pressed){
	if((key_pressed >= '0')&&(key_pressed <= '9')){
		if(digit<10){
			input_id[digit] = key_pressed;
			digit++;
			input_id[digit] = '\0';
		}
	}
	if(key_pressed == '*'){
		input_id[0] = '\0';
		digit = 0;
		ssd1306_Reset();
	}
	if(key_pressed == '#'){
		uint8_t state = comparation();
	}
	num[0] = key_pressed;
	num[1] = '\0';
	ssd1306_WriteString(num, Font_7x10, White);
	ssd1306_UpdateScreen();
	return state;
}
