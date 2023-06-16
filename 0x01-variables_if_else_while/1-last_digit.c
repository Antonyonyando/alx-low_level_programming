#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Point of entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 98;

	int lastdigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (lastdigit > 5)
	{/* if condition is true then print the following */
	printf("lastdigit of n is %d and is greater than 5\n", lastdigit);
	}
	else if (lastdigit == 0)
	{/* if else if condition is true then print the following */
	printf("lastdigit of n is %d and is 0\n", lastdigit);
	}
	else
	{/* if none is true print and is less than 6 and not 0 */
	printf("lastdigit of n is %d and is less than 6 and not 0\n", lastdigit);
	}
	printf("The string last digit of %d is", lastdigit);
	return (0);
}
