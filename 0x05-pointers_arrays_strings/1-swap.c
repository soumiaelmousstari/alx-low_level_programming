#include <stdio.h>
/**
 * swap_int -a function that swaps the
 * values of two integers.
 * @a: the first  integer
 * @b: the second  integer
 * Return: ...
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
