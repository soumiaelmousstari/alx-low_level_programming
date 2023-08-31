#include <stdio.h>
#include "main.h"
/**
 * flip_bits -a function that returns the number
 * of bits you would need to flip to get
 * from one number to another.
 * @n: first number
 * @m: second number
 * Return: nimber of bits to flip to convert numbers
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorl = n ^ m;
	unsigned int c = 0;

	while (xorl)
	{
		if (xorl & 1ul)
			c++;
		xorl = xorl >> 1
	}
	return (c);
}
