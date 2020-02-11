#include "holberton.h"

/**
* times_table - function that prints the 9 times table, starting with 0.
* Return: 
*/

void times_table(void)
{
	int n, o, j = 0; 
	
	for (n = 0; n <= 9; n++)
	{ 
		for (o = 0; o <= 9; o++)
		{
			j = o * n;
			if (j < 10)
			{
				_putchar(j + '0');
				_putchar(' ');
			}
		        else
			{		
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
