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

			if (u > d && u != d)
			{

				putchar(d);

				putchar(u);

				if (d != 56 || u != 57)
				{
					putchar(',');

					putchar(' ');
				}

			}

			u++;
		}

		d++;
	}

	putchar(10);

	return (0);

}
