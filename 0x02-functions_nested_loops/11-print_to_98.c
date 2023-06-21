#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from 0 to 9
 * @n: Start of counting
 * Return: Always 98 (Success)
 */
void print_to_98(char n)
{
	n = '0';

	while (n <= 98)
	{
	if (n == 98)
	{
	putchar(',');
	putchar(' ');
	}
	putchar(n);
	n++;
	}
}
