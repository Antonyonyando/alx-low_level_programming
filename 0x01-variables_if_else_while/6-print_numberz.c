#include <stdio.h>
/**
 * main - Point of entry
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = '0'; n < 10; n++)
	{
	putchar('0' + n);
	n++;
	}
	putchar('\n');
	return (0);
}
