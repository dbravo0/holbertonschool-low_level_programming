#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that adds positive numbers
 * @argc: Number of arguments
 * @argv: Array of strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	unsigned int i, j, k = 0;

	unsigned int c = argc;

	for (i = 1 ; i < c ; i++)
	{

		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		k += atoi(argv[i]);
	}

	printf("%u\n", k);

	return (0);
}
