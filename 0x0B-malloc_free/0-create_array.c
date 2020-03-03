#include <stdlib.h>

/**
  * create_array - function that creates an array of chars
  * @size: size of the buffer
  * @c: character to asign
  * Return: NULL if size os 0 or a pointer to the array
  **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		a = malloc(size * sizeof(char));
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
