#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _islower(int H);


int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);

}
