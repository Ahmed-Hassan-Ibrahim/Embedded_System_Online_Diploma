/*
 ============================================================================
 Author      : Ahmed Hassan Ibrahim
 Description : Function to reverse a given array
 ============================================================================
 */

#include <stdio.h>
void revrse_arr(int* arr, int n)
{
    int i, temp[n];
    for(i = 0; i < n; i++){
        temp[i] = arr[i];
    }
    for(i = 0; i < n; i++){
        arr[i] = temp[n - 1 - i];
    }
    return;
}
void print_arr(int* arr, int n)
{
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return;
}
int main()
{
    int t1[5]={1,2,3,4,5};
    printf("Array before reverse:\n");
    print_arr(t1, 5);
    revrse_arr(t1, 5);
    printf("\nArray after reverse:\n");
    print_arr(t1, 5);
    
    return 0;
}