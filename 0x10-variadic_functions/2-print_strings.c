#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings -a function that prints
 * strings, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of strings passed to the function
 * @...: A variable number of numbers to be printed
 * Description: If separator is NULL, it is not printed
 *              If one of the string is NULL,
 *              print (nil) instead
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *string;
	unsigned int i;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
