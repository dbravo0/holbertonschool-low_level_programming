#include "holberton.h"
/**
 * main - Main funtion
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 **/
int main(int argc, char **argv)
{
	int fd0, fd1;
	char bf[1024];
	ssize_t wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	fd0 = open(argv[1], O_RDONLY);
	fd1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd0 == -1 || fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from a file %s\n", argv[2]);
		exit(98);
	}
	while ((wr = read(fd0, bf, 1024)) > 0)
	{
		if (write(fd1, bf, wr) != wr || fd1 < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
			close(fd0);
			exit(99);
		}
	}
	if (close(fd0) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd0);
		exit(100);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		exit(100);
	}
	return (0);
}
