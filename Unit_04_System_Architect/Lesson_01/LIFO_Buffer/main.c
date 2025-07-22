#include "LIFO.h"   

unsigned int buffer_1 [5];

int main ()
{
    unsigned int i, temp = 0;
    LIFO_Buf_t UART_LIFO, I2C_LIFO;

    //Static allocation
    LIFO_Init(&UART_LIFO, buffer_1, 5);
    //Dynamic allocation
    unsigned int* buffer_2 = (unsigned int*) malloc (5 * sizeof(unsigned int));
    LIFO_Init(&I2C_LIFO, buffer_2, 5);

    for(i = 0; i < 7; i++)
    {
        if (LIFO_Add_Item(&UART_LIFO, i) == LIFO_Passed)
            printf("UART_LIFO: %d pushed\n", i);
    }

    printf("================================\n");

    for(i = 0; i < 7; i++)
    {
        if (LIFO_Get_Item(&UART_LIFO, &temp) == LIFO_Passed)
            printf("UART_LIFO: %d poped\n", temp);
    }

    return 0;
}