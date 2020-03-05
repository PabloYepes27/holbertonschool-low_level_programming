#include "holberton.h"
#include <stdlib.h>
#include <limits.h>

/**
  * malloc_checked - function that allocates memory
  * @b: size
  * Return: void pointer
**/

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
