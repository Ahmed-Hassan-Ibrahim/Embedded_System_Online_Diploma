#include "FIFO.h"

FIOF_Buf_Status FIFO_Init(FIFO_Buf_t* FIFO, element_type* buffer, uint32_t len)
{
    if (buffer == NULL)
        return FIFO_NULL;
    
    FIFO->base = buffer;
    FIFO->head = buffer;
    FIFO->tail = buffer;
    FIFO->lenght = len;
    FIFO->count = 0;

    return FIFO_PASSED;
}

FIOF_Buf_Status FIFO_Enqueue(FIFO_Buf_t* FIFO, element_type item)
{
    if (!FIFO->base || !FIFO->head || !FIFO->tail)
        return FIFO_NULL;
    
    //FIFO is full
    if (FIFO_Check(FIFO) == FIFO_FULL)
        return FIFO_FULL;
    
    *(FIFO->head) = item;
    FIFO->count++;

    //Circular FIFO
    if (FIFO->head == (FIFO->base + (FIFO->lenght * sizeof(element_type))))
        FIFO->head = FIFO->base;
    else
        FIFO->head++;
    
    return FIFO_PASSED;
}

FIOF_Buf_Status FIFO_Dequeue(FIFO_Buf_t* FIFO, element_type* item)
{
    if (!FIFO->base || !FIFO->head || !FIFO->tail)
        return FIFO_NULL;
    
    //Check if FIFO empty
    if (FIFO->count == 0)
        return FIFO_EMPTY;

    *item = *FIFO->tail;
    FIFO->count--;

    //Circular FIFO
    if (FIFO->tail == (FIFO->base + (FIFO->lenght * sizeof(element_type))))
        FIFO->tail = FIFO->base;    
    else
        FIFO->tail++;

    return FIFO_PASSED;
}

FIOF_Buf_Status FIFO_Check(FIFO_Buf_t* FIFO)
{
    if (!FIFO->base || !FIFO->head || !FIFO->tail)
        return FIFO_NULL;
    
    if (FIFO->count == FIFO->lenght)
        return FIFO_FULL;
    
    return FIFO_PASSED;
}

void FIFO_Print(FIFO_Buf_t* FIFO)
{
    element_type* temp;
    uint32_t i;

    if (FIFO->count == 0)
        printf("FIFO is empty \n");
    else
    {
        temp = FIFO->tail;
        printf("\n==============FIFO Print==============\n");
        for (i = 0; i < FIFO->count; i++)
        {
            printf("\t%X\n", *temp);
            temp++;
        }
        printf("\n======================================\n");
    }
}