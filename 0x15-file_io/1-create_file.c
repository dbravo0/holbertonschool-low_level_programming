#include "holberton.h"

/**
 * create_file - Creates a file
 * @filename: Name of file for I/O
 * @text_content: ...
 *
 * Return: ...
 **/
int create_file(const char *filename, char *text_content)
{
	int fd;

	if  (filename == NULL)
		return (-1);

	fd = open (filename, O_CREATE, 0600);

}
