#include <stdio.h>
/**
 * main - Point of entry
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
