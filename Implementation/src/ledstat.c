
#include<avr/io.h>
#include "ledstat.h"
/**
 * @brief Change the state of the LED Pin according to the value of state
 *
 * @param state Pin level to which the LED Pin should be set
 */
void ledstat(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}
