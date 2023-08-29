#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end -a function that adds a
 * new node at the end of a listint_t list.
 * @head: pointer to first node
 * @n: new node's value
 * Return: pointer to new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nv_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !nv_node)
		return (NULL);
	nv_node->next = NULL;
	nv_node->n = n;
	if (!*head)
		*head = nv_node;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = nv_node;
	}
	return (nv_node);
}
