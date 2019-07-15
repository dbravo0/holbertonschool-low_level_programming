#include "holberton.h"

/**
 * _puts - Prints a string, followed by new line, to stdout
 * @str : Is the string value to print
 */
void _puts(char *str)
{
	int c;

	c = *str;
	for (c = 0 ; str[c] != '\0' ; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
