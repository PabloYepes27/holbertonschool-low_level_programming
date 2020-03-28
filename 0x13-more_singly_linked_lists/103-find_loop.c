#include "lists.h"

/**
  * find_listint_loop - function that finds the loop in a linked list.
  * @head: the first node
  * Return: The address of the node where the loop starts
**/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *nodeloop = head, *finder;

	if (head == NULL)
		return (NULL);
	if (head == head->next)
		return (head);
	while (nodeloop)
	{
		nodeloop = nodeloop->next;
		finder = head;
		while (nodeloop && finder != nodeloop)
		{
			if (finder == nodeloop->next)
				return (finder);
			finder = finder->next;
		}
	}
	return (nodeloop);
}
