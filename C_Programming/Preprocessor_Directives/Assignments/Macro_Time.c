/*
 =====================================================================================================
 Author      : Ahmed Hassan Ibrahim
 Description : C Macros <<Display the current time>>
 =====================================================================================================
 */

#include <stdio.h>

int main()
{
    printf("Current Time: %s", __TIME__);
    return 0;
}