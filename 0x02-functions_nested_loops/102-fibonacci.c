#include <stdio.h>

/**
  * main - function main
  * Return: 0
  **/

int main(void)
{
	unsigned long x = 0, y = 1, z = 1;
	int i, num = 50;

	for (i = 1; i <= num; i++)
	{
		z = x + y;
		x = y;
		y = z;
		if (i != num)
		{
			printf("%lu, ", z);
		}
		else
		{
			printf("%lu", z);
		}
	}
	printf("\n");
	return (0);
}
