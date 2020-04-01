#include "holberton.h"

/**
  * read_textfile - function that reads a text file and prints it
  * to the POSIX standard output.
  * @filename:  is pointing to a string of 0 and 1 chars
  * @letters:  is the number of letters it should read and print
  * Return: returns the actual number of letters it could read and print
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wr, rd;
	char *l;
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	l = malloc(sizeof(char) * letters);
	if (l == NULL)
		return (0);
	rd = read(fd, l, letters);
	if (rd == -1)
		return (0);
	wr = write(STDOUT_FILENO, l, rd);
	if (wr == -1)
		return (0);
	close(fd);
	return (wr);
}
