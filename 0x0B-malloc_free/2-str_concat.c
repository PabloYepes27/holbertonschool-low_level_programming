#include "holberton.h"
#include <stdlib.h>

/**
  * str_concat - function that concatenates two string
  * @s1: string 1
  * @s2: string 2
  * Return: NULL on failure or pointer with two strings
  **/

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else
	{
		for (i = 0; s1[i]; i++)
		{
		}
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		for (j = 0; s1[j]; j++)
		{
		}
	}
	s3 = malloc(i * sizeof(char) + j * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
