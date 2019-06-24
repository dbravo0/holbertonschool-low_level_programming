#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 48, d = 48, u = 48;

	while (c <= 57)
	{
		d = 48;
		while (d <= 57)
		{
			u = 48;
			while (u <= 57)
			{
				if (u > d && d > c)
				{

					putchar(c);
					putchar(d);
					putchar(u);

					if (c != 55 || d != 56 || u != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				u++;
			}
			d++;
		}
		c++;
	}
	putchar(10);
	return (0);
}
