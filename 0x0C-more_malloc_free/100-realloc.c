#include "holberton.h"
#include <stdlib.h>

/**
  * _realloc - function that reallocates a memory block
  * @ptr: pointer to the memory previously allocated
  * @old_size: size of the allocated space of ptr
  * @new_size: the new size of the new memory block
  * Return: void pointer
**/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p, *p_aux;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}
	p_aux = p;
	for (i = 0; i < old_size && i < new_size; i++, p_aux++)
	{
		p[i] = *p_aux;
	}
	free(ptr);
	return (p);
}
