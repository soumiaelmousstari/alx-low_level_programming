#include <stdio.h>
/**
 * _strlen -a function that returns the length of a string.
 * @s: the string
 * Return: the length of a string.
*/
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
