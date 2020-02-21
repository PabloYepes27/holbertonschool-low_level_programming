#include "holberton.h"

/**
  * *cap_string - function that capitalizes all words of a string
  * @s: string
  * Return: string to uppercase
**/

char *cap_string(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
	{
		if ((s[x] >= 97) && (s[x] <= 122)
		&& ((s[x] == s[0]) || (s[x - 1] == ' ') || (s[x - 1] == '\n')
		|| (s[x - 1] == ',') || (s[x - 1] == ';') || (s[x - 1] == '.')
		|| (s[x - 1] == '!') || (s[x - 1] == '?') || (s[x - 1] == '(')
		|| (s[x - 1] == ')') || (s[x - 1] == '{') || (s[x - 1] == '}')
		|| (s[x - 1] == '"') || (s[x - 1] == '\t')))
		{
			s[x] = (s[x] - 32);
		}
	}
	return (s);
}
