#include "list.h"
/*
 * dlistint_len - number of elements in a linked list_t list
 * @h: singly linked list.
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
