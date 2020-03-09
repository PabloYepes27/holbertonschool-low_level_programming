#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - Function that initialize a variable
  * @name: name of the dog
  * @age: age of the dog
  * @owner: dog's owner
  * @d: my_dog
  **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
