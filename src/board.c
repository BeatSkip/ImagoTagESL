#include "board.h"
#include "hal.h"

void periph_init()
{
    
    /* init GPIO as outputs */
    PIN_SET_OUTPUT(LEDW_DIR, LEDW_PIN);
    PIN_SET_OUTPUT(LEDR_DIR, LEDR_PIN);
    PIN_SET_OUTPUT(LEDG_DIR, LEDG_PIN);
    PIN_SET_OUTPUT(LEDB_DIR, LEDB_PIN);  

    /* set GPIO levels */
    PIN_SET_LOW(LEDW_PORT, LEDW_PIN);
    PIN_SET_LOW(LEDR_PORT, LEDR_PIN);
    PIN_SET_LOW(LEDG_PORT, LEDG_PIN);
    PIN_SET_LOW(LEDB_PORT, LEDB_PIN);  
    
    
    //SPI_MODE = LMX_SPMODE;
    //SPI_CLKCFG = LMX_CLKSRC;
    
}


void delay_ms(uint32_t ticks)
{
    uint32_t t = 0;
    while(t++ < ticks);
}



void led_on()
{
    LEDW = 1;
}

void led_off()
{
    LEDW = 0;
}

void led_toggle()
{
    LEDW ^= 1;
}
