#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 -a function that frees a
 * listint_t list.
 * @head: address of pointer to first node
 * Return: ...
*/
void free_listint2(listint_t **head)
{
	listint_t *node, *tp;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		tp = node;
		node = node->next;
		free(tp);
	}
	*head = NULL;
}
