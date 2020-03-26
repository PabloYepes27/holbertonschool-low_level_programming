#include "holberton.h"

/**
  * binary_to_uint - function that converts a binary number to an unsigned int
  * @b:  is pointing to a string of 0 and 1 chars
  * Return: the converted number
**/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, base = 1;
	int len, i;
	char *ptr;

	if (b == NULL)
		return (0);
	ptr = (char *)b;
	len = _strlen(ptr);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			num += base;
		}
		base *= 2;
	}
	return (num);
}

/**
 * _strlen - function that returns the length of a string
 * @s: pointer of type char
 * Return: Length of the string
**/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
