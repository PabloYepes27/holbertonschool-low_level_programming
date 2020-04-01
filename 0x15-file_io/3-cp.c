#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

char *read_file(const char *filename, int count);
int copy_file(const char *filename, char *text_content);
int _strlen(char *s);
/**
  * main - Write a program that copies the content of a file to another file
  * @ac:  argument counter
  * @av:  array of arguments
  * Return: 1 on success, -1 on failure
**/

int main(int ac, char **av)
{
	char *file_from;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	*file_from = read_file(av[1], 1024);
	copy_file(av[2], file_from);
	return (0);
}

/**
  * read_file - program that reads the content of a file
  * @filename:  name of the file to copy
  * @count:  size of the buffer
  * Return: 1 on success, -1 on failure
**/

char *read_file(const char *filename, int count)
{
	char l[count];
	int fd, rd, cl;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	rd = read(fd, l, count);
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	l[rd] = '\0';
	return (*l);
}

/**
  * copy_file - function that copies the content of a file to another file
  * @filename:  name of the file to copy
  * @text_content:  size of the buffer
  * Return: 1 on success, -1 on failure
**/

int copy_file(const char *filename, char *text_content)
{
	int fd, wr, cl;

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	wr = write(fd, text_content, _strlen(text_content));
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	return (1);
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
