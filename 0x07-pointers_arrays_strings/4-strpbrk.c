#include "holberton.h"

/**
  * *_strpbrk - function that searches a string for any of a set of bytes.
  * @s: string for compare
  * @accept: string to compare
  * Return: a pointer to the byte that mathces
**/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (j = 0; s[j]; j++)
	{
		for  (i = 0; accept[i]; i++)
		{
			if (accept[i] == s[j])
			{
				return (s + j);
			}
		}
	}
	return ('\0');

}
