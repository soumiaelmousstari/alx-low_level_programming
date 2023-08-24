#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list -a function that prints all
 * the elements of a list_t list.
 * @h: head of the list
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	int index;


	for (index = 0; h != NULL; index++)
	{
		if (h->str == NULL)
			printf("[%u] (nil)\n", h->len);
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (index);
}
