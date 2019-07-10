#include "holberton.h"

/**
 * _prints_rev_recursion - Prints a string in reverse
 * @s: The string variable to be printed
 *
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{

		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
