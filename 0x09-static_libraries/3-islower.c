#include "main.h"
/**
 * _islower -a function that checks for lowercase character
 * @c: the character
 * Return: 1 if character is lower,else return 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
