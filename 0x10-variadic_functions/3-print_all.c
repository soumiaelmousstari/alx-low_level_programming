#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all -a function that prints anything.
 * @format: is a list of types of arguments
 * passed to the function
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *separator = "";
	va_list list;

	va_start(list, fomat);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					string = va_arg(list, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
