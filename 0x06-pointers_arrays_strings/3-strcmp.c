#include <stdio.h>
#include "main.h"
/**
 * _strcmp -a function that compares two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: A negative integer if the first
 * string is less than the second.
 * Zero if both strings are equal.
 * A positive integer if the first
 * string is greater than the second.
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
