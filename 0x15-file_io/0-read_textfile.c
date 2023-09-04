#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile -a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of file to read
 * @letters: number of bytes to read
 * Return: number bytes read/printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t bytes;
	char b[READ_B_SIZE * 8];

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	bytes = read(f, &b[0], letters);
	bytes = write(STDOUT_FILENO, &b[0], bytes);
	close(f);
	return (bytes);
}
