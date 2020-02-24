#include "holberton.h"

/**
  * *_strchr - Function that locates a character in a string
  * @s: String to change
  * @c: char to locate
  * Return: pointer to the first occurence of the character c
**/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return ('\0');
}
