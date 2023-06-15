#include <stdio.h>
/**
 * main - Point of entry
 * Return: Always 0 (Success)
 */

int main(void)
{	char c;
	int i;
	long int l;
	long long int b;
	float f;

	printf("The size of a char is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of an int is: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("The size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("The size of a long long int is: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("The size of a float is: %lu byte(s)\n", (unsigned long)sizeof(i));

	return (0);
}
