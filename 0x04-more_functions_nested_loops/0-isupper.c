#include "main.h"
/**
 * _isupper -a function that checks for uppercase character
 * @c: the character
 * Return: 1 if c is uppercase, else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
