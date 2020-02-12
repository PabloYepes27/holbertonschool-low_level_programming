#include <stdio.h>

/**
  * main - main function
  * Return: 0
**/

int main(void)
{
	int x;
	float i = 0;

	for (x = 0; x < 1024; x++)
	{
		if (((x % 3) == 0) || ((x % 5) == 0))
		{
			i = x + i;
		}
	}
	printf("%.f \n", i);
	return (0);
}
