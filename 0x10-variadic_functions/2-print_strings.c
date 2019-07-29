#include "variadic_functions.h"
/**
 * print_strings - Prints strings, followed by a new line
 * @separator: String to be printed between the strings
 * @n: Number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int c;
	va_list a;

	va_start(a, n);

	for (c = 0 ; c < n ; c++)
	{
		s = va_arg(a, char *);
		printf("%s", s);

		if (c < (n - 1) && separator != NULL)
			printf("%s", separator);

		if (s == NULL)
			printf("(nil)");
	}

	va_end(a);
	printf("\n");
}
