#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_dog - Function that prints
  * @d: my_dog
  **/

void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name == NULL)
			(*d).name = "(nil)";
		if ((*d).owner == NULL)
			(*d).owner = "(nil)";
		printf("Name: %s\n"
			"Age: %f\n"
			"Owner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}
