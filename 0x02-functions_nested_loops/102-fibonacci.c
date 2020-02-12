#include <stdio.h>

/**
  * main - function main
  * Return: 0
  **/

int main(void)
{
	float x = 0, y = 1, z = 1;
	int i, num = 50;

	for (i = 1; i <= num; i++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%.f, ", z);
	}
	printf("\n");
	return (0);
}
