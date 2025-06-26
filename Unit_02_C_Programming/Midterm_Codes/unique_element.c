/*
 ============================================================================
 Author      : Ahmed Hassan Ibrahim
 Description : Function to find unique element in an array with only 1 loop
 ============================================================================
 */

#include <stdio.h>

int find_unique(int* arr, int n)
{
    int i, result = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[result] == arr[i] && result != i)
        {
            result++;
            i = -1;
        }
        if(result >= n)
            return -1;
    }
    return arr[result];
}

int main()
{
    int t1[7] = {4,2,5,2,5,7,4}, t2[1] = {4};
    printf("unique element in {4,2,5,2,5,7,4} = %d\n", find_unique(t1, 7));
    printf("unique element in {4,2,4} = %d", find_unique(t2, 1));
    
    return 0;
}