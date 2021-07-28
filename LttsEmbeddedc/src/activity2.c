/**
 * @file activity2.c
 * @author Shrishti Singh (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include<util/delay.h>
#include"activity2.h"
#include "macrodef.h"

/**
 * @brief initialising the adc
 * 
 */
void initADC()

{

    ADMUX=(1<<REFS0);
    ADCSRA|=(1<<ADEN)|(7<<ADPS0);
}
/**
 * @brief passing the channel 
 * 
 * @param ch any channel from  the c port
 * @return uint16_t the value read by the ADC
 */
uint16_t ReadADC(uint8_t ch)
{

    //Selection of ADC channel ch=[0-7]
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    //Start Single Conversion
    ADCSRA|=(1<<ADSC);
    //Wait for conversion to complete
    while(!(ADCSRA & (1<<ADIF)));
    //clearing ADIF
    ADCSRA|=(1<<ADIF);
    return(ADC);
}