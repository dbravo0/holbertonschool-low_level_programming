#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hn = 48;
	char ha;

	while (hn <= 57)
	{
		putchar(hn);
		++hn;
	}

	for (ha = 'a' ; ha <= 'f' ; ++ha)
	{
		putchar(ha);
	}

	putchar('\n');

	return (0);
}
