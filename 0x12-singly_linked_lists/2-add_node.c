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
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: node
 * @str: first node
 * Return: The adress of the new.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = *head;
	new = malloc(sizeof(list_t));
	if (head == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = *head;
	new->len = _strlen(str);
	*head = new;
	return (new);
}
