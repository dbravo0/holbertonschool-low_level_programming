#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d = 48;

	while (d <= 57)
	{
		putchar(d);
		++d;
	}

	putchar(10);

	return (0);
}
