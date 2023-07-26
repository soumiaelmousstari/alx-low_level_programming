#include <stdio.h>
#include "main.h"
/**
 * _strncpy -a function that copies a strings.
 * @dest: the string to copy
 * @src: the str source
 * @n: the maximum number of bytes to copied from src
 * Return: a pointer to the resulting string des
*/
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
