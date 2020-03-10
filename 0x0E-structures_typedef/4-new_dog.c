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
  * Return: pointer  variable of dog_t type
  **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog; /* Creating the new pointer variable to return */
	int i;

	newdog = malloc(sizeof(dog_t)); /* size of the dog_t structure */
	if (newdog == NULL)
		return (NULL);
	newdog->age = age; /* passing the value */
	newdog->name = malloc(_strlen(name) + 1); /* size of the name member  */
	if (newdog->name == NULL)
	{
		free(newdog); /* free memory of the new dog */
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		newdog->name[i] = name[i]; /* fill and passing  the name */
	newdog->name[i] = '\0';
	newdog->owner = malloc(_strlen(owner) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);  /* free the last memory created and the new dog's too */
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		newdog->owner[i] = owner[i];
	newdog->owner[i] = '\0'; /* passing the name(string) of the owner */
	return (newdog);
}


