#include <stdio.h>
/**
 * main - Point of entry
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	if (letter != 'q' && letter != 'e')
	{
	putchar(letter);
	}
	letter++;
	}
	putchar('\n');
	return (0);
}
