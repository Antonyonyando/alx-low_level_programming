#include <stdio.h>
/**
 * main - Point of entry
 * Return: always 0 (Success)
 */
int main(void)
{
	int a, o;

	for (a = 0; a <= 9; a++)
	{
	for (o = 1; o <= 9; o++)
	putchar('0' + a);
	putchar('0' + o);
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
