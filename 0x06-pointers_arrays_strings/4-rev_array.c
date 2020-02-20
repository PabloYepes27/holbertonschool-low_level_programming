#include "holberton.h"

/**
  * reverse_array - function that reverses the content of an array of integers
  * @a: string one
  * @n: number of elements
  * Return: void
**/

void reverse_array(int *a, int n)
{
	int x, y = 0, z[1000];

	for (x = 0; x < n; x++)
	{
		z[x] = a[x];
	}
	for (x = n - 1; x >= 0; x--)
	{
		a[y] = z[x];
		y++;
	}
}
