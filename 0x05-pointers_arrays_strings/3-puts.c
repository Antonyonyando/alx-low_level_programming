#include "main.h"
/**
 * _puts - prints a string
 * @str: Value to be checked
 * Return: Always 0 (Success0
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
	_putchar(*str++);
	}

	_putchar('\n');
}
