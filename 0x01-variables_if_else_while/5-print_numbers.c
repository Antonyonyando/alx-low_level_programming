#include <stdio.h>
/**
 * main - Point of entry
 * Return: Always 0 (success)
 */
int main(void)
{
	char number = '0';

	while (number <= '9')
	{
	putchar(number);
	number++;
	}
	putchar('\n');
	return (0);
}
