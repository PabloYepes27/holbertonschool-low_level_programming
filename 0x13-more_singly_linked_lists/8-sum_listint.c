#include "lists.h"

/**
  * sum_listint - function that returns the sum of all the data (n) of a list
  * @head: the first node
  * Return: the sum
**/

int sum_listint(listint_t *head)
{
	unsigned int i, sum = 0;
	listint_t *new;

	if (head == NULL)
		return (0);
	new = head;
	for (i = 0; new; i++)
	{
		sum += new->n;
		new = new->next;
	}
	return (sum);
}
