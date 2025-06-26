/*
 ============================================================================
 Author      : Ahmed Hassan Ibrahim
 Description : Function to calculate sum of numbers from 1 to 100 without loop
 ============================================================================
 */

#include <stdio.h>

int sum_100(int num)
{
    int sum = 0;
    if(num == 0)
        return 0;
    sum += num + sum_100(num-1);
    return sum;
}

int main()
{
    printf("Sum from 1 to 100 = %d", sum_100(100));
    return 0;
}