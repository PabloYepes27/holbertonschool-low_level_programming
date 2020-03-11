#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
  * print_name - function that prints a name
  * @name: name of the person
  * @f: pointer that is pointing to a function
  **/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(f)(name);
}
