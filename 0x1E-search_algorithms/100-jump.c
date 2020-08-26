#include "search_algos.h"
int minimum(int left, int right);
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
	int prev = 0, jump = sqrt((int)size);

	if (array == NULL)
		return (-1);
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (array[minimum(jump, (int)size)] < value)
	{
		printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
		prev = jump;
		jump += sqrt((int)size);
		if (prev >= value)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, jump);
	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == jump || prev == (int)size)
			return (-1);
	}
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
		return (prev);
	return (-1);
}

/**
* minimum - return the minimum of two numbers
* @left: first number
* @right:second number
* Return: Return the minimum
*/
int minimum(int left, int right)
{
	return (left <= right ? left : right);
}
