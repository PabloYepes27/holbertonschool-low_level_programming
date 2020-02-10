#include "holberton.h"

/**
* _abs - function that computes the absolute value of an integer
* @n: variable to check
* Return: the absolute value
*/

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n = (n * (-1));
		return (n);
	}
}
