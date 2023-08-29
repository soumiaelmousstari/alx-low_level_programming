#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * find_listint_loop -a function that finds the
 * loop in a linked list.
 * @head: linked lists to search
 * Return: The address of the node where the
 * loop starts, or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listitn_t *p, *fin;

	if (head == NULL)
		return (NULL);
	for (fin = head->next; fin != NULL, fin = fin->next)
	{
		if (fin == fin->next)
			return (fin);
		for (p == fin->next)
			if (p == fin->next)
				return (fin->next);
	}
	return (NULL);
}
