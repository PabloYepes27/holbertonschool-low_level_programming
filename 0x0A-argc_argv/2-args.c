#include <stdio.h>
#include <stdlib.h>

/**
  * main - Function that prints all arguments it receives
  * @argv: argument vector
  * @argc: argument counter
  * Return: 0
  **/

int main(int argc, char *argv[])
{
	int x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
	x++;
	}
	return (0);
}
