#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - a function that adds a
 * new node at the beginning of a listint_t list.
 * @head: pointer to first node
 * @n: new node's value
 * Return: pointer to new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nv_node = malloc(sizeof(listint_t));

	if (!head || !nv_node)
		return (NULL);
	nv_node->next = NULL;
	nv_node->n = n;
	if (*head)
		nv_node->next = *head;
	*head = nv_node;
	return (nv_node);
}
