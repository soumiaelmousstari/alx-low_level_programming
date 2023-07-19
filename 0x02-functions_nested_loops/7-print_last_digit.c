#include "main.h"
/**
 * print_last_digit -a function that computes the absolute value of an integer
 * @c: the number
 * Return: the value of the last digit
*/
int print_last_digit(int c)
{
	int last;

	last = c % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
