#include "holberton.h"

/**
  * *_strnccpy - function that copy a string
  * @dest:string to be copied
  * @src: string to copy
  * @n: bytes
  * Return: string dest
**/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
