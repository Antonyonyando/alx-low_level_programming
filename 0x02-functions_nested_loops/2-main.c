#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet 10 times
 */
void print_alphabet(void);

int main(void)
{
   " print_alphabet_x10();"
    return (0);
}

void print_alphabet(void)
{
	char letter = 'a';
	
	do
	{
	putchar(letter);
	letter++;
	}
	while (letter <= 'z');

	putchar('\n');
}
