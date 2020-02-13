#include "holberton.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * Return: not expected
**/

void print_numbers(void)
{
	char x;

	for (x = 48; x <= 57; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
