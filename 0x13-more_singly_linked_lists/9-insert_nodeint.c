#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: the first node
  * @idx:  is the index of the list where the new node should be added
  * @n: value to modify
  * Return: the adress of the new node or NULL
**/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int i;

	new = *head;
	for (i = 0; i < idx; i++)
	{
		if (new->next == NULL)
			return (NULL);
		new = new->next;
	}
	new->n = n;
	return (new);
}
