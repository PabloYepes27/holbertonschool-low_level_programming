#include "holberton.h"

/**
  * _strspn - function that gets the length of a prefix substring
  * @s: string for compare
  * @accept: string to compare
  * Return: number of bytes
**/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0;

	for (j = 0; s[j]; j++)
	{
		for  (i = 0; accept[i]; i++)
		{
			if (accept[i] == s[j])
			{
				k++;
				break;
			}
		}
		if (accept[i] != s[j])
		{
			break;
		}
	}
	return (k);
}
