#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int mu, c, d, u;

	while (mu <= 57)
	{
		c = 48;

		while (c <= 57)
		{
			putchar(mu);
			putchar(c);

			if (mu != 57 || c != 57)
			{
				putchar(' ');
			}
			c++;

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
				d++;
			}
		}
		mu++;
	}
	putchar(10);
	return (0);
}
