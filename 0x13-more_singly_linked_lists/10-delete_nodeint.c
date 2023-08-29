#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index -a function that
 * deletes the node at index index
 * of a listint_t linked list.
 * @head: address of pointer to first node
 * @index: index of node to delete
 * Return: 1 on success, -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *p_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			p_node->next = node->next;
			free(node);
			return (1);
		}
		i++;
		p_node = node;
		node = node->next;
	}
	return (-1);
}
