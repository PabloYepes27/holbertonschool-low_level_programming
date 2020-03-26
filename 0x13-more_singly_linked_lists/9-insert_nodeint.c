#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: the first node
  * @idx:  is the index of the list where the new node should be added
  * @n: value to modify
  * Return: the adress of the new node or NULL
**/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *aux2, *aux1; /* new node, aux1(next) and aux2(prev) */
	unsigned int i = 0, j = 0;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t)); /* allocate memory */
	if (new == NULL)
		return (NULL);
	new->n = n; /* assign the value */
	aux1 = *head; /* aux1 point what is pointing head */
	while (aux1)
	{
		aux1 = aux1->next;
		j++;
	}
	if (idx > j) /* check if index is greater that our total nodes */
		return (NULL);
	if (idx == 0) /* case in where index is the first node */
	{
		new->next = *head; /* point the new to what header is pointing*/
		*head = new; /*new is the new head */
		return (new);
	}
	aux1 = *head; /* aux1 point what is pointing head */
	while (aux1)
	{
		aux2 = aux1; /* aux2 always is gonna have the value of aux1 */
		aux1 = aux2->next; /* aux1 always going to be one ahead aux2 */
		i++;
		if (i == idx) /* find the position of index */
		{
			new->next = aux1; /* new is going to point the aux1 */
			aux2->next = new; /* aux2 is going to point new */
			return (new);
		}
	}
	return (new);
}
