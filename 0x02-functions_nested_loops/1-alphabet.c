#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 * Return: Always 0 (Succes)
 */

void print_alphabet(void)
{
	char n = 'a';

	while (n <= 'z')
	{
	_putchar(n);
	n++;
	}

	_putchar('\n');
}
