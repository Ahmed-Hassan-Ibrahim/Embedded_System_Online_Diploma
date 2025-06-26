#include "stdio.h"
#include <time.h>

void main()
{
	clock_t t;
	double time_taken;
	t = clock();

	int num1, num2, num3, sum;
	num1 = 12;
	printf("First number = %d\n", num1);
	num2 = 3;
	printf("Second number = %d\n", num2);
	num3 = 6;
	printf("Third number = %d\n", num3);
	sum = num1 + num2 + num3;
	printf("The sum of three numbers is %d\n", sum);

	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("fun() took %f seconds to execute\n", time_taken);
}