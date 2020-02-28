#include "holberton.h"

int compare(char *q, int y, int len);
int length(char *s);

/**
  * is_palindrome - returns 1 if it is a palindrome, otherwise 0
  * @s: string
  * Return: 1 or 0
  **/


int is_palindrome(char *s)
{
	int x = 0;
	int len = length(s);

	if (*s != '\0')
	{
		return (compare(s, x, len - 1));
	}
	else
		return (1);
}

/**
  * compare - Function that compare the string
  * @q: string
  * @y: initial position
  * @len: final position
  * Return: 1 or 0
  **/

int compare(char *q, int y, int len)
{
	if (q[y] < q[len])
	{
		if (q[y] == q[len])
		{
			compare(q, (y + 1), (len - 1));
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/**
  * length - Function that compare a string and take the length
  * @s: string
  * Return: length of a string
  **/

int length(char *s)
{

	if (*s != '\0')
	{
		return (1 + length(s + 1));
	}
	return (0);
}


