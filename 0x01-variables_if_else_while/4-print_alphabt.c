#include <stdio.h>
/**
 * main -program that prints the alphabet in lowercase except q and e.
 * Return: 0 succecc instructions
*/
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		if (a == 101 || a == 113)
		{
			a++;
			continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
return (0);
}
