/*
 * Ex9.h
 *
 *  Created on: Sep 21, 2024
 *      Author: ACER
 */

#ifndef INC_EX9_H_
#define INC_EX9_H_

#include "main.h"

extern const int MAX_LED_MATRIX;
extern int index_led_matrix;
extern uint8_t matrix_buffer[8];
extern int scanner_COL[8];

void ex9_init();
void ex9_run();
void displayLEDMatrix(int num);
void updateLEDMatrix(int index);

#endif /* INC_EX7_H_ */
