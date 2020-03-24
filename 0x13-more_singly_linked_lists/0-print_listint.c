#include "lists.h"

/**
  * print_listint - function that printss all elements of a list
  * @h: the first node
  * Return: The number of nodes
**/

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%i\n", h->n); /* print what is inside the member n */
		h = h->next;/*move towards the next thing the actual node is pointing*/
	}
	return (i);
}
