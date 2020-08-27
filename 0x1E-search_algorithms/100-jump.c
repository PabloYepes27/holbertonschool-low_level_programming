#include "search_algos.h"
/**
* jump_search - searches for a value in a sorted array
* of integers using jump search algorithm
* @array: is a pointer to the first element of the array to search in
* @size: size of the array
* @value: is the value to search for
* Return: If value is not present in array return -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0, jump = 0, step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);
	while ((array[jump]) < value && (jump < size))
	{
		printf("Value checked array[%ld] = [%ld]\n", jump, array[jump]);
		prev = jump;
		jump += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, jump);
	/*the right position cannot pass the lenght of the array*/
	if (jump >= size)
		jump = size - 1;
	while (array[prev] < value && prev < (int)jump)
	{
		printf("Value checked array[%ld] = [%ld]\n", prev, array[prev]);
		prev++;
	}
	printf("Value checked array[%ld] = [%ld]\n", prev, array[prev]);
	if (array[prev] == value)
		return (prev);

	return (-1);
}
