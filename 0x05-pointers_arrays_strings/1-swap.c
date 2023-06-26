#include "main.h"

/**
 * swap_int - Swap the values of two integers
 * @a: One of the value to be swapped
 * @b: The other value to be swapped
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
