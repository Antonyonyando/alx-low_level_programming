#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: 0
 */
void jack_bauer(void)
{
	char start = '00 : 00';

	while (start <= '23 :  59')
	{
	putchar(start);
	start++;
	}
	putchar('\n');
	return (void);
}
