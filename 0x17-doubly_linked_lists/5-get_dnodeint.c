#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a DLL
 * @head: Head node
 * @index: index of the node
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	for (i = 0; head != NULL; i++)
	{
		if (index == i)
		{
			tmp = malloc(sizeof(dlistint_t));
			if (tmp == NULL)
				return (NULL);
			tmp = head;
			return (tmp);
		}
		head = head->next;

	}
	return (NULL);
}
