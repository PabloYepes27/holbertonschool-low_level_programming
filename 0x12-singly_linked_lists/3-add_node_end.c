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
 * add_node_end - function that adds a end node at the end of a list_t list
 * @head: pointer that point to the header node
 * @str: string
 * Return: The adress of the end.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *q;

	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);
	end->str = strdup(str);
	end->len = _strlen(str);
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (*head);
	}
	else
	{
		q = *head;
		while (q->next != NULL)
		{
			q = q->next;
		}
		q->next = end;
	}
	return (end);
}
