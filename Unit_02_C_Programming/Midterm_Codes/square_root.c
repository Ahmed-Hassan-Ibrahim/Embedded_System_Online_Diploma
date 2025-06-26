/*
 ============================================================================
 Author      : Ahmed Hassan Ibrahim
 Description : Function to calculate square root of a number
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

double sqrt_root(int num)
{
    if (num < 2)
        return num;
 
    double temp = num;
    double result = (temp + (num / temp)) / 2;
 
    while (fabs(temp - result) >= 0.001) {
        temp = result;
        result = (temp + (num / temp)) / 2;
    }
    return result;
}

int main()
{
    int t1 = 4, t2 = 10;
    printf("Squre Root of %d = %0.3lf\n", t1, sqrt(t1));
    printf("Squre Root of %d = %0.3lf", t2, sqrt(t2));
}