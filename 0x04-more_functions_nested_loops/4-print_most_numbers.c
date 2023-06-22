#include "main.h"

/**
 * print_most_numbers - looks at the most numbers to be printed
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
	if (a != 2 && a != 4)
	{
	_putchar('0' + a);
	}
	}

	_putchar('\n');
}
