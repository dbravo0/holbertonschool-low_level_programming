#include "holberton.h"

/**
 * rev_string - Reverses a string
 * @s : Is the string value to print
 */
void rev_string(char *s)
{
	int c;
	int p;
	int tmp;
	int len = 0;

	for (c = 0 ; s[c] != '\0' ; c++)
	{
		len++;
	}

	for (c = 0 ; c < len - 1 ; c++)
	{
		for (p = c + 1 ; p > 0 ; p--)
		{
			tmp = *(s + p);
			*(s + p) = *(s + p - 1);
			*(s + p - 1) = tmp;
		}
	}
}
