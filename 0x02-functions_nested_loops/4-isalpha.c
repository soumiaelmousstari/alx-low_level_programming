#include "main.h"
/**
 * _isalpha -a function that checks for alphabetic character
 * @c: the character
 * Return: 1 if c  is alphabetic,else return 0
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
