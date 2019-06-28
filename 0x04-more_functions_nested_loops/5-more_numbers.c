#include "holberton.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 */
void more_numbers(void)
{
	int m, n, t;

	for (m = 0 ; m <= 9 ; m++)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			if (n >= 0 && n <= 9)
			{
				t = (n + '0');
			}
			else
			{
				t = ((n % 10) + '0');
				_putchar(n / 10 + '0');
			}
			_putchar(t);

		}

		_putchar('\n');
	}

}
