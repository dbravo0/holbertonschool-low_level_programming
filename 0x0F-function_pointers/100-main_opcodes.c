#include "function_pointers.h"

/**
 * main - Prints opcodes of its own main function
 * @argc: Arg counter
 * @argv: Arg vector
 *
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	char *p = (char *)main;
	int b;

	if (argc != 2)
		printf("Error\n"), exit(1);

	b = atoi(argv[1]);

	if (b < 0)
		printf("Error\n"), exit(2);

	while (b--)
		printf("%02hhx%s", *p++, b ? " " : "\n");

	return (0);
}
