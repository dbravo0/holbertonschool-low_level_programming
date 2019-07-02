#include "holberton.h"

/**
 * puts2 - Prints one char out of 2 of a string
 * @str : Is the string value to print
 */
void puts2(char *str)
{
	int c;
	int len = 0;

	for (c = 0 ; str[c] != '\0' ; c++)
	{
		len++;
	}
	for (c = 0 ; c < len ; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
