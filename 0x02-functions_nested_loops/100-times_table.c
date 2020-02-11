#include "holberton.h"
/**
* print_times_table - function that prints the 9 times table, starting with 0.
* Return:
*/
void print_times_table(int n)
{
	int x, o, j = 0;

	if ((n >= 0) && (n <= 15))
	{
		for (x = 0; x <= n; x++)
		{
			for (o = 0; o <= n; o++)
			{
				j = o * x;
				if (o != 0)
				{
					if (j > 9)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(j + '0');
						_putchar(
				}
				else if
				{
						_putchar(',');
						_putchar(' ');
						_putchar((j / 10) + '0');
						_putchar((j % 10) + '0');
					}
				}
				else
				{
					if (j < n)
					{
						_putchar(j + '0');
					}
					else
					{
						_putchar((j / 10) + '0');
						_putchar((j % 10) + '0');
					}
				}
			}
		}
		_putchar('\n');
	}
}

