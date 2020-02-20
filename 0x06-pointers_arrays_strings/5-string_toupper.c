#include "holberton.h"

/**
  * *string_toupper - function that changes all lowercase to uppercase
  * @s: string
  * Return: string to uppercase
**/

char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
	{
		if ((s[x] >= 97) && (s[x] <= 122))
		{
			s[x] = (s[x] - 32);
		}
	}
	return (s);
}
