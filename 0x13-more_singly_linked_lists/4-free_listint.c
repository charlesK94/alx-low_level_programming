#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node containing an integer value to the end of a listint_t linked list.
 *
 * @head: Double pointer to the head of the list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if an error occurred.
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (*head);
}
