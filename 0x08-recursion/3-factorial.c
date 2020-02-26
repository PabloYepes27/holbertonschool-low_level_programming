#include "holberton.h"

/**
  * factorial - function that returns the factorial of a given number
  * @n: size
  * Return: factorial
  **/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
