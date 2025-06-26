/*
 ============================================================================
 Name        : Lab_1.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Pointers Lab 1 (Find sum of boxes)
 ============================================================================
 */

#include <stdio.h>

int main()
{
    int boxes[5], i, sum = 0;
    int* ptr = boxes;

    for(i = 0; i < (int)(sizeof(boxes)/sizeof(int)); i++)
        scanf("%d", ptr + i);

    for(i = 0; i < (int)(sizeof(boxes)/sizeof(int)); i++)
        printf("%d\n", *ptr++);

    ptr = boxes;
    for(i = 0; i < (int)(sizeof(boxes)/sizeof(int)); i++, ptr++)
    sum += *ptr;

    printf("Sum of boxes = %d", sum);
    

    return 0;
}