#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_name - function that prints a name
  * @name: name of the person
  * @f: pointer that is pointing to a function
  **/

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
