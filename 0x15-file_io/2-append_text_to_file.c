#include "main.h"
#include <string.h>
/**
 * append_text_to_file -a function that appends text at the
 * end of a file.
 * @filename: name of file to create
 * @text_content: text to write
 * Return: 1 on success 0 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, l, writeS;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
