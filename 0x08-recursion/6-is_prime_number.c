#include "holberton.h"

int prime(int m, int i);

/**
  * is_prime_number - returns 1 if the input is a prime, otherwise 0
  * @n: number
  * Return: 1 or 0
  **/


int is_prime_number(int n)
{
	int x = 2;

	return (prime(n, x));
}

/**
  * prime - Function that calclate if a number is prime
  * @m: number
  * @i: root
  * Return: 1 or 0
  **/

int prime(int m, int i)
{
	if (m <= 0)
	{
		return (0);
	}
	if ((m % i) == 0 && (i < m))
	{
		return (0);
		return (prime(m, ++i));
	}
	else
	{
		return (1);
	}
}
