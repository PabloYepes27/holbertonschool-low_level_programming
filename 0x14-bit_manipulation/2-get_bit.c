#include "holberton.h"

/**
  * get_bit - function that returns the value of a bit at a given index
  * @n: integer to print in binary
  * @index: is the index, starting from 0 of the bit you want to get
  * Return: the value of the bit at index index or -1 if an error occured
**/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
