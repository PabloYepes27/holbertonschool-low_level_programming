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
	char *p;
	va_list lst; /* creating the list */

	/* initialize the list to store all values after n */
	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(lst, char*);
		if (p != NULL) /* treat arguments like strings */
			printf("%s", p);
		else
			printf("(nil)");
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lst); /* cleaning up the list */
}
