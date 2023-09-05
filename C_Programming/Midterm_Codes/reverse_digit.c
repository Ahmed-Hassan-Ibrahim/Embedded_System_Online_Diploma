/*
 ============================================================================
 Author      : Ahmed Hassan Ibrahim
 Description : Function to reverse a given digit
 ============================================================================
 */

#include <stdio.h>

int reverse_digit(int num)
{
    int result = 0;
    while(num > 0)
    {
        result = result * 10 + num % 10;
        num /= 10;
    }
    return result;
}

int main()
{
    int t1 = 2457, t2 = 1057;
    printf("Reverse Digits of %d = %d\n", t1, reverse_digit(t1));
    printf("Reverse Digits of %d = %d", t2, reverse_digit(t2));

    return 0;
}