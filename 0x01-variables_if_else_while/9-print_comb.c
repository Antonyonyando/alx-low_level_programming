#include <stdio.h>
/**
 * main - Point of entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = '0';

	while (n <= 9)
	{
	putchar(n);
	if (n != 9)
	{
	putchar(',');
	putchar(' ');
	}
	else
	{
	putchar('&');
	}
	n++;
	}
	putchar('\n');
	return (0);
}
