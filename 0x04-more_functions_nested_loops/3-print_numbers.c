#include "main.h"

/**
 * print_numbers - check for numbers to be printted
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
	_putchar('0' + a);
	}
	_putchar('\n');
}
