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
	char c, *s, *separator = "";
	int i, l = 0;
	float f;
	va_list lst; /* creating the list */

	va_start(lst, format);
	while (format[l])
	{
		if (format[l] == 'c' || format[l] == 'i' ||
		format[l] == 'f' || format[l] == 's')
		{
			printf("%s", separator);
			switch (format[l])
			{
				case 'c':
					c = (char) va_arg(lst, int);
					printf("%c", c);
					break;
				case 'i':
					i = va_arg(lst, int);
					printf("%i", i);
					break;
				case 'f':
					f = (float) va_arg(lst, double);
					printf("%f", f);
					break;
				case 's': 
					s = va_arg(lst, char*);
					if (s == NULL)
						printf("(nil)");
					printf("%s", s);
					break;
				default:
					break;
			}
			separator = ", ";
		}
		l++;
	}
	va_end(lst); /* cleaning up the list */
	printf("\n");
}
