#include "holberton.h"

/**
  * *leet -  function that encodes a string into 1337
  * @s: string
  * Return: string to uppercase
**/

char *leet(char *s)
{
	int x, y, z = 0;

	char a[] = "aAeEoOtTlL", b[] = "4433007711";

	for (x = 0; s[x]; x++)
	{
		for (y = 0; a[y]; y++)
		{
			if (s[x] == a[y])
			{
				z = y;
				s[x] = b[z];
			}
		}
	}
	return (s);
}
