#include "holberton.h"

/**
 * swap_int -  function that swaps the values of two integers
 * @a: pointer 1
 * @b: pointer 2
 * Return: Not expected.
**/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
