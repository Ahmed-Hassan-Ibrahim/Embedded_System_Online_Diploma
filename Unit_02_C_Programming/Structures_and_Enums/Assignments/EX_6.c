/*
 =====================================================================================================
 Name        : EX_6.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Structures, Unions, and Enums Assignment EX 6 <<Find the output of the following code>>
 =====================================================================================================
 */

#include <stdio.h>

union job                   //defining union
{
    char name[32];
    float salary;
    int worker_no;
}u;

struct job1
{
    char name[32];
    float salary;
    int worker_no;
}s;

int main()
{
    printf("size of union = %d", sizeof(u));
    printf("\nsize of structure = %d", sizeof(s));
    return 0;
}