#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len -a function that returns the number
 * of elements in a linked list_t list.
 * @h: the head of the list
 * Return: the number of elements in a linked list_t list.
*/
size_t list_len(const list_t *h)
{
	int index;

	for (index = 0; h != NULL; index++)
		h = h->next;
	return (index);
}
