#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -a function that returns
 * the sum of all its parameters.
 * @n: the number of parameters passed to the function
 * @...: a variable number of paramters
 * to calculate the sum of
 * Return: If n == 0, return 0,else the sum
 * of all its parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i, sum = 0;

	va_start(p, n);
	for (i = 0; i < n; i++)
		sum += va_arg(p, int);
	va_end(p);
	return (sum);
}
