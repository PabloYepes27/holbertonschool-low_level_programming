#include "holberton.h"

/**
  * get_bit - function that returns the value of a bit at a given index
  * @n: integer to print in binary
  * @index: is the index, starting from 0 of the bit you want to get
  * Return: the value of the bit at index index or -1 if an error occured
**/

int get_bit(unsigned long int n, unsigned int index)
{
	int i, bin[((sizeof(unsigned long int) * 8) - 1)];
	unsigned long int k, count = 0;

	if (n == 0)
		return (0);

	else
	{
		for (i = ((sizeof(unsigned long int) * 8) - 1); i >= 0; i--)
		{
			k = n >> i;
			if (k)
			{
				if (k & 1)
				{
					bin[i] = 1;
					count++;
				}
				else
				{
					bin[i] = 0;
					count++;
				}
			}
		}
	}
	if (index < count)
		return (bin[index]);
	return (-1);
}
