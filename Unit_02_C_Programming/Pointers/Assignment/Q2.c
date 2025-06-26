/*
 ============================================================================
 Name        : Q2.c
 Author      : Ahmed Hassan Ibrahim
 Description : Assignment 7 C Pointers Q2 <Print alphabets using pointer>
 ============================================================================
 */

#include <stdio.h>

int main()
{
    char alph[26], *ptr;
    int i;

    ptr = alph;
    printf("The Alphabets are :\n");
    for(i = 0; i < 26; i++)
    {
        *ptr = i + 'A';
        ptr++;
    }
    ptr = alph;
    for(i = 0; i < 26; i++)
    {
        printf("%c ", *ptr);
        ptr++;
    }

    return 0;
}