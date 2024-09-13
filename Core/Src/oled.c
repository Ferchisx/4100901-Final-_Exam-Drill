/*
 * oled.c
 *
 *  Created on: Sep 9, 2024
 *      Author: Felipe
 */
#include <main.h>
#include <stdio.h>
#include <control.h>

//void comparation(void){
//	char my_id[] = "1056120378";
//	ssd1306_Fill(Black);
//	ssd1306_UpdateScreen();
//	int8_t id_incorrect = 0;
//	for (uint8_t idx = 0; idx < sizeof(my_id); idx++) {
//		if(my_id[idx]!=input_id[idx]) {
//			id_incorrect = 1;
//		}
//	}
//	if (id_incorrect == 0) {
//		ssd1306_WriteString("Success", Font_7x10, White);
//		ssd1306_UpdateScreen();
//	}else{
//		ssd1306_WriteString("Error", Font_7x10, White);
//		ssd1306_UpdateScreen();
//	}
//}
