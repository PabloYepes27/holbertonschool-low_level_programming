#include "lists.h"

/**
  * add_nodeint_end - function that adds a new node at the end of a list
  * @head: the first node
  * @n: value of the integer
  * Return: the address of the new element, or NULL if it failed
**/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux; /* Create a new node and an auxiliar pointer */

	new = malloc(sizeof(listint_t)); /* allocate memory */
	if (new == NULL)
		return (NULL);
	new->n = n; /* save the number passed */
	new->next = NULL; /* point to the last node */
	if (*head == NULL)
	{
		new->next = *head; /* point to the last node */
		*head = new; /* change the new head by dereferencing to the new node */
	}
	else
	{
		aux = *head; /* equal the aux to what the head is pointing to */
		while (aux->next != NULL) /* move to the end */
		{
			aux = aux->next;
		}
		aux->next = new;
	}
	return (new);
}
