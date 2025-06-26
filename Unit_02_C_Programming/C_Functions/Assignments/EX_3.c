/*
 ============================================================================
 Name        : EX_3.c
 Author      : Ahmed Hassan Ibrahim
 Description : Assignment 4 C functions EX 3 <Reverse a sentence using recursion>
 ============================================================================
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char sen[], int n)
{
	if(n == 0)
		return;

	printf("%c", sen[n-1]);
	reverse(sen, n-1);
	return;
}

int main(void) {

	char sen[50];

	printf("Enter a sentence: ");
	fflush(stdin); fflush(stdout);
	gets(sen);

	reverse(sen, strlen(sen));

	return EXIT_SUCCESS;
}
