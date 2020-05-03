#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a DLL
 * @h: Head node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *tmp = h;

	for (i = 0; tmp != NULL; i++)
		tmp = tmp->next;
	return (i);
}
