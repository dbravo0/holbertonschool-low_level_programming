#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @l: String to be encoded
 *
 * Return: The encoded value
 */
char *leet(char *l)
{
	int c;
	int b;
	int a[10] = {'a', 'e', 'o', 't', 'I', 'A', 'E', '0', 'T', 'L'};
	int n[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (c = 0 ;  l[c] != '\0' ; c++)
	{

		for (b = 0 ; b < 10 ; b++)
		{

			if (l[c] == a[b])
			{
				l[c] = n[b];
			}
		}
	}

	return (l);
}
