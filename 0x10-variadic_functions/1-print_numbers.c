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
	unsigned int c;
	va_list a;

	va_start(a, n);

	for (c = 0 ; c < n ; c++)
	{
		printf("%d", va_arg(a, unsigned int));

		if (c < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(a);
	printf("\n");
}
