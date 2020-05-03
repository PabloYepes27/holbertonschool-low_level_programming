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
	unsigned int i, flag = 0;
	dlistint_t *new, *tmp = *h;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t)); /* allocate new node */
	if (new == NULL)
		return (NULL);
	new->n = n; /* put in the data */
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		new->next->prev = new;
		*h = new;
		return (new);
	}
	for (i = 0; h; i++) /* stay one position behind the index*/
	{
		if (i == idx)
		{
			flag++;
			tmp = tmp->prev;
			break;
		}
		tmp = tmp->next;
	}
	if (flag == 0)
		return (NULL);
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
