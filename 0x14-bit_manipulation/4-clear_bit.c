#include "holberton.h"

/**
  * clear_bit - function that sets the value of a bit to 0 at a given index
  * @n: integer to print in binary
  * @index: is the index, starting from 0 of the bit you want to set
  * Return: 1 if it worked, or -1 if an error occurred
**/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 0x01;

	if (n == NULL)
		return (-1);
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	num <<= index;
	*n = *n & (~num);
	return (1);
}
