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
	listint_t *new; /* create the new node to iterate */
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new = *head; /* equal the aux to what the head is pointing to */
	for (i = 0; i < idx; i++) /* iterate until we reached the index */
	{
		if (new->next == NULL)
			return (NULL);
		new = new->next; /* while we iterate we move to the next node */
	}
	new->n = n; /* when we find the given position then add the value */
	return (new);
}
