#include "holberton.h"

/**
* print_sign - function that prints the sign of a number
* @n: variable to check
* Return: 1 if n is positive, 0 if is zero and - is less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
