#include "lists.h"

/**
  * free_listint2 - function that frees a list
  * @head: the first node
  * Return: void
**/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	if (*head = NULL)
	{
		return (NULL);
	}
	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	free(*head);
}
