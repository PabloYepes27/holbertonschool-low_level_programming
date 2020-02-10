#include "holberton.h"

/**
 * print_alphabet - Print the alphabet in lowercase in reverse mode..
 *
*/

void print_alphabet(void)
{
	char x[27] = "\nabcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i >= 26; i++)
	{
		_putchar(x[i]);
	}
}
