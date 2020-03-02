#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - Function that adds positive numbers
  * @argv: argument vector
  * @argc: argument counter
  * Return: 0
  **/

int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (isdigit(argv[x][y]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
