#include "holberton.h"

/**
  * _atoi - function that convert a string to an integer
  * @s: string
  * Return: integer
**/

int _atoi(char *s)
{
	int i, sign = 1, n = 0;

	for (i = 0; s[i]; ++i)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			n *= 10;
			n += s[i] - '0';
		}
		else if
		{
			break;
		}
	}
	n *= sign;
	return (n);
}
