#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: pointer of type char
 * Return: Length of the string
**/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
  * new_dog - function that creates a new dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: dog's owner
  * Return: the new dog
  **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int i;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->age = age;
	newdog->name = malloc(_strlen(name) + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		newdog->name[i] = name[i];
	newdog->name[i] = '\0';
	newdog->owner = malloc(_strlen(owner) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		newdog->owner[i] = owner[i];
	newdog->owner[i] = '\0';
	return (newdog);
}


