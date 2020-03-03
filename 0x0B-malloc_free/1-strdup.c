#include "holberton.h"
#include <stdlib.h>

/**
  * _strdup - fun that returns a pointer to a newly allocated space in memory
  * @str: pointer string
  * Return: NULL if str = NULL or a pointer to the duplciated string
  **/

char *_strdup(char *str)
{
	int i;
	char *a = malloc(sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i]; i++)
		{
			a[i] = str[i];
		}
		return (a);
	}
}
