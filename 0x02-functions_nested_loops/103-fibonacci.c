#include <stdio.h>

/**
  * main - main function
  * Return: void
 **/

int main(void)
{
	float x = 0, y = 1, z = 1, s = 0;
	int i, num = 32;

	for (i = 1; i <= num; i++)
	{
		z = x + y;
		x = y;
		y = z;
		s = z + s;
	}
	printf("%.f\n", s);
	return (0);
}
