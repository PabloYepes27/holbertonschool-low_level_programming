#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_dog - Function that prints
  * @d: my_dog
  **/

struct dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	my_dog.name = name;
	my_dog.age = age;
	my_dog.owner = owner;
	return (my_dog);

}
