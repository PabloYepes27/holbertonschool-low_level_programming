#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

void _close(int file);

/**
  * main - Write a program that copies the content of a file to another file
  * @ac:  argument counter
  * @av:  array of arguments
  * Return: 1 on success, -1 on failure
**/

int main(int ac, char **av)
{
	int fd1, fd2, rd, wr;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	do {
		rd = read(fd1, buf, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		wr = write(fd2, buf, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	} while (rd == 1024);
	_close(fd1);
	_close(fd2);
	return (0);
}

/**
 * _close - close file
 * @file: fd of file tu close
 * Return: void
 */
void _close(int file)
{
	int fail;

	fail = close(file);
	if (fail == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
