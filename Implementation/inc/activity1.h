#ifndef __ACTIVITY1_H_
#define __ACTIVITY1_H_

#include <avr/io.h>
#include "activity1.h"

//Macro definition

#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */

#define F_CPU 16000000UL 	/** Clock Frequency of MCU is 16 MHz */

#define LED_PORT (PORTB)    /*< LED Port Number */
#define LED_PIN  (PORTB1)   /*< LED Pin number  */
#define SENSOR_ON !(PIND&(1<<PD0)) // Switch1 ON
#define HEAT_ON !(PIND&(1<<PD1)) // Switch2 ON

void ledstat(uint8_t state);


#endif
