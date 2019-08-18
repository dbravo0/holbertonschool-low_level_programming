#include "holberton.h"

/**
 * create_file - Creates a file
 * @filename: Name of file for I/O
 * @text_content: Content of file
 *
 * Return: 1 if success, -1 if not
 **/
int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if  (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (wr = 0 ; text_content[wr] ; wr++)
		;

	wr = write(fd, text_content, wr);
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);

}
