#include "LIFO.h"

LIFO_Status_t LIFO_Init (LIFO_Buf_t* buffer, unsigned int* arr, unsigned int len)
{
    if(arr == NULL)
        return LIFO_NULL;

    buffer->base = arr;
    buffer->head = arr;
    buffer->length = len;
    buffer->count = 0;

    return LIFO_Passed;
}

LIFO_Status_t LIFO_Add_Item (LIFO_Buf_t* buffer, unsigned int item)
{
    if (!buffer->base || !buffer->head)
        return LIFO_NULL;

    if (buffer->count == buffer->length)
        return LIFO_Full;

    *(buffer->head) = item;
    buffer->head++;
    buffer->count++;
    
    return LIFO_Passed;
}

LIFO_Status_t LIFO_Get_Item (LIFO_Buf_t* buffer, unsigned int* item)
{
    if (!buffer->base || !buffer->head)
        return LIFO_NULL;
        
    if(buffer->count == 0)
        return LIFO_Empty;

    buffer->head--;    
    *item = *(buffer->head);
    buffer->count--;

    return LIFO_Passed;
}