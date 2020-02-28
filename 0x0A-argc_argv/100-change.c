#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - Function that prints minimum number of coins to make a change
  * @argv: argument vector
  * @argc: argument counter
  * Return: 0
  **/

int main(int argc, char *argv[])
{
	int x,value = 0, coins = 0;

	value = atoi(argv[1]);

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	if (value < 0)
	{
		printf("0\n");
	}
	if
		printf("%d\n", coins);
	}
	return (0);
}
