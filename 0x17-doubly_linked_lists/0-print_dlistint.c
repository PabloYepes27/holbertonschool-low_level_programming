#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a DLL
 * @h: Head node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *tmp = h;

	for (i = 0; tmp != NULL; i++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (i);
}
