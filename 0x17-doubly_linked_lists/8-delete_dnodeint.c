#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index index of a DLL
 * @head: Head node
 * @index: is the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp = NULL;

	if (head == NULL || *head == NULL || index > dlistint_len(*head))
		return (-1);
	tmp = *head;
	for (i = 0; i < index; i++)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	if (index == 0)
	{
		if (tmp->next == NULL)
			*head = NULL;
		else
		{
			tmp->next->prev = NULL;
			*head = tmp->next;
		}
	}
	else if (index == dlistint_len(*head))
		tmp->prev->next = NULL;
	else
	{
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
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
