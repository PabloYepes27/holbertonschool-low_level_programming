#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 */

void print_alphabet_x10(void)
{
	int a, j;

	for (j = 0; j <= 9; j++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
			
		}
		_putchar('\n');
		
	}
}
