#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: Reverse string
**/

void rev_string(char *s)
{
	int i, j, c = 0;
	char r[1000];

	for (i = 0; s[i] != '\0'; i++)
	{
		r[i] = s[i];
	}
	for (j = i - 1; j >= 0; j--)
	{
		s[j] = r[c];
		c++;
	}
}
