#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: Head node
 * @idx: index of the list where the new node should be added
 * @n: data
 * Return:  the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *tmp = *h;

	if (idx > dlistint_len(*h) || (h == NULL && idx != 0))
		return (NULL);
	new = malloc(sizeof(dlistint_t)); /* allocate new node */
	if (new == NULL)
		return (NULL);
	new->n = n; /* put in the data */
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == dlistint_len(*h))
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
			tmp = tmp->next;
	}
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}

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

