#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry Point
 * @argc: Number of arguments passed
 * @argv: unused
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{

	*argv = *argv;

	printf("%d\n", argc - 1);

	return (0);
}
