#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED
#include<avr/io.h>

void InitUART(uint16_t ubrr);
/**
 * @brief Read characters from UART port
 * @return char
 */
char UARTread();
/**
 * @brief Write characters to UART port
 *
 * @param data
 */
void UARTwrite(char data);


#endif 
