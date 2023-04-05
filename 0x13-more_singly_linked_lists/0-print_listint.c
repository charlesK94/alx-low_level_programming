#include "lists.h"
#include <stdio.h>

/**
 * print_listint - this one allows for the  printing of all the elements of a listint_t list.
 * @h: this one is a pointer to begining(head) of list to print
 *
 * Return: the expected return is  number of (nodes)elements in the list
 */
size_t print_listint(const listint_t *h)

{
	size_t nodes = 0;


	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
