#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 */
void print_alphabet_x10(void)
{

	int a;
	int x = 0;

	while (x < 11)
	{
		for (a = 'a' ; a <= 'z' ; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		x++;
	}

}
