#include "main.h"

/**
 * rev_string - reverses a string
 * @s: Value to be checked
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	while (*s != '\0')
	{
	_putchar(*s++);
	_putchar(reverse);
	}
	_putchar('\n');
}
