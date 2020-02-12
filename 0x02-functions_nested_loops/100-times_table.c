#include "holberton.h"

/**
* times_table - function that prints the 9 times table, starting with 0.
* Return:
*/

void print_times_table(int n)
{
	int o, p, j = 0;
	
	if ((n >= 0) && (n <= 15))
	{
		for (p = 0; p <= n; p++)
		{
			for (o = 0; o <= n; o++)
			{
				j = o * p;
				if (j <= 9)
				{
					if (o != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(j + '0');
					}
					else
					{
						_putchar(j + '0');
					}
				}
				else if (j < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((j / 10) + '0');
					_putchar((j % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((j / 100) + '0');
					_putchar(((j % 100) / 10) + '0');
					_putchar(((j % 100) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
