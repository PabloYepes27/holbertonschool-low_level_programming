#include "lists.h"

/**
  * get_nodeint_at_index -  function that returns the nth node of a list
  * @head: the first node
  * @index: is the index of the node, starting at 0
  * Return: nth node of a list or NULL
**/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = head;
	for (i = 0; new; i++)
	{
		if (i == index && new) /* why? */
			return (new);
		new = new->next;
	}
	return (new);
}
