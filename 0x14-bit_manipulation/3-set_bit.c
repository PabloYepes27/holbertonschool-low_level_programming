#include "holberton.h"

/**
  * set_bit - function that sets the value of a bit to 1 at a given index
  * @n: integer to print in binary
  * @index: is the index, starting from 0 of the bit you want to get
  * Return: 1 if it worked, or -1 if an error occurred
**/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 0x01;

	num <<= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n |= num;
	return (1);
}
