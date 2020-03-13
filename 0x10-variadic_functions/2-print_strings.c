#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_strings - function that prints strings
  * @n: total arguments
  * @separator: string to be printed between numbers
  * Return: Void
  **/

void print_strings(const char *separator, const unsigned int n, ...)
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
