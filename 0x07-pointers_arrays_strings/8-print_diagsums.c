#include "holberton.h"
#include <stdio.h>

/**
  * print_diagsums - print the sum of two diagonals of a square matrix
  * @a: Matrix
  * @size: Size of the matrix
  * Return: void
**/

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int y = 0, z = 0;

	for (i = 0; i < (size * size); i++)
	{
		y += a[(size + 1) * i];
		if(i != 0)
		{
			z += a[(size - 1) * i];
		}
	}
	printf("%u, %u'\n'",y, z);
}
