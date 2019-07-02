#include "holberton.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 * @s : Is the string value to print
 */
void print_rev(char *s)
{
	int c;
	int p = 0;

	c = *s;

	for (c = 0 ; s[c] != '\0' ; c++)
	{
		p++;
	}

	for (c = 0 ; c < p ; c++)
	{
		_putchar(s[p - 1 - c]);
	}
	_putchar('\n');
}
