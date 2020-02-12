#include <stdio.h>

/**
  * main - main function
  * Return: void
 **/

int main(void)
{
	unsigned long x = 0, y = 1, z = 1, s = 0;
	int i, num = 32;

	for (i = 1; i <= num; i++)
	{
		z = x + y;
		x = y;
		y = z;
		if ((z < 4000000) && (z % 2 == 0))
		{
		s = z + s;
		}
	}
	printf("%lu\n", s);
	return (0);
}
