#include "holberton.h"
#include <stdlib.h>
#include <limits.h>

/**
  * array_range - function that creates an array of integers
  * @min: min range
  * @max: max range
  * Return: pointer to the newly array
**/

int *array_range(int min, int max)
{
	int i, length = 0, *p;

	if (min > max)
		return (NULL);
	length = max - min;
	p = malloc(sizeof(int) * (length + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= length; i++, min++)
		p[i] = min;
	return (p);
}
