#include <stdio.h>

int main(void)
{
	int x = 0, y, z;
	double i = 0;

	while (x < 1024);
	{
		y = x % 3;
		z = x % 5;
		if ((y == 0) || (z == 0))
		{
			i = x + i;
		}
		x++;
	}
		printf("%lf ", i);
	return (0);
}
