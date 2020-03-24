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
	listint_t *new, *aux2, *aux1; /* new node, aux1  next and aux2  last */
	unsigned int i = 0, j = 0;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t)); /* allocate memory */
	if (new == NULL)
		return (NULL);
	new->n = n; 
	aux1 = *head;
	while (aux1)
	{
		aux1 = aux1->next;
		j++;
	}
	if (idx > j)
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	aux1 = *head;
	while (aux1)
	{
		aux2 = aux1;
		aux1 = aux2->next;
		i++;
		if (i == idx)
		{
			new->next = aux1;
			aux2->next = new;
			return (new);
		}
	}
	return (new);
}
