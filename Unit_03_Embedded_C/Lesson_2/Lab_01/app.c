#include "uart.h"

unsigned char str_buffer[100] = "Learn-in-depth: <Ahmed Hassan>";

void main(void)
{
    Uart_Send_String(str_buffer);
}