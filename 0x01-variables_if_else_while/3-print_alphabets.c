#include <stdio.h>
/**
 * main -program that prints the alphabet in lowercase.
 * use putchar three times in this program.
 * Return: 0 succecc instructions
*/
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (a <= 90)
	{
		putchar(a);
	}
	putchar('\n');
return (0);
}
