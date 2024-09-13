/*
 * control.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Felipe
 */

#include <main.h>
#include <control.h>

static char id[11];

void digits(uint8_t key_pressed){
	static uint8_t digit = 0;

	if(key_pressed>='0' && key_pressed<='9' && digit<10){
		id[digit++] = key_pressed;
		id[digit] = '\0';

		char key[2] = {key_pressed, '\0'};
		ssd1306_WriteString(key,Font_7x10,White);
		ssd1306_UpdateScreen();
	}else if(key_pressed == '*'){
		reset(id);
		digit=0;
	}else if(key_pressed == '#'){
		compare();
	}
}

void reset(char* id){
	id[0] = '\0';

	ssd1306_Fill(Black);
	ssd1306_SetCursor(15,30);
	ssd1306_UpdateScreen();
}

uint8_t compare(void){
	uint8_t state;
	char my_id[] = "1056120378";

	if(strcmp(my_id, id) == 0){
		reset(id);
		ssd1306_WriteString("Success", Font_7x10, White);
		ssd1306_UpdateScreen();
		state = 0;
	}else{
		reset(id);
		ssd1306_WriteString("Error", Font_7x10, White);
		ssd1306_UpdateScreen();
		state = 1;
	}
	return state;
}
