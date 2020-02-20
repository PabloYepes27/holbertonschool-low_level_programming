#include "holberton.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: string to be appended
 * @src: string to append
 * Return: pointer with the result ofthe add of two strings
**/

char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i]; ++i) /* Size of dest[] */
	{
	}
	for (n = 0; src[n]; ++n) /* size of src[] */
	{
		dest[i + n] = src[n];
	}
	dest[i + n] = '\0';
	return (dest);
}
