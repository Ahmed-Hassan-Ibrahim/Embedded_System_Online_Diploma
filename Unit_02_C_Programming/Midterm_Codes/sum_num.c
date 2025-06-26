/*
 ============================================================================
 Author      : Ahmed Hassan Ibrahim
 Description : Function to calculate sum of digits in a number
 ============================================================================
 */

#include <stdio.h>

int sum_digit(int num)
{
    int result = 0;
    if(num == 0)
        return 0;
    
    result += (num%10) + sum_digit(num/10);
    return result;
}

int main()
{
    int t1 = 123, t2 = 4565;
    printf("Sum of %d digits = %d\n", t1, sum_digit(t1));
    printf("Sum of %d digits = %d", t2, sum_digit(t2));

}