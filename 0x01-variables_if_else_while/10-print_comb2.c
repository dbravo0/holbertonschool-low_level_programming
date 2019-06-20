#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d = 48, u;

	while (d <= 57)
	{
		u = 48;

		while (u <= 57)
		{
			putchar(d);

			putchar(u);

			if (d != 57 || u != 57)
			{
				putchar(',');

				putchar(' ');
			}

			u++;
		}

		++d;
	}

	putchar('\n');

	return (0);
}
