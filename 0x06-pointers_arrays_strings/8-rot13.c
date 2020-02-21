#include "holberton.h"

/**
  * *rot13 - function that encodes a string using rot13
  * @s: string
  * Return: string
**/

char *rot13(char *s)
{
	int x, y, z = 0;

	char a[] = "ABCDEFGHIJKLM", b[] = "NOPQRSTUVWXYZ";

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
