#ifndef FIFO_H_
#define FIFO_H_

#include "stdio.h"
#include "stdint.h"

//<<<<<<< User Configuration >>>>>>>
//Select the element type (uint8_t, uint26_t, uint32_t, ....)
#define element_type uint8_t
//Create buffer
//#define width 5
//element_type buff[width];

//FIFO data types
typedef struct FIFO_Buf
{
    uint32_t lenght;
    uint32_t count;
    element_type* tail;
    element_type* head;
    element_type* base;
}FIFO_Buf_t;

typedef enum
{
    FIFO_PASSED,
    FIFO_FULL,
    FIFO_EMPTY,
    FIFO_NULL
}FIOF_Buf_Status;

//FIFO APIs
FIOF_Buf_Status FIFO_Init(FIFO_Buf_t* FIFO, element_type* buffer, uint32_t len);
FIOF_Buf_Status FIFO_Enqueue(FIFO_Buf_t* FIFO, element_type item);
FIOF_Buf_Status FIFO_Dequeue(FIFO_Buf_t* FIFO, element_type* item);
FIOF_Buf_Status FIFO_Check(FIFO_Buf_t* FIFO);
void FIFO_Print(FIFO_Buf_t* FIFO);

#endif