#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: value to be checked
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int m = 0;
	int o;

	while (*s != '\0')
	{
	m++;
	s++;
	}
	s--;
	for (o = m; o > 0; o--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
