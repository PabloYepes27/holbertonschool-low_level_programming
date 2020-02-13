#include "holberton.h"

/**
 * print_square - function that draws a diagonal line
 * @size: Number of times the char \ will appear
 * Return: not expected
**/

void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0 ; y < size; y++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
