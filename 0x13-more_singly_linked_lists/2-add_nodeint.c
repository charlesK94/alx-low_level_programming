#include "lists.h"
#include <stdlib.h>

/**
 * The add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head:This is a double pointer to the beginning of a listint_t list
 * @n:This is an integer to add in the new node
 *
 * Return: It returns address of new node or
 *         NULL if error
 */

listint_t *add_nodeint
(listint_t **head, const int n)

{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
