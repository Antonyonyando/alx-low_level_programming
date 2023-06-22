#include <stdio.h>
/**
 * main - Point of entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{/* list of lowercase alphabets */
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{/* list of uppercase alphabets */
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);

}
