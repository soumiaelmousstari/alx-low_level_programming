#include <stdio.h>
/**
 * main -Write a program that prints all possible
 * combinations of single-digit numbers.
 * Return: 0 saccucc instructions
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n == 57)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
return (0);
}
