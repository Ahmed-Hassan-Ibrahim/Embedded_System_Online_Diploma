/*
 ============================================================================
 Name        : Q4.c
 Author      : Ahmed Hassan Ibrahim
 Description : Assignment 7 C Pointers Q4 <Print element of array in reverse order>
 ============================================================================
 */

#include <stdio.h>

int main()
{
    int arr[15], *ptr, i, n;
    printf("Input the number of elements to store in the array (max 15): ");
    scanf("%d", &n);
    printf("Input 5 number of elements in the array :\n");
    ptr = arr;
    for(i = 0; i < n; i++)
    {
        printf("element - %d : ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    printf("The elements of array in reverse order are :\n");
    ptr--;
    for(i = n; i > 0; i--)
    {
        printf("element - %d : %d\n", i, *ptr);
        ptr--;
    }
    return 0;
}