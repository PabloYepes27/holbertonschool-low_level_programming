#include <stdio.h>
#include <stdlib.h>

/**
  * main - Function that prints the nnumber of arguments passed into it
  * @argv: argument vector
  * @argc: argument counter
  * Return: 0
  **/

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
