#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int w, x, y, z;

	for (w = '0' ; w <= '9'; w++)
	{
		for (x = '0'; x <= '8'; x++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				for (z = '0'; z <= '9'; z++)
				{
					putchar(w);
					putchar(x);
					putchar(' ');
					putchar(y);
					putchar(z);
					if ((w != '9') || (x != '8') || (y != '9') || (z != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
