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
	int i, j, len1 = 0, len2 = 0;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	for (i = 0; s1[i]; i++)
		{
			len1++;
		}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (j = 0; s2[j]; j++)
		{
			len2++;
		}
	s3 = malloc((len1 + len2 + 1) * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j <= len2; j++)
	{
		s3[i + j] = s2[j];
	}
	s3[i + j] = '\0';
	return (s3);
}
