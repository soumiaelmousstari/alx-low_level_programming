#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - a function that
 * returns the nth node of a listint_t linked list.
 * @head: pointer to first node
 * @index: index of node to get
 * Return:  the nth node of a listint_t linked li
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	for (node = head, i = 0; node && i < index; node = node->next, i++)
		;
	return (node);
}
