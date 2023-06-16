#include <stdio.h>
/**
 * main - Point of entry
 * Return: Always 0 (success)
 */
int main(void)
{
	char start = 'a';
	char ends = 'z';

	while (start <= ends)
	{/* while counting letters from a-z */
		putchar(start);
			start++;
	}
	putchar('\n');

	return (0);
}
