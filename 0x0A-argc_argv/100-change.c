#include <stdio.h>
#include <stdlib.h>

int coins(int val);

/**
  * main - Function that prints minimum number of coins to make a change
  * @argv: argument vector
  * @argc: argument counter
  * Return: 0
  **/

int main(int argc, char *argv[])
{
	int value;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	if (value < 0)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", coins(value));
	}
	return (0);
}

/**
  * coins - Function that prints minimum number of coins to make a change
  * @val: change
  * Return: number of coins
  **/


int coins(int val)
{
	int a = 25, b = 10, c = 5, d = 2, e = 1, x;

	for (x = 0; val != 0; x++)

		if (val >= a)
		{
			val -= a;
		}
		else if (val >= b)
		{
			val -= b;
		}
		else if (val >= c)
		{
			val -= c;
		}
		else if (val >= d)
		{
			val -= d;
		}
		else
		{
			val -= e;
		}
	return (x);
}
