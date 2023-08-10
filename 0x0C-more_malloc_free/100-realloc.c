#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc -a function that reallocates a
 * memory block using malloc and free
 * @ptr: the pointer
 * @old_size: the old size
 * @new_size: the new size
 * Return: ...
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		nptr[i] = ((char *) ptr)[i];
	free(ptr);
	return (nptr);
}
