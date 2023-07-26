#include <stdio.h>
#include "main.h"
/**
 * _strcat -a function that concatenates two strings.
 * @dest: the string to be appended upon
 * @src: the string to be appended to dest
 * Return: a pointer to the resulting string des
*/
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0, n = sizeof(src);

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
