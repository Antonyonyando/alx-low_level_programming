#include "main.h"
/**
 * main - Point of entry
 * print_alphabet: prints the alphabet in lowercase
 * Return: Always 0 (Succes)
 */

void print_alphabet(void)
/**
 * print_alphabet: Prints alphabet in lowercase
 */
{
	char n = 'a';

	while (n <= 'z')
	{
	_putchar(n);
	n++;
	}

	_putchar('\n');
}
