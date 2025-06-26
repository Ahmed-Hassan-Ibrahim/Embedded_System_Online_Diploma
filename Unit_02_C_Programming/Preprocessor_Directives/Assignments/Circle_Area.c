/*
 =====================================================================================================
 Author      : Ahmed Hassan Ibrahim
 Description : C Macros <<Find circle area using MACRO>>
 =====================================================================================================
 */

#include <stdio.h>

#define pi 3.14159
#define circle_area(r) (r*r*pi)

int main()
{
    float rad;
    printf("Enter radius value: ");
    scanf("%f", &rad);
    printf("Area of circle = %0.2f", circle_area(rad));
    return 0;
}