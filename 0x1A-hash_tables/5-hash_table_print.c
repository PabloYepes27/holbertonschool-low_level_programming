#include "hash_tables.h"

/**
 * hash_table_print - Write a function that prints a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, size, count = 0;

	size = ht->size;
	printf("{");
	for (i = 0; i < size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (count > 0)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			count++;
		}
	}
	printf("}\n");
}
