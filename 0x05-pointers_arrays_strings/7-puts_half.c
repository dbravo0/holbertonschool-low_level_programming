#include "holberton.h"

/**
 * puts_half - Prints half of a string
 * @str: String to be printed
 */
void puts_half(char *str)
{
	int c;
	int hlf;
	int len = 0;

	for (c = 0 ; str[c] != '\0' ; c++)
	{
		len++;
	}

	if (len % 2 == 0)
	{
		hlf = len / 2;

		for (c = hlf ; c < len ; c++)
		{
			_putchar(str[c]);
		}
	}
	else
	{
		hlf = (len - 1) / 2;

		for (c = len - hlf ; c < len ; c++)
		{
			_putchar(str[c]);
		}
	}

	_putchar('\n');
}
