#include "holberton.h"

/**
* _isalpha - function that checks for alphabetic character
* @c: variable to check
* Return: 1 if c is lowercase, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c <= 122) && (c >= 97) || (c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
