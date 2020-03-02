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
	int x, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		if (isdigit(*argv[x]))
		{
			sum += atoi(argv[x]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
