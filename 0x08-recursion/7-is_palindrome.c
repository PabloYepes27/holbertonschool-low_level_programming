#include "holberton.h"

int compare(int m, int i);
int length(int s);

/**
  * is_palindrome - returns 1 if it is a palindrome, otherwise 0
  * @n: number
  * Return: 1 or 0
  **/


int is_palindrome(char *s)
{
	int x = 0;
	int len = length(s);
	
	return (compare(s, x, len));
}

/**
  * compare - Function that compare the string
  * @m: number
  * @i: root
  * Return: 1 or 0
  **/

int compare(char *q, int y, int len)
{
	if (s[y] < [len])
	{
		compare(q, (y + 1), (len - 1));
	}
	else if (s[y] == s[len])
	{ 
		return (1);
	}
	else if (s[y] > s[len])
	{
		return (0);
	}
}

/**
  * length - Function that compare a string and take the length
  * @s: number
  * @x: root
  * Return: length of a string
  **/

int length(char *s)
{

	if (s != '\0')
	{
		return (1 + length(s + 1));
	}
	else
		return (-1);
}


