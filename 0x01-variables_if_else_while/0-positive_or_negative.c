#include <stdio.h>
/**
 * main - Point of entry
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 10;

	if (n == 0)
	{/* if condition is true then print the following */
	printf("The value of n is equal to 0");
	}
	else if (n > 0)
	{ /* if else if condition is true print the following */
	printf("The value of n is positive");
	}
	else
	{/* if none of the condition is true */
	printf("The value of n is negative");
	}

	printf("The exact value of n is: %d\n", n);
	return (0);
}
