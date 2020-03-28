#include "holberton.h"

/**
  * *_strstr - Function that locates a substring
  * @haystack: string for compare
  * @needle: string to compare
  * Return: a pointer to the beginning of the located substring
**/

char *_strstr(char *haystack, char *needle)
{
	int j = 0;

	if(needle[j] == '\0') 
	{
		return ('\0');
	}
	for (j = 0; haystack[j]; j++)
	{
		if (haystack[j] == needle[0])
		{
			return (haystack + j);
		}
	}
	if (haystack == '\0')
	{
		return (haystack + j);
	}
	return ('\0');

}
