#include "lists.h"

/**
 * free_list - function that adds a new node at the end of a list_t list
 * @head: pointer that point to the header node
 * Return: The adress of the new.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
