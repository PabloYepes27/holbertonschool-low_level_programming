#include "holberton.h"
#include <stdlib.h>

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: .
  * @height: .
  * Return: Pointer or NULL
  **/

int **alloc_grid(int width, int height)
{
	int i, j, **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(width * sizeof(int *));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		p[i] = malloc(height * sizeof(int));
		if (p[i] == NULL)
		{
			free(p[i]);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}



