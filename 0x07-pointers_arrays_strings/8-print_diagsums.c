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
	int i = 0, j = (size - 1), y = 0, z = 0;

	for (i = 0; i < (size * size) || j < ((size * size) - 1); i += (size + 1))
	{
		y += a[i];
		z += a[j];
		j += size - 1;
	}
	printf("%d, %d\n", y, z);
}
