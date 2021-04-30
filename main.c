#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include"activity4.h"
#include<avr/io.h>


/**
 * @brief Initialize all the peripherals
 *
 */

void peripheral_init(void)
{
    
    InitLED();

    InitADC();
 
    InitPWM();
    
    InitUART(103);
}


uint16_t temp;
char temp_data;
int main(void)
{
   
    peripheral_init();

    while(1)
    {
        if(SENSOR_ON) //If switch_1 is ON
        {
            if(HEAT_ON) //If switch_2 is ON
            {
                ledstat(LED_ON);//LED is ON
                temp=ReadADC(0);
                temp_data = outPWM(temp);
                UARTwrite(temp_data);

            }
            else
            {

                ledstat(LED_OFF);
            }
        }
        else
        {
            ledstat(LED_OFF);//LED is OFF
            OCR1A=0;
        }
    }
    return 0;
}

