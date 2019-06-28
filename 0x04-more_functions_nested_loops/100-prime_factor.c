#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int p, c;

	p = 612852475143;

	for (c = 2 ; c < p ; c++)
	{
		if (p % c == 0)
		{
			p /= c;
			c--;
		}
	}
	printf("%ld\n", p);

	return ('\n');
}
