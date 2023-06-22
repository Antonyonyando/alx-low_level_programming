#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Point of entry
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{/* if condition is true then print the following */
	printf("%d is zero\n", n);
	}
	else if (n > 0)
	{/* if else if condition is true print the following */
	printf("%d is positive\n", n);
	}
	else
	{/* if none of the condition is true */
	printf("%d is negative\n", n);
	}
	return (0);
}
