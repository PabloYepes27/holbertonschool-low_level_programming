#include "holberton.h"

/**
* jack_bauer - function that prints every minute of the day of Jack Bauer
* Return: The last digit of a number n
*/

void jack_bauer(void)
{
	int n, o;

	for (n = 0; n <= 23; n++)
	{
		for (o = 0; o <= 59; o++)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(':');
			_putchar(o / 10 + '0');
			_putchar(o % 10 + '0');
			_putchar('\n');
		}
	}
}
