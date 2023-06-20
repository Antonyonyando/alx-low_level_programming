#include "main.h"
/**
 * print_alphabet_x10 - Print lowercase characters 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{

	char n = 'a';
	int i= 0;

	while (i < 10)
	{
	while (n <= 'z')
	{
	_putchar(n);
	n++;
	}

	_putchar('\n');
	n = 'a';
	i++;
	}
}
