#include "lists.h"

/**
 * get_nodeint_at_index - Locates and returns the node at the specified index of a listint_t linked list.
 *
 * @head: Pointer to the first node in the list.
 * @index: Index of the node to locate.
 *
 * Return: Pointer to the indexed node (located node), or NULL if the index is out of range.
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int find;

	if (head == NULL)
		return (NULL);
	for (find = 0; find < index; find++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
