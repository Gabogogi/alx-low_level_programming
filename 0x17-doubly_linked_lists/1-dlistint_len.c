#include "lists.h"
/*
 * dlistint_len-count the number of nodes in the linked list
 * @h: singly linked list.
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
