#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 **/


int main(void)
{
	float x = 0, y = 1, z = 1;
	int i, num = 98;

	for (i = 1; i <= num; i++)
	{
		if (i != num)
		{
			z = x + y;
			x = y;
			y = z;
			printf("%.f, ", z);
		}
		else
		{
			z = x + y;
			x = y;
			y = z;
			printf("%.f", z);
		}
	}
	printf("\n");
	return (0);
}
