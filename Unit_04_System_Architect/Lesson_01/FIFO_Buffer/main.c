#include "FIFO.h"

element_type UART_Buffer[5];

int main()
{
    FIFO_Buf_t FIFO_UART;
    element_type i, temp;

    if (FIFO_Init(&FIFO_UART, UART_Buffer, 5) == FIFO_PASSED)
        printf("FIFO Init ---------------- Done\n");

    for (i = 0; i < 7; i++)
    {
        if (FIFO_Enqueue(&FIFO_UART, i) == FIFO_PASSED)
            printf("FIFO Enqueue (%x) ---------------- Done\n", i);
        else
            printf("FIFO Enqueue (%x) ---------------- Failed\n", i);
    }

    FIFO_Print(&FIFO_UART);

    if (FIFO_Dequeue(&FIFO_UART, &temp) == FIFO_PASSED)
        printf("FIFO Dequeue (%x) ---------------- Done\n", temp);
    if (FIFO_Dequeue(&FIFO_UART, &temp) == FIFO_PASSED)
        printf("FIFO Dequeue (%x) ---------------- Done\n", temp);

    FIFO_Print(&FIFO_UART);
    return 0;
}