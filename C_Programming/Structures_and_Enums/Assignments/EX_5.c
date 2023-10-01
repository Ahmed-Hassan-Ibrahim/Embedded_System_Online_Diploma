/*
 =====================================================================================================
 Name        : EX_5.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Structures, Unions, and Enums Assignment EX 5 <<Find circle area using MACRO>>
 =====================================================================================================
 */

#include <stdio.h>

#define Area(radius) (printf("Area = %0.2f", 3.14159 * radius * radius))

int main()
{
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    Area(radius);
    return 0;
}