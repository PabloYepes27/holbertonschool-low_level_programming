#include "holberton.h"

/**
  * _strcmp - function that compare two strings
  * @s1: string one
  * @s2: string two
  * Return: string comparation result
**/

int _strcmp(char *s1, char *s2)
{
	int x, r = 0;

	for (x = 0; s1[x] || s2[x]; x++)
	{
		r = s1[x] - s2[x];
		if (r != 0)
		{
			return (r);
		}
	}
	return (r);
}
