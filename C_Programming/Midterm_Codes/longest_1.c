/*
 ============================================================================
 Author      : Ahmed Hassan Ibrahim
 Description : Function to return longest stream of 1's between two 0's
 ============================================================================
 */

#include <stdio.h>

void longest_1(int num)
{ 
    int i, temp, counter = 0, result = 0, start_0 = 0, end_0 = 0;
    printf("%d in binary: ", num);
    for(i = 31; i >= 0; i--)
    {
        temp = num >> i;
        if(temp & 1)
        {
            printf("1");
            if(start_0)
                counter++;
            end_0 = 1;
        }
        else
        {
            printf("0");
            if(end_0)
            {
                if(counter > result)
                    result = counter;
                counter = 0;
                end_0 = 0;
            }
            start_0 = 1;
        }
    }
    printf("\nLongest streams of 1's = %d\n", result);   
    return;
}

int main()
{
    int t1 = 14, t2 = 110;
    longest_1(t1);
    longest_1(t2);
}