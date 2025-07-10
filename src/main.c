#include <ax8052f143.h>
#include <libmf.h>
#include <libmftypes.h>
#include <libmfuart.h>
#include <libmfuart0.h>
#include "hal.h"
#include "board.h"



void main()
{
    periph_init();
    uart_timer0_baud(CLKSRC_XOSC, 115200, 26000000);
    uart0_init(0, 8, 1);
    
    while (1)
    {
        PIN_SET_LOW(LEDR_PORT, LEDR_PIN);
        delay(25000);
        PIN_SET_HIGH(LEDR_PORT, LEDR_PIN);
        delay(25000);
    }
}