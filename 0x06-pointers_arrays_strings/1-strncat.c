#include <stdio.h>
#include "main.h"
/**
 * _strncat -a function that concatenates two strings.
 * @dest: the string to be appended upon
 * @src: the string to be appended to dest
 * @n: the number of byte by src
 * Return: a pointer to the resulting string des
*/
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
