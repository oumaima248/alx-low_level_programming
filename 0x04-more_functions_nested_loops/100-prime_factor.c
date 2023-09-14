#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of the number  612852475143
 * Return: Always 0 (Success)
 */

int main(void)

{
	long X,maXf;
	long number = 612852475143;
	double square = sqrt(number);

	for (X = 1; X <= square; X++)
	{
	if (number % X == 0)
	{
	maXf = number / X;
	}
	}
	printf("%ld\n", maXf);
	return (0);

}
