#include <stdio.h>
#include <stdlib.h>
/**
 * main -print its own main function.
 * @argc: number of arguments
 * @argv: array of argument
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int byte, index;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;
	for (index = 0; index < byte; index++)
	{
		if (index == byte - 1)
		{
			printf("%02hhx\n", array[index]);
			break;
		}
		printf("%02hhx\n", array[index]);
	}
	return (0);
}
