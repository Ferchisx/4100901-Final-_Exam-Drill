/*
 * oled.h
 *
 *  Created on: Sep 9, 2024
 *      Author: Felipe
 */

#ifndef INC_OLED_H_
#define INC_OLED_H_

#include <stdint.h>
#include <string.h>
#include "ssd1306.h"
#include "ssd1306_fonts.h"

uint8_t comparation(void);
uint8_t digits(uint8_t key_pressed);

#endif /* INC_OLED_H_ */
