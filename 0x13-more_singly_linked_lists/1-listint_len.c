#include "lists.h"

/**
  * listint_len - function that returns the number of elements in a linked list
  * @h: the first node
  * Return: The number of elements
**/

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;/*move towards the next thing the actual node is pointing*/
	}
	return (i);
}
