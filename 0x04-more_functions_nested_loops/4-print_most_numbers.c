#include "holberton.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * Return: not expected
**/

void print_most_numbers(void)
{
	char x;

	for (x = 48; x <= 57; x++)
	{
		if ((x != 50) && (x != 52))
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
