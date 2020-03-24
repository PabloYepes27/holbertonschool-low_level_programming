#include "lists.h"

/**
  * pop_listint -  function that deletes the head node of a list
  * @head: the first node
  * Return: head node's data
**/

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
