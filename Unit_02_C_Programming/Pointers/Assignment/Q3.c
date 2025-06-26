/*
 ============================================================================
 Name        : Q3.c
 Author      : Ahmed Hassan Ibrahim
 Description : Assignment 7 C Pointers Q3 <Reverse string using pointer>
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50], *ptr;
    int i;

    printf("Pointer : Print a string in reverse order :\n");
    printf("------------------------------------------------\n");
    printf("Input string: ");
    scanf("%s", str);
    printf("Reverse of the string is : ");
    ptr = str;
    ptr += strlen(str);
    for(i = 0; i <= (int)strlen(str); i++)
    {
        printf("%c", *ptr);
        ptr--;
    }
    return 0;
}