#include "holberton.h"

/**
 * puts_half - function that prints half of a string
 * @str: pointer to the string
 * Return:
**/

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{

	}
	if ((i % 2) != 0)
	{
		for (j = ((i + 1) / 2); str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (i / 2); str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
