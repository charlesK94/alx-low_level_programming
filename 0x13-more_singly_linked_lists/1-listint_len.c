#include "lists.h"
#include <stdio.h>

/**
 * count_nodes_with_value - returns the number of nodes with a given value in a linked list.
 * @h: pointer to the head of linked list
 * @value: integer value to count
 *
 * Return: number of nodes in a linked list with the given value
 */

size_t count_nodes_with_value(const listint_t *h, int value)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n == value)
			count++;
		h = h->next;
	}
	return (count);
}

