#include "holberton.h"

/**
 * int append_text_to_file - Appends text at the end of a file 
 * @filename: Name of file for I/O
 * @text_content: Content of file
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	for (wr = 0 ; text_content[wr] ; wr++)
		;

	write(fd, text_content, wr);
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);

}
