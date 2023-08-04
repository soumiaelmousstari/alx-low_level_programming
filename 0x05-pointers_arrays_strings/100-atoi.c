#include "main.h"
/**
 * _atoi -a function that convert a
 * string to an integer.
 * @s: the string
 * Return: teh integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
			min *= -1;
		else if (s[c] >= '0' && s[c] <= '9')
		{
			isi = 1;
			ni = ni * 10 + (s[c] - '0');
		}
		else if (isi)
			break;
		c++;
	}
	return (ni * min);
}
