#include "main.h"
/**
 * print_alphabet_x10 - Print lowercase characters 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int count = 0;

	char n = 'a';

	while (n <= 'z')
	{
	_putchar(n);
	n++;
	}
	while(count < 10);

	_putchar('\n');
}
