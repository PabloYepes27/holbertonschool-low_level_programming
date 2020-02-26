#include "holberton.h"

/**
  * _print_rev_recursion - Function that prints in reverse
  * @s: String
  * Return: Void
  **/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
