#include "holberton.h"

/**
  * _strcmp - function that compare two strings
  * @s1: string one
  * @s2: string two
  * Return: string comparation result
**/

int _strcmp(char *s1, char *s2)
{
	int x;

	x = *s1 - *s2;
	return (x);
}
