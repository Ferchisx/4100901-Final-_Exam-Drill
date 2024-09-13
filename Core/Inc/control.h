/*
 * control.h
 *
 *  Created on: Sep 11, 2024
 *      Author: Felipe
 */

#ifndef INC_CONTROL_H_
#define INC_CONTROL_H_

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "ssd1306.h"
#include "ssd1306_fonts.h"

void digits(uint8_t key_pressed);
void reset(char* id);
uint8_t compare(void);

#endif /* INC_CONTROL_H_ */
