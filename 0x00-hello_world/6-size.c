#include <stdio.h>
/**
 * main - Point of entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int b;
	float f;

	printf("Size of a char is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int is: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int is: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a float is: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
