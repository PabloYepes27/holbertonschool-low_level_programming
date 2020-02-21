#include "holberton.h"

/**
  * *rot13 - function that encodes a string using rot13
  * @s: string
  * Return: string
**/

char *rot13(char *s)
{
	int x, y;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; s[x]; x++)
	{
		for (y = 0; a[y]; y++)
		{
			if (s[x] == a[y])
			{
				s[x] = b[y];
				break;
			}
		}
	}
	return (s);
}
