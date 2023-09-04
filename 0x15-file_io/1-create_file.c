#include "main.h"
/**
 * create_file -a function that creates a file.
 * @filename: name of file to create
 * @text_content: text to write
 * Return: 1 on success 0 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, l, writeS;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		l = strlen(text_content);
		writeS = write(fd, text_content, l);
		if (writeS == -1 || writeS != l)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
