#include "holberton.h"
#include <stdlib.h>

/**
  * _strdup - fun that returns a pointer to a newly allocated space in memory
  * @str: pointer string
  * Return: NULL if str = NULL or a pointer to the duplciated string
  **/

char *_strdup(char *str)
{
	int i, j;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
	}
	a = malloc(i * sizeof(*a));
	if (a != NULL)
	{
		for (j = 0; j < i; j++)
		{
			a[j] = str[j];
		}
		a[j] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (a);
	free(a);
}
