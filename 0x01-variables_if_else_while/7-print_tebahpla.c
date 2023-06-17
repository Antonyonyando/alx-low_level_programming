#include <stdio.h>
/**
 * main - Point of entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'z';

	while ('a' <= l)
	{
	putchar(l);
	l--;
	}
	putchar('\n');
	return  (0);
}


