#include "main.h"
/**
 * print_last_digit - checks the last digit of a number
 * @n: digit to be checked
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
