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
	int fd;
	ssize_t bytes;
	char buf[READ_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, buf, letters);
	if (bytes == -1)
	{
		close(fd);
		return (0);
	}
	if (write(STDOUT_FILENO, but, bytes) == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (bytes);
}
