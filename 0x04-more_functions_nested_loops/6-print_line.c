#include "holberton.h"

/**
 * print_line - function that draws a straight line
 * @n: Number of times the char _ will appear
 * Return: not expected
**/

void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
