#include "lists.h"

/**
 * free_dlistint - function that free a DLL
 * @head: Head node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	size_t i;
	dlistint_t *tmp = head;

	for (i = 0; head != NULL; i++)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
