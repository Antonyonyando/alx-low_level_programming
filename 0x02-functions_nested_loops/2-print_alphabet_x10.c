#include "stdio.h"
/**
 * print_alphabet - Write the alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
	putchar('\n');
}
