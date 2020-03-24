#include "lists.h"

/**
  * add_nodeint - function that adds a new node at the beginning of a list
  * @head: the first node
  * @n: value of the integer
  * Return: the address of the new element, or NULL if it failed
**/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new; /* Create a new node */

	new = malloc(sizeof(listint_t)); /* allocate memory */
	if (new == NULL)
		return (NULL);
	new->n = n; /* save the number passed */
	new->next = *head; /* point to the last head */
	*head = new; /* change the new head by dereferencing to the new node */
	return (new);
}
