#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -printf name using ointer to function
 * @name: the name to print
 * @f: pointer ot function
 * Retunr: ...
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
