#include <stdon.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint -a function that frees
 * a listint_t list.
 * @head: pointer to first
 * Return: ...
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
