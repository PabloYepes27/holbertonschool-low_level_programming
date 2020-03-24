#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at a given position
  * @head: the first node
  * @index:  is the  index of the node that should be deleted
  * Return: 1 if it succeeded, -1 if it failed
**/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *aux; /* aux node to find the previous and new for*/
	unsigned int i = 0;

	if (*head != NULL)
	{
		aux = *head;
		new = *head;
		if (index == 0)
		{
			aux = aux->next;
			free(*head);
			*head = aux;
			return (1);
		}
		while (i < index)
		{
			if (aux == 0)
				return (-1);
			if (i < index - 1)
				new = new->next;
			aux = aux->next;
			i++;
		}
		new->next = aux->next;
		free(aux);
		return (1);
	}
	return (-1);
}
