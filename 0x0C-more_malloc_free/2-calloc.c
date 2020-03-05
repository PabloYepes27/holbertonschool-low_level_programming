#include "holberton.h"
#include <stdlib.h>
#include <limits.h>

/**
  * _calloc - functionthat allocates memory for an array
  * @nmemb: memory
  * @size: size of the buffer
  * Return: void pointer
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = '\0';
	return (p);
}
