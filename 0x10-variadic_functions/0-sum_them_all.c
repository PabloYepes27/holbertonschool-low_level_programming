#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - function that returns the sum of all its parameters
  * @n: total arguments
  * Return: the sum of the parameters
  **/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list lst; /* creating the list */

	if (n == 0)
	{
		return (0);
	}
	/* initialize the list to store all values after n */
	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(lst, int); /* sum all the inputs */
	}
	va_end(lst); /* cleaning up the list */
	return (sum);
}
