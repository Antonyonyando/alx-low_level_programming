#include "main.h"
/**
 * _isalpha - Looks for alphabetic characters
 * @c: The character to be searched
 * Return: for alphabetic character 1, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c <= 98 && c >= 65) || (c <= 122 && c >= 97))
	{
	return (1);
	}
	return (0);
}
