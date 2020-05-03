#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a DLL
 * @head: Head node
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (tmp != NULL)
		tmp->prev = new;
	*head = new;
	return (new);
}
