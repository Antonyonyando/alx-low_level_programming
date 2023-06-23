#include <stdio.h>
#include "main.h"
#include "math.h"

/**
 * main -print largest prime factor of number 612852475143
 * Return: 0 (Success)
 */
int main(void)
{
	long n, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (n = 1; n <= square; n++)
	{
	if (number % n == 0)
	{
	maxf = number / n;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}
