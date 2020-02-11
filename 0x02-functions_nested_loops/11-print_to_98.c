#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: numer to start
 * Return:
*/

void print_to_98(int n)
{
	int x = n;

	if (x < 98)
	{
		for (; x <= 98; x++)
		{
			if (x != 98)
			{
				printf("%i, ", x);
			}
			else
			{
				printf("%i", x);
			}
		}
	}
	else if (x > 98)
	{
		for (; x >= 98; x--)
		{
			if (x != 98)
			{
				printf("%i, ", x);
			}
			else
			{
				printf("%i", x);
			}
		}
	}
	else
	{
		printf("%i", x);
	}
	printf("\n");
}
