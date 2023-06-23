#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Print more numbers
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int a;

	for (a = 0; a <= 14; a++)
	{
	int number = a * 10;
	int digit1 = number / 10;
	int digit2 = number % 10;

	_putchar(digit1 + '0');
	_putchar(digit2 + '0');
	_putchar('\n');
	}
}
