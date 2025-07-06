#include "uart.h"

// UART register at address 0x101f1000 in ARM926EJ-S 
// UART 0 data register is at offset 0x00
#define UART0_DR *((volatile unsigned int*)((unsigned int*)0x101f1000))

void Uart_Send_String(unsigned char* p_tx_string)
{
    // Check if end of string is reahced 
    while (*p_tx_string != '\0')
    {
        // Transmit each character in string 
        UART0_DR = (unsigned int)(*p_tx_string);
        p_tx_string++;
    }
}