#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len -a function that returns the
 * number of elements in a linked listint_t list.
 * @h: linked list of type listint_t to traverse
 * Return:nodes number
*/
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
