#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: first node
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->str != NULL)
			h = h->next;
	}
	return (i);
}
