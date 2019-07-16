#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: Number of arguments passed
 * @argv: Array of strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int c;
	int n = 0;

	if (argc ==  1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 1)
	{
		c = atoi(argv[1]);

		if (c >= 25)
		{
			n += c / 25;
			c %= 25;
		}
		if (c >= 10)
		{
			n += c / 10;
			c %= 10;
		}
		if (c >= 5)
		{
			n += c / 5;
			c %= 5;
		}
		if (c >= 2)
		{
			n += c / 2;
			c %= 2;
		}
		if (c >= 1)
		{
			n += c / 1;
			c %= 1;
		}

		printf("%d\n", n);
	}

	return (0);
}
