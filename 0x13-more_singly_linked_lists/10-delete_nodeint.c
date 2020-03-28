#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at a given position
  * @head: the first node
  * @index:  is the  index of the node that should be deleted
  * Return: 1 if it succeeded, -1 if it failed
**/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux, *del; /* del node to find the previous and aux for*/
	unsigned int i = 0;

	if (*head != NULL)
	{
		del = *head;
		aux = *head;
		if (index == 0)
		{
			*head = del->next;
			free(del);
			return (1);
		}
		while (i < index)
		{
			if (del == 0)
				return (-1);
			if (i < index - 1)
				aux = aux->next;
			del = del->next;
			i++;
		}
		aux->next = del->next;
		free(del);
		return (1);
	}
	return (-1);
}
