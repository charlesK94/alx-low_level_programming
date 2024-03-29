#include "lists.h"

/**
 * sum_listint - returns the sum of all the integers stored in a listint_t list.
 * @head: pointer to the head of the list
 *
 * Return: sum of all the integers stored in the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

