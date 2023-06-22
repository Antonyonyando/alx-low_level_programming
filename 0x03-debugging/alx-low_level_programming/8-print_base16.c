#include <stdio.h>
/**
 * main - Pot of entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
	putchar(n);
	n++;
	}

	n = 'a';

	while (n <= 'f')
	{
	putchar(n);
	n++;
	}

	putchar('\n');
	return (0);
}
