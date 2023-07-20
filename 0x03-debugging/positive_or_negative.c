#include "main.h"
/**
 *positive_or_negative -Test the number if positive
 *or negative or equal 0
 *@i: tne number
 *Return: ...
*/
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
	return;
}
