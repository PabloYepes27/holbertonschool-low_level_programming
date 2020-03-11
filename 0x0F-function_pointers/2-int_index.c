#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
  * int_index - function that searches for an integer
  * @array: array
  * @size: size of the array
  * @cmp: pointer to the function to be used to compare values
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i;

	if (array || cmp || size)
	{
		for (i = 0; i < size; i++)
		(*action)(array[i]);
	}
}
