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
	int i = 0, j = (size - 1);
	unsigned int y = 0, z = 0;

	for (i = 0; i < (size * size); i += size + 1)
	{
		y += a[i];
		z += a[j];
		j += size - 1;
	}
	printf("%u, %u \n", y, z);
}
