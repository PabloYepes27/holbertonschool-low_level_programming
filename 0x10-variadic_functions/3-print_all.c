#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_all - function that prints anything
  * @format: is a list of types of arguments passed to the function
  * Return: Void
  **/

void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list lst; /* creating the list */

	if (separator != NULL)
	{
		/* initialize the list to store all values after n */
		va_start(lst, n);
		for (i = 0; i < n; i++)
		{
			if (i != (n - 1))
			printf("%s%s", va_arg(lst, char*), separator);
			else
			printf("%s", va_arg(lst, char*));
		}
		va_end(lst); /* cleaning up the list */
		printf("\n");
	}
}
