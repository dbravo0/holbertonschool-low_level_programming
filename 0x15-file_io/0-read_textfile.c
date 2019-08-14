#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard
 * @filename: Name of file for I/O
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *bf;

	if (filename == NULL)
		return (0);

	bf = (char *)malloc(letters * sizeof(char));
	if (bf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rd = read(fd, bf, letters);

	wr = write(STDOUT_FILENO, bf, rd);
	if (wr == -1)
		return (0);

	close(fd);
	free(bf);
	return (wr);
}
