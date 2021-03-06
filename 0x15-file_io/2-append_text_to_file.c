#include "holberton.h"

/**
  * append_text_to_file - function that appends text at the end of a file
  * @filename:  is the name of the file to create
  * @text_content:  s a NULL terminated string to write to the file
  * Return: 1 on success, -1 on failure
**/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		if (fd != -1)
			return (1);
		else
			return (-1);
	}
	else
		wr = write(fd, text_content, _strlen(text_content));
	if (wr == -1)
		return (-1);
	close(fd);
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
