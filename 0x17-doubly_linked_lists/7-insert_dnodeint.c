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

	new = malloc(sizeof(dlistint_t)); /* allocate new node */
		if (tmp == NULL)
			return (NULL);
	new->n = n; /* put in the data */
	for (i = 0; i < idx - 1; i++) /* stay one position behind the index*/
	{
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
		tmp = tmp->next;
	}
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
