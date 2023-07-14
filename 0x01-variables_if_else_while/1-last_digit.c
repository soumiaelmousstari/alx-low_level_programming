#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -program about number n:
 * if the last digit of n is greater than 5:
 * the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not 0:
 * the string and is less than 6 and
 * Return: 0 succecc instruction
*/
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (n < 0)
	{
		if (m > 5)
			printf("Last digit of %d is %d and is greater than 5", -n, m);
		else if (m == 0)
			printf("Last digit of %d is %d and is 0", n, m);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0", -n, m);
	}
	else
	{
		if (m > 5)
			printf("Last digit of %d is %d and is greater than 5", n, m);
		else if (m == 0)
			printf("Last digit of %d is %d and is 0", n, m);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
	}
	return (0);
}
