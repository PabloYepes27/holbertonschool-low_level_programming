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
	int i = 0, j = 1;
	unsigned int y = 0, z = 0;

	for (i = 0; i < size; ++i)
	{
		y += a[(size + 1) * i];
		z += a[(size - 1) * j];
		j++;
	} 
	printf("%u, %u \n", y, z);
}
