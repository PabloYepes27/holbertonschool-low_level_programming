#include "holberton.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: Expected input value
 * Return: 1 if c is a digit, 0 otherwise
**/

int _isdigit(int c)
{
		if ((c <= 57) && (c >= 48))
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
