#include <stdio.h>
/**
 * main - Point of entry
 * Return: Always 0 (Success)
 */

int main(void)
{	char c;
	int i;
	float f;

	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of an int is: %lu.\n", (long)sizeof(i));
	printf("The size of an int is: %llu.\n", (long long)sizeof(i));
	printf("The size of a float is: %lu.\n", (unsigned long)sizeof(i));

	return (0);
}

