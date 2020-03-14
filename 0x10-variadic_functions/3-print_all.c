#include "variadic_functions.h"

/**
  * print_all - function that prints anything
  * @format: is a list of types of arguments passed to the function
  * Return: Void
  **/
void print_all(const char * const format, ...)
{
	char *s;
	int l = 0;
	va_list lst; /* creating the list */

	va_start(lst, format);
	while (format == NULL)
	{	printf("\n");
		return;
	}
	while (format[l])
	{
		switch (format[l])
		{
			case 'c':
				printf("%c", va_arg(lst, int));
				break;
			case 'i':
				printf("%i", va_arg(lst, int));
				break;
			case 'f':
				printf("%f", va_arg(lst, double));
				break;
			case 's':
				s = va_arg(lst, char*);
				if (s == NULL)
				{	printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		if ((format[l] == 'c' || format[l] == 'i' || format[l] == 'f' ||
					format[l] == 's') && format[l + 1] != '\0')
			printf(", ");
		l++;
	}
	va_end(lst); /* cleaning up the list */
	printf("\n");
}
