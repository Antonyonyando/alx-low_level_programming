#include <stddef.h>
#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: String to be printed
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int i = 0;

	if (str == NULL)
	{
	return;
	}

	while (str[i] != '\0')
	{
	if (i % 2 == 0)
	{
	_putchar(str[i]);
	}
	i++;
	}
	_putchar('\n');
}
