#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list -a function that frees a list_t list.
 * @head: the head of the list
 * Return: ...
*/
void free_list(list_t *head)
{
	list_t *c = head;

	while (c != NULL)
	{
		list_t *d = c;

		c = c->next;
		free(d->str);
		free(d);
	}
}
