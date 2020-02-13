#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: Number of times the char \ will appear
 * Return: not expected
**/

void print_diagonal(int n)
{
	int x, y;

	for (x = 1; x <= n; x++)
	{
		for (y = 1 ; y < x; y++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
