#include "lists.h"

/**
 * _strlen - function that returns the length of a string
 * @s: pointer of type char
 * Return: Length of the string
**/

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer that point to the header node
 * @str: string
 * Return: The adress of the new.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *q;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		q = *head;
		while (q->next != NULL)
		{
			q = q->next;
		}
		q->next = new;
	}
	return (new);
}
