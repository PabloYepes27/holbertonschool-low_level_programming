#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: Size of the array
 * Return: pointer to the newly created hash table or NULL in wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;

	if (size < 1)
	{
		return (NULL);
	}
	new_hash = malloc(sizeof(hash_table_t));
	if (!new_hash)
	{
		return (NULL);
	}
	new_hash->size = size;
	new_hash->array = calloc(size, sizeof(hash_node_t *));
	if (!new_hash->array)
	{
		free(new_hash);
		return (NULL);
	}
	return (new_hash);
}
