#include "holberton.h"
#include <stdlib.h>
#include <limits.h>

/**
  * string_nconcat - function that concatenates two strings
  * @s1: string 1
  * @s2: string 2
  * @n: characters of s2 to concatenate
  * Return: string concatenated
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i]; i++)
		len1++;
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s2[j]; j++)
		len2++;
	if (len2 > n)
	{
		len2 = n;
	}
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1 ; i++)
		p[i] = s1[i];
	for (j = 0; j < len2; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';
	return (p);
}
