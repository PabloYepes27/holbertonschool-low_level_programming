/*#include "holberton.h"*/
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int _strlen(char *s);
/**
  * main - Write a program that copies the content of a file to another file
  * @ac:  argument counter
  * @av:  array of arguments
  * Return: 1 on success, -1 on failure
**/

int main(int ac, char **av)
{
	int /*file_from, file_to,*/ fd, wr, cl, rd;
	char *l;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	if (av[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd = open(av[1], O_RDWR);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	l = malloc(sizeof(char) * 1024);
	if (l == NULL)
		return (0);
	rd = read(fd, l, 1024);
	l[rd] = '\0';
	fd = open(av[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	wr = write(fd, l, _strlen(l));
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	/*file_from = read_file(av[1], 1024); */
	/* file_to = copy_file(av[2], file_from);*/
	return (0);
}

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
