#include "lists.h"

/**
  * free_listint2 - function that frees a list
  * @head: the first node
  * Return: void
**/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = *head;
	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	free(*head);
}
