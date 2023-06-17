#include <stdio.h>
/**
 * main - Pot of entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n  = '0';

	while (0 <= 9)
	{
	putchar(n);
	if (n == 9)
	{
	putchar('&');
	}
	else
	{
	(n != 9);
	putchar(',');
	putchar(' ');
	}
	n++;
	}
	putchar('\n');
	return (0);
}
