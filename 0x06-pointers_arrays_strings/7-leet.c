#include "holberton.h"

/**
  * *leet -  function that encodes a string into 1337
  * @s: string
  * Return: string to uppercase
**/

char *leet(char *s)
{
	int x, y;

	char a[] = "aAeEoOtTlL", b[] = "4433007711";

	for (x = 0; s[x]; x++)
	{
		for (y = 0; a[y]; y++)
		{
			if (s[x] == a[y])
			{
				s[x] = b[y];
			}
		}
	}
	return (s);
}
