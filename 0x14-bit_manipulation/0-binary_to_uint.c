#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint -a function that converts a binary
 * number to an unsigned int.
 * @b: pointe to a string of 0 and 1 chars
 * Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		x = x * 2 + (*b++ - '0');
	}
	return (x);
}
