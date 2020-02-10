#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 */

void print_alphabet_x10(void)
{
	char alph;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
			
		}
		_putchar('\n');
		
	}
}
