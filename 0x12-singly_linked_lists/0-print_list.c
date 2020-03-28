#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: first node
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
