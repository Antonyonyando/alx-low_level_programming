#include <stdio.h>
#include "main.h"

/**
 * mul - looks for multiplication of two digits
 * @a: one of the integer to be multiplied
 * @b: one of the integer to be multipiled
 * Return: The results of the multiplication
 */

int mul(int a, int b)
{
	int result = a * b;

	printf("The multiplication of %d and %d is: %d\n", a, b, result);
	return (result);
}
