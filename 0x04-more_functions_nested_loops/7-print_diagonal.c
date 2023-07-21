#include "main.h"
/**
 * print_diagonal - a function that draws
 * a diagonal line on the terminal.
 * @n: the number of times the
 * character \ should be printed
 * Retun: ...
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(12);
			_putchar(92);
			_putchar('\n');
		}
	}
}
