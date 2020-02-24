#include "holberton.h"

/**
  * *_memcpy - function that copies memory area
  * @dest: The adress of memory destination to change
  * @src: Source to copy
  * @n: size of sources to copy
  * Return: pointer to the memory area destination
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
