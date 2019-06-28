#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t;

	for (t = 1 ; t <= 100 ; t++)
	{
		if ((t % 3 == 0) && (t % 5 == 0))
		{
			printf("FizzBuzz");
			if (t < 100)
			{
				putchar(' ');
			}
		}
		else if (t % 3 == 0)
		{
			printf("Fizz");
			if (t < 100)
			{
				putchar(' ');
			}
		}
		else if (t % 5 == 0)
		{
			printf("Buzz");
			if (t < 100)
			{
				putchar(' ');
			}
		}
		else
		{
			printf("%d", t);
			if (t < 100)
			{
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
