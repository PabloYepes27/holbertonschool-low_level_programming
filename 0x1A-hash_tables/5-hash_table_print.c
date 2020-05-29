#include "hash_tables.h"

/**
 * hash_table_print - Write a function that prints a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, size, count = 0;

	if (ht != NULL)
	{
		size = ht->size;
		printf("{");
		for (i = 0; i < size; i++)
		{
			while (ht->array[i] != NULL)
			{
				if (count > 0)
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				count++;
				ht->array[i] = ht->array[i]->next;

			}
		}
		printf("}\n");
	}
}
