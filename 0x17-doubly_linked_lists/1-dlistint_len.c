#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a DLL
 * @h: Head node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
