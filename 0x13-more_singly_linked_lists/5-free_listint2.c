#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t linked list and sets its head pointer to NULL.
 *
 * @head: Double pointer to the head of the list.
 *
 * Return: void.
 */


void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
