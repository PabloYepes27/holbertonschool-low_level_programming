#include "hash_tables.h"

/**
 * free_list - function that adds a new node at the end of a list_t list
 * @head: pointer that point to the header node
 * Return: The adress of the new.
 */

void free_list(hash_node_t *head)
{
	hash_node_t *tmp, *aux;

	tmp = head;
	if (head)
	{
		while (tmp)
		{
			free(tmp->key);
			free(tmp->value);
			aux = tmp->next;
			free(tmp);
			tmp = aux;
		}
	}
}

/**
 * hash_table_delete - Write a function that deletes a hash table.
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i, size;

	if (ht == NULL)
		return;
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		if (ht->array[i] != NULL)
			free_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
