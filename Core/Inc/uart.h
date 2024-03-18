#ifndef INC_UART_H_
#define INC_UART_H_

#include "main.h"

void initUart(UART_HandleTypeDef *inHuart);
uint8_t getChar();

#endif /* INC_UART_H_ */
