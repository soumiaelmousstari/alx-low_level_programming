#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index -a function that
 * inserts a new node at a given position.
 * @head: address of pointer to first node
 * @idx: index to insert new node
 * @n: n value of new node
 * Return: adress of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *nv_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !nv_node)
		return (NULL);
	nv_node->n = n;
	nv_node->next = NULL;
	if (!idx)
	{
		nv_node->next = *head;
		*head = nv_node;
		return (nv_node);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			nv_node->next = node->next;
			node->next = nv_node;
			return (nv_node);
		}
		i++;
		node = node->next;
	}
	free(nv_node);
	return (NULL);
}
