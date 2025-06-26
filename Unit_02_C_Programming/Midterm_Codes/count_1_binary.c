/*
 ============================================================================
 Author      : Ahmed Hassan Ibrahim
 Description : Function to count number of 1's in binary form of a number
 ============================================================================
 */

#include <stdio.h>

int count_1(int num)
{
    int i, temp, counter = 0;

    for(i = 31; i >= 0; i--)
    {
        temp = num >> i;
        if(temp & 1)
            counter++;
    }

    return counter;
}

int main()
{
    int t1 = 5, t2 = 15;
    printf("Number of 1's in binary of %d = %d\n", t1, count_1(t1));
    printf("Number of 1's in binary of %d = %d", t2, count_1(t2));

    return 0;
}