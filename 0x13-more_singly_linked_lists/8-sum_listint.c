#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - a function that returns
 * the sum of all the data (n) of a
 * listint_t linked list.
 * @head: pointer to first node;
 * Return:  the sum of all the data (n) of a
 * listint_t linked list.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
