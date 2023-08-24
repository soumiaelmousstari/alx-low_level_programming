#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end -a function that adds a new node
 * at the end of a list_t list.
 * @head: the head of the list
 * @str: the string I wanna add in the new node
 * Return:  the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *c = *head;

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(str);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (c != NULL)
		c = c->next;
	c->next = node;
	return (node);
}
