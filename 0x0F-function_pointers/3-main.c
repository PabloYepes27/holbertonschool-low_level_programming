#include <stdio.h>
#include "3-calc.h"

/**
  * main - function that calculates simple operations
  * @argc: number of arguments
  * @argv: parameters
  * Return: the result of the operations
  **/

int main(int argc, char *argv[])
{
	int i = 0, j = 0;

	if (argc == 4)
	{
		i = atoi(argv[1]);
		j = atoi(argv[3]);
		if ((j == 0 && *argv[2] == '/') || (j == 0 && *argv[2] == '%'))
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", get_op_func(argv[2])(i, j));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
