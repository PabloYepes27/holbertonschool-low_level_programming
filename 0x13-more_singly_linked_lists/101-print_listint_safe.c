#include "lists.h"

/**
  * print_listint_safe - This function can print lists with a loop
  * @head: the first node
  * Return: the number of nodes in the list
**/

size_t print_listint_safe(const listint_t *head)
{
	int len = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		len++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (head - head->next > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (len);
}
