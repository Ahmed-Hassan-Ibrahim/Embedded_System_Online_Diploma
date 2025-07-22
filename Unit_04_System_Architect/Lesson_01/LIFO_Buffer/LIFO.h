#ifndef LIFO_H_
#define LIFO_H_

#include "stdio.h"
#include "stdlib.h"

//Type definitions
typedef struct LIFO_Buf
{
    unsigned int length;
    unsigned int count;
    unsigned int* base;
    unsigned int* head;
}LIFO_Buf_t;

typedef enum
{
    LIFO_Passed,
    LIFO_Full,
    LIFO_Empty,
    LIFO_NULL
}LIFO_Status_t;

//APIs
LIFO_Status_t LIFO_Init (LIFO_Buf_t* buffer, unsigned int* arr, unsigned int len);
LIFO_Status_t LIFO_Add_Item (LIFO_Buf_t* buffer, unsigned int item);
LIFO_Status_t LIFO_Get_Item (LIFO_Buf_t* buffer, unsigned int* item);

#endif