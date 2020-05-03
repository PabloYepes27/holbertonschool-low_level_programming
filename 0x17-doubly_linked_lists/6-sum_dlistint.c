#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a DLL
 * @head: Head node
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int i, sum = 0;

	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
