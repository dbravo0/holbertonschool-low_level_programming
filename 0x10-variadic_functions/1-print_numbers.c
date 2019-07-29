#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	unsigned int c;
	va_list args;

	va_start(args, n);

	for (c = 0 ; c < n ; c++)
	{
		i = va_arg(args, int);
		printf("%d", i);

		if (separator == NULL)
		{
			return;
		}
		else if (c != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
