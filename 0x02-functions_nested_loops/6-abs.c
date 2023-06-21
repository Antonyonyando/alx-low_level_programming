#include "main.h"
/**
 * _abs - checks the absolute value of an integer
 * @n: The number to be checked
 * Return: 0 or absolute value of a number
 */
int _abs(int n)
{
	if (n < 0)
	{
	int abs_val;

	abs_val = n * -1;

	return (abs_val);
	}
	return (n);
}
