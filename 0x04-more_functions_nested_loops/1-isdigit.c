#include "main.h"
/**
 * _isdigit -a function that checks for digit character
 * @c: the character
 * Return: 1 if c isa digit, else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
