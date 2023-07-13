#include <stdio.h>
/**
 * main -program that prints the size of various types
 * on the compute * r it is compiled and run on.
 * Return: 0 successful execution
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char:%lu byte(s)\n", sizeof(a));
printf("Size of a int:%lu byte(s)\n", sizeof(b));
printf("Size of a long int:%lu byte(s)\n", sizeof(c));
printf("Size of a long long int:%lu byte(s)\n", sizeof(d));
printf("Size of a float:%lu byte(s)\n", sizeof(f));
return (0);
}
