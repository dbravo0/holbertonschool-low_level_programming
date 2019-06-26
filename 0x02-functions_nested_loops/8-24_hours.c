#include "holberton.h"

/**
 * jack_bauer - Prints every minute of the day of Jack
 *
 */
void jack_bauer(void)
{
	char j, a, c, k;

	for (j = '0' ; j <= '2' ; j++)
	{
		for (a = '0' ; a <= '9' ; a++)
		{
			for (c = '0' ; c <= '5' ; c++)
			{
				for (k = '0' ; k <= '9' ; k++)

					if (((a <= '9' && j != '2') || (a <= '3' && j == '2')))
					{
						_putchar(j);
						_putchar(a);
						_putchar(':');
						_putchar(c);
						_putchar(k);
						_putchar('\n');
					}
			}
		}
	}
}
