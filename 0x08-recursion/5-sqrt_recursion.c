#include "holberton.h"

/**
  * increase - Function that return the root of a number creasing
  * @m: number
  * @i: root
  * Return: Natural square
  **/

int increase(int m, int i)
{
	if ((i * i) > m)
	{
		return (-1);
	}
	else if ((i * i) != m)
	{
		return (increase(m, ++i));
	}
	else
	{
		return (i);
	}
}

/**
  * _sqrt_recursion - function that returns the natural square root of a number
  * @n: number
  * Return: natural square root of n
  **/


int _sqrt_recursion(int n)
{
	int x = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}

	return (increase(n, x));
}
